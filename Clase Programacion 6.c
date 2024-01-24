#include <stdio.h>
#include <stdlib.h>







typedef struct{

float matematicas;
float lengua;
float ingles;



}notas;



void introducir_notas (notas *not){ //Como "*not" es un puntero, en el "scanf" se pone "->" en vez de punto.     Si quisieras imprir en el void las notas, en vez de punto también seria "->".

printf("Introduzca la nota de matematicas: "); fflush(stdin); scanf("%f",&not->matematicas);
printf("Introduzca la nota de lengua: "); fflush(stdin); scanf("%f",&not->lengua);
printf("Introduzca la nota de ingles: "); fflush(stdin); scanf("%f",&not->ingles);




}






void dar_notas(notas nots[]){

int t;
for(t = 1; t <= 3; t++){
printf("\nAlumno %d:\n",t);
printf("Introduzca la nota de matematicas: "); fflush(stdin); scanf("%f",&nots[t].matematicas);
printf("Introduzca la nota de lengua: "); fflush(stdin); scanf("%f",&nots[t].lengua);
printf("Introduzca la nota de ingles: "); fflush(stdin); scanf("%f",&nots[t].ingles);
}



}



















int main()
{

    printf("\nREPASO PARTE 6:\n");






  printf("\n\n\n\n\nPunteros a estructuras y funciones con estructuras: --------------------------------------------------\n");
//Punteros a estructuras y funciones con estructuras:





printf("\n\nEjemplo 1:\n"); //El codigo sirve para almacenar las notas de un alumno.


 notas not;

 introducir_notas(&not);



printf("\nLa nota de matematicas es: %.2f",not.matematicas);
printf("\nLa nota de lengua es: %.2f",not.lengua);
printf("\nLa nota de ingles es: %.2f",not.ingles);






printf("\n\nEjemplo 2:\n"); //Utilizo los mismos valores que antes.


notas nots[3];

dar_notas(nots);

int r;


printf("\n**********************\n");

for(r = 1; r <= 3; r++){
printf("\n\nAlumno %d:\n",r);
printf("\nLa nota de matematicas es: %.2f",nots[r].matematicas);
printf("\nLa nota de lengua es: %.2f",nots[r].lengua);
printf("\nLa nota de ingles es: %.2f",nots[r].ingles);
}





    return 0;
}
