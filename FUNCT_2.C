/* with arguements and without return value */


#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("Enter a number");
	scanf("%d%d",&a,&b);
	add(a,b);
	getch();
}
int add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("Sum=%d",sum);
}