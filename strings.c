#include <stdio.h>
#include <string.h>

void mostrarCadena(char cadena[]){
    printf("Valor de cadena: ");

    for (int i = 0; i < strlen(cadena); i++)
    {
        printf("%c",cadena[i]);
    }
}



int main() {
    char cadena[] = "Hola, mundo";
    int longitud = strlen(cadena);

    mostrarCadena(cadena);

    printf("La longitud de la cadena es %d\n", longitud);


    

    return 0;
}