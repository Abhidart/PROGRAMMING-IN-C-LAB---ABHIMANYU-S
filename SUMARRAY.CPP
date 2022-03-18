#include<stdio.h>
#include<conio.h>
void create();
int main()
{
	create();
	return 0;
}
void create()
{
	int arr[10],n,i=0,sum=0;
	clrscr();
	printf("Enter the limit of the array: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	while(i<=n-1)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		i++;
	}
	printf("Sum of the entered array is %d",sum);
	getch();
}

