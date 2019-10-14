//CRUZ TAPIA EDUARDO  1AV6
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int x = 12, j = 5, k = 0;
if( 0 == x % 4 )
    for( j = 0 ; j < 10; j = j + 4)
    k = k + j;
else for(j = 0; j < 10; j = j + 2)
    k = k + j;
printf("EL VALOR FINAL DE LA VARIABLE K ES:%d",k);
///EL VALOR FINAL DE LA VARIABLE K ES: 12
}

