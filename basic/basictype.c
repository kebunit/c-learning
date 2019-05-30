#include <stdio.h>

// this is procedure 
void showType() {

    // for 32 bit
    int bilanganBulat32bit = 32414;
    float bilanganDesimal32bit = 34.324;

    // for 64 bit
    long bilanganBulat64bit = 3729378924984;
    double bilanganDesimal64bit = 9238893.3434;

    // char
    char karakter = 'C';
    
    // string(text)
    char * text = "ini text string";
    char iniJugaText[]= {"Semua akan indah pada waktunya"};

    // Array
    int arrayOfInt[] = {1,2,44,5,67,8,9};
    char * arrayOfString[] = {"satu", "dua", "tiga", "empat", "lima"};

    // print ke layar
    printf("INTEGER 32 BIT : %d\n", bilanganBulat32bit);
    printf("INTEGER 64 BIT : %ld\n", bilanganBulat64bit);
    printf("FLOAT : %f\n", bilanganDesimal32bit);
    printf("DOUBLE : %lf\n", bilanganDesimal64bit);
    printf("CHARACTER : %c\n", karakter);
    printf("STRING : %s\n", text);
    printf("STRING JUGA : %s\n", iniJugaText);

    // enum example
    enum jenisGorengan {GEHU, MENDOAN, TEMPE, TAHU_ISI, BALA_BALA};
    enum jenisGorengan gorengan;
    gorengan = TEMPE;
    printf("JENIS GORENGAN ADALAH ");
    switch (gorengan) {
        case MENDOAN :
            printf("MENDOAN\n");
            break;
        case GEHU :
            printf("GEHU\n");
            break;
        case TEMPE :
            printf("TEMPE\n");
            break;
        case TAHU_ISI :
            printf("TAHU ISI\n");
            break;
        
        default:
            break;
    }
}

void showMaxLengthOfType() {
    printf("INTEGER 32 BIT : %d \n", __INT32_MAX__);
    printf("INTEGER 64 BIT : %ld \n", __INT64_MAX__);
    printf("FLOAT : %d\n", __SIZEOF_FLOAT__);
    printf("DOUBLE : %d\n", __SIZEOF_DOUBLE__);
    printf("LONG DOUBLE : %d\n", __SIZEOF_LONG_DOUBLE__);
}

int main() {
    showType();
    showMaxLengthOfType();
    return 0;
}
