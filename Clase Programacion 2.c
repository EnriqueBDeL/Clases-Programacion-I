#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{

    printf("\nREPASO PARTE 2:");







//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nEl operador interrogacion: --------------------------------------------------\n");
//El operador "?"(Condicional):

printf("\nEjemplo:\n");

int numero;

printf("\nIntroduce un numero: ");  fflush(stdin); scanf("%d",&numero);

(numero % 2 == 0) ? printf("El numero es par.") : printf(" El numero es impar."); //"?" sirve para hacer comprobación, si ocurre la condición, se imprime el primer mensaje, si no, el segundo.








//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nSentencia while: --------------------------------------------------\n");
//Sentencia while(bucle):










printf("\nEjemplo 1:\n");

int contador;

contador = 1; //Devemos siempre inicializar la variable que se va a usar en la sentencia "while".(En este caso "contador")


while (contador <= 10){     //Mira si la variable "contador" es menor igual a 10, en el caso de que lo sea, se le suma uno a contador y así, hasta que el contador sea 10 o mayor.
    printf("\n%d",contador);

    contador++; //Sirve para incrementar 1 a la variable. (Ejemplo: primero contador es uno y después de esto, es dos, porque se le suma 1.
}





printf("\n"); //Hace lo mismo que los saltos "\n" pero sin escribir nunguna palabra o numero.










printf("\nEjemplo 2:\n");


int contador1;

contador1 = 10; //Devemos siempre inicializar la variable que se va a usar en la sentencia "while".(En este caso "contador")


while (contador1 >= 1){     //Mira si la variable "contador" es mayor igual a 1, en el caso de que lo sea, se le resta uno a contador1 y así, hasta que el contador sea 1 o menor.
    printf("\n%d",contador1);

    contador1--; //Hace lo contrario a "contador++"
                 //(¡¡OJO!!)Si no aumentas o decreces la variable, se te creará un bucle infinito



}







printf("\n");





//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nSentencia for: --------------------------------------------------\n");
//Sentencia for(bucle):









printf("\nEjemplo 1:\n");

int contador2;


for(contador2 = 1; contador2 <= 10; contador2++){ //Lo que hace en este caso es: 1º Declarar el valor de la variable que se va a utilizar, 2º Hasta cuando se va a repetir el bucle y 3º Incremento en uno la variable.

  printf("\n%d", contador2);


}









printf("\n\nEjemplo 2:\n");

int contador3;


for(contador3 = 10; contador3 >= 1; contador3--){ //Lo que hace en este caso es: 1º Declarar el valor de la variable que se va a utilizar, 2º Hasta cuando se va a repetir el bucle y 3º Incremento en uno la variable.

  printf("\n%d", contador3);


}








printf("\n\nEjemplo 3:\n");



int contador4;


for(contador4 = 1; contador4 <= 5; contador4++){

  printf("\nNo debo llegar tarde a clase.");


}




//--------------------------------------------------------------------------------------------------------------------------------------------------
// Si quieres realizar un bucle infinito que no termine nunca, debes dejar lo que hay dentro del parentesis en blanco:  for(;;){}
//--------------------------------------------------------------------------------------------------------------------------------------------------




printf("\n");












//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\n\n\n\n\nBucle do while: --------------------------------------------------\n");
//Bucle do while(bucle):




printf("\nEjemplo 1:\n");


int k = 1;


do{

   printf("\n%d",k);

    k++;

}while(k <= 10);










printf("\n\nEjemplo 2:\n");


char opcion;


do{

    printf("\nHola");
    printf("\n Escriba 's' para saludar: "); fflush(stdin); scanf("%c",&opcion);

}while(opcion == 's' || opcion == 'S');  // "||"Equivale a un "o". (Si ocurre esto o eso , ocurre algo)

                                        //En estre caso el bucle no tiene fin.












printf("\n\n\nHola, espero que te haya ayudado este codigo, si quieres la parte 3, escribe a enriquebraquehaisdelara@gmail.com");
printf("\nEste documento es de uso pribado, por lo que si se comparte sin permiso, sera denunciado.\n\n");


    return 0;
}
