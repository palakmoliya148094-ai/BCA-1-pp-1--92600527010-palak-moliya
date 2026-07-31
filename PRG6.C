#include<stdio.h>
#include<conio.h>

void main()
{
	float x;
	clrscr();
	printf("\n enter any number :");
	scanf("%d", &x);

	if(x>=35)
	{
		printf("\n result is pass");
	}
	else
	{
		printf("\n result is fail");
	}

	getch();
}