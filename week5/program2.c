#include <stdio.h>
#include <stdlib.h>

int main() {
    int toplam = 0;
    
    while(toplam < 500) {
        toplam += rand() % 9 + 1;
    }
    
    printf("%d", toplam);
    
    return 0;
}