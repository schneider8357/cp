#include <stdio.h>
#include <stdbool.h>

/* Dado um número inteiro e uma sequência de permutações dos bits de sua representação binária, encontre 3 números: o resultado final após todas as permutações, o maior e o menor valor encontrado durante as permutações */

int main() {
    unsigned long n, k, a, b, max = 0, min = 0;
    while (true) {
        scanf("%lu %lu", &n, &k);
        if (n == 0 && k == 0)
            break;
        max = n;
        min = n;
        while (k--) {
            scanf("%lu %lu", &a, &b);
            unsigned long b1 = (n >> a) & 1;
            unsigned long b2 = (n >> b) & 1;
            n &= ~(1 << a);
            n &= ~(1 << b);
            n |= b1 << b;
            n |= b2 << a;
            max = n > max ? n : max;
            min = n < min ? n : min;
        }
        printf("%lu %lu %lu\n", n, max, min);
    }
    return 0;
}
