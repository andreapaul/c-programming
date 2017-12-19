#include< conio.h> typedef struct employee{
 char  name[50];
 } emp ;
void main( ){ 
emp e1; 
printf("\nEnter Employee record\n"); 
printf("\nEmployee name	"); 
scanf("%s",e1.name);
 printf("\nEnter Employee salary 	"); 
scanf("%d",&e1.salary);
 printf("\nstudent name is %s",e1.name); 
printf("\nroll is %d",e1.salary); getch();
}
