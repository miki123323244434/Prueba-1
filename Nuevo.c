#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Manejo de archivos en lenguaje c */
/* Lectura de archivos */
/* Flujo de datos FILE */

/* PROGRAMA -> CANAL -> DISCO_DURO -- Escritura */
/* PROGRAMA <- CANAL(FLUJO DE DATOS) <- DISCO_DURO -- LECTURA */

int main(){
FILE * flujo = fopen("Jala.txt","rb");
if (flujo == NULL) {
    perror("Error en la apertura del archivo");
    return 1;
}
char caracter; //Byte
while (feof(flujo) == 0){
        caracter = fgetc(flujo);
        printf("%c", caracter);
}

fclose(flujo);
printf("\n\n Se ha leido el archivo correctamente..");

char operator;
  double firstNumber, secondNumber;

  printf("Gasto cardiaco (*) : ");
  scanf("%c", &operator);

  printf("Colocar VS FC : ");
  scanf("%lf %lf", &firstNumber, &secondNumber);

  switch(operator)
  {

    case '*':
      printf("sqrt(pow(%.1lf,2) * pow(%.1lf,2) = %.1lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
      break;

    default:
      printf("Operator is not correct");
  }



return 0;
}




