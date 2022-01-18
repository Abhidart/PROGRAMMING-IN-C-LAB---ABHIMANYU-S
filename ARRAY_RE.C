#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[50];
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are :");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	getch();
}