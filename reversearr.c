// program to find reverse of each element of array
#include <stdio.h>
int palin(int);
int main()
{
       int i,n,result=0,ele;
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
            result=palin(arr[i]);
            printf("%d \n",result);
           /* if(result==1)
             printf("palindrome");
             else
             printf("not palindrome");*/
        }
    return 0;
}
int palin(int ele)
{
    int res=0;
     while(ele!=0)
     {
         int d=ele%10;
         res=res*10+d;
         ele=ele/10;
     }
     return res;
}

//output
/tmp/l9SBuUWPgD.o
input the size of the array 
3
input array elements 
123
456
789
321 
654 
987 