#include <stdio.h>

getAscii();
count_digit();
count_spaces();

main()
{
    count_digits();
}

count_digit()
{
    // count occurrences of each digit 0 .. 9
    int dCount[10];
    int j;

    for (j = 0; j <= 9; ++j)
        dCount[j] = 0;  // initialize
    
    int a;

    while ((a = getchar()) != EOF)
    {
        if ('0' <= a && a <= '9')   // do we have precendence of comparison over logical?
        {
            ++dCount[a - '0'];  // shift so that '0' is indexed zero
        }
    }

    int count;

    for (j = 0; j<=9; ++j)
    {
        count = dCount[j];
        
        if (count)  // report digits that actually occurred
            printf("%c occured %dx\n", '0' + j, count);
    }

    printf("The numbers ");
    for (j = 0; j<=9; ++j)
    {
        count = dCount[j];
        
        if (!count)  // report digits that actually occurred
            printf("%c", '0' + j);
    }
    printf(" did not occur.\n");
}

count_spaces()
{
    int count, q;

    count = 0;

    while ((q = getchar()) != EOF)
    {
        if (q == ' ' || q == '\t' || q == '\n')     // for efficiency list in decreasing order of frequency
            ++count;
    }
    printf("%d spaces entered\n", count);
}

getAscii()
{
    int k;

    for (k = '0'; k <= '0' + 9; ++k)    // add precedence over comparison
        printf("ASCII %d\t Char %c\n", k, k);
}