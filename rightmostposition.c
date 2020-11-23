#include  <stdio.h>

int strrindex(char searchin[], char searchfor[]);

int main()
{
    char searchin[] = "I work for Afrosoft. Afrosoft is the leading software consultancy company in Zim.";
    char searchfor[] = "Afrosoft";
    printf("%s right most position is %d\n", searchfor, strrindex(searchin,searchfor));
    return 0;
}

int strrindex(char searchin[], char searchfor[]){
    int i,j, k, p;
    p = -1;
   for (i = 0; searchin[i] != '\0'; i++)
   {
       for (j = i, k=0;  searchfor[k]  != '\0' && searchfor[k] == searchin[j]; j++, k++)
       ;
       if (k>0 && searchfor[k] == '\0')
       {
           p = i;
       }
       
   }
   return p;
}
