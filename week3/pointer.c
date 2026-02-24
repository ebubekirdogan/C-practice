#include <stdio.h>

int main(){
    int a= 100;
    printf("%d\n",a); //100 yazdirir
    printf("%X\n",&a); //a'nin adresini yazdirir.

    int *p=&a;
    return 0;
}