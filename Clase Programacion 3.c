#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//-------------------
// REPASO PARTE 3
//-------------------





//Declaramos una función.
int maxima(){


printf("\nEstoy dentro de la funcion maxima.\n");



//Si lo descomentas no compila, porque para maxima, x e y no están declaradas.
/*

printf("El valor de x e y es:");
printf("x = %d",x);
printf("y = %d",y);

*/

return 0;
}








//Fincion para segundo ejemplo.
int ej2 (){


//Aunque hagas " ej2(x,y);  " no va a funcionar.
/*

printf("\nEl valor de x e y es:");
printf("\nx = %d",x);
printf("\ny = %d\n",y);

*/

return 0;
}










//Fincion para el tercer ejemplo.
int ej3 (int x, int y){

printf("x = %d",x);
printf("\ny = %d",y);

return 0;
}











//Fincion para el cuarto ejemplo.
int ej4 (int a, int b){        //   a = x || b = y

printf("x = %d",a);
printf("\ny = %d",b);

return 0;
}








//Fincion para el quinto ejemplo.
int ej5 (int t, int r){        //   a = x || b = y

int total;

total = t + r;

return total; //Devuelve el valor de total.

}

















// MAIN ------------------------------------------------------------------------------------------------
int main()
{







     printf("\nREPASO PARTE 3:");








//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nFunciones: --------------------------------------------------\n");
//Funciones:



    maxima();            //Llamamos a la función, dentro del "main" si no, no imprime lo que hay en la función.

    printf("\nEstoy dentro de main.\n");










printf("\n\nEjemplo 1:\n");

int x,y;

x = 10;
y = 5;



printf("\nLas variables declaradas en el main, no pueden ser utilizadas en otras funciones.\n");

printf("\nEl valor de x e y es:");
printf("\nx = %d",x);
printf("\ny = %d\n",y);
















printf("\n\nEjemplo 2:\n");


// Esto no funciona.   ej2(x,y);
















printf("\n\nEjemplo 3:\n");

//Variables declaradas en el ejercicio 1
/*

int x,y;

x = 10;
y = 5;

*/

ej3(x,y);
















printf("\n\nEjemplo 4:\n");

//Variables declaradas en el ejercicio 1
/*

int x,y;

x = 10;
y = 5;

*/

ej4(x,y);














printf("\n\nEjemplo 5:\n");


//Variables declaradas en el ejercicio 1
/*

int x,y;

x = 10;
y = 5;

*/




int resul;


resul = ej5(x,y);
printf("El resultado es: %d",resul);



printf("\n");






printf("\n\n\nHola, espero que te haya ayudado este codigo, si quieres la parte 4, escribe a enriquebraquehaisdelara@gmail.com");
printf("\nEste documento es de uso pribado, por lo que si se comparte sin permiso, sera denunciado.\n\n");



    return 0;
}
