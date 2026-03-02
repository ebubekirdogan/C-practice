#include <stdio.h> 

int main() {
    int x ; 
    
    printf("x:");
    scanf("%d", &x);
    
    if(x%2 == 0){   //  SÜSLÜ PARANTEZ BURADA AÇILIYOR
        if(x<100)   //eger 102 gibi bir sayi girilirse bu if'e girmeyecek ve ekrana hiçbir şey yazdırılmayacak return 0 ile program sonlanacak.
            if(x>10) 
                printf("100 den kucuk 10 dan buyuk cift sayi");
    }               // SÜSLÜ PARANTEZ BURADA KAPANIYOR
    else
        printf("sayi tektir.");
        
    return 0;
}