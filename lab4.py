#Question1
def sum_iterable(iterable): #Sum a list of numbers
    if len(iterable) == 0:
        return 0
    return iterable[0] + sum_iterable(iterable[1:]) 

#Question2
def reverse_num(num): #Reverse a number
    string_num = str(num)
    if len(string_num) == 0:
        return string_num
    return reverse_num(string_num[1:]) + string_num[0]

#Question3
def reverse_string(num): #Reverse a string
    if len(num) == 0:
        return num
    return reverse_string(num[1:]) + num[0]


#Question4
def reverse_iterable(iterable): # Reverses a list
    if len(iterable) == 0:
        return []
    return [iterable.pop()] + reverse_iterable(iterable)

#Question5
def multiply(num1, num2): #Multiply 2 numbers with recursion (without multiplication operator)
    if num1 == 1:
        return num2
    return num2 + multiply(num1 - 1, num2)

#Question6
def pronic_checker(num): #Checks if a number is pronic or not
    #checker1 = num ** 0.5
    #checker2 = int(checker1)
    #if checker2 * (checker2 + 1) == num:
        #print(True)
    #else:
        #print(False)

pronic_checker(110)

#Question7
def string_length(data): # string length 
    if len(data) == 0:
        return 0
    return string_length(data[1:]) + 1