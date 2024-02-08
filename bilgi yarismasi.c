#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void hosgeldinizfonksiyonu()
{
	printf("bilgi yarismasina hosgeldinizasagidaki kurallari okuyunuz\n"
	"*yarismamizpuan sistemlidir\n*lutfen kullanici adinizi dogru giriniz kayitli degilseniz kayit olunuz\n");
	
}

int secimfonksiyonu()
{
	int secim;
	printf("lutfen asagidaki seceneklerden birini seciniz\n[1]-giris yap\n[2]-kayit ol\n");
	scanf("%d",&secim);
	return secim;
}

int girisyapfonksiyonu(char isim[200],char sifre[200])
{
	char isimveri[200];
	char sifreveri[200];
	bool kontrol=false;
	while(kontrol==false)
	{
		
	
		printf("lutfen adinizi giriniz : ");
		scanf("%s",&isimveri);
		printf("lutfen sifrenizi giriniz : ");
		scanf("%s",&sifreveri);
	
		if(strcmp(isim,isimveri)==0&&strcmp(sifre,sifreveri)==0)
		{
			printf("sisteme hosgeldiniz");
			kontrol=true;
		}
		else
		{
			printf("hatali giris");
		}
	}
}

int kayitolfonksiyonu()
{
	char isim[200];
	char sifre[200];
	printf("lutfen bir isim belirleyiniz: ");
	scanf("%s",isim);
	printf("lutfen bir sifre belirleyiniz: ");
	scanf("%s",sifre);
	printf("basarili bir sekilde kayit oldunuz\n\n****giris ekranina yonlendiriliyorsunuz****\n");
	girisyapfonksiyonu(isim,sifre);
}

int bilgiyarismasi()
{
	char cevap[2];
	int puan=0;
	int can=3;
	printf("yarisma basladi");
	printf("puaniniz %d",puan);
	
	while(can!=0)
	{
	
	if(puan==0)
	{
		printf("[soru-1]asagidakilerden hangisi turkiye cumhuriyetinin baskentidir?\na-)istanbul\nb-)ankara\nc-)izmir\nd-)antakya\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"b")==0)
		{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("puaniniz:%d",puan);
		}
		else
		{
			printf("hatali cevap, dogru vevap b sikkidir\n");
			printf("puan: %d",puan);
			can-=1;
			printf("\ncaniniz: %d",can);	
		}
	}
	if(puan==10)
	{
		printf("[soru-2]asagidakilerden hangisi rusyanin baskentidir?\na-)moskova\nb-)ankara\nc-)izmir\nd-)paris\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"a")==0)
		{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("puaniniz:%d",puan);
		}
		else
		{
			printf("hatali cevap, dogru vevap a sikkidir");
			printf("puan: %d",puan);
			can-=1;
			printf("\ncaniniz: %d",can);	
		}
	}
	if(puan==20)
	{
		printf("[soru-3]asagidakilerden hangisi fransanin baskentidir?\na-)istanbul\nb-)ankara\nc-)izmir\nd-)antakya\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"d")==0)
		{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("puaniniz:%d",puan);
			can=0;
		}
		else
		{
			printf("hatali cevap, dogru vevap d sikkidir");
			printf("puan: %d",puan);
			can-=1;
			printf("\ncaniniz: %d",can);	
		}
	}
	}
	return puan;
}

int yarismason(int puan)
{
	printf("\nyarismamiz sona ermistir\nguncel skorunuz : %d",puan);
}

int main ()
{
	char isim[200]="mehmet";
	char sifre[200]="12345";
	hosgeldinizfonksiyonu();
	int secim=secimfonksiyonu();
	
	if(secim==1)
	{
		girisyapfonksiyonu(isim,sifre);
	}
	else if(secim==2)
	{
		kayitolfonksiyonu();
	}
int skor=bilgiyarismasi();
	yarismason(skor);
}

