//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int num,seg, hrs, mi;
printf("INGRESE LOS SEGUNDOS_");
scanf("%d",&num);
hrs=num/3600;
mi=(num-hrs*3600)/60;
seg=num-(hrs*3600+mi*60);
printf("%d HORAS   ",hrs);
printf("%d MINUTOS  ",mi);
printf("%d SEGUNDOS",seg);
}
