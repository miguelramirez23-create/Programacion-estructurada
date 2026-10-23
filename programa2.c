#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura solicitada
typedef struct {
    unsigned int Matricula;
    char Nombre[20];
    char ApellidoP[20];
    char ApellidoM[20];
    int Edad;
    float Promedio;
} Alumno_t;

int main(int argc, char *argv[]) {
    // Validar que se hayan pasado los argumentos necesarios
    if (argc != 3) {
        printf("Uso: %s <nombre_archivo.bin> <cantidad_alumnos>\n", argv[0]);
        return 1;
    }

    // Obtener parámetros de la línea de comandos
    char *nombre_archivo = argv[1];
    int cantidad_alumnos = atoi(argv[2]);

    if (cantidad_alumnos <= 0) {
        printf("Error: La cantidad de alumnos debe ser un número entero mayor a 0.\n");
        return 1;
    }

    // Abrir el archivo en modo escritura binaria ("wb")
    FILE *archivo = fopen(nombre_archivo, "wb");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    printf("--- Captura de %d alumno(s) ---\n", cantidad_alumnos);

    // Capturar y escribir los datos directamente en el archivo
    for (int i = 0; i < cantidad_alumnos; i++) {
        Alumno_t alumno;
        printf("\n[Alumno %d]\n", i + 1);

        printf("Matrícula: ");
        scanf("%u", &alumno.Matricula);
        
        printf("Nombre (máx 19 caracteres): ");
        scanf("%19s", alumno.Nombre);
        
        printf("Apellido Paterno (máx 19 caracteres): ");
        scanf("%19s", alumno.ApellidoP);
        
        printf("Apellido Materno (máx 19 caracteres): ");
        scanf("%19s", alumno.ApellidoM);
        
        printf("Edad: ");
        scanf("%d", &alumno.Edad);
        
        printf("Promedio: ");
        scanf("%f", &alumno.Promedio);

        // Guardar la estructura actual en el archivo binario
        fwrite(&alumno, sizeof(Alumno_t), 1, archivo);
    }

    // Cerrar el flujo del archivo
    fclose(archivo);
    printf("\n¡Archivo '%s' creado y guardado con éxito!\n", nombre_archivo);

    return 0;
}
