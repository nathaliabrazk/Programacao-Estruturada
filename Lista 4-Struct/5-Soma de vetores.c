/* Considerando a estrutura abaixo para representar um vetor, implemente um programa
que calcule a soma de dois vetores, sabendo que: A + B = < (a1 + a2), (b1 + b2), (c1 + c2)
>
struct vetor{
int a;
int b;
int c;
};*/
#include<stdio.h>
//definicao de struct
struct dados{
  int a,b,c;
};

int main(){
struct dados vetor[2];
  int i,resultado[3];

  for ( i = 0; i < 3; i++){
    printf("Digite o valor de A:");
    scanf("%d",&vetor[i].a);

    printf("Digite o valor de B:");
    scanf("%d",&vetor[i].b);

    printf("Digite o valor de C:");
    scanf("%d",&vetor[i].c);
  }
  resultado[0]=vetor[0].a + vetor[1].a;
  resultado[1]=vetor[0].b + vetor[1].b;
  resultado[3]=vetor[0].c + vetor[1].c;

}