#include <stdio.h>
int main (){
    typedef enum BOOL{false,true}boolean;
    boolean kontrol=true;
    if(kontrol) printf("bool true varmis gibi gorunuyor\n\n");
// C dilinde bool veri tipi yoktur, ancak enum kullanarak boolean veri tipi oluşturabiliriz.
int a=100;
int b=100000;
printf("a uzunluk: %d\n",sizeof(a));
printf("a uzunluk: %d\n", sizeof(b));

double sonuc=(100/12)-5*3; //8-15=-7
double gercekdoublesonuc = (100.0/12)-5*3; //100.0 yazılarak C ye bu bir ondalıklı sayı dedik.
// islemde bir tane bile ondalıklı sayı varsa C tum islemi ondalıklı yapar.

printf("sonuc: %lf\nsonucdouble=%lf",sonuc,gercekdoublesonuc); // lf=long float, double için %lf kullanılır.
}
