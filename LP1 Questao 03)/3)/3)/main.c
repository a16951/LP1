/*
	nome:joao carlos martins silva
	numero:16951
	email:a16951@alunos.ipca.pt
	data:28/11/2018
	exercicio:3)
	descr.: resultado do fatorial
	*/

#include <stdlib.h>
#include <stdio.h>


int main() {
	int x;

	//pedir o numero
	printf("Digite um numero: ");
	scanf_s("%d", &x);




	if (x >= 1) {//quando o x for 0 vale 1 por isso para calcular o resultado do fatorial nao é preciso

		int fat = 1;

		do {

			fat = fat * x;//mutiplicar o x por 1 primeiro para começar o ciclo e apartir dai mutiplicar o x por x-1 ate o x ser 1
			x--;

		} while (x >= 1);

		//mostrar o resultado
		printf("O resultado do fatorial  %d: %d.\n", x, fat);
	}


	system("pause");
	return 0;
	}
