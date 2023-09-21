#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Questão 2 - Compare o desempenho do algoritmo de ordenação por bolha com algoritmo de ordenação o quicksort e
o mergesort, usando arrays de tamanhos diferentes. Meça o tempo de execução e compare os resultado*/

void bubbleSort(int arr[], int n) {
}

void quicksort(int arr[], int low, int high) {
}

void merge(int arr[], int l, int m, int r) {
}

void mergeSort(int arr[], int l, int r) {
}

int main() {
    int n, i;
    clock_t start, end;
    double cpu_time_used;

    printf("Tamanho do array: ");
    scanf("%d", &n);

    int arr[n]; 

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }
    
        arr[i        // Medição do tempo  algoritmo de  bolha
    start = clock();
    bubbleSort(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tempo gasto para bubbleSort: %f segundos\n", cpu_time_used);

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }
    
        arr[i            // Medição do tempo  algoritmo quicksort
    start = clock();
    quicksort(arr, 0, n - 1);
    end = clock();
    cpu_time_used = ((
   
double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tempo gasto para quicksort: %f segundos\n", cpu_time_used);

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }

        arr[i] =            // Medição do tempo algoritmo mergesort
    start = clock();
    mergeSort(arr, 
    start = clock
0, n - 1);
    end = clock();
    cpu_time_used = ((
    end = clock();
    cpu_time_used =

    end = clock
double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tempo gasto para mergesort: %f segundos\n", cpu_time_used);
   
return 0;
}
