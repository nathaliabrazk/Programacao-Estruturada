/*Escreva uma função para o cálculo do volume de uma esfera
V=4/3*π*r(ao cubo)
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/
#include<stdio.h>
#include<math.h>
//funcao
int volume(float raio){
float volume;
volume = 4/((3*PI)*pow(raio,3));
printf("Volume e %.2f",volume);
}
//main
int main (){
    float raio;
    
    printf("Digite o raio:");
    scanf("%f",&raio);
    volume(raio);
}