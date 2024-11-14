#include <stdio.h>
 
int main()
{
    char ch;
    scanf ("%c", &ch);
    int ascii = ch;
    
    if( ascii >= 48 && ascii <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if( ascii >=65 && ascii <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (ascii >= 97 && ascii <= 122 )
    {
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}
