//Librerías ---------------------------------------------------------
#include <stdio.h> //.h es un header(cabecera)
#include <stdlib.h>
#include <string.h>



//Macros-----------------------------------------------------
#define Peras 2 // Al escribir en alguna sentencia la palabra "Peras" el valor siempre va a ser "2", no necesitas escribir 2.






//--------------------------------------------------------------------------
// Todo lo que escribas depués de "//" no se compila ya que es un comentario

// Todo lo que escribas entre"/*" y "*/" no se compila ya que es un comentario
//---------------------------------------------------------------------------





//Variables Globales -----------------------------------------------------------------------------

int y = 5; //Es una variable que se puede utilizar dentro de cualquier función.








//Función main (Función principal "obligatoria") ---------------------------------------------------------------------------------------
int main()
{




//Variables -----------------------------------------------------------------------------
int x = 10; //"int" solo se puede utilizar para numeros enteros ( numeros sin decimales/ numeros sin coma).
            //Le da el valor 10 a "x".
            //Solo se puede utilizar "x" en "int main", porque esta escrita dentro.


float w = 2.34; //"float" solo se puede utilizar para numeros decimales.
                //Le da el valor 2,34 a "w".
                //Solo se puede utilizar "x" en "int main", porque esta escrita dentro.
                //En C, la "," se un numero decimal, es un "."

char a = 'e'; //"char" se utiliza para designar caracteres.
                //En este caso "a" equivale al carcter "e".




//Sentencias de escritura -----------------------------------------------------------------------------
    printf("Hello world!\n"); //Imprime lo que hay entre comillas en pantalla.
                            // "\n" Hace un salto de linea en la parte de atrás (Lo mismo que un enter).

    printf("\nHello world!"); //Imprime lo que hay entre comillas en pantalla.
                            // "\n" Hace un salto de linea en la parte de delante.

    printf("\nHello world!\n"); //Puedes poner un salto alante y atras.

    printf("\n\nHello world!\n\n"); //Puedes poner mas de un salto alante y atras.






//Operaciones vasicas ------------------------------------------------------------------------------

printf("\nx = %d\n",x);
printf("\ny = %d\n",y);
printf("\nw = %f\n",w);


printf("\n\n\nSuma con int: --------------------------------------------------\n");

//Suma (Entero):
int suma = 0;

suma = x + y; //El resultado de x+y lo almacena en suma. (suma deja de ser 0 para pasar a ser el resultado de la suma)

printf("La suma es: %d", suma); //"%d" sirve para imprimir numeros enteros.
                                //suma sirve para decir que numero quieres imprimir.











printf("\nSuma con float: --------------------------------------------------");

//Suma (Decimal):
float suma2 = 0;

suma2 = x + w; //El resultado de x+y lo almacena en suma. (suma deja de ser 0 para pasar a ser el resultado de la suma)

printf("\nLa suma es: %f", suma2); //"%f" sirve para imprimir numeros decimales.
                                //suma2 sirve para decir que numero quieres imprimir.

printf("\nLa suma es: %.1f", suma2); // si pones "%.1f" o incrementas el numero, te saldran el numero de decimales que has puesto en "%f".











printf("\n\n\nResta con int: --------------------------------------------------\n");

//Resta(Entero):
int resta = 0;

resta = x - y;

printf("La resta es: %d", resta);





printf("\nResta con float: --------------------------------------------------\n");

//Resta(decimal):
float resta2 = 0;

resta2 = x - y;

printf("La resta es: %f", resta2);
printf("\nLa resta es: %.1f", resta2);





printf("\n\n\nMultiplicacion con int: --------------------------------------------------\n");

//Multiplicación(Entero):
int multiplicacion = 0;

multiplicacion = x * y;

printf("La multiplicacion es: %d", multiplicacion);








printf("\nMultiplicacion con float: --------------------------------------------------\n");

//Multiplicación(decimal):
float multiplicacion2 = 0;

multiplicacion2 = x * y;

printf("La multiplicacion es: %f", multiplicacion2);
printf("\nLa multiplicacion es: %.1f", multiplicacion2);








printf("\n\n\nDivision con int: --------------------------------------------------\n");

//Division(Entero):
int division = 0;

division = x / y;

printf("La division es: %d", division);




printf("\nDivision con float: --------------------------------------------------\n");

//Division(decimal):
float Division2 = 0;

Division2 = x / y;

printf("La multiplicacion es: %f", Division2);
printf("\nLa multiplicacion es: %.1f", Division2);




//Para calcular el resto de la división hay que itlizar "%".






printf("\n\n\n\n\nCaracter: --------------------------------------------------\n");
//Imprimir caracter:
printf("a = %c",a);




printf("\n\n\n\n\nIntroducción de datos: --------------------------------------------------\n");

//Las tres variables valen 0, ya que no se determina su valor.
int i,p,s; //Puedes declarar varias variables de esta forma.(Todas valen 0)
float f;
char c;
char palabra[50]; //"[50]"es el espacio maximo que ocupa la palabra.


//Introducir int:
printf("Introduce un numero (sin decimales): "); scanf ("%d",&i);
printf("i = %d",i);

//Introducir float:
printf("\nIntroduce un numero (con decimales): "); scanf ("%f",&f);
printf("f = %f",f);


//Introducir char:
printf("\nIntroduce un caracter: "); fflush(stdin); scanf ("%c",&c);  //"fflush(stdin)" sirve para vaciar el espacio de introducción de datos. si en este caso lo quitas, no podras introducir el caracter.
printf("c = %c",c);

//Introducir una palabra:
printf("\nIntroduce una palabra: "); fflush(stdin); scanf ("%s",palabra);  //Como es muy grande el valor introducido, no hace falta el "&".
printf("palabra = %s",palabra); //"%s" significa que va a imprimir un string, que es una cadena de caracteres.

//Guardar cadena de caracteres:
printf("\nIntroduce dos palabras: "); fflush(stdin); gets(palabra); //Con el "gets" obtienes todo, inlcuyendo el espacio y lo que continua.
printf("palabra = %s",palabra);

//Introducir varias variables int:
printf("\nIntroduce tres numeros (sin decimales)(Ejemplo: 10 5 4): "); scanf ("%d %d %d",&i,&p,&s);
printf("i = %d | p = %d | s = %d",i,p,s); //El orden de las variables, es el mismo en el que se va a imprimir en los %d





printf("\n\n\n\n\nOperador de asignacion: --------------------------------------------------\n");
//Operador de asignación:
int b;
b = 10;
 printf("\nEl valor de b es: %d\n",b);



//Estas dos operaciones dan los mismo:
 b += 10; // Es lo mismo que hacer:   b = b + 10;

//Estas dos operaciones dan los mismo:
 b -= 5; // Es lo mismo que hacer:   b = b - 5;

//Estas dos operaciones dan los mismo:
 b *= 2; // Es lo mismo que hacer:   b = b * 2;

 //Estas dos operaciones dan los mismo:
 b /= 2; // Es lo mismo que hacer:   b = b / 2;










//----------------------------------------------------------------------------------------------------------------------------------------------------------------

 printf("\n\n\n\n\nSentencia if: --------------------------------------------------\n");
 //Sentencia "if" (condicionales):

 printf("\nEjemplo 1:\n");

 int numero1, numero2;



 printf("Introduce dos numeros: "); fflush(stdin); scanf("%d %d",&numero1,&numero2);


 if( numero1 % numero2 == 0){ //Dentro de los parentesis debes escribir la condicion.

printf("El numero %d es divisible entre %d.",numero1,numero2);   //En este caso, si el resto del numero1 y numero2 es "0" se imprime que son divisibles.

 }

// Si no lo es no dice nada.


 //---------------------------------------------------------------------------------------------------------------------------------------------------
 printf("\n\nEjemplo 2:\n");

 int n1, n2;


 printf("Introduce dos numeros: "); fflush(stdin); scanf("%d %d",&n1,&n2);

 if (n1 > n2){

    printf("%d es mayor que %d",n1,n2);
 }
 if(n1 < n2){

    printf("%d es menor que %d",n1,n2);
 }


//---------------------------------------------------------------------------------------------------------------------------------------------------
 printf("\n\nEjemplo 3:\n");

 int r1, r2;


 printf("Introduce el codigo secreto: "); fflush(stdin); scanf("%d %d",&r1,&r2);

 if (r1 == 10 && r2 == 11){ // "&&" Es como escribir "y", asi que en este caso si escribes 10 y 11 escribe "printf("%d y %d son el codigo secreto",n1,n2)"  si no, el otro.

    printf("%d y %d son el codigo secreto",r1,r2);
 }

// Si no lo es, no dice nada.












//---------------------------------------------------------------------------------------------------------------------------------------------------
 printf("\n\n\n\n\nSentencia if-else: --------------------------------------------------\n");
 //Sentencia "if-else" (condicionales):

 printf("\nEjemplo 1:\n");

 int e1;



 printf("Introduce la nota del alumno: "); fflush(stdin); scanf("%d",&e1);


 if( e1 > 4){ //Dentro de los parentesis debes escribir la condicion.

printf("Aprobado.");

 } else{              //"else" se ejecuta si no se cumple lo que hay dentro del "if"
printf("Suspenso.");
 }








//---------------------------------------------------------------------------------------------------------------------------------------------------
 printf("\n\n\n\n\nSentencia switch: --------------------------------------------------\n");
 //Sentencia "switch" (condicionales):


printf("\nEjemplo 1:\n");

int opc;

  printf("\n1. Color favorito.");
  printf("\n2. Comida favorita.");
  printf("\n3. Animal favorito.");

printf("\nIntroduce una opcion: ");  fflush(stdin); scanf("%d",&opc);


switch(opc){

//1. Color favorito
case 1:
    printf("Azul Oscuro");
    break;

//2. Comida favorita
case 2:
    printf("Paella");
    break;

//3. Animal favorito
case 3:
    printf("Camaleon");
    break;

// Ninguna de las tres opciones (Esta se puede omitir y que no ponga nada cuando escribes una opción que no existe)
default:
    printf("Opción no valida");

}




//switch con char:
printf("\nEjemplo 2:\n");

char opcion;

  printf("\nA. Nombre.");
  printf("\nB. Cumpleaños.");
  printf("\nC. Santo");

printf("\nIntroduce una opcion: ");  fflush(stdin); scanf("%c",&opcion);


switch(opc){

//1. Color favorito
case 'A':
    printf("Enrique");
    break;

//2. Comida favorita
case 'B':
    printf("15/07");
    break;

//3. Animal favorito
case 'C':
    printf("13/07");
    break;

}



printf("\n\n\nHola, espero que te haya ayudado este codigo, si quieres la parte 2, escribe a enriquebraquehaisdelara@gmail.com");
printf("\nEste documento es de uso pribado, por lo que si se comparte sin permiso, sera denunciado.\n\n");


    return 0;
}
