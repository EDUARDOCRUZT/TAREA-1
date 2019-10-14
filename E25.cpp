//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
char color;
printf("INGRESE LA INICIAL DE COLOR_");
scanf("%c",&color);
switch(color){
    case 'r':
    case 'R':
        printf("ROJO");
        break;
    case 'v':
    case 'V':
        printf("VERDE");
        break;
    case 'a':
    case 'A':
        printf("AZUL");
        break;
    default:
        printf("NEGRO");
        break;
}
}
