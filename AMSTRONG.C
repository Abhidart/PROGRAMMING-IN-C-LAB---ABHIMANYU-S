#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp,c;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
	{
	printf("%d is an amstrong number",temp);
	}
	else
	{
	printf("%d is not an amstrong number",temp);
	}
	getch();
}
