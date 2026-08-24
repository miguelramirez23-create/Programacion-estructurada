#include<studio.h>
#include<stdlib.h>
int main()
{
  float horasd1, horasd2, horasd3, horasd4;
float sueldo1, sueldo2, sueldo3, sueldo4;
printf("horas trabajadas en dia 1 ($3.20/h): ");
scanf("%f", &horasd1);
printf("horas trabajadas en dia 2 ($4.10/h): ");
scanf("%f", &horasd2);
printf("horas trabajadas en dia 3 ($3.80/h): ");
scanf("%f", &horasd3);
printf("horas trabajadas en dia 4 ($2.95/h): ");
scanf("%f", &horasd4);
sueldoT=sueldo1+sueldo2+sueldo3+sueldo4;
printf("sueldo dia 1: $%.3f\n", sueldod1);
printf("sueldo dia 2: $%.3f\n", sueldod2);
printf("sueldo dia 3: $%.3f\n", sueldod3);
printf("sueldo dia 4: $%.3f\n", sueldod4);

return 0
}
