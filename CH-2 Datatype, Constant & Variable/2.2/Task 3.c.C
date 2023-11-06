#include<stdio.h>
#include<conio.h>

main()
{
	float b,h,area;
	clrscr();

	printf("enter the value of b=");
	scanf("%f",&b);

	printf("enter the value of h=");
	scanf("%f",&h);

	area=b*h/2;

	printf("the Traingle area=%f",area);

	getch();
}