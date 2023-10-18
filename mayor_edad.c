#include <stdio.h>

int main() {

    int edad;

    printf("Introduce tu edad\n");
    scanf("%d",&edad);

    if (edad>=18)
    {
        printf("Adelante, eres mayor de edad");
    }else{
        printf("No puedes pasar, eres menor de edad");
    }
    

    return 0;
}
