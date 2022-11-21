/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include<stdio.h>
//declaracao da funcao
int temperatura(double F){
    double c;
    c = (F-32.0)*(5.0/9.0);
    printf("\nTemperatura conertida em graus Celsius=%.2lf\n",c);
}
//main 
int main(){
    double F;
    printf("Informe a temperatura em grau Fahrenheit:");
    scanf("%lf",&F);
    temperatura(F);
}