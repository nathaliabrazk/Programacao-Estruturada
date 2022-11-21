/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
IMC=peso/(altura*altura)*/
#include<stdio.h>
//funcao
int indiceMassaC(float peso,float altura){
int IMC;
IMC=peso/pow(altura,2);
printf("IMC=%f",IMC);
}
//main
int main(){
float peso;
float altura;

printf("Informe o peso:");
scanf("%f",&peso);
printf("Informe a altura:");
scanf("%f",&altura);
indiceMassaC(peso, altura);
}