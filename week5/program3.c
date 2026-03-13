#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
   /*int toplam = 0, aratoplam;
    
    while(1) {
        aratoplam = rand() % 9 + 1;
        
        if(toplam + aratoplam >= 500) break; // eger eklenecek sayi ile toplam 500den buyuk olacaksa eklemez. donguyu kirar ve atlar.
        
        toplam += aratoplam;
    }
    
    printf("%d", toplam);
    
    return 0;*/ 

  srand(time(NULL));
    int toplam = 0, aratoplam = 0;
    
    while(toplam < 500) {
        aratoplam = rand() % 9 + 1;
        
        if((toplam + aratoplam) % 2 == 0) continue;
        
        toplam += aratoplam;
    }
    
    printf("%d\n", toplam);
    
    return 0;
    //Kod, toplamın çift sayı olmasına asla izin vermiyor. Turu pas geçerek hep yeni bir sayı arıyor ve sadece sonuç tek sayı olacaksa ekleme yapıyor.
}