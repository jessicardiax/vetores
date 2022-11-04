//Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
//denominado de A, e exibe os valores armazenados, porém na ordem inversa.

#include <stdio.h>
#include <locale.h>
 int main(){
     setlocale (LC_ALL,"portuguese");
     int i, A [8];
     //preenchimento do vetor A 
     for(i =0; i<8; i++){
         printf("digite o %iº valor:", i+1);
         scanf("%i",&A[i]);
     }
     //exibição do vetor A na ordem inversa 
     printf("*** VETOR A***\n");
     for(i=7; i>=0; i--){
         printf("%i", A[i]);
     }
     return 0;
 }