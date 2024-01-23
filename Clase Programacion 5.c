#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Función menu
int Menu(int opciones){

printf("\n\n****Menu***\n");
printf("1.Strings.\n");
printf("2.Estructuras.\n");
printf("3.Ejercicios varios.\n");
printf("0.Salir.\n");


return opciones;
}






//Funcion Ejercicio 2 (Strings)


void funcion ( char c1[]){


int n, i;


n = strlen(c1);                 //"strlen" te da el numero de caracteres que tiene un string. "strlen" no cuenta el "\0"



for ( i = 0; i < n; i++){ //Lo que hace este codigo es sustituir la "e" (minusculas) de la oración por espacios " ".

    if(c1[i] == 'e'){

    c1[i] = ' ';
    }


}


}

















//Para declarar una estructura se debe escribir "typedef struct"



//Ejemplo 1 estructuras
typedef struct{


int paginas;
char nombre[50];
float precio;



}libro; // enntre el corchete y el punto y como pones el nombre de la estructura.











//Ejempplo 2 estructuras.


typedef struct{


int modelos;
char nmarca[50];
float ingresos;



}coche;












//Ejercicio formulario


typedef struct{

char nombre[50];
char empleo[50];
int edad;

}formulario;





















//Main
int main()
{

    printf("\nREPASO PARTE 5:\n");



 //Comandos del menú:
 int opciones;






for(;;){



Menu(opciones);

printf("\nIntroduce una opcion: "); fflush(stdin); scanf("%d", &opciones);

switch(opciones){











//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------








case 1: //1.String

printf("\n\n\n\n\nCadena de caracteres (string): --------------------------------------------------\n"); //Sirve para almacenar frases.
//Cadena de caracteres "string":









printf("\n\nEjemplo 1:\n");

char vector[13]; //Ejemplo: Hola que tal  <--- Recuerda que se cuentan las letras, los espacios y el carcacter "\0" que siempre está en los strings (ocupa un espacio)(Representa el final de un string).

char vector2[13];


printf("Introduce una frase: "); fflush(stdin); gets(vector); //si haces un scanf, solo se va ha quedar lo que halla hasta que vea un espacio.


printf("Introduce una frase: "); fflush(stdin); gets(vector2);



if(strcmp(vector, vector2)== 0){ //"strcmp" sirve para ver si la primera orción es igual a la segunda.   "strcmp" solo se puede usar si has puesto la libreria "#include <string.h>"

    printf("Las dos oraciones son iguales.");

}else{

 printf("Las dos oraciones NO son iguales.");

}




















printf("\n\nEjemplo 2:\n");


char c1[]="Espero que te esten gustando mis apuntes"; //Puedes declarar el texto de un char de esta manera.



funcion(c1);



printf("%s\n",c1);










    break;









//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




case 2: // Estructuras

printf("\n\n\n\n\nEstructuras: --------------------------------------------------\n");
//Estructuras:







    printf("\n\nEjemplo 1:\n");



        libro HP; //"HP" es una variable de tipo libro, por lo que tiene acceso a todas las variables de la estructura libro.
                    //HP es Harry Potter, por lo que puedes llamar a la variable como quieras.


        libro JP, SA; //Puedes declarar multiplrd variables de la estructura libro de esta manera.



//Harry Potter

         HP.paginas =  50;    //Lo que hace " HP.paginas" es acceder a la variable paginas de la estructura de libro. (Recuerda que HP está por así decirlo vinculada con libro)

        strcpy(HP.nombre, "Harry Potter"); //"strcopy" sirve para copiar informacion dentro del string. En este caso copia Harry Potter y lo pega en HP.nombre

        HP.precio = 29.99;




//Jurassic Park

        JP.paginas =  120;

        strcpy(JP.nombre, "Jurassic Park");

        JP.precio = 45;





    printf("\nNombre del libro: %s\n",HP.nombre);
    printf("Numero de paginas: %d\n",HP.paginas);
    printf("Precio: %.2f\n",HP.precio);

    printf("\n**************************************\n");

    printf("\nNombre del libro: %s\n",JP.nombre);
    printf("Numero de paginas: %d\n",JP.paginas);
    printf("Precio: %.2f\n",JP.precio);
















    printf("\n\nEjemplo 2:\n");

//Las estructuras también pueden ser vectores

int k;

 coche mercedes[10]; //"mercedes" cuenta con 10 estructuras diferentes



for ( k = 0; k <10; k++){

    mercedes[k].ingresos = 25 + k;

    printf("El ingreso del modelo %d es de %f\n",k, mercedes[k].ingresos);

}













    printf("\n\nEjemplo 3:\n"); //Ejercicio formulario


    formulario f1,f2;


    printf("\n****Formulario 1****\n");
    printf("\nIntroduzca nombre: "); fflush(stdin); fgets(f1.nombre,50,stdin); //"...,50,stdin" si no pones esto se satura el programa y no compila.
    printf("Introduzca empleo: "); fflush(stdin); fgets(f1.empleo,50,stdin);
    printf("Introduzca edad: ");   fflush(stdin); scanf("%d", &f1.edad); //El "fgets" es exclusivo de cadenas de texto.


    printf("\n****Formulario 2****\n");
    printf("\nIntroduzca nombre: "); fflush(stdin); fgets(f2.nombre,50,stdin);
    printf("Introduzca empleo: "); fflush(stdin); fgets(f2.empleo,50,stdin);
    printf("Introduzca edad: ");   fflush(stdin); scanf("%d", &f2.edad); //El "fgets" es exclusivo de cadenas de texto.


    printf("\n\nEl nombre de f1 es: %s",f1.nombre);
    printf("\nEl nombre de f2 es: %s",f2.nombre);

    printf("\n\nEmpleo de f1: %s",f1.empleo);
    printf("\nEmpleo de f2: %s",f2.empleo);

    printf("\n\nEdad de f1: %d",f1.edad);
    printf("\nEdad de f2: %d",f2.edad);



    break;



//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





case 3:



    printf("\n\n\n\n\nEjercicios varios (con string): --------------------------------------------------\n");
//Ejercicios varios:




  printf("\n\nEjemplo 1:\n");//Este codigo, cuenta el numero de vocales de una frase proporcionada por el sistema.



char texto[]="Espero que te esten alludando estos apuntes";

int nu,in,si;

si = 0;


nu = strlen(texto);


for(in = 0; in<nu; in++){

 if(texto[in] == 'a' ||texto[in] == 'e' ||texto[in] == 'i' || texto[in] == 'o' ||texto[in] == 'u' ||texto[in] == 'A' || texto[in] == 'E' ||texto[in] == 'I' ||  texto[in] == 'O' || texto[in] == 'U' ){

    si++;

 }

}



printf("\nOracion: Espero que te esten alludando estos apuntes.");
printf("\nNumero de vocales: %d\n",si);









//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------








    printf("\n\nEjemplo 2:\n");






char pi[50];

int wi,ai,bi;
bi = 0;



printf("Introduce una oracion: "); fflush(stdin); gets(pi);

wi = strlen(pi);


for(ai = 0; ai<wi; ai++){

 if(pi[ai] == 'a' || pi[ai]  == 'e' || pi[ai]  == 'i' || pi[ai]  == 'o' ||pi[ai]  == 'u' ||pi[ai]  == 'A' || pi[ai]  == 'E' ||pi[ai]  == 'I' ||  pi[ai]  == 'O' ||  pi[ai]  == 'U' ){

    bi++;

 }

}


printf("\nOracion: %s.",pi);
printf("\nNumero de vocales: %d\n",bi);



















    break;


case 0:



printf("Saliendo...\n\n");
return 0;










    break;
}

}



printf("\n\n\nHola, espero que te haya ayudado este codigo, si quieres la parte 6, escribe a enriquebraquehaisdelara@gmail.com");
printf("\nEste documento es de uso pribado, por lo que si se comparte sin permiso, sera denunciado.\n\n");




    return 0;
}
