/* with arguement with return value */


#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
	int a,b,s;
	clrscr();
	printf("Enter a number :");
	scanf("%d%d",&a,&b);
	s=add(a,b);
	printf("sum=%d",s);
	getch();
}
int add(int x,int y)
{
	int sum;
	sum=x+y;
	return(sum);
}
