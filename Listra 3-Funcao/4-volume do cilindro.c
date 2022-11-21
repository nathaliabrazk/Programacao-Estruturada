/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula:
V=π*raio(ao quadrado)*altura
em que π = 3.1414592*/
#include<stdio.h>
//definicao da funcao 
int volumeCilindro(float a, float r){
int volume;
volume=3,1414592*r*r*a;
printf("Volume do Cilindro:%f",volume);
}
//main
int main(){
float a,r;
    printf("Informe a altura do cilindro:");
    scanf("%f",&a);
    printf("Informe o raio do cilindro:");
    scanf("%f",&r);
    volumeCilindro(a,r);
}