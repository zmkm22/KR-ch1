#include <stdio.h>

printAsciiTable();
count();

main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i == 2 || i == 4)
        {
            printf("\n");
            continue;   // continue can be used in a loop to ++i when met, below is not executed
        }
        printf("%d\n",i);
    }    
}

count()
{
    /* count digits, white-spaces, either above */

    int dCount[10], h;     // 10 referes to array size
    for (h = 0; h <= 9; ++h)
        dCount[h] = 0;

    int wsCount, nAbove;     
    wsCount = nAbove = 0;

    int g;
    while ((g = getchar())!= EOF)
    {
        if ('0' <= g && g <= '9')
            ++dCount[g - '0'];

        else if (g == ' ' || g == '\n' || g == '\t')    // any number of else if's may be supplied
            ++wsCount;
        
        else    // the else is optional, if included exactly one condition in the structure is executed, if not, at most one condition is executed
            ++nAbove;

        // a structure analogous to if - elif is the switch structure
    }
    for (h = 0; h <= 9; ++h)
        printf("%d entered %d times\n", h, dCount[h]);
    printf("%d whitespaces and %d other characters\n", wsCount, nAbove);
}

printAsciiTable()
{
    // run with shell command   $ make elif && ./elif >> ascii.txt
    for (int m = 33; m <= 126; ++m)
        printf("%d is %c \n", m, m);
}