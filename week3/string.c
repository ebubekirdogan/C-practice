#include <stdio.h>

const char* isimDondur(){
const char *isimdondur="Yavuz";
return isimdondur;
}
int main(){
    char* isim="Yavuz";
    printf("%c",*isim);

    char CharDizisi[]={'A','L','I','\0'};
    printf("\n%s",CharDizisi); //null karakterine kadar basar.

    const char* isim2=isimDondur();
    printf("\n%s",isim2); //isim2 aslinda adres tutuyor. ancak s; adresteki stringi yazdirir.(NULL gorene kadar.)
    return 0;
}
