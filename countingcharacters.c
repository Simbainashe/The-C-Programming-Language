#include <stdio.h>

main()
{
    long nc;
    int c;
    nc = 0;

while ((c =getchar()) != EOF){
 ++nc;
}
   
printf("%ld\n",nc);

}