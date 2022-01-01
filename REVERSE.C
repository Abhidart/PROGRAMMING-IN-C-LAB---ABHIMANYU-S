#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	clrscr();
	printf("Enter a number :\n");
	scanf("%d",&n);
	while(n>0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}

		printf("%d is the reverse of the number",sum);

	getch();
}