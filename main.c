
#include <stdio.h>

int saberi(int a, int b) {
    return a + b;
}

int main() {
    int izbor, a, b, rezultat;

    printf("Kalkulator\n");
    printf("1 - Sabiranje\n");
    printf("2 - Oduzimanje\n");
    printf("Izaberite opciju: ");
    scanf("%d", &izbor);

    if (izbor == 1) {
        printf("Unesite dva broja: ");
        scanf("%d %d", &a, &b);
        rezultat = saberi(a, b);
        printf("Rezultat: %d\n", rezultat);
    }

    return 0;
}


