#include <stdio.h>
#define NEWLINE printf("\n");

something();
blank();
repeat();
test();

main()
{
    repeat();
}

something(int a) {
    /* count something: \t \n ' ' */

    int c, count;

    count = 0;
    while ((c = getchar()) != EOF)
        if (c == a)
            ++count;
    
    printf("%d 'items' detected", count);
        NEWLINE
}

blank()
{
    /* count blanks */

    int c, count;

    count = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++count;
    
    printf("%d blanks detected", count);
        NEWLINE
}

test()
{
    printf("%d", ' ' == " ");
    printf("%d", "z" == " ");
    NEWLINE
}

repeat()
{
    int a, previous; 

    previous = 'z'; // randomly initiated to non-space

    while ((a = getchar()) != EOF)  // add brackets (a = getchar()) because != bounds tighter than =
    {
        if (a == ' ')
        {
            if (previous == ' ')    // this only checks for space, not tabs or newline or other types of spaces
                ;
            else
            {
                printf("%c", a);    // the nested if's combine to and but we haven't learn this yet
                previous = a;
            }
        }
        else
        {
            printf("%c", a);
            previous = a;
        }
    }
}

/*

$ make try && ./try

*/