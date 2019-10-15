//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
float l,p;
printf("INGRESE LA CANTIDAD DE LITROS CONSUMIDOS:_");
scanf("%f",&l);
if(l<=50){
printf("EL MONTO A PAGAR ES DE: $0.00")
}
if(l>70){
    if(l<200){
    p=l*10;
    printf("EL MONTO A PAGAR ES DE:$ %f",p);
    }
}
if(l>=200){
    p=l*20;
    printf("EL MONTO A PAGAR ES DE:$ %f",p);
}
if(l<=70,l>50) {
printf("EL MONTO A PAGAR ES DE:$200.00");
}
}

