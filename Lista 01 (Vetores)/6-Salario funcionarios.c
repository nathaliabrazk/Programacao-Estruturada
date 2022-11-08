/*Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os
dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser
obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa*/
#include<stdio.h>
//declaracao da variavel que define os vetores
int qf;

//funcao para definir o maior salario
float maior(float salario[qf]){//inicio da funcao maior
float maior = 0.0;
    
    for ( int i = 0; i < qf; i++){//inicio for
        if (salario[i] > maior ){//inicio if
           maior = (salario[i]);
        }//final if
    }//final for
   return maior;
}//final funcao maior

//funcao para definir o menor salario
float menor(float salario[qf]){//inicio da funcao menor
float menor = 100000.00000;

for(int i=0;i<qf;i++){//inicio for
    if(salario[i]<menor){//inicio if
        menor=(salario[i]);
    }//final if
}//final for
return menor;
}//final funcao menor
 
int main (){
    //declaracao de variaveis com vetor
    char matricula[qf];
    float salario[qf],biger,smaller;

    //do while para definicao dos vetores
    do{
    printf("Informe a quantidade de funcionarios: ");
    scanf("%d",&qf);
    printf("\n");

    //validacao para definir o maximo de funcionarios que no caso e 100
    if(qf<0){
        printf("Informe um numero valido!\n");
    }
    if(qf>100){
        printf("Quantidade maxima de funcionarios e 100!\n");
    }
    }while(qf<0||qf>100);
    
    for (int i = 0; i < qf; i++){
       fflush(stdin);
       printf("Me forneca a matricula do funcionario |%d|:",i+1);
       scanf("%c",&matricula[i]);
       fflush(stdin);
       printf("Me forneca o salario do funcionario |%d|:",i+1);
       scanf("%f",&salario[i]);
       printf("\n");
    }
    
    biger = maior(salario);
    //impressao do maior salario
    printf("\nO maior salario e %.2f",biger);

    smaller = menor(salario);
    //impressao do menor salario
    printf("\nO menor salario e %.2f",smaller);
      
}
