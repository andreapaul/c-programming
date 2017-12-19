#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *ff,*fs,*ft;
char c;
ff=fopen("first.txt","r");
if (ff == NULL)
    {
       
        exit(0);
    }
fs=fopen("second.txt","r");
if (fs == NULL)
    {
      
        exit(0);
    }
    
ft=fopen("third.txt","w");
if (ft == NULL)
    {
        
        exit(0);
    }
while(1)
{
    c = fgetc(ff);
    while (c != EOF)
    {
        fputc(c, ft);
       
    }
    c = fgetc(fs);
    while (c != EOF)
    {
        fputc(c, ft);
      
    }
}
 
    printf("\nFile copied %c",c);
 
    fclose(ff);
    fclose(fs);
      fclose(ft);
  
}
