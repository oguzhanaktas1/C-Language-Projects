#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct detay{
	char renk[20];
	char boyut[20];
	char dipnot[20];
};

struct urunler{
	char isim[20];
	int sayi;
	struct detay bilgi;
};

int main()
{
	struct urunler urunbir;
	strcpy(urunbir.isim,"televizyon");
	urunbir.sayi=252;
	strcpy(urunbir.bilgi.renk,"kirmizi");
	strcpy(urunbir.bilgi.boyut,"1500x800");
	strcpy(urunbir.bilgi.dipnot,"sahibinden kiraliktir");
	
	printf("asagida urun bilgisi bulunmaktadir\n");
	printf("urun adi:%s\nurun rengi:%s\nurun boyutu:%s\nurun sayisi:%d\nurun dipnotu:%s",urunbir.isim,urunbir.bilgi.renk,urunbir.bilgi.boyut,
	urunbir.sayi,urunbir.bilgi.dipnot);
}
