#include <stdio.h>

main()
{
    int c, blanks,newlines,tabs;
    blanks=0;
    newlines=0;
    tabs = 0;

    while((c=getchar()) != EOF)
        if (c==' ')
            ++blanks;
        else if (c=='\t')
            ++tabs;
        else if (c=='\n')
            ++newlines;

    printf("Blanks\t%d\n",blanks);
    printf("Tabs\t%d\n",tabs);
    printf("Newlines\t%d\n",newlines);        
}