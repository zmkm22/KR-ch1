#include <stdio.h>
#define NEWLINE printf("\n");

display();
backspace();
/* replace tabs backspaces slashes by their symbols e.g. \t \b \\ */

main()
{
    int a;

    printf("Cheat sheet: back space \\b = %d\n", '\b');

    while ((a = getchar()) != EOF)
    {
        if (a == '\t')          // better the write a switch here, but we haven't learned that yet
            printf("\\t");

        if (a == '\b')
            printf("\\b");

        if (a == '\\')
            printf("\\");

        else        
        {
            printf("%c", a);
        }
    }
}

display()
{
    // what exactly is a backspace, is it delete? Ans: no
    printf("\babc\tzbc\b\babc\\abc\n");
    printf("hello worl\b\bd\n");    // okay I get this now
}

backspace()
{
    int a;
    a = getchar();

    if (1)
        printf("aa%c", '\b');   // not sure how to print backspace, skip this
            NEWLINE
    
}