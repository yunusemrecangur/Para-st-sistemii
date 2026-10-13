#include <cstdio>
#include <cmath>
#include <clocale>

int main() {
    

    
    double urunTutari, odenenPara;

    
    printf("Urun tutarini giriniz (TL): ");
    scanf("%lf", &urunTutari);
    printf("Odenen parayi giriniz (TL): ");
    scanf("%lf", &odenenPara);

    
    double farkDouble = odenenPara - urunTutari;
    int hataliKurus = (int)(farkDouble * 100);
    int toplamKurus = (int)round(farkDouble * 100);

    printf("\n--- Rapor Analizi ---\n");
    printf("Odenen - Urun (Double fark): %lf\n", farkDouble);
    printf("Yuvarlanmis Gercek Kurus (Dogru): %d kurus\n\n", toplamKurus);

    
    int aktifKurus = (toplamKurus >= 0) * toplamKurus;

    
    int kalan = aktifKurus;
    int toplamKupurSayisi = 0;
    int adet = 0;

    printf("--- Para Ustu Dagilimi ---\n");

    
    adet = kalan / 20000;
    printf("200 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 20000;

    
    adet = kalan / 10000;
    printf("100 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 10000;

    
    adet = kalan / 5000;
    printf("50 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 5000;

    
    adet = kalan / 2000;
    printf("20 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 2000;

    
    adet = kalan / 1000;
    printf("10 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 1000;

    
    adet = kalan / 500;
    printf("5 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 500;

    
    adet = kalan / 100;
    printf("1 TL: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 100;

    
    adet = kalan / 50;
    printf("50 Kurus: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 50;

    
    adet = kalan / 25;
    printf("25 Kurus: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 25;

    
    adet = kalan / 10;
    printf("10 Kurus: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 10;

    
    adet = kalan / 5;
    printf("5 Kurus: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 5;

    
    adet = kalan / 1;
    printf("1 Kurus: %d adet\n", adet);
    toplamKupurSayisi += adet;
    kalan = kalan % 1;

    printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d\n", toplamKupurSayisi);

    return 0;
}
