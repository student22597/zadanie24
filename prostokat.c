#include <stdio.h>

float area_rectangle(float a, float b) {
	return a * b;
}

void calculate_area_rectangle() {
	float a, b;

	printf("Podaj dlugosc boku a: ");
	scanf("%f", &a);

	printf("Podaj dlugosc boku b: ");
	scanf("%f", &b);

	printf("Pole prostokata: %f\n", area_rectangle(a, b));
}

int main() {
	calculate_area_rectangle();

	return 0;
}
