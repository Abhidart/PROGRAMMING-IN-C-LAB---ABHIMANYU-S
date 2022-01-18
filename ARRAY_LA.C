#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[50],l;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		l=a[i];
	}
	printf("Largest elements :%d",l);
	getch();
}
