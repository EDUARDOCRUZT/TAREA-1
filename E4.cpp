//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
float a,A,p,w;
printf("INGRESE SU ALTURA EXPRESADA EN METROS\n");
scanf("%f",&a);
printf("INGRESE SU PESO\n");
scanf("%f",&p);
A=a*100;
w=(A-100+(p*0.1))*0.9;
printf("EL PESO RECOMENDADO ES:%fKg",w);
}

