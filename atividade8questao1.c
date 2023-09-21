#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h> //incluir biblioteca para usar funções de entrada e saída padrão.

/*1- Escreva um programa em C que ordena um array de inteiros usando o algoritmo de ordenação por bolha.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
    int numero[100],i,n,step,temp;  // N = QUANTIDADE DE NUMEROS INSERIDOS       NUMERO = NUMEROS QUE VOU INSERIR
    printf("Digite o número de elementos que deseja ordenar: \n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("\n%d. Insira o elemento aqui:\n",i+1); //LAÇO DE REPETIÇÃO DE QUANTOS NUMEROS SERAO
        scanf("%d",&numero[i]);
    }
    for(step=0;step<n-1;++step)
    for(i=0;i<n-step-1;++i)
    {
        if(numero[i]>numero[i+1])   /* para ser decrescente, altere ">" para "<" */
        {
            temp=numero[i];
            numero[i]=numero[i+1];
            numero[i+1]=temp;
        }
    }
    printf("\nEm ordem crescente:\n");
    for(i=0;i<n;++i)
         printf("%d  ",numero[i]);
    return 0;
}
