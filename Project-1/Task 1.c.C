#include<stdio.h>
#include<conio.h>
main()
{
	float f,c;

	clrscr();

	printf("enter the value of c=");
	scanf("%f",&c);

	printf("the temperature in celcious=%f\n",c);

	f=(c*9/5)+32;

	printf("the temperature in fehrenheit=%.2f\n",f);

	getch();

}