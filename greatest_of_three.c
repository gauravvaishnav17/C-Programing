//Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
int main()
{	int a,b,c;
	printf("Enter First number\n ");
	scanf("%d",&a);
	
	printf("Enter second number\n ");
	scanf("%d",&b);
	printf("Enter Third number\n ");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	printf("%d is greatest",a);
	else if(b>a&&b>c)
	printf("%d is greatest",b);
	else 
	printf("%d is greatest",c);
}

