//CRUZ TAPIA EDUARDO  1AV6
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
int b1000=1000,b500=500,b200=200,b100=100,b50=50,b20=20,m10=10,m5=5,m2=2,m1=1,y,w,r,u,o,a,d,g,j,l,c;
float m050=0.50,x,q,e,t,i,p,s,f,h,k,z;
printf("INGRESE LA CANTIDAD:_");
scanf("%f",&x);
for(;;)
y=x/b1000;
if(y==1){
    printf("%d BILLETE DE $1000\n",y);
}else{
printf("%d BILLETES DE $1000\n",y);
}
q=x-(y*1000);
w=q/b500;
if(w==1){
    printf("%d BILLETE DE $500\n",w);
}else{
printf("%d BILLETES DE $500\n",w);
}
e=q-(w*500);
r=e/b200;
if(r==1){
    printf("%d BILLETE DE $200\n",r);
}else{
printf("%d BILLETES DE $200\n",r);
}
t=e-(r*200);
u=t/b100;
if(u==1){
    printf("%d BILLETE DE $100\n",u);
}else{
printf("%d BILLETES DE $100\n",u);
}
i=t-(u*100);
o=i/b50;
if(o==1){
    printf("%d BILLETE DE $50\n",o);
}else{
printf("%d BILLETES DE $50\n",o);
}
p=i-(o*50);
a=p/b20;
if(a==1){
    printf("%d BILLETE DE $20\n",a);
}else{
printf("%d BILLETES DE $20\n",a);
}
s=p-(a*20);
d=s/m10;
if(d==1){
    printf("%d MONEDA DE $10\n",d);
}else{
printf("%d MONEDAS DE $10\n",d);
}
f=s-(d*10);
g=f/m5;
if(g==1){
    printf("%d MONEDA DE $5\n",g);
}else{
printf("%d MONEDAS DE $5\n",g);
}
h=f-(g*5);
j=h/m2;
if(j==1){
    printf("%d MONEDA DE $2\n",j);
}else{
printf("%d MONEDAS DE $2\n",j);
}
k=h-(j*2);
l=k/m1;
if(l==1){
    printf("%d MONEDA DE $1\n",l);
}else{
printf("%d MONEDAS DE $1\n",l);
}
z=k-(l*1);
c=z/m050;
if(c==1){
    printf("%d MONEDA DE $0.50\n",c);
}else{
printf("%d MONEDAS DE $0.50\n");
}
}
