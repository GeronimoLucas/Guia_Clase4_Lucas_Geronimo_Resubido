#include<stdio.h>
#include<stdlib.h>
int main()
{
int kg,IMC,alt;
printf("Ingrese su peso en kg ");
scanf("%d",&kg);
prinf("ingrese su altura en metros");
scanf("%d",&alt);
IMC=(kg/alt*alt);
if (IMC<20)
{
printf("su indice de masa corporal es de peso bajo");
scanf("%d",&alt);
}
else
{
if (IMC>25)
prinft("su indice de masa corporal es de pesoescedido");
scanf("%d",&IMC);
else
prinft("su inice de masa corporal es de peso ideal");
return 0;
}
