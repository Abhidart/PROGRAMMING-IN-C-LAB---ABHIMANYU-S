#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[50],sum=0;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of the elements are%d",sum);
	getch();
}