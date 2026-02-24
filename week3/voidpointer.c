#include "stdio.h"

int main(){
    double a=10.5;
    void* obj = &a; //*void= tipi bilinmeyen adres.
    printf("%lf\n",*(double*)obj); //lf double yazdirmak icin kullanilir.

    int x=100;
    obj=&x;
    printf("%d",*(int*)obj); //int ile tip donusumu yapilirken; Biz o adresi int türünde bir verinin adresi olarak yorumlamak istiyoruz.(int*) olmasa o adresi sadece inte cevirirdi.
    // *(int*)-> disaridaki * ise okumak icin.
    return 0;
}