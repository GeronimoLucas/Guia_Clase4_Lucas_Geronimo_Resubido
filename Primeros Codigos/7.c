#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1,num2;
printf("Ingrese primer numero");
scanf("%d",&num1);
printf("Ingrese segundo numero");
scanf("%d",&num2);
if (num1>num2)
{
printf("El primer numero ingresado es mayor:\n %d",num1);
}
else
{
if (num1=num2)

printf("Los dos numeros ingresados son iguales:\n %d \n%d",num1, num2);
}
else
{
printf("El segundo numero ingresado es mayor: \n %d",num2);
}
return 0;
}
