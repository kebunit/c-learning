#include<stdio.h>

void ifExample(int number) {
    if (number == 0) {
        printf("ZERO NUMBER\n");
    } else if (number < 0) {
        printf("NEGATIVE NUMBER\n");
    } else if(number > 0) {
        printf("POSITIVE NUMBER\n");
    }
} 

// global type
enum NUMBER_TYPE{ZERO, POSITIVE, NEGATIVE};
void switchExample(int numberType) {
    switch (numberType) {okn 
        case ZERO :
            printf("ZERO NUMBER\n");
            break;
        case NEGATIVE :
            printf("NEGATIVE NUMBER\n");
            break;
        case POSITIVE :
            printf("POSITIVE NUMBER\n");
            break;
        default:
            break;
    }
}

int main(int argc, char const *argv[]) {
    printf("----------------IF ELSE------------\n");
    ifExample(0);
    ifExample(-5);
    ifExample(10);
    printf("----------------SWITCH------------\n");
    switchExample(ZERO);
    switchExample(NEGATIVE);
    switchExample(POSITIVE);
    return 0;
}
