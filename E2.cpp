//CRUZ TAPIA EDUARDO  1AV6
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(void){
    int m=5, n=2;
    bool c;
    ///PRIMER INCISO
    c=(n+m)==2;
    printf("%d\n",c); //C=0
    ///SEGUNDO INCISO
        c=(n>m)==!(m==5);
        printf("%d\n",c); //C=1
    ///TERCER INCISO
    c=(m%n)>5;
    printf("%d\n",c); //C=0
    ///CUARTO INCISO
        c=((m-n)*10)%4==1;
        printf("%d\n",c); //C=0
}

