#include <stdio.h>
#include <locale.h>
#define NLinhas 5
#define NColunas 5

/*- Escreva uma função em C que realize uma busca sequencial em uma matriz bidimensional de inteiros para encontrar um 
valor específico fornecido pelo usuário. A função deve retornar a posição da primeira ocorrência do valor ou informar 
que o valor não foi encontrado.*/

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
        printf("O valor %d foi encontrado na matriz na posição [%d][%d].\n", valorProcurado, linhaEncontrada, colunaEncontrada);
    } else {
        printf("O valor %d não foi encontrado na matriz.\n", valorProcurado);
    }
    
    return 0;
}

