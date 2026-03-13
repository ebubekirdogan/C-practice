#include <stdio.h>

int main() {
    printf("     "); // Başlıktaki sayıları hizalamak için ufak boşluk

    for(int i=1; i<=9; i++){printf("%d  ", i);} 
    printf("\n-----------------------------------\n");
    
    for(int i=1; i<=9; i++) {
        printf("%d |", i);
        
        for(int j=1; j<=9; j++) {
            if((i*j) % 3 == 0) goto mn;
            
            if(i*j < 10) printf("  %d", (i*j));
            else printf(" %d", (i*j));
        }
        
    mn: // ETİKETİ BURAYA ALDIK! Sadece iç döngüden kaçacak.
        printf("\n"); // Ve alt satıra geçip dış döngünün yeni turuna devam edecek.
    }
    
    return 0;
}