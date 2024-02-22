// C program to add two strings if palindrome
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

/*
/tmp/DFbdJiDS7w.o
input string 1
naman
input string 2
aba
naman

new string is

namanaba*/