#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,i,n,c;
	clrscr();
	printf("Enter the limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}