//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
float r,c,a;
int x;
printf("INGRESE UNA OPCION:\n");
printf("1.- CALCULAR EL VALOR DE LA CIRCUNFERENCIA DEL CIRCULO\n");
printf("2.- CALCULAR EL VALOR DEL AREA DEL CIRCULO\n");
scanf("%d",&x);
if(x==1){
printf("INGRESE EL VALOR DEL RADIO DEL CIRCULO:_\n");
scanf("%f",&r);
c=(2*3.1416)*r;
printf("EL VALOR DE LA CIRCUNFERENCIA ES:%f",c);
}
else{
    printf("INGRESE EL VALOR DEL RADIO DEL CIRCULO:_\n");
scanf("%f",&r);
a=(3.1416)*r*r;
printf("EL VALOR DEL AREA DEL CIRCULO ES:%f",a);
}
}
