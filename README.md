
#include <stdio.h>


typedef struct {
  unsigned int mat; 
  char nombre[20];
  char apellido[20];
}alumno_t;

int main( int argc, char *argv[])
{

FILE *fileBin;
char dato='X';
char dato1 = 10;
int i=0;
char ii=0;
alumno_t Alumno[5];

  fileBin =  fopen(argv[1], "wb");

  if (fileBin == NULL){
     puts("Error al crear archivo");
     return 1;
   }
 

for(i=0; i<3; i++){
   printf("alumno %d \n:",i);
   scanf("%d", &Alumno[i].mat);
   scanf("%s", Alumno[i].nombre);
   fwrite(&Alumno[i],sizeof(alumno_t),1,fileBin);
}

 fclose(fileBin);

 return 0;
}


