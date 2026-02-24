#include <stdio.h>

int main(){
    const double g; //c++ da deger atamak zorundayiz, c de ise hafizadan rastgele bir atama yapilir.
    
    printf("Yercekimi: "); //const ile atama yapildigindan deger degistirilemez. derleyici hata verir.
    
    // *g = 9.8; // EĞER BU SATIRIN BAŞINDAKİ // İŞARETLERİNİ SİLERSEN: Derleyici "const değiştirilemez" diyerek haklı bir hata verir.
    
    scanf("%lf", &g);  //scanf fonksiyonu const ile atandigina bakmadan alinan adrese gider ve girilen degeri atar.Guvensiz programlama
    
    return 0;
}