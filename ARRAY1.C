/* Program to read an arrray of 5 elements from the user and display its elements*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[50],n;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}