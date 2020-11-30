#include <stdio.h>
#include <stdlib.h>

 
void adicionaDois(float *j, float *k, float *m);

int main(){
    float j = 10;
    float k = 2.5;
    float m;       

	adicionaDois(&j, &k, &m);
	
    printf("Valor contido em M: %.1f \n", m);
    printf("Endereco de M: %p", &m);

return 0;
}

void adicionaDois(float *j, float *k, float *m){
    *m = *j + *k;
}
