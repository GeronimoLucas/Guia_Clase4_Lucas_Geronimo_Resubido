#include<stdio.h>
#include<stdlib.h>
int main()
{
int RTOTAL, R1, R2, R3, R4, R5;
printf("Ingrese las 5 resistencias");
scanf ("%d %d %d %d %d”", &R1, &R2, &R3, &R4, &R5);
RTOTAL=R1+R2+R3+R4+R5;
system ("cls");
printf("Resistencia uno es:\n %d",R1);
printf("Resistencia dos es:\n %d",R2);
printf("Resistencia tres es:\n %d",R3);
printf("Resistencia cuatro es:\n %d",R4);
printf("Resistencia cinco es:\n %d",R5);
printf("Resistencia total es de:\n %d", RTOTAL);
return 0;
}
