#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
    
    char c = 'I';
    printf("\n%c in lowercase is represented as %c", c, tolower(c));
 
    return 0;
}
