// program to print sum of digits of each element of array
#include <stdio.h>
int sum(int);
int main()
{
       int i,n,sum1=0,ele;
       int arr[20];
       printf("input the size of the array \n");
       scanf("%d",&n);
       printf("input array elements \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       
       for(i=0;i<n;i++)
        {
            sum1=sum(arr[i]);
             printf("%d",sum1);
        }
    return 0;
}
int sum(int ele)
{
    int i,sum2=0;
     while(ele!=0)
     {
         int d=ele%10;
         sum2=sum2+d;
         ele=ele/10;
     }
     return sum2;
}

//output
/tmp/l9SBuUWPgD.o
input the size of the array 
3
input array elements 
12
13
14
345