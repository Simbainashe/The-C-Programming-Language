#include <stdio.h>
int tohex(char s[]);
int isdigit(char x);
int ishexchar(char c);
int hexnumber(char c);

int main()
{
    char s[] = "15E";
    printf("%s to integer is %x\n", s,tohex(s));
    return 0;
}

int tohex(char s[]){
    int i, n;
    if (s[0] != '\0' && s[0] == '0' && (s[1] == 'X' || s[1] == 'X') )
    {
        i = 2;
    }
    n = 0x0;

    int is;

    while ((is=isdigit(s[i])) || ishexchar(s[i]))
    {
        if (is)
        {
            n = n * 16 + (s[i]-'0');
        }else{
            n = n * 16 + hexnumber(s[i]);
        }
        i++;
        
    }
    
    return n;
}

int isdigit(char c){
if (c >= '0' && c <= '9')
{
    return 1;
}
return 0;

}

int ishexchar(char c){
if (c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
{
    return 1;
}
return 0;

}

int hexnumber (char c){
    switch (c)
    {
    case 'a':
    case 'A':
        return 10;
    case 'b':
    case 'B':
        return 11;
    case 'c':
    case 'C':
        return 12;
    case 'd':
    case 'D':
        return 13;
    case 'e':
    case 'E':
        return 14;
    case 'f':
    case 'F':
        return 15;
    }
    return -1;
}