#include <stdio.h>
#include <string.h>

void sayisirala(int a,int b){
	if(a<b)
	{
		printf("%d<%d",a,b);
	}
	else if(b<a)
	{
		printf("%d<%d",b,a);
	}
	else
	{
		printf("%d=%d",a,b);
	}
	
}

int main()
{
	
	int sayi1,sayi2;
	printf("lutfen sayi 1 i giriniz");
	scanf("%d",&sayi1);
	printf("lutfen sayi 2 yi giriniz");
	scanf("%d",&sayi2);
	
	
	
	sayisirala(sayi1,sayi2);
}
