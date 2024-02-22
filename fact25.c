// program to find factorial using recursion of no. greater than 25
#include <stdio.h>
long double fact(long double);
int main() 
{
    long double i,n;
    printf("input a number \n");
    scanf("%Lf",&n);
    printf("factorial is %Lf",fact(n));
    return 0;
}
long double fact(long double n)
{
    long double f=1;
    if(n==0||n==1)
    return 1;
    else
    {
        f=n*fact(n-1);
        return f;
    }
}

//correct output
/tmp/ECcx7G3dfY.o
input a number 
25
factorial is 15511210043330985984000000.000000