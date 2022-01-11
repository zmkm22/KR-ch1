#include <stdio.h>
#define NEWLINE printf("\n");

main()
{
    int a;
    a = 'A';    // the meaning of single quotes A = 65

    printf("%c is %d", a, a);
        NEWLINE // indent for readabilitiy      
    printf("EOF is %d", EOF);
        NEWLINE

    // does EOF == 'EOF'
    printf("Are they the same: %d", EOF == 'EOF');  // false
        NEWLINE
}

/* 

$ make char_const && ./char_const 

*/