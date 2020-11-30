#include <stdio.h>
#include <stdlib.h>
/*Preferi criar duas funções e não uma só que acha o numero de vogais e consoantes para deixar o código com menos
dependente e mais reutilizável*/
void vogaisConsoantes(char *string);

int main(){
    char string[30];

    printf("Insira aqui sua palavra: ");
    gets(string);

    printf("O numero de vogais eh: %d\n", contaVogais(string));
    printf("O numero de consoantes eh: %d", contaConsoantes(string));

return 0;
}

int contaVogais(char *string){
	char listaVogais[] = "aeiouAEIOU";
	int resultado = 0, indice = 0, outroIndice;

    while(string[indice] != '\0'){   
        for(outroIndice = 0; listaVogais[outroIndice] != '\0'; outroIndice++){
            if (string[indice] == listaVogais[outroIndice]){
                resultado++;
            }
        }
        indice++;
    }
    return resultado;
}

int contaConsoantes(char *string)
{
    char listaConsoantes[] = "bcdfghjklmnpqrstvxyzBCDFGHJKLMNPQRSTVXYZ";
    int resultado = 0, indice = 0, outroIndice;

    while(string[indice] != '\0'){   
        for(outroIndice = 0; listaConsoantes[outroIndice] != '\0'; outroIndice++){
            if (string[indice] == listaConsoantes[outroIndice]){
                resultado++;
            }
        }
        indice++;
    }

    return resultado;

}















