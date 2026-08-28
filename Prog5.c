#include <stdio.h>

int main()
{
/*entradas tipo flotante ancho*/

//Salidas tipo flotante largo,perimetro, area//

float ancho, largo, perimetro, area; 
printf("Ingresa el ancho: ");
scanf("%f", &ancho);

largo = ancho / 3;
perimetro = 2 * (ancho + largo);
area = ancho * largo;

printf("Largo: %.3f\n", largo);
printf("Perimetro: %.3f\n", perimetro);
printf("Area: %.3f\n", area);

return 0;
}
