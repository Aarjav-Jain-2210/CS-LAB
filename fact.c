// program to find factorial using recursion 
#include <stdio.h>
int fact(int);
int main() 
{
    int i,n;
    printf("input a number \n");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
    return 0;
}
int fact(int n)
{
    int f=1;
    if(n==0||n==1)
    return 1;
    else
    {
        f=n*fact(n-1);
        return f;
    }
}


//output wrong with int data type
/tmp/ECcx7G3dfY.o
input a number 
26
factorial is -1853882368
