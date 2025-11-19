#include <stdio.h>

int main() {
    int n = 20;

    while (1) {
        int divisivel = 1;

        for (int i = 1; i <= 20; i++) {
            if (n % i != 0) {
                divisivel = 0;
                break;
            }
        }

        if (divisivel) {
            printf("O menor numero divisivel por todos os numeros de 1 a 20 é: %d\n", n);
            break;
        }

        n++;
    }

    return 0;
}