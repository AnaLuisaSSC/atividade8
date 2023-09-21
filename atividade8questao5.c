#include <stdio.h>
#include <locale.h>
#define NLinhas 5
#define NColunas 5

void insertion_sort(int arr[], int n);

int main() {
	setlocale(LC_ALL, "PORTUGUESE");
    int i, j, matriz[NLinhas][NColunas];

    // Preenche a matriz com valores
    for (i = 0; i < NLinhas; i++) {
        for (j = 0; j < NColunas; j++) {
            printf("Digite um valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Aplica o algoritmo de ordenação por inserção a cada linha da matriz
    for (i = 0; i < NLinhas; i++) {
        insertion_sort(matriz[i], NColunas);
    }

    // Imprime a matriz ordenada
    printf("\nMatriz ordenada:\n");
    for (i = 0; i < NLinhas; i++) {
        for (j = 0; j < NColunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

