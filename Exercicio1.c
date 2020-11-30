#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanhoVetor, i = 0;
    int *ptr_vetor; 

    do{
        printf("\nAdicione quantos elementos o vetor tera (maximo 100): ");
        scanf("%d", &tamanhoVetor);

            if (tamanhoVetor < 0 || tamanhoVetor > 100)
            {
                printf("Valor invalido. Tente novamente.\n");
            }
    }while (tamanhoVetor < 0 || tamanhoVetor > 100);

    ptr_vetor = malloc (tamanhoVetor * sizeof(tamanhoVetor));
    
    int vetor[tamanhoVetor];

    printf("Insira os valores no vetor: %d\n\n", tamanhoVetor);

    for(i = 0; i < tamanhoVetor; i++){
        printf("Posicao[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
           
    printf("\n\nO maior valor inserido no vetor eh %d. ", buscaMaiorVetor(vetor, tamanhoVetor));

    return 0;
}

int buscaMaiorVetor (int *vetor, int tamanhoVetor){
    int achaMaiorNumero = vetor[0], indice; 

    for (indice = 0; indice < tamanhoVetor; indice++){    
        if (achaMaiorNumero < vetor[indice]) {
            achaMaiorNumero = vetor[indice];
        }
    }

    return achaMaiorNumero;
}












