/*
Nome:João Carlos Martins Silva
Numero:16951
Email;joaojcms.lol@gmail.com/a16951@alunos.ipca.pt
Data:17/12/2018
exercicio:7
desc:100 numeros aleatorios entre 0 e 1000 e fazer media dos primos e a soma
*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int soma = 0;
	int cont = 0;
	int div = 0;
	int i, k;
	int num;

	for (i = 0; i < 100; i++) {//ciclo de 0 ate 100 visto que queremos 100 numeros
		num = (rand() % 1000); //função  gera um numero aleatorio entre 1 e 1000

        for (k = 1; k <= num; k++) {//ciclo vai do ate o numero aleatorio

			if (num%k == 0) {//ve quantos numeros o numero aleatorio pode ser dividido ficando inteiro
				div++;
			}
		}

		if (div==2){//um numero para ser primo so pode ser dividido por ele proprio e por 1 logo so tem 2 divisores
			soma = soma + num;//somar os numeros primos
			cont++;
		}
		div = 0;
	}

		printf("A soma dos numeros primos e: %d\n", soma);
		printf("A media dos numeros primos e: %d %\n", (soma / cont));

		system("pause");
		return 0;
	}