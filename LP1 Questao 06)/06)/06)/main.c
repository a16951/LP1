/*
nome:joao carlos martins silva
numero:16951
email:a16951@alunos.ipca.pt
data:29/11/2018
exercicio:6)
desc:questionário  a  um  número  indeterminado  de  estudantes
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main() {
	int genero;//se for 1 é masculino se for 2 é femenino
	int gostar;//se for 1 gosta de for 2 nao gosta
	int idade;
	int contN = 0;//contador de alunos que fizeram o questionario
	int contM = 0;//contador de masculinos
	int contF = 0;//contador femenino
	int cont3 = 0;//contador de estudantes de masculino com menos de 23 anos e não gostam do curso  que estão a tirar
	double k;


	//ciclo do questionario
	do {
		printf("===================Questionario a estudantes=======================\n");
		printf("Se quiser parar o questionario precione 0.\n");


		printf("Genero:\n1- Masculino.\n2- Femenino\n");//escolher o genero
		scanf_s("%d", &genero);

		if (genero == 0)break;

		if (genero == 1) {//genero ser masculino
			contM++;
			contN++;
		}
		if (genero == 2) {//genero ser femenino
			contF++;
			contN++;
		}

		printf("Idade: ");//idade
		scanf_s("%d", &idade);

		printf("Gosta do curso que esta a frequentar:\n1- Sim.\n2- Nao.\n");//escolher se gosta ou nao
		scanf_s("%d", &gostar);

		if (genero == 1 && idade < 23 && gostar == 2) {//Quantidade de estudantes de masculino com menos de 23 anos e não gostam do curso  que estão a tirar
			cont3++;
		}

		
	} while (genero!=0);

	system("cls");

	k = (((double)contF / (double)contN) * 100);//funçao da percentagem

	printf("Resultados.\n");

	//O número de estudantes entrevistados
	printf("O numero de estudantes entrevistados: %d\n", contN);



	//Mostrar Percentagem de estudantes de género feminino e masculino

	printf("Percentagem de estudantes de genero feminino: %f %.\n",k);

	//Quantidade de estudantes de masculino com menos de 23 anos e não gostam do curso  que estão a tirar.  
	printf("Quantidade de estudantes de masculino com menos de 23 anos e não gostam do curso  que estão a tirar: %d.\n", cont3);


	system("pause");


}