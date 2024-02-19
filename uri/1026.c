#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned long int x=0,y=0;
    while (scanf("%lu %lu",&x, &y) != EOF)
        printf("%lu\n", x^y);
    return 0;
}
