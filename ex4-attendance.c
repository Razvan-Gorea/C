//Author: Razvan Gorea
//Description: A program that checks each argv,
//Each argv is a sequence of characters referring to an attendance status of a student,
//If three or more A's are found in a given sequence then the attendance status is 1,
//If three consecutive L's are founded in a given sequence then that also counts as a 'A'.
//Date: 13/12/2022
//----------
//Approach: 
//Create a student struct for each argv, with the string of characters for each argv being a member of the student,
//Create a list of all the student structs,
//Go into each student struct and access the string member,
//Iterate through the string and see if 3 or more A's are found,
//If 3 consecutive L's are found, mark that down as also an 'A'
//Track all of this as you iterate through the string with a variable
//At the end if the variable is greater than or equal to three, print 1
//Else, print 0

//Libraries:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Student Struct
typedef struct
{
    char *record;
    int record_length;
}Student;

//Function Prototypes
void student_creator(Student *students, int length, char **indexer);
void checker_and_printer(Student *students, int length);

//Main body
int main(int argc, char **argv)
{
    char **indexer = &argv[1];
    int length = argc - 1;
    Student *students = (Student*)malloc(sizeof(Student) * length);

    //Function Calls
    student_creator(students, length, indexer);
    checker_and_printer(students, length);

return 0;
}

//Function that creates each individual student (from argv) and adds them to the list of students
void student_creator(Student *students, int length, char **indexer){
    
    for (int i = 0; i < length; ++i){
        students[i] = (Student){
            .record = *(indexer + (i * 1)),
            .record_length = strlen(*(indexer + (i * 1))),
        };
    }
}
//Function that goes into each student struct and figures out their attendence status
void checker_and_printer(Student *students, int length){
    //Iterate through the list of students
    for (int i = 0; i < length; ++i){
        int checks = 0;
        int l_count = 0;
        //Iterate through the sequence of characters
        for (int j = 0; j < students[i].record_length; ++j){
            //If the letter A is encountered:
            if (students[i].record[j] == 'A'){
                checks += 1;
            }//If the letter L is encountered:
            else if (students[i].record[j] == 'L'){
                if (l_count == 2){
                    checks += 1;
                    l_count = 0;
                }
                else{
                    l_count += 1;
                }
            }
            //If the letter P is encountered
            else{ 
                l_count = 0;
            }
        }
        //Final checker and print statements
        if (checks >= 3){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
}
