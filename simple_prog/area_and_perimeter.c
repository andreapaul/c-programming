#include<stdio.h>
#define pi 3.14
int main(void)
{
	float r,l,b,b1,h,l1,area_circle,area_rect,area_tri,peri_circle,peri_tri,peri_rect;
	scanf("%f%f%f%f%f%f",&r,&l,&b,&b1,&h,&l1);
	area_circle=pi*r*r;
	area_rect=l*b;
	area_tri=0.5*b1*h;
	peri_circle=2*pi*r;
	peri_rect=2*(l+b);
	peri_tri=l1+b1+h;
	printf("%f\t%f\t%f\t%f\t%f\t%f\t",area_circle,area_rect,area_tri,peri_circle,peri_tri,peri_rect);
	return 0;
}
