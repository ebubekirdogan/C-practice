#include <stdio.h> //ekrana yazdirma ve veri almak icin 
int main() {
   int sayi;
   printf("bir sayi giriniz: "); //Ekrana yazdirma
   scanf("%d",&sayi); // d=decimal, f=float, c=char...
   //&sayi= sayi'nin adresi demek, scanf fonksiyonu sayi'nin adresine deger atar
 
   short binler,yuzler,onlar,birler;
   binler=sayi/1000;
   yuzler=(sayi%1000)/100;
   onlar=(sayi%100)/10;
   birler=sayi%10;
   printf("Bin1ler: %d\nYuzler: %d\nOnlar: %d\nBirler: %d\n",binler,yuzler,onlar,birler);
   return 0;
}