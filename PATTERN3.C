/*
pattern 3
   12345
   2345
   345
   45
   5
*/

#include<stdio.h>
#include<stdio.h>
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
				printf("%d",j);
			}
				printf("\n");
		}
	getch();
}