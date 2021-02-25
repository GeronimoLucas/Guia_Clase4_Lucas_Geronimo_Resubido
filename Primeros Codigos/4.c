#include<stdio.h>
#include<stdlib.h>
int main()
{
int P,F,A;
printf("Ingrese la fuerza sobre la superficie");
scanf ("%d",&F);
printf("ingrese el area de la superficie");
scanf ("%d",&A);
P=F/A;
system ("cls");
printf("La presion sobre la superficie es de:\n %d",P);
return 0;
}
