#include<stdio.h>
#include<conio.h>
int square(int);
int rectangle(int,int);
float circle(float);
void main()
{
	int s,l,b,r,a1,a2,a3;
	float pi=3.14;
	clrscr();
	printf("Enter the side");
	scanf("%d",&s);
	a1=multiply(s);
	printf("area of square=%d",a1);

	printf("Enter length and breadth");
	scanf("%d%d",&l,&b);
	a2=multiply(l,b);
	printf("Area of rectangle=%d",a2);

	printf("Enter the radius");
	scanf("%f",&r);
	a3=multiply(pi,r);
	printf("Area of circle=%f",a3);

	getch();
}
int multiply(s)
{
	int a1;
	a1=s*s;
	return(a1);
}
int multiply(l,b)
{
	int a2;
	a2=l*b;
	return(a2);
}
float multiply(pi,r)
{
	float a3;
	a3=pi*r*r;
	return(a3);
}





