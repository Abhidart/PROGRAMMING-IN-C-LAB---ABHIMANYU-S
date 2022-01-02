#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,i,n,fact=1,count=0;
	clrscr();
	while(ch!=4)
	{
	printf("\n++++MENU++++\n");
	printf("1. FACTORIAL OF NUMBER\n2. PRIME OR NOT\n3. ODD OR EVEN\n4. EXIT\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("FACTORIAL\n");
		printf("Enter a number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("Factorial =%d",fact);
		break;

		case 2:
		printf("PRIME OR NOT\n");
		printf("Enter a number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==2)
		     printf("%d is a prime number",n);
		else
		     printf("%d is not a prime number",n);
		break;

		case 3:
		printf("ODD OR EVEN\n");
		printf("Enter a number;");
		scanf("%d",&n);
		if(n%2==0)
		printf("%d is an even number",n);
		else
		printf("%d is an odd number",n);
		break;

		case 4:
		printf("EXIT");
		break;
	}
	}
	getch();
}










