#include <stdio.h>

/*
    functions encapsulate computations 
    abstracts away how a job is done, just know it is done
    we give function a descript name to describe the kind of job it has done
    similar job with diffent parameters
    scope of variables in function and loops and structures in general 
    the return statement
    main function should return a status code to its enviroment, 0 means normal termination, non zero indicates errorenous termination 
    function prototpe int power(int, int) is acceptable; declare functions with prototype like declaring variables
    function parameters treated as locally declared variables anlogy with declaration of counters in loops  
    a function does not affect the parameter initially passed into the function, because it creates a local copy
    to modify a varaible with a functionm the memory address of the variable must be provided in the form of a "pointer"

    Arrays are an excpetion: when an array is passed into a function, the value passed into the function 
    is actually the address = pointer of the array element at index 0, so a function can modify the array passed in as parameter!

*/

// return type function name (type parameter name) {...}

int power(int base, int exponenet); // prototype, function declaration

int main(void)
{
    printf("%d\n",power(2,4)); // out: 16
    return 0;   // sucessful termination 
}

int power(int base, int exponenet)
{
    int p;
    for (p = 1; exponenet > 0; --exponenet)
        p *= base;  // p = p * base
    return p;   // return, not printf
}