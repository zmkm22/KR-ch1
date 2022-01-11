#include <stdio.h>
#define BETWEEN(a,x,b) (a <= x && x <= b)

/* count characters, words, lines, paragraphs */

main()
{
    int a, character, word, line, paragraph;

    character = word = line = paragraph = 0;    // new feature: assignment is from right to left

    int is_char, new_word;    // conditions for if's

    int previous, para_status; // previous character and paragraph status
    previous = ' ';     // this initialization makes sure first word is counted (edge case considered)
    para_status = 0;

    while ((a = getchar()) != EOF)
    {
        is_char = BETWEEN(97, a, 122) || BETWEEN(65, a, 90);

        if (is_char)      // check in this order because letter is more likely a lowercase (efficiency)
        {
            ++character; 

            if (para_status == 1) {
                ++paragraph;        // we define the start of paragraph to be a character proceeded by \n\n 
                para_status = 0;    // turn off par_status switch
            }
        }

        new_word = ((previous == ' ') || (previous == '\n') || (previous == '\t')) && (is_char); // unexpected: what if another thing is used

        if (new_word)     // check in this order for efficiency since first condition is more often false than second condition is true 
            ++word;

        if (previous == '\n')
        {
            if (is_char)
            {
                ++line;     // counts first line as 0 >> fix this outside WHILE
            }
            if (a == '\n')
            {
                para_status = 1;// ++paragraph is not entirely correct, fix later when we learn que
            }
        }
        previous = a;   // don't forget to increment 'a' at the end of all checks
    }

    // handle weird cases
    if (character > 0)
    {
        ++line;
        ++paragraph;
    }
    else
    {
        word = line = paragraph = 0;
    }

    printf("Character: %d\t Words: %d\t Lines: %d\t Paragraphs: %d\n", character, word, line, paragraph);
}



auxilary()
{
    /* character means a..z or A..Z 
        this program finds the ASCII numbering of characters 
    */

   int counter;

    for (counter = 65; counter <= 122; ++counter)
        printf("%d \t letter; %c\n", counter, counter);
    
    // result       
    // A .. Z = 65 .. 90     a .. z = 97 .. 122

}