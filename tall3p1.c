#include<stdio.h>

int main()
{
    void Convercion(float pesos,float yenes*,float dolares*,float libesterlinas*,float euros*);
float pesos,yenes,dolares,libesterlinas,euros;
scanf("%f",&pesos);
yenes*=pesos*9.25;
dolares*=pesos*0.059;
libesterlinas*=pesos*0.044;
euros*=pesos*0.051;
Conversion(pesos, &yenes, &dolares, &libesterlinas, &euros);

return 0
}
