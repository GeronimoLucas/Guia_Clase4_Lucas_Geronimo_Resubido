#include<stdio.h>
#include<stdlib.h>
int main()
{
int h,m,s,udf,cuent;
printf("Ingrese hora, minutos, seguntos");
scanf("%d %d %d",&h, &m, &s);
printf("ingrese unidad final");
scanf("%d",udf);
if (udf=1)
{
cuent=((h*3600)+(m*3600)+s);
scanf("%d",cuent);
sprinf("son:\n %d",cuent);
}
else
if (udf=2)
{
cuent=((h*60)+(s/60)+m);
scanf("%d",cuent);
sprinf("son:\n %d",cuent);
}
else
cuent=((m/60)+(s/3600)+h);
scanf("%d",cuent);
sprinf("son:\n %d",cuent);
return 0;
}
