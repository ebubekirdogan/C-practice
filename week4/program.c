#include <stdio.h>
int main(){
    int puan=85;
    if (puan >= 90){
        printf("AA\n");
}
    else if(puan >= 70){
        printf("BB\n");
    }
    else {
        printf("FF\n");
    }
 
    int bakiye = 100;
    if(bakiye){
        printf("Bakiye var\n");
    }

    //-------------------------

    char isim[] = "Ahmet";
    if(isim == "Ahmet"){
        printf("isim ahmettir\n");
    }
    else{
        printf("isim adres tutuyor\n");
    }

    return 0;

}