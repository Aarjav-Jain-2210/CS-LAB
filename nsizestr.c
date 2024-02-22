
// C program to find number of words of size n in a sentence
#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0, l=0,j=0,c=0,n,k=0;
    char str1[40],str2[20];
    printf("input string 1\n");
    fgets(str1,20,stdin);
    printf("input size\n");
    scanf("%d",&n);
    l=strlen(str1);
    l=l-1;
    str1[l]=' ';
     str1[l+1]='\0';
    while(str1[i]!='\0')
    {
       while(str1[i]!=' ')
       {
            str2[j]=str1[i];
            i++;
            j++;
       }
       str2[j]='\0';
        k=strlen(str2);
        //k=k-1;
        if(k==n)
        {
            c=c+1;
        }
        j=0;
        i++;
    }
      
    printf("no. of words of size n is %d",c);
   

    return 0;
}

/*
//output
input string 1
ab aba jh brd har
input size
3
3*/