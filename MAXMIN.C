
// program to find lasgest and smallest element of array
#include <stdio.h>
void maxmin(int[],int);
int main()
{
       int i,n;
       int arr[20];
       printf("input the size of the array \n");
       scanf("%d",&n);
       printf("input array elements \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        maxmin(arr,n);
    return 0;
}
void maxmin(int arr[],int n)
{
    int i;
    int max=arr[0];
    int min=arr[0];
     for(i=0;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
            if(min>arr[i])
            {
                min = arr[i];
            }
        }
        printf("max=%d \n min=%d",max,min);
}

//output
input the size of the array 
5
input array elements 
1
2
3
4
5
max=5 
 min=1