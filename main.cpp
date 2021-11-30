#include "std_lib_facilities.h"

#include <iostream>

/*Q/A
1)In the matter of fact yes we can declare a non-reference function argument
2)This means that the non-reference constant is passed by a value that will not be changed
3)This ensures the optimization of the compiler
4)Similar to a static variable this val can't be modified.
*/

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yussef Abdelbaryd
 */




int mult(const int a, const int b)
{
    int product = a * b;
    
    return product;
}

int main()
{
    cout << add(2,2) << "\n";
    
    cout << add(4,3) << "\n";

    cout << mult(2,2) << "\n";
    
    cout << mult(4,3) << "\n";
}

int add(const int a, const int b)
{
    int sum = a + b;
    
    return sum;
}