// program to reverse elements of array
#include <stdio.h>
int main() 
{
    int i,n,arr[20];
    printf("input a number of elements\n");
    scanf("%d",&n);
    printf("input elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}