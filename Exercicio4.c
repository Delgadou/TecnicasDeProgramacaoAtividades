#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tamanhoDoArray = 10;
	int indice;
	int vetor[] = { 1, 4, 2, 30, 5, 52, 40, 50, 9, 6};
    
    printf("O array desodernado eh:\n");
    
    for(indice = 0; indice<tamanhoDoArray; indice++){
        printf("%d ",vetor[indice]);
    }
    
    sort(tamanhoDoArray, vetor);

    return 0;
}

void sort(int tamanhoDoArray, int* ponteiro){	
    int indice, segundoIndice, temp;
    
    for(indice = 0; indice < tamanhoDoArray; indice++){
    	
        for(segundoIndice = indice + 1; segundoIndice < tamanhoDoArray; segundoIndice++){
        	
            if(*(ponteiro + segundoIndice) < *(ponteiro + indice)){
				temp = *(ponteiro + indice);
	    		*(ponteiro + indice)= *(ponteiro + segundoIndice);
	    		*(ponteiro + segundoIndice) = temp;
			}
		}
    }
    
    printf("\nArray Ordenado: \n");
	for(indice = 0; indice < tamanhoDoArray; indice++) 
        printf("%d ", *(ponteiro + indice)); 
    
}















