#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t,intrest;

	clrscr();

	printf("enter the value of p=");
	scanf("%f",&p);
	printf("enter the value of r=");
	scanf("%f",&r);
	printf("enter the value of t=");
	scanf("%f",&t);

	intrest=p*r*t/100;

	printf("the simple intrest is=%f",intrest);

	getch();
	return 0;
}



