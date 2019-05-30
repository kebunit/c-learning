#include<stdio.h>
#include<string.h>

// data structure 
typedef struct CarType {
    int jumlahRoda;
    int kapasitasPenumpang;
    char merekMobil[64];
    int ccMesin;
} Car;


// main program example
int main() {
    Car mobilSaya; 
    mobilSaya.jumlahRoda = 4;
    sprintf(mobilSaya.merekMobil, "%s", "Honda Jazz");
    mobilSaya.kapasitasPenumpang = 9;
    mobilSaya.ccMesin = 1800;

    printf("Jumlah Roda \t: %d\n", mobilSaya.jumlahRoda);
    printf("Penumpang \t: %d\n", mobilSaya.kapasitasPenumpang);
    printf("Merek \t\t: %s\n", mobilSaya.merekMobil);
    printf("CC Mesin \t: %d\n", mobilSaya.ccMesin);

    return 0;
}
