/*
   pattern 4
     *****
     *****
     *****
     *****
     *****
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
			for(j=1;j<=n;j++)
			{
				printf("*\t");
			}
				printf("\n");
		}
	getch();
}