#include<stdio.h>
#include<conio.h>
main()
{
   int a,b;

   clrscr();

   printf("Enetr the value of a=");
   scanf("%d",&a);
   printf("Enetr the value of b=");
   scanf("%d",&b);

   printf("the value of a=%d\n",a);
   printf("the value of b=%d\n",b);

   a=a+b;
   b=a-b;
   a=a-b;

   printf("the value of a=%d\n",a);
   printf("the value of b=%d\n",b);

   getch();
}



