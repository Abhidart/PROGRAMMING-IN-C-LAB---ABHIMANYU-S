/*
pattern 2
   11111
   2222
   333
   44
   5
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=i;j<=n;j++)
			{
				printf("%d",i);
			}
				printf("\n");
		}
	getch();
}