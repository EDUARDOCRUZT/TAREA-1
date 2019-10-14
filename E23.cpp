//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
int i=2,a;
printf("INGRSE UNA OPCION\n");
printf("1.-WHILE\n");
printf("2.-DO WHILE\n");
printf("3.-FOR\n");
scanf("%d",&a);
if(a==1){
while(i<98){
    i=i+3;
    printf("%d\n",i);
}
}
if(a==2){
do{
    i=i+3;
    printf("%d\n",i);
}while(i<98);

}

if(a==3){
for(int i=2;i<100;i=i+3){
    printf("%d\n",i);
}
}
}
