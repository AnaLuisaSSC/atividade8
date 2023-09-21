#include <stdio.h>
#include <locale.h>
#define NLinhas 5
#define NColunas 5

/*- Escreva uma fun��o em C que realize uma busca sequencial em uma matriz bidimensional de inteiros para encontrar um 
valor espec�fico fornecido pelo usu�rio. A fun��o deve retornar a posi��o da primeira ocorr�ncia do valor ou informar 
que o valor n�o foi encontrado.*/

int buscaSequencialMatriz(int matriz[NLinhas][NColunas], int valor, int *linhaEncontrada, int *colunaEncontrada) {
    for (int i = 0; i < NLinhas; i++) {
        for (int j = 0; j < NColunas; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return 1;   
            }
        }
    }
    
    return 0;  
}

int main() {
		setlocale(LC_ALL, "PORTUGUESE");
    int matriz[NLinhas][NColunas];
   
    for (int i = 0; i < NLinhas; i++) {
        for (int j = 0; j < NColunas; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int valorProcurado;
    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &valorProcurado);
    
    int linhaEncontrada, colunaEncontrada;
    
    if (buscaSequencialMatriz(matriz, valorProcurado, &linhaEncontrada, &colunaEncontrada)) {
        printf("O valor %d foi encontrado na matriz na posi��o [%d][%d].\n", valorProcurado, linhaEncontrada, colunaEncontrada);
    } else {
        printf("O valor %d n�o foi encontrado na matriz.\n", valorProcurado);
    }
    
    return 0;
}

