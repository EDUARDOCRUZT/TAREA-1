//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
    int a,b,c,x;
printf("INGRESE EL PRIMER TERMINO");
scanf("%d",&a);
printf("INGRESE EL SEGUNDO TERMINO");
scanf("%d",&b);
printf("INGRESE EL TERCER TERMINO");
scanf("%d",&c);
x=a;
if(b>x)
x=b;
if(c>x)
x=c;
printf("EL TERMINO MAYOR ES:%d\n",x);
}
