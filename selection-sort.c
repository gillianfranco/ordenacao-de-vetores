// O Selection Sort funciona encontrando repetidamente o elemento mínimo a partir da parte não ordenada do vetor e colocando-o no início da parte ordenada.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {7, 9, 0, 8, 5, 1, 3, 4, 6, 2};
    int tamanho = sizeof(vetor) / sizeof(int);
    int i, j, minIndex, temp;
    
    for(i = 0; i < tamanho - 1; i++){
        minIndex = i;
        for(j = i + 1; j < tamanho; j++) {
            if(vetor[j] < vetor[minIndex]){
                minIndex = j;
            }
        }

        temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }

    printf("Vetor ordenado: ");
    for(int cont = 0; cont < tamanho; cont++){
        printf("%d ", vetor[cont]);
    }

    system("pause >> NULL");
    return 0;
}