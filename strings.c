#include <stdio.h>
#include <string.h>

void salto() {
    printf("\n");
}

void mostrarCadena(char cadena[]) {
    for (int i = 0; i < strlen(cadena); i++) {
        printf("%c", cadena[i]);
    }
}

int main() {
    char cadena[] = "Hola mundo";
    char cadena2[] = "Adios mundo";
    char cadena3[]="Adios mundo";
    int longitud = strlen(cadena);

    printf("Valor de cadena:");
    mostrarCadena(cadena);
    salto();

    printf("La longitud de la cadena es %d\n", longitud);
    salto();

    printf("Valor de cadena 2:");
    mostrarCadena(cadena2);
    salto();

    printf("Valor de cadena 3:");
    mostrarCadena(cadena2);
    salto();
    salto();

    if (strcmp(cadena,cadena2)!=0)
    {
        printf("no son iguales: \n");
        mostrarCadena(cadena);
        salto();
        mostrarCadena(cadena2);
        salto();
        salto();
    }

    if (strcmp(cadena2,cadena3)==0)
    {
        printf("son iguales:\n");
        mostrarCadena(cadena2);
        salto();
        mostrarCadena(cadena3);
        salto();
        salto();
    }
    
    

    // Declarar concatenacion con espacio suficiente para ambas cadenas y el carácter nulo
    char concatenacion[strlen(cadena) + strlen(cadena2) + 1];
    
    // Inicializar concatenacion con el carácter nulo
    concatenacion[0] = '\0';

    // Concatenar cadena y cadena2 en concatenacion
    strcat(concatenacion, cadena);
    strcat(concatenacion, cadena2);

    printf("Concatenacion de ambas cadenas: %s", concatenacion);
    salto();

    return 0;
}
