#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi = 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, raio;
	float baseM, basem, altura, areatrapezio;
	
	printf("Insira o raio do Circulo");
 	scanf("%f", &raio);	
	area = M_PI* pow(raio,2);

	printf("A area do Circulo %f = %f", raio, area);

	
	printf("\nInsira a base Maior");
	scanf("%f", &baseM);
	
	printf("Insira a base Menor");
	scanf("%f", &basem);
	
	printf("Insira a altura");
	scanf("%f", &altura);
	
	areatrapezio = ((baseM + basem) * altura) / 2;
	printf("A area do trapezio de basem = %.1f, baseM = %.1f e altura = %.1f e igual a %.1f", basem, baseM, altura, areatrapezio);
	return 0;
}
