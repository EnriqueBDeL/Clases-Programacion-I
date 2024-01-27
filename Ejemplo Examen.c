#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[200];
    int trabajadores;
    char correo[200];
} categoria;

categoria c[100];
int i = 0;

// MENU
int menu() {
    int opciones;

    printf("\n\n*****MENU*****\n");
    printf("\n1. Anadir categoria");
    printf("\n2. Eliminar categoria");
    printf("\n3. Mostrar categorias");
    printf("\n4. Editar categoria");

    return opciones;
}

// AÑADIR CATEGORÍA
void anadir_categoria() {
    printf("\nIntroduce el nombre de la categoria: ");
    fflush(stdin);
    gets(c[i].nombre);
    printf("\nIntroduce el numero de trabajadores: ");
    fflush(stdin);
    scanf("%d", &c[i].trabajadores);
    printf("\nIntroduce el correo electronico: ");
    fflush(stdin);
    gets(c[i].correo);

    i++;
}

// ELIMINAR CATEGORÍA
void eliminar_categoria() {
    char comp[200];
    int r, a;

    printf("\nIntroduce el nombre de la categoria: ");
    fflush(stdin);
    gets(comp);

    for (r = 0; r < i; r++) {
        if (strcmp(c[r].nombre, comp) == 0) {
            printf("\nCategoria encontrada");
            a = r;
            break;
        }
    }

    if (r < i) {
        for (int j = a; j < i - 1; j++) {
            c[j] = c[j + 1];
        }
        i--; // Reducir el contador de categorías

        printf("\nCategoria eliminada");
    } else {
        printf("\nCategoria no encontrada");
    }
}

// MOSTRAR CATEGORÍA
void mostrar_categoria() {
    int w;

    for (w = 0; w < i; w++) {
        printf("\n\n******************\n");
        printf("\nNombre de la categoria: %s", c[w].nombre);
        printf("\nNumero de trabajadores: %d", c[w].trabajadores);
        printf("\nCorreo electronico: %s", c[w].correo);
    }
}

// EDITAR CATEGORÍA
void editar_categoria() {
    char comp[200];
    int r;

    printf("\nIntroduce el nombre de la categoria a editar: ");
    fflush(stdin);
    gets(comp);

    for (r = 0; r < i; r++) {
        if (strcmp(c[r].nombre, comp) == 0) {
            printf("\nCategoria encontrada");

            printf("\nIntroduce el nuevo nombre de la categoria: ");
            fflush(stdin);
            gets(c[r].nombre);

            printf("\nIntroduce el nuevo numero de trabajadores: ");
            fflush(stdin);
            scanf("%d", &c[r].trabajadores);

            printf("\nIntroduce el nuevo correo electronico: ");
            fflush(stdin);
            gets(c[r].correo);

            printf("\nCategoria editada");
            break;
        }
    }

    if (r == i) {
        printf("\nCategoria no encontrada");
    }
}

// MAIN
int main() {
    int opciones;

    for (;;) {
        menu();

        printf("\nIntroduce una opcion: ");
        fflush(stdin);
        scanf("%d", &opciones);

        switch (opciones) {
            case 1:
                anadir_categoria();
                break;

            case 2:
                eliminar_categoria();
                break;

            case 3:
                mostrar_categoria();
                break;

            case 4:
                editar_categoria();
                break;

            case 0:
                printf("\nSaliendo...\n");
                return 0;
        }
    }
}
