#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SUMA 1
#define RESTA 2
#define Divicion 3
#define Multiplicacion 4
#define R_C 5
#define cuadrado1 6

//declaraciones de funciones
void EntradaNumeros(float *n1,float *n2);
float suma(float n1, float n2);
float resta(float n1, float n2);
float divicion(float n1, float n2);
float multiplicacion(float n1, float n2);
float raiz_cuadrada(float f_result);
float cuadrado (float n1, float n2);
//variable global
int menu = 0;

int main()
{
    // *operador de indireccion
    // &operador de direccion
    //ambito de variable

    float dato_1 = 0.0;
    float dato_2 = 0.0;
    float result = 0.0,f_result = 0.0;;
    double raiz_result = 0.0;
    double resulado00 = pow (dato_1,2);


    do
    {
        printf("\n0-Salir\n1-Suma\n2-Resta\n3-Divicion\n4-Multiplicacion\n5-raiz cuadrada de un numero\n6-El cuadrado de un numero");
        printf("\nIntroduzca una opcion deacuerdo al numero:");
        scanf("%i",&menu);

        //verifica si es suma
        if(menu == SUMA)
        {
            //parametros por referencia
            EntradaNumeros(&dato_1,&dato_2);
            //parametros por valor
            result = suma(dato_1, dato_2);
            printf("\nLa suma de %f mas %f es: %f\n\n",dato_1,dato_2,result);
        }

      if(menu == RESTA)
       {
            EntradaNumeros(&dato_1,&dato_2);
            result = resta (dato_1,dato_2);
            printf("\nLa resta de %f menos %f es: %f\n\n",dato_1,dato_2,result);
        }
         if(menu == Divicion)
       {
            EntradaNumeros(&dato_1,&dato_2);
            result = divicion(dato_1,dato_2);
            printf("\nLa divicion de %f entre %f es: %f\n\n",dato_1,dato_2,result);
        }
         if(menu == Multiplicacion)
       {
            EntradaNumeros(&dato_1,&dato_2);
            result = multiplicacion(dato_1,dato_2);
            printf("\nLa multiplicacion de %f por %f es: %f\n\n",dato_1,dato_2,result);
        }
        if(menu == R_C)
       {
            EntradaNumeros(&raiz_result,&f_result);
            result = raiz_cuadrada (f_result);
            printf("\nLa raiz cuadrada de %f es: %f\n\n",f_result,result);
        }
         if(menu == cuadrado1)
       {
           EntradaNumeros(&dato_1,&dato_2);
            result = cuadrado(dato_1,dato_2);
            printf("\nel numero %f al al cuadrado es: %f\n\n",dato_1,result);
        }
    }
    while(menu != 0);

    printf("\n\nFin de programa\n\n");
    return 0;
}
//vamos pasar parametros por referencia
void EntradaNumeros(float *n1,float *n2)
{

         printf("\nIngresa el primer dato:");
    scanf("%f",n1);
    printf("\nIngresa el segundo dato:");
    scanf("%f",n2);

}


//vamos a pasar parametros por valor
float suma(float n1, float n2)
{
    float result = 0.0;
    float v;
    result = n1 + n2;
    return result;
}

float resta(float n1, float n2)
{
    float result = 0.0;
    result = n1 - n2;
    return result;
}

float divicion (float n1, float n2)
{
    float result = 0.0;
    result = n1 / n2;
    return result;
}
float multiplicacion(float n1, float n2)
{
    float result = 0.0;
    result = n1 * n2;
    return result;
}
float raiz_cuadrada(float f_result)
{
    float raiz_result = 0.0;
    raiz_result = sqrt (f_result);
    return raiz_result;
}
float cuadrado(float n1, float n2)
{


    float result = 0.0;
 //  result = sqrt(resulta00);
    return result;
}
