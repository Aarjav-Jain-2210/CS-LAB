
// Online C compiler to run C program online
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

/*
/tmp/1GzSRxg7o3.o
input string 1
aarjav 
input string 2
is best student
new string is
aarjav is best student
*/