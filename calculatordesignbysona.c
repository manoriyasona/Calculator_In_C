// W.A.P. to create a calculator by your self.
#include<stdio.h>
#include<stdlib.h>
  void main()
  { 
   int a,b,c,l;
   float radius,p,r,t,si,area,h;
  int ch;
   printf("^@^@^@^@^@^ A SIMPLE CALCULATOR DESIGNED BY Er.SONA MANORIYA ^@^@^@^@^@^@^");
   do
   {
   	printf("\n enter 1 for addition");
   	printf("\t\t enter 2 for subtraction");
	printf("\n enter 3 for multiplication");
   	printf("\t\t enter 4 for division");
   	printf("\n enter 5 for area of cirle");
   	printf("\t\t enter 6 for area of rectangle");
   	printf("\n enter 7 for radius of circle");
    printf("\t\t enter 8 for remainder");
   	printf("\n enter 9 for area of square");
    printf("\t\t enter 10 for area of triangle");
   	printf("\n enter 11 for si");
   	printf("\n enter 12 for swape any two numbers");
   	printf("\t\t enter 13 for exit");
   	printf("\n enter your choice");
   	scanf("%d",&ch);
	   switch (ch)												
	   {
	   	case 1:
	   		printf("\n enter any two numbers");
	   		scanf("%f%f",&a,&b);
	   		c=a+b;
	   		printf("\n addition = %f",c);
	   		break;
	   	case 2:
	   		printf("\n enter any two numbers");
	   		scanf("%f%f",&a,&b);
	   		c=a-b;
	   		printf("\n subtraction = %f",c);
	   		break;
	   	case 3:
	   		printf("\n enter any two numbers");
	   		scanf("%f%f",&a,&b);
	   		c=a*b;
	   		printf("\n multiplication = %f",c);
	   		break;
	   	case 4:
	   		printf("\n enter any two numbers");
	   		scanf("%f%f",&a,&b);
	   		c=a/b;
	   		printf("\n  division of two numbers = %f",c);
	   		break;
	   	case 5:
	   		printf("\n enter value of radius");
	   		scanf("%f",&r);
	   		area = 3.14*r*r;
	   		printf("\n area of circle = %f",area);
	   		break;
	   	case 6:
	   		printf("\n enter length and breadth");
	   		scanf("%f%f",&l,&b);
	   		area = l*b;
	   		printf("\n area of rectangle = %f",c);
	   		break;
	  	case 7:
	   		printf("\n enter radius of circle ");
	   		scanf("%f",&radius);
	   		radius = 2*3.14*radius;
	   		printf("\n radius of circle = %f",radius);
	   		break;
	   	case 8:
	   		printf("\n enter any two numbers");
	   		scanf("%f%f",&a,&b);
	   		c = a/b;
	   		printf("\n remainder = %f",c);
	   		break;
	   	case 9:
	   		printf("\n enter any two number");
	   		scanf("%f",&a);
	   		area = a*a;
	   		printf("\n area of square = %f",area);
	   		break;
	   	case 10:
	   		printf("\n enter breadth and height");
	   		scanf("%f%f",&h,&b);
	   		area = (b*h)/2;
	   		printf("\n area of triangle = %f",area);
	   		break;
	   	case 11:
	   		printf("\n enter principle \n rate \n time");
	   		scanf("%f%f%f",&p,&r,&t);
	   		si = (p*r*t)/100;
	   		printf("\n simple interest = %f",si);
	   		break;
	   	case 12:
	   		printf("\n enter values for swapping");
	   		scanf("%f%f",&a,&b);
	   		a = a*b;
	   		b = a/b;
	  		a = a/b;
	   		printf("\n values of variables after swapping=");
	   		printf("\n %f%f",&a,&b);
	   		break;
	   	case 13:
	   		exit(0);
	   	default:
	   			printf("\n enter your choice");
	   }
}while(1);
	   }   
