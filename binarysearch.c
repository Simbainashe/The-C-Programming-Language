#include <stdio.h>

int binsearch(int x, int v[], int n);
main()
{
    int numbers[] = {2,4,6,8,10,12,14,16,20};
    printf("Position of 6: %d\n", binsearch(6,numbers,9));
    printf("Position of 3: %d\n", binsearch(3,numbers,9));
}

int binsearch(int x, int v[], int n){
    int low, mid, high;

    low = 0;
    high = n-1;

    while(low<=high){
        mid = (low + high)/2;
        if (x < v[mid]){
            high = mid-1;
        } else if(x > v[mid]){
              low = mid+1;
        }else
        {
            return mid;
        }
    }
    return -1;
}