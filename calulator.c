//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter the operator(+,-,/,*)\n");
	scanf("%c",&ch);
	printf("Enter the value of a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
////
//	{
//		
//	int a, b, c;
//   char ch;
// //  clrscr() ;
//   printf("Enter your operator(+, -, /, *, %)\n");
//   scanf("%c", &ch);
//   printf("Enter the values of a and b\n");
//   scanf("%d%d", &a, &b);
	
	
	switch(ch)
	{
		case '+':
			printf("a+b=%d",a+b);
			break;
		case '-':
			printf("a-b=%d",a-b);
			break;
		case '/':
			printf("a/b=%d",a/b);
			break;
		case '*':
			printf("a*b=%d",a*b);
			break;
		case '%':
			printf("a\\%b=%d",a%b);
			break;
		default:
			printf("Invalid");
		}
}
