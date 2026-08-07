//wap to find out total amount
#include<stdio.h>
#include<conio.h>

void main()
{
	int q,p,d,fa,t;
	float drs;
	clrscr();

	printf("\n enetr value of q,p,d:");
	scanf("%d%d%d",&q,&p,&d);


	t=q*p;
	drs=(t*d)/100;
	fa=t-drs;

	printf("the final amount is: %d",fa);
	getch();
}