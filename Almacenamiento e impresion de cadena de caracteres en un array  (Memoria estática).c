//------------------------------------------------------------------------------------------------------------------|
// El código permite al usuario guardar hasta 10 textos en un array y ver todos los textos almacenados.
//------------------------------------------------------------------------------------------------------------------|

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct almacen {

    char texto[500];

};


int Menu(){
int opcion;
printf("\n\n****MENU****:");
printf("\n1. Guardar texto.");
printf("\n2. Textos guardados.");
printf("\nIntroduce una opcion: "); scanf("%d",&opcion);
return opcion;
}



int main(){

int opcion;
struct almacen a[10];
int i = 0;
int j = 0;


for(;;){

    opcion = Menu();

switch(opcion){


case 1:

if (i<10){

    printf("\nEscribe lo que quieras: "); fflush(stdin);  fgets(a[i].texto, 500, stdin);



    printf("\nTexto introducido: %s", a[i].texto);
    i++;
}else{

    printf("\nLIMITE ALCANZADO.");
}

    break;


case 2:

printf("\n\nTextos almacenados:\n");


for(j = 0; j<i;j++){

       printf("%d Texto introducido: %s",j+1,a[j].texto);
}

    break;



        }
    }
}




