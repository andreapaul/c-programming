#include <stdio.h>
void appear(char string[], int count[]);
int main()
{ 
char string[100]; 
int i, count[26] = {0};  
printf("Enter a string\n");  
gets(string);   
appear(string, count); 
for(i = 0 ; i < 26 ; i++)  
{
if(count[i]!=0)      
printf("%c \t  %d\n", i + 'a', count[i]); 
}  
return 0;
}
void appear(char string[], int count[])
{   
int i;  
for(i = 0; string[i] != '\0'; i++)   
{      
if (string[i] >= 'a' && string[i] <= 'z' )     
{           
count[string[i]-'a']++;   
}    
}
}
