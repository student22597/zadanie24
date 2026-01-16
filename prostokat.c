#include <stdio.h>


float area_circle(float r) {
    return 3.14159f * r * r;
}

float area_rectangle(float a, float b) {
    return a * b;
}


void calculate_area_circle() {
    float r;

    printf("Podaj promien kola: ");
    scanf("%f", &r);

    printf("Pole kola: %.2f\n", area_circle(r));
}

void calculate_area_rectangle() {
    float a, b;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    printf("Pole prostokata: %.2f\n", area_rectangle(a, b));
}

int main() {
    int choice;

    printf("=== MENU ===\n");
    printf("1. Pole kola\n");
    printf("2. Pole prostokata\n");
    printf("Wybierz opcje: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calculate_area_circle();
            break;
        case 2:
            calculate_area_rectangle();
            break;
        default:
            printf("Nieprawidlowa opcja!\n");
    }

    return 0;
}

