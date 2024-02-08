#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,en,boy;
	
	printf("En Degeri Gir : ");
	scanf("%d",&en);
	printf("Boy Degerini Giriniz : ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
