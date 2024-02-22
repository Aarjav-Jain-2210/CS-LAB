
//specific word present or not(not working)
#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0, l=0,j=0,k=0,t=0,f=0,M=0,z=0,m=0;
    char str1[40],str2[10],str3[10];
    printf("input sentence 1\n");
    fgets(str1,40,stdin);
     printf("input word\n");
    fgets(str3,10,stdin);
    l=strlen(str1);
    l=l-1;
    t=strlen(str3);
    t=t-1;
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
           // printf("t is %d \n k is %d \n",t,k);
          // puts(str2);
          if(t!=k)
          {
              f=1;
          }
          else
          {
              while(str2[M]!='\0')
              {
                  if(str2[M]!=str3[M])
                  {
                      f=1;
                      break;
                  }
                  M++;
              }
              M=0;
          }
          if(str2[j]=='\0')
          {
              puts(str2);
              if(f==0)
              {
                   printf("word present");
                   break;
              }
              else 
              {
                   printf("word not present");
                   break;
              }
              j++;
          }
          j=0;
         m=0;
        while(str2[m]!='\0')
       {
            str2[m]='\0';
            m++;
       }
      // str1[j]='\0';
     
    
       // t='\0';
    
        i++;
    }
//return 0;
}
