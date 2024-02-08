#include <stdio.h>
#include <string.h>

int tekmiciftmi(int a)
{
	if(a%2==0)
	{
		printf("girdiginiz sayi %d cifttir",a);
	}
	else
	{
		printf("girdiginiz sayi %d tektir",a);
	}
}


int main()
{
	int sayi;
	printf(" bir sayi giriniz: ");
	scanf("%D",&sayi);
	tekmiciftmi(sayi);
}
