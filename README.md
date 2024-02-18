

//1) program to find lasgest and smallest element of array

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

// 2) program to print sum of digits of each element of array

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

//3) program to print sum of factors of each element of array

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

//4) program to find reverse of each element of array

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


// 5)program to check if each element of array is palindrome or not

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



//6) program to find factorial using recursion of no. greater than 25

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

//7) program to find factorial using recursion of no. greater than 25

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

// 8)program to reverse elements of array

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

//output
/tmp/ECcx7G3dfY.o
input a number of elements
5
input elements 
1
2
3
4
5
5

//9)program to add two strings

#include <stdio.h>
#include <string.h>
int main() 
{
    int l;
    char str1[20],str2[20];
    printf("input string 1\n");
    fgets(str1,20,stdin);
    printf("input string 2\n");
    fgets(str2,20,stdin);
    printf("new string is\n");
    strcat(str1,str2);
    puts(str1);
    

    return 0;
}


/tmp/1GzSRxg7o3.o
input string 1
aarjav 
input string 2
jain
new string is
aarjav 
jain


// 10)program to add two string without using function

#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0, l=0;
    char str1[20],str2[20];
    printf("input string 1\n");
    fgets(str1,20,stdin);
    printf("input string 2\n");
    fgets(str2,20,stdin);
    l=strlen(str1);
    l=l-1;
    while(str2[i]!='\0')
    {
       str1[l]=str2[i]; 
       i++;
       l++;
    }
    printf("new string is\n");
    str1[l]='\0';
    puts(str1);
    

    return 0;
}


/tmp/1GzSRxg7o3.o
input string 1
aarjav 
input string 2
is best student
new string is
aarjav is best student


// 13)program to reverse the strings add if palindrome or equal

#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0, l=0,j=0;
    char str1[20],str2[20],t,t2,strA[20],strB[20];
    printf("input string 1\n");
    fgets(str1,20,stdin);
    printf("input string 2\n");
    fgets(str2,20,stdin);
    l=strlen(str1);
    l=l-1;
    strA[20]=str1[20];
    strB[20]=str2[20];
    for(i=0,j=l;i<j;i++,j--)
    {
        t=str1[i];
        str1[i]=str1[j];
        str1[j]=t;
        
        t2=str2[i];
        str2[i]=str2[j];
        str2[j]=t2;
    }
    // printf("reversed string are %s \n %s",str1,str2);
    puts(str1);
    puts(str2);
    l=l+1;
    if(strA[20]==str1[20] && strB[20]==str2[20])
    {
    while(str2[i]!='\0')
    {
       str1[l]=str2[i]; 
       i++;
       l++;
    }
    }
    printf("new string is\n");
    str1[l]='\0';
      puts(str1);
    

    return 0;
}



/tmp/DFbdJiDS7w.o
input string 1
naman
input string 2
aba
naman

new string is

namanaba

