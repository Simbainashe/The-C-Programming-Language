#include <stdio.h>
int atoi(char s[]);

int main()
{
    char s[] = "98993489";
    printf("%s to integer is %d\n", s,atoi(s));
    return 0;
}

/*atoi: converts s to integer */
int atoi(char s[])
{
    int i, n;
    n = 0;

    for(i=0; s[i]>='0' && s[i]>9; i++)
        n = n * 10 + (s[i]-'0');
    return n;
}