#include <stdio.h>

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma = 0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i \n", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("suma:  %i \n", suma);
    printf("promedio:  %f \n", suma/5);
    
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}
int main(){
    char cadena[20];
    int n;
    char op;
    do
    {
        printf("1) capturara enteros\n");
        printf("2) mostrar cadena n veces \n");
        printf("3) agregar personajes \n");
        printf("0) salir \n");
        scanf("%c", &op);

        switch (op)
        {
        case  '1':
            capturar_enteros();
            break;
        case '2':
            printf("escribe una cadena de hasta 20 caracteres: ");
            fgets(cadena, sizeof(cadena), stdin);
            printf("n: ");
            scanf("%i", &n);
            mostrar(n, cadena);

            break;
        case '3':
            break;
        
        default:
            break;
        }

    } while (op != '0');
    

    return 0;
}