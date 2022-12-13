//Author:Razvan Gorea
//Date: 13/12/2022
//Brief: Write a program the takes n arguments of float numbers and creates a doubly linked list of them
//Then see if the numbers of the doubly linked list are arranged in descending order

//Approach:
//Create a node structure that supports backwards and forwards traversal
//Create a function that creates the doubly linked list that uses the node structure and the numbers from arguement
//Create another function that iterates through the doubly linked list to see if it's organized in descending order
//If it's in correct descending order, make the program print 1, otherwise make it print 0.


//Libraries
#include<stdio.h>
#include<stdlib.h>


typedef struct Node Node;

//Node Structure
struct Node{
    float value;
    Node *next;
    Node *prev;
};

//Function Prototype
Node* NodeMaker(int length, char*argv[]);
int printer(Node *last);

//Main Body
int main(int argc, char*argv[])
{
    int length = argc - 1;
    Node* last = NULL;
    
    //Function Calls
    last = NodeMaker(length, argv);
    printf("%d\n", printer(last));

    return 0;
}

//Function that creates doubly linked list
Node* NodeMaker(int length, char*argv[])
{
    Node* first = NULL;
    Node* current = NULL;
    Node* prev = NULL;

    //Allocating memory for a node
    first = (Node*)calloc(1, sizeof(Node));
    current = first;

    for(int i = 0; i < length; ++i)
    {
        current->value = atof(argv[i+1]);

        //Check if the last node
        if(i == length - 1){
            current->next = NULL;
        } else if (i == 0){ //check if first node
            current->prev = NULL;
            //Creation of a new node (memory allocation)
            current->next = (Node*)calloc(1, sizeof(Node));
            prev = current;
            current = current->next;
            current->prev = prev;

        } else {
            //Creation of a new node (memory allocation)
            current->next = (Node*)calloc(1, sizeof(Node));
            prev = current;
            current = current->next;
            current->prev = prev;
        }
    }

    return current;
}

//Function that checks if linked list numbers are in descending order
int printer(Node *last)
{
    Node* p = NULL;
    for(p = last; p->prev != NULL; p = p->prev)
    {
        //If the numbers are in are not in descending order, then return 0
        if (p->value > p->prev->value){
            return 0;
        }
    }//Otherwise return 1
    return 1;
}