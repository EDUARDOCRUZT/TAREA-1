//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,c,d,e,f,g,h,i,j,x,y,m;

printf("INGRESE EL PRIMER TERMINO\n");
scanf("%f",&a);
printf("INGRESE EL SEGUNDO TERMINO\n");
scanf("%f",&b);
printf("INGRESE EL TERCER TERMINO\n");
scanf("%f",&c);
printf("INGRESE EL CUARTO TERMINO\n");
scanf("%f",&d);
printf("INGRESE EL QUINTO TERMINO\n");
scanf("%f",&e);
printf("INGRESE EL SEXTO TERMINO\n");
scanf("%f",&f);
printf("INGRESE EL SEPTIMO TERMINO\n");
scanf("%f",&g);
printf("INGRESE EL OCTAVO TERMINO\n");
scanf("%f",&h);
printf("INGRESE EL NOVENO TERMINO\n");
scanf("%f",&i);
printf("INGRESE EL DECIMO TERMINO\n");
scanf("%f",&j);
x=a;
if(b>x)
x=b;
if(c>x)
x=c;
if(d>x)
x=d;
if(e>x)
x=e;
if(f>x)
x=f;
if(g>x)
x=g;
if(h>x)
x=h;
if(i>x)
x=i;
if(j>x)
x=j;
printf("EL MAYOR TERMINO ES:%f\n",x);
y=a;
if(b<y)
y=b;
if(c<y)
y=c;
if(d<y)
y=d;
if(e<y)
y=e;
if(f<y)
y=f;
if(g<y)
y=g;
if(h<y)
y=h;
if(i<y)
y=i;
if(j<y)
y=j;
printf("EL MENOR TERMINO ES:%f\n",y);
m=(a+b+c+d+e+f+g+h+i+j)/10;

printf("EL VALOR DE LA MEDIA ES:%f\n",m);
}
