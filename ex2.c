#include <stdio.h>

int main() {
     printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario > salarioMinimo) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa ganha igual ou menos que o salário mínimo.\n");
    }

    return 0
}