#include <conio.h>
#include <stdio.h>
#include <math.h>

int main (){
 int saldo=10000;
 int op, monto;
 do{
  printf ("Cajero automatico\n");
  printf ("1- Consultar saldo inicial\n");
  printf ("2- Retirar efectivo\n");
  printf ("3- SALIR\n");
  scanf ("%d", &op);
  switch (op){
   case 1:
    printf ("Su saldo inicial es de:%d\n",saldo);
    break;
   case 2:
    printf ("Ingrese monto a retirar\n");
    scanf ("%d", &monto);
    saldo=saldo-monto;
    printf ("Su nuevo saldo es de:%d\n",saldo);
    break;
  }  
 }
 while (op!=3);
 
 return 0;
}
