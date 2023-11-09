#include<stdio.h>
#include<conio.h>
main()
{
	int first,second,third;

	clrscr();

	printf("enter then value of first angle=");
	scanf("%d",&first);

	printf("enter the value of second angle=");
	scanf("%d",&second);

	third=180-(first+second);

	printf("the third angle is=%d",third);

	getch();
}