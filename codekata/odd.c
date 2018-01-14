#include <stdio.h>  
   
int main() {  
    int counter,n;
    scanf("%d",&n);
   
  
    counter = 1;
    while (counter <= n) {  
        printf("%d ", counter);
    
        counter = counter + 2;  
    }  
   
    return 0;  
} 
