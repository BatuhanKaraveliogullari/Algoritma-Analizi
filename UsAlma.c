#include <stdio.h>
#include <stdlib.h>

int sayac=0;

int pow_log(int a,int b) {
    if ( b == 0 ) {
        sayac++;
        return 1;
    }
    if ( b == 1 ) {
        sayac++;
        return a;
    }
    if ( (b%2) == 0 ){
        sayac++;
        return pow(a*a,(b/2));
    }
    else{
        sayac++;
        return pow(a*a,(b/2))*a;
    }
    sayac=0;
}

int pow_lineer(int a, int b) {
    int carpim=1;
    int i;

    if (b == 0) {
        sayac++;
        return 1;
    }
    if (b == 1) {
        sayac++;
        return a;
    }
    else {
        for(i=0;i<=b;i++){
            carpim = carpim*a;
        }
    }
    sayac=0;
}




int main()
{
    int sayi1;
    int sayi2;
    printf("Islem icin gerekli sayilari giriniz : \n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("Sonuc : %d\nIsleminiz %d adimda tamamlanmistir.\n",pow_log(sayi1,sayi2),sayac);

    printf("Islem icin gerekli sayilari giriniz : \n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("Sonuc : %d\nIsleminiz %d adimda tamamlanmistir.\n",pow_lineer(sayi1,sayi2),sayac);

}
