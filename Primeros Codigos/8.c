#include<stdio.h>
#include<stdlib.h>
int main()
{
int hora,edad,tsin,tcon,precio,costo_hora;
printf("Ingrese cantidad de horas de servicio");
scanf("%d",&hora);
precio=(hora*50);
scanf("%d",&costo_hora);
printf("Ingrese cantidad de años que tiene");
scanf("%d",&edad);
if (edad>=70)
{
tsin=(precio/2);
scanf("%d",&tsin);
}
else{
if (edad>=60)
tsin=((precio/100)*30);
scanf("%d",tsin);
}
else
if (edad>=50)
tsin=((precio/100)/20);
scnanf("%d",&tsin);
}
else
tcom=((precio*100)/33);
scanf("%d",&tcon);
printf("importe sin impuesto:\n %d",tsin);
prinft("impote con impuesto:\n %d",tcon
return 0;
}
