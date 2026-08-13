#include <stdio.h>
#include <stdlib.h>

/* programa que ira ler dois numeros inteiros e depois os imprima na ordem inversa que foram inseridos */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
 	aux = primeiro;
 	primeiro = segundo;
 	segundo = aux;
	
	printf("%d \n%d", primeiro, segundo);
	
	/* ler um valor do tipo double e depois imprima na forma de notacao cientifica */
	
	double numero; 
	
	printf("\nInsira o valor do numero que deseja converter para notacao cientifca: ");
	scanf("%le", &numero);
	
	printf("O numero convertido sera : %e", numero);
	
	/* insira um numero n e mostre na tela seu valor em binario */
	
	int bit1, bit2, bit3, bit4, bit5, bit6, bit7, valor_to_bin;
	printf("\nInsira o valor a ser convertido para binario :");
	scanf("%d", &valor_to_bin);
	
	bit7 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit6 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit5 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit4 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit3 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit2 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	bit1 = valor_to_bin% 2;
	valor_to_bin = valor_to_bin/2;
	
	printf("Binario : %d%d%d%d%d%d%d\n", bit1, bit2, bit3, bit4, bit5, bit6, bit7);
	
	/*Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a
receber no final do mês, com duas casas decimais */


	float salario, vendas, comissao, total;
	
	printf("\ndigite seu salario fixo :");
	scanf("%f", &salario);
	
	printf("Digite o valor total de vendas :");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.15;
	total = salario + comissao;
	
	printf("\nTotal a receber : R$ %.2f\n", total);	
	
	/*Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o
produtório desses valores */
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
