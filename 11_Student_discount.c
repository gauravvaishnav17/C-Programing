//Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.
#include<stdio.h>
int main()
{
	int n;
	float price,purchase,discount;
	printf("enter the price\n");
	scanf("%f",&price);

	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
	scanf("%d",&n);

	if(n==1)
	{
		if(price>500)
		{
			purchase=(price*20)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
		else
		{
			purchase=(price*10)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
	}
	else if(n==2)
	{
		if(price>600)
		{
			purchase=(price*15)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
		else
		{
//			purchase=(price*20)/100;
			printf("Not eligible for discount\nYour Price=%.2f",price);
		}
	}
	
		
	}

