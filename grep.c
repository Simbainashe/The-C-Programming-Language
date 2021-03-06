#include <stdio.h>
#define MAXLINE 1000 /* maximum input length */

int readline(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould"; /* pattern to search for */

main()
{
    char line [MAXLINE];
    int found = 0;

    while (readline(line,MAXLINE)>0)
    {
        if (strindex(line,pattern)>= 0)
        {
            printf("%s", line);
            found++;
        }
        
    }
    return found;
}

int readline(char s[], int max)
{
    int c, i;

    i = 0;

    while(--max>0 && (c=getchar()) != EOF && c != '\n')
    {
        s[i++] = c;        
    }

    if (c == '\n')
    {  
        s[i++] = c;  
    }
        
    s[i] = '\0';  
    return i;
}

int strindex( char s[], char t[] )
{
    int i, j, k;

    for ( i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
       ;
       if (k>0 && t[k] == '\0')
       {
         return i;
       }
        return -1;
        
    }
    
}