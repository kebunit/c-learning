#include<stdio.h>
#include<string.h>

// data structure
typedef struct {
    int jumlahRoda;
    int kapasitasPenumpang;
    char merekMobil[64];
    int ccMesin;
} Mobil;


// main program example
int main() {
    Mobil mobilSaya; 
    mobilSaya.jumlahRoda = 4;
    sprintf(mobilSaya.merekMobil, "%s", "Toyota Yaris");
    mobilSaya.kapasitasPenumpang = 9;
    mobilSaya.ccMesin = 1500;

    printf("Jumlah Roda :%d\n", mobilSaya.jumlahRoda);
    printf("Penumpang: %d", mobilSaya.kapasitasPenumpang);
    printf("Merek : %s\n", mobilSaya.merekMobil);
    printf("CC Mesin : %d\n", mobilSaya.ccMesin);
    return 0;
}
