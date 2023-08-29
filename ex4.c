#include <stdio.h>

int main() {
     printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    if (peso < 60) {
        printf("A pessoa pesa menos de 60 kg.\n");
    } else {
        printf("A pessoa pesa 60 kg ou mais.\n");
    }

    return 0
}