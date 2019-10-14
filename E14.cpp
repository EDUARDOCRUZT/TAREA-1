//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
char le;
printf("INGRESE UNA LETRA_");
scanf("%c",&le);
switch(le){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("LA LETRA INGRESADA ES UNA VOCAL");
    break;
    default:
    printf("LA LETRA INGRESADA ES UNA CONSONANTE");
}
}
