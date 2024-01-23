#include <stdio.h>
#include <stdlib.h>
#include <string.h>






void Ej1(){ //Al igual que las funciones del repaso 3, puedes declararlas antes o después del main.

int x;

printf("Introduce un numero entero: "); fflush(stdin); scanf("%d",&x);

 if(x % 2 == 0){
    printf("El numero es par.");
 }else{
  printf("El numero es impar.");
 }


return 0;
}

















//Main -----------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{




printf("\nREPASO PARTE 4:");










//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nFuncion tipo void: --------------------------------------------------\n");
//Función tipo "void":

//La función void se suele utilizar para no usar mucho el main.



printf("\n\nEjemplo 1:\n");


 Ej1();











//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nPunteros: --------------------------------------------------\n");
//Punteros:


// Cuando utilizamos "&" en el "scnaf", indicamos la dirección.

//En cambio "*" señala el valor que hay en memoria.





printf("\n\nEjemplo 1:\n");

int y, *z;

y = 4;
z = &y; //Le damos a z el valor de la dirección de y.


printf("El valor de *z es %d.",*z);
















//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nArrays: --------------------------------------------------\n");
//Arrays:






printf("\n\nEjemplo 1:\n");

int v[]={2,5,7,8};




printf("El valor de la posicion 0 es: %d",v[0]); // (¡¡OJO!!) Recuerda que en c la primera posicion no es el "1", es el "0".
printf("\nEl valor de la posicion 2 es: %d\n",v[2]);
















printf("\n\nEjemplo 2:\n");

//   int v[]={2,5,7,8};
int i;

for(i = 0; i <= 3; i++){ //Este bucle "for", te muestra todos los valores de "v".


   printf("|%d|",v[i]); //Se pone v[i], para que cuando i aumente, te muestre el siguiente valor. (Por ejemplo, empieza con i=0 y el valor de v es 2. Después aumenta i a i=1 y el valor de v es 5)

}












printf("\n\nEjemplo 3:\n"); //Ejemplo, empieza a almacenar desde el "0"


int m[10]; // esto es lo mismo que m[]={0,0,0,0,0,0,0,0,0,0}
int w;

for (w = 0; w < 10; w++ ){ //También puedes declarar w dentro del for: for(int w = 0;....

  printf("Introduce un valor para la pisicion %d del vector:",w); fflush(stdin); scanf("%d",&m[w]);


}

printf("Los valores de m son:");


for (w = 0; w<10; w++ ){

     printf("|%d|",m[w]);

}
















printf("\n\nEjemplo 4:\n"); //Ejemplo empieza a almacenar desde el "1"


int h[11]; // esto es lo mismo que m[]={0,0,0,0,0,0,0,0,0,0}
int g;

for (g = 1; g < 11; g++ ){ //También puedes declarar w dentro del for: for(int w = 0;....

  printf("Introduce un valor para la pisicion %d del vector:",g); fflush(stdin); scanf("%d",&h[g]);


}

printf("Los valores de m son:");


for (g = 1; g<11; g++ ){

     printf("|%d|",h[g]);

}

















//-----------------------------------------------------------------------------------------------------------------------
//Vectores con punteros:


printf("\n\nEjemplo 5 (Vectores con punteros):\n");


int vec[]={2,4,6,4};
int n;

for(n = 0; n < 4; n++){


   printf("|%d|", *(vec+n)); // *(vec+n) es igual a vec[0] que a su vez es *(vec+0)


}





fflush(stdin);
//--------------------------------------------------------------------------------------------------------------------------
// Matriz en C


printf("\n Los ejemplos de la parte de matrices, están en un documento aparte.\n");













printf("\n\n\nHola, espero que te haya ayudado este codigo, si quieres la parte 5, escribe a enriquebraquehaisdelara@gmail.com");
printf("\nEste documento es de uso pribado, por lo que si se comparte sin permiso, sera denunciado.\n\n");


    return 0;
}
