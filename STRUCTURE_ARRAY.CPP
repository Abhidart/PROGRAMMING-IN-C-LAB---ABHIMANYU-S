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
	int arr[50],n,i=0;
	clrscr();
	printf("Enter the limit of the array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	while(i<=n-1)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	printf("Entered array elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
}
