
#include <stdio.h>

int saberi(int a, int b) {
    return a + b;
}

int oduzmi(int a, int b) {
    return a - b;
}

int main() {
    int izbor, a, b, rezultat;
    
    printf("=== KALKULATOR v1 ===\n");
    printf("1 - Sabiranje dva broja\n");
printf("2 - Oduzimanje dva broja\n");
printf("0 - Izlaz iz programa\n");
printf("Unesite broj zeljene opcije: ");
    scanf("%d", &izbor);

    if (izbor == 0) {
    printf("Izlaz iz programa.\n");
    return 0;
}
    
    else if (izbor == 1) {
        printf("Unesite dva broja: ");
        scanf("%d %d", &a, &b);
        rezultat = saberi(a, b);
        printf("Rezultat: %d\n", rezultat);
    }

    else if (izbor == 2) {
    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);
    rezultat = oduzmi(a, b);
    printf("Rezultat: %d\n", rezultat);
}
    else {
       printf("Pogresan unos. Pokusajte ponovo.\n");
    }

    return 0;
}


