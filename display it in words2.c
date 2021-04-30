//Accept a number with 1 or 2 digit from user and display it in words.
#include<stdio.h>
int main()
{
	int n;
	printf("enter 1 or 2 digit no\n");
	scanf("%d",&n);
	
	 char* single_digits[]= { "zero", "one", "two",   "three", "four","five", "six", "seven", "eight", "nine","ten","eleven","twelve","thirteen","fourteen","fifteen", "sixteen","seventeen", "eighteen", "nineteen"  };
 	
	printf("%s",single_digits[n]);
		


 
    return 0;
}
