//Accept a 3 digit number from user and find the sum of the digits and also reverse the number 
#include<stdio.h>
int main()
{	int n,sum=0,tmp,rev=0,rem;
	printf("Enter 3 digit no\n");
	scanf("%d",&n);
	tmp=n;
	while(tmp)
	{
		rem=tmp%10;
		rev=rev*10+rem;
		sum+=rem;
		tmp=tmp/10;
	}
	printf("Sum Of digit=%d\nreverse of %d is=%d\n",sum,n,rev);
	
}
