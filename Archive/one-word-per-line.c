#include <stdio.h>

/* print each word in new line, practice if-else 
    $ make one-word-per-line && ./one-word-per-line
*/

main()
{
    int a, status;
    status = 0; // is previous a \n

    while ((a = getchar()) != EOF)
    {
        if (a != ' ')
        {   
            printf("%c", a);
            status = 0;
        }
        else
        {
            if (status == 0)
                printf("\n");
            
            status = 1;
        }
    }
}