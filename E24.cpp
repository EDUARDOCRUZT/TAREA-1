//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int indicador;
printf("INGRESE EL VALOR DEL INDICADOR DEL 1 AL 4_");
scanf("%d",&indicador);
switch(indicador){
    case 1:
        printf("CALOR");
        break;
    case 2:
        printf("TEMPLADO");
        break;
    case 3:
        printf("FRIO");
        break;
    case 4:
        printf("FUERA DE RANGO");
        break;
}
}
