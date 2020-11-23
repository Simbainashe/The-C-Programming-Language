#include <stdio.h>

char lower(char c);

int main()
{
    char c = 'H';
    printf("%c to lower case is %c\n", c, lower(c));
    return 0;
}

char lower (char c){
    if(c >= 'A' && c <= 'Z')
        return c + 'a'-'A';
    else
        return c;
    
}