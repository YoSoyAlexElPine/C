#include <stdio.h>

void salto(){
    printf("\n");
}

int main(){
    int valores[]={3,1,4,1,5,9,2,6,7};
    int valoresSize=sizeof(valores) / sizeof(valores[0]);

    printf("Tamano array: %d \n",valoresSize);


    for(int i=0;i<valoresSize;i++){
        printf("Valores %d: %d \n",i,valores[i]);
    }
}