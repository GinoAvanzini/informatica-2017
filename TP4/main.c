//
//  main.c
//  Informatica-2017
//

#include <stdio.h>
#include "ejercicios.h"

typedef int boolean;
#define TRUE 1
#define FALSE 0
boolean bandera=TRUE;
int main() {
   int ejercicio;

   do{
      printf("Ingrese el número del ejercicio a ejecutar:\n");
       scanf(" %d",&ejercicio);
       switch (ejercicio) {
               case(1):
                 ej1();
               break;
               case(2):
                 ej2();
               break;
               case(3):
                 ej3();
               break;
               case(4):
                  ej4();
               break;
               case(5):
                 ej5();
               break;
               case(6):
                  ej6();
               break;
               case(7):
                  ej7();
               break;
               case(8):
                  ej8();
               break;
               case(9):
                  ej9();
               break;
               case(10):
                  ej10();
               break;
               case(11):
                  ej11();
               break;
               case(12):
                  ej12();
               break;
               case(13):
                  ej13();
               break;
               case(14):
                  ej14();
               break;
           default:
               printf("No existe tal ejercicio o no esta hecho\n");
       } char resp;
         printf("\nDesea ejecutar otro ejercicio?? Y/N\n");
         scanf(" %c",&resp);
      switch (resp){
         case('y'):
         case('Y'):
            break;
         default:
            bandera=FALSE;
         }
}   while(bandera);
   printf("Donde esta Santiago Maldonado?");
return 0;
}

