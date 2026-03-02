#include <stdio.h>
int main(){
    int gun_kodu=5;

    switch (gun_kodu){
        case 1:
        printf("Pazartesi\n");
        break;
        case 5: 
        printf("Cuma\n");
        break;
        default:
        printf("Siradan bir gun\n");
        break;
    }

    char islem = '+';
    // Karakterleri de kabul eder (Çünkü C'de karakterlerin arka planda ASCII sayı karşılıkları vardır)
    switch (islem) {
        case '+':
            printf("Toplama yapilacak.\n");
            break;
        default:
            printf("Gecersiz islem.\n");
    }

    return 0;
}


