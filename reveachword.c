
//to reverse each word of string
#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0, l=0,j=0,k=0,m=0,n=0;
    char str1[40],str2[10],t;
    printf("input string 1\n");
    fgets(str1,40,stdin);
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
        for(m=0,n=k-1;m<n;m++,n--)
          {
              t=str2[m];
              str2[m]=str2[n];
               str2[n]=t;
              
          }
          if(str1[i]==' ')
          {
                printf(" %s ",str2);
          }
          m=0;
        while(str2[m]!='\0')
       {
            str2[m]="";
            m++;
       }
      // str1[j]='\0';
     
    
        t='\0';
    
        i++;
    }
return 0;
}
     
  /* 
/tmp/kKyAOZvFVk.o
input string 1
abc is best
cba  si tseb*/