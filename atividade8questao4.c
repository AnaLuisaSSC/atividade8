#include <stdio.h>

// Função de troca de elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Escolha o último elemento como pivô
    int i = (low - 1);    // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) { 
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int rows, cols;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        quickSort(matrix[i], 0, cols - 1);
    }

    printf("Matriz ordenada:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

