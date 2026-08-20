#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592



int main(int argc, char *argv[]) {
// calcula o ano que voce nasceu
	printf("EX 1\n");
	int idade, ano_atual, ano_nascimento;
	
	printf("digite sua idade: ");
	scanf("%d", &idade);
	
	printf("digite o ano atual :");
	scanf("%d", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
	printf("O ano que voce nasceu e de : %d\n", ano_nascimento);

//velocidade em km/h (quil?metros por hora) e apresente convertida em m/s 
	printf("EX 2\n");
	float km, ms, velocidade;
	printf("Digite a velocidade em km por hora: ");
	scanf("%f", &km);
	
	ms = km/3.6;
	velocidade = km/3.6;
	printf("A sua velocidade convertida e de : %f\n", velocidade);
	
/*Fa?a um programa que leia um valor em reais e a cota??o do d?lar. Em seguida, imprima o valor
correspondente em d?lares.*/
	printf("EX 3\n");
	float real, dollar, valor;
	
	printf("Digite o valor que deseja converter para dollar: ");
	scanf("%f", &real);
	
	valor = real * 5.16;
	dollar = valor;
	
	printf("O valor e de: %f\n", valor);

/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus
Fahrenheit*/
	printf("EX 4\n");
	float cel, fire, temperatura;
	
	printf("Digite a temperatura que deseja converter: ");
	scanf("%f", &cel);
	
	temperatura = (cel * (9.0/5.0)) + 32;
	fire = temperatura;
	
	printf("A temperatura e de: %f\n", temperatura);
	
	
/*Leia um ?ngulo em graus e apresente-o convertido em radianos */
	printf("EX 5\n");		
	float graus, resultado;
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &graus);
	
	resultado = (graus * pi)/180;

	printf("O resultado em radiano e de: %f\n", resultado);
	
	
/*Faca um programa que leia um n?mero inteiro e retorne seu antecessor e seu sucessor*/
	printf("EX 6\n");
	int n, antecessor, sucessor;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	sucessor = n + 1;
	antecessor = n - 1;
	
	printf("O sucessor e: %d\n", sucessor);
	printf("O antecessor e: %d\n", antecessor);

	
/*Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
	printf("EX 7\n");
	float ganhador1, ganhador2, ganhador3, premio;
	printf("O premio e de  R$780.000");
	
	ganhador1 = 0.46 * 780.000;
	ganhador2 = 0.32 * 780.000;
	ganhador3 = 780.000-(ganhador1 + ganhador2);
	
	
	printf("O resultado do ganhador 1 e de: %f\n", ganhador1);
	printf("O resultado do ganhador 2 e de: %f\n", ganhador2);
	printf("O resultado do ganhador 3 e de: %f\n", ganhador3);
	
	
/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento
em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.*/
	printf("EX 8\n");

	int seg, hora, minuto;
	
	printf("Qual o tempo de duracao do evento em segundos? ");
	scanf("%d", &seg);
	
	hora = seg / 3600;
	minuto = (seg % 3600) / 60;
	
	printf("%d hora(s) e %d minuto(s)\n", hora, minuto);
	
/*Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma
viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através
de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e
a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em
seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto */
	printf("EX 9\n");

	float  tempo, vel, distancia, litros;
    printf("Quanto tempo ira demorar a viagem? ");
    scanf("%f", &tempo);
    printf("Qual a velocidade media em km? ");
    scanf("%f", &vel);
    
    distancia = tempo * vel;
    litros = distancia / 12.0;
    
    printf("Foram percorridos %.2f km\n", distancia);
    printf("Serao necessarios %.3f litros\n", litros);
    

//3
	printf("EX 10\n");
	int a, b, c, maior, maior_tempo;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a,&b,&c);
	
	maior_tempo = (a+b+abs(a-b))/2;
	maior = (maior_tempo+c+abs(maior_tempo-c))/2;
	
	printf("O maior entre [%d][%d][%d] = %d", a,b,c,maior);

//4
	printf("EX 10\n");
	int a1, b1, c1, d1, maior1, maior_temp1, maior_temp2;
	printf("Informe os valores a serem comparados: \n");
	scanf("%d %d %d %d", &a1,&b1,&c1,&d1);
	
	maior_temp1 = (a+b+abs(a-b))/2;
	maior1 = (maior_temp1+c1+abs(maior_temp1-c1))/2;
	maior1 = (maior_temp2+d1+abs(maior_temp2-2))/2;
	
	printf("O maior entre [%d][%d][%d][%d] = %d", a1,b1,c1,d1,maior1);

	return 0;
}
