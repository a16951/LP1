/*
nome:joao carlos martins silva
numero:16951
email:a16951@alunos.ipca.pt
data:17/11/2018
exercicio:2
descriçao: prémio a que tem direito por ter uma conta no banco 
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Variaveis.h"

int main() {
	//variaveis
	int anos;
	int opcao;
	int premio = 0;
	int x, s;

	//Dados dos clientes
	printf("Conta bancaria.\n");
	printf("Numero de anos que voce e cliente: ");
	scanf_s("%d", &anos);
	printf("Saldo medio da sua conta: ");
	scanf_s("%d", &x);


	//o cliente tem que ter 100000 ou mais de media de saldo na conta e ter conta á mais de 10 anos
	if (x >= 100000 && anos > 10) {


		//interface da consola Tipos de Contas
		printf("1-Empresarial gold.\n ");
		printf("2-Empresarial silver.\n");
		printf("3-Particular gold.\n");
		printf("4-Particular silver.\n");
		printf("5-Outros.\n");
		scanf_s("%d", &opcao);


		//opcoes
#pragma region switch
		switch (opcao) {
		case 1:
			premio = premio + 150;
			printf("Por ser conta empresarial Gold recebe 150 euros de bonus.\n");
			break;

		case 2:
			premio = premio + 100;
			printf("Por ser conta empresarial Silver recebe 100 euros de bonus.\n");
			break;

		case 3:
			premio = premio + 75;
			printf("Por ser conta particular Gold recebe 75 euros de bonus.\n");
			break;

		case 4:
			premio = premio + 40;
			printf("Por ser conta particular Silver recebe 40 euros de bonus.\n");
			break;

		default:
			printf("opcao invalida\n");

		}
#pragma endregion
		

		//aplicar 1% no saldo medio
		s = saldo(x);

	}
	system("cls");
	//mostrar o premio total
	printf("A sua conta esta aberta a %d anos e tem de media salarial de %d.\n", anos,saldo);
	printf("Recebeu um bonus total de %d\n", s + premio);
	system("pause");

	return 0;
}