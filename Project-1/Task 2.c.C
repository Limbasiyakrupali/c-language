#include<stdio.h>
#include<conio.h>
main()
{
	int salary,HRA,DA,TA;

	clrscr();

	printf("enter the value of salary=");
	scanf("%d",&a);

	printf("enter the value of HRA=");
	scanf("%d",&HRA);

	printf("enter the value of DA=");
	scanf("%d",&DA);

	printf("enter the value of TA=");
	scanf("%d",&TA);

	HRA=salry*HRA/100;
	DA=salary*DA/100;
	TA=salary*TA/100;

	printf("RS=%d",salary+HRA+DA+TA);

	getch();
}