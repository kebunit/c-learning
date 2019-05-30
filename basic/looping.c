#include<stdio.h>
#define sizeofArray(a) (sizeof(a)/sizeof((a)[0]))

// procedure
void loopingFor(int * array, int length) {
    for (int i = 0; i < length; i++) {
        printf("array value : %d\n", array[i]);
    }
}

// checking statement before do
void loopingWhileDo(char ** array, int length) {
    int index = 0;
    while (index < length) {
        printf("%s ", array[index]);
        index++;
    }
    printf("\n");
}

// do before checking statement
void loopingDoWhile(char ** array, int length) {
    int index = 0;
    do {
        printf("array value : %s \n", array[index]);
        index++;
    } while (index < length);
}

// main program
int main() {
    // array
    int arrayInt[10] = {1,2,3,4,5,6,7,8,9,10};
    char * arrayString[5] = {"Samua", "akan", "indah", "pada", "waktunya"};

    printf("---------- LOOPING FOR --------------\n");
    loopingFor(arrayInt, 10);

    printf("---------- WHILE DO --------------\n");
    loopingWhileDo(arrayString, 5);

    printf("---------- DO WHILE --------------\n");
    loopingDoWhile(arrayString, 5);
    
    return 0;
}
