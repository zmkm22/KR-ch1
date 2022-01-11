#include <stdio.h>
// place \ at the end of each line that is to be continued
// scope of macro is to end of file .. and what if files are linked?

#define NULLCHAR  printf("The null character \\0 has integer value %d\n", '\0'); \
printf("The null character \\0 has integer value %d\n", '\0');\
printf("The null character \\0 has integer value %d\n", '\0'); 

/* 
    string arrays end in the null character \0
    the string "Hello, world\n" is stored in memory as |H|e|l|l|o|,|w|o|r|l|d|\n|\0|
    %f is used to format string types in printf
    declaring type sets appropriate amount of storage for the variable
*/

int a;  

main(){

    extern int a;   // 
    

}

forever()
{
   for (;;)     // infinite loop
    printf("hi\n");
}