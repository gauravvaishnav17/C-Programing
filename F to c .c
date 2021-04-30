//Finding F from C (temp).
#include<stdio.h>
int main()
{
	float c,f;
	int n;
	printf("enter the option \n 1-To conver fahrenheit to celsius\n2- To convert Celsius to Fahrenheit\n");
	scanf("%d",&n);
	
	if(n==1)
	{	printf("Enter Temprature in fahrenheit\n");
		scanf("%f",&f);
		printf("%.2f",(f-32.0)*(5/9));
		
	}
	else if(n==2)
	{
		printf("Enter Temprature in Celsius\n");
		scanf("%f",&f);
		printf("%.2f",(c*(9.0/5.0)+32.0));
	}
	
	
	
	}
