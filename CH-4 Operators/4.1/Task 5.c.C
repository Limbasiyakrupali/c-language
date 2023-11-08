#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&x);
	printf("enter the value of b=");
	scanf("%d",&y);

	z=(x+y)*(x+y)*(x+y);

	printf("the cube is=%d",z);

	getch();
}

