//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("INGRESE EL NUMERO");
scanf("%d",&n);
bool primo=1;
for(int i=2; i<n&&primo==1; i++){
    if(n%i==0) primo=0;
}
if(primo==0){
    printf("EL NUMERO INGRESADO NO ES PRIMO");
} else {
printf("EL NUMERO INGRESADO ES PRIMO");
}
}
