#include <stdio.h>

int main() {
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    if (altura > 1.8) {
        printf("A pessoa é mais alta que 1.8 metros.\n");
    } else {
        printf("A pessoa não é mais alta que 1.8 metros.\n");
    }

    return 0
}