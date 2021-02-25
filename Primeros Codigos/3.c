#include<stdio.h>
#include<stdlib.h>
int main()
{
int H,M,porcenH,porcenM,total;
printf("Ingrese la cantidad de mujeres");
scanf ("%d",&M);
printf("ingrese la cantidad de hombres");
scanf ("%d",&H);
total=H+M;
porcenM=M*100/total;
porcenH=H+100/total;
system ("cls");
printf("El porcentaje de mujeres que han enviado su curricular postulándose para un puesto es de:\n %d",porcenM);
printf("EL porcentaje de hombres que han enviado su curricular postulándose para un puesto es de:\n %d",porcenH);
return 0;
}
