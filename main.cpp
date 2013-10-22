
//Furkan Aktekin 12253003

#include <stdio.h>  /*printf fonksiyonunun çalışması için*/
#include <string.h>  /*strlen fonksiyonunun çalışması için*/
#include <conio.h>   /*getch() fonksiyonunun çalışması için*/
int main()   /*ana fonksiyonu integer olarak tanımladım*/
{
	char sayi[50];   /*girilecek olan 4 haneli sayı için 50 karakterlik boşluk ayırdım  */
	int basamak;     /*sayının basamaklarını int tanımladım*/

	printf("Cozumlenecek Olan 4 Haneli Sayiyi Giriniz:");   /*ekrana isteğimi yazdırıyorum*/
	gets(sayi);  /*klavyeden girilen sayıyı sayi değişkenine atıyorum*/

	basamak = strlen(sayi);    /*yazılan 4 haneli sayının basamaklarını tanımladım  örneğin  sayi[basamak-1]  sayının ilk karakteri*/

	switch(basamak)
	{
		/*sayi[50] char olarak tanımlandığı için %c ile ifade ettim*/
	case 4: printf("%c adet binlik\n", sayi[basamak-4]);         /*sayıda kaç binlik*/
	case 3: printf("%c adet yuzluk\n", sayi[basamak-3]);                     /*yüzlük*/
	case 2: printf("%c adet onluk\n",  sayi[basamak-2]);                       /*onluk*/
	case 1: printf("%c adet birlik vardir.\n", sayi[basamak-1]);                 /*birlik    olduğunu ekrana yazırdım*/
		break;

	default:      /*4 basamaktan fazla sayı girilirse hata veriyor*/
		printf("4 haneli sayi girmediginiz icin programi kapatiyoruz :)");
		break;
	}
	getch();
}

