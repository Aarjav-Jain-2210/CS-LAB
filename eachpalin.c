// program to check if each element of array is palindrome or not
#include <stdio.h>
int palin(int);
int main()
{
       int i,n,result=0,ele,count=0;
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
             if(result==0)
             {
                 count++;
                printf("palindrome \n");
             }
             else
             printf("not palindrome \n");
        }
        printf("no. of palin drome no. is %d \n",count);
    return 0;
}
int palin(int ele)
{
    int ele1=ele;
    int res=0;
     while(ele!=0)
     {
         int d=ele%10;
         res=res*10+d;
         ele=ele/10;
     }
     if(res==ele1)
     return 0;
     else
     return 1;
}

//output
/tmp/l9SBuUWPgD.o
input the size of the array 
3
input array elements 
121
345
656
palindrome 
not palindrome 
palindrome 
no. of palin drome no. is 2 