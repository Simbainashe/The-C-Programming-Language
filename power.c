#include <stdio.h>

int power(int base, int n);

/*test the power function*/
main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d %d %d\n",i,power(2,i), power(-3,1));
    }
    return 0;
}

/* power raised base to n-th poer;n>=o */
int power(int base, int n){
    int i, p;

    p = 1;
    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }
    return p;
    
}
