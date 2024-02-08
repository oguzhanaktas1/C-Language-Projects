#include<stdio.h>
int main()
{
	int n,i,reverse=0,remainder;
	
	while(n != -1)
	{
		printf("Enter the number : ");
		scanf("%d",&n);
		
		if(n == -1)
			{
			break;
			}

		for(i = 2; i <= n/2; i++)
			{
				if(n % i ==0)
				{
				break;
				}
			}	
				if(i > n/2)
				printf("\n%d is a Twisted Prime Number\n",n);
				else
				printf("\n%d is not a Twisted Prime Number\n", n);
	
 				while (n != 0) {
  				remainder = n % 10;
    			reverse = reverse * 10 + remainder;
   				n /= 10;
				if(n == -1);
		}
	}
}
