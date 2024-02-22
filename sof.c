
// program to print sum of factors of each element of array
#include <stdio.h>
int sof(int);
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
            sum1=sof(arr[i]);
             printf("%d",sum1);
        }
    return 0;
}
int sof(int ele)
{
    int i,sum2=0;
     for(i=1;i<=ele;i++)
     {
         if(ele%i==0)
         sum2=sum2+i;
     }
     return sum2;
}

//output
/tmp/l9SBuUWPgD.o
input the size of the array 
3
input array elements 
12
4
18
28739