//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
int x=2;
int y=80;
int z=3;
int c,v,b,n,m;
c=x==1;
printf("%d\n",c);
//EL VALOR DE LA VARIABLE ES: 0
v=!(y==80);
printf("%d\n",v);
//EL VALOR DE LA VARIABLE ES: 0
b=(x > y) || (z < 2 *x);
printf("%d\n",b);
//EL VALOR DE LA VARIABLE ES: 1
n=( y % x) > (x == 1);
printf("%d\n",n);
//EL VALOR DE LA VARIABLE ES: 0
m=(x < y) ^ (x == 2 ) || (z > 0);
printf("%d",m);
//EL VALOR DE LA VARIABLE ES: 1
}

