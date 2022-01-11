#include <stdio.h>

/* count lines */
main()
{
    int a, count;

    count = 0;
    while ((a = getchar()) != EOF)
        if (a == '\n')
            ++count;
    
    printf("There were %d lines entered.\n", count);
}