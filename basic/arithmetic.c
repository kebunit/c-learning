#include <stdio.h>

// basic operator function
int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

int bagi(int a, int b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

// procedure
void showOperatorResult(int a, int b) {
    printf("TAMBAH : %d\n", tambah(a, b));
    printf("KURANG : %d\n", kurang(a, b));
    printf("KALI   : %d\n", kali(a, b));
    printf("BAGI   : %d\n", bagi(a, b));
    printf("MODULO : %d\n", modulo(a, b));
}

// program utamaZ
int main(int argc, char const *argv[]) {
    showOperatorResult(15, 4);
    return 0;
}
