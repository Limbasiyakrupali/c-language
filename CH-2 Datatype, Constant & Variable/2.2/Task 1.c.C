#include<stdio.h>
#include<conio.h>
main()
{
	float area,height,width;

	clrscr();

	printf("enetr the value of height=");
	scanf("%f",&height);

	printf("enter the value of width=");
	scanf("%f",&width);

	area=height*width;



	printf("the area of ractangle is=%.2f",area);

	getch();
	return 0;

}