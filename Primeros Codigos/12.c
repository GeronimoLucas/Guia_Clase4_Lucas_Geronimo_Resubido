#include<stdio.h>
#include<stdlib.h>
int main()
{
int p1,p2,p3,idp,pob1,pob2,pob3,sup1,sup2,sup3,inp1,inp2,inp3;
printf("Ingrese los 3 paises");
scanf("%d %d %d",&p1,p2,p3);
printf("Ingrese cantidad de población de cada pais");
scanf("%d %d %d",pob1, pob2, pob3);
printf("Ingrese superficie del pais");
scanf("%d %d %d",sup1, sup2, sup3);
inp1=(p1/sup1);
inp2=(p2/sup2);
inp3=(p3/sup3);
sprintf("El indice de población de los tres paises son:\n %d \n %d \n %d",inp1, inp2, inp3);
return 0;
}
