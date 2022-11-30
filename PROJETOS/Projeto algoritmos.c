//Solicite a quantidade de sessões, aceitando exatamente 2 (duas) sessões. OK
//Solicite a quantidade de pessoas que assistiram ao filme, não aceitando valor inferior 10 OK
//Para cada pessoa que assistiu ao filme deverá ser solicitado e validado o sexo (M -masculino, F - Feminino) e a idade (de 3 a 100 anos) - OK
//Apresentar ao usuário apenas as opções Inteira e Meia (0,4 ponto), e somar o valor arrecadado na sessão, considerando que a inteira custa R$50,00 e a meia R$25,00-OK
//o nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme-falta nome do filme
//Depois da leitura dos dados de cada sessão, deverá ser mostrada a quantidade de pessoas maiores de idade (idade maior ou igual a 18 anos) do sexo M e F presentes-juntar a idade e o sexo para a impressao
//Informar o valor total arrecadado em cada sessão e informar se houve mais pagamento de inteira que de meia entrada

#include <stdio.h>
#include<string.h>

int main (){
//declaracao de variaveis
    int i=0;
    int sessoes,pessoas[10], idade[100];
    int Inteira = 0, Meia = 0;
    int quantidade;//quantidade 
    int masculino = 0, feminino = 0, opcao; 
    int ingresso,maior_idade_f=0,maior_idade_m,maior_idade;
    float total_inteira=0,total_meia=0, inteira=0, meia=0,total_im=0;//dinheiro
    char filme[2][100], sexo [100][20];

    //definicao da quantidade de sessoes
    do {
        printf ("Me forneca a quantidade de sessoes:");
        scanf ("%d", &sessoes);
        //validacao da quantidade de sessoes(no minimo 2)
        if (sessoes != 2)
            printf("Valor invalido, digite novamente!\n");
            
    }while (sessoes != 2);

        //definicao da quantidade de pessoas que assistiram o filme
        printf("Me forneca o numero de pessoas que assistiram o filme: ",filme[i]);
        scanf ("%d", &pessoas[i]);

        do{
        //validacao da quantidade de pessoas que assistiram o filme(minimo 10)
        if (pessoas<10)
        {
            printf("Valor invalido, digite novamente:");
        }

        }while(pessoas<10);
       
        //definicao do sexo 
        do{
            printf ("A pessoa e do sexo Masculino ou Feminino(M-F)? : ");
            fflush (stdin);//Limpa o Lixo de Memoria para strings.
            scanf ("%s", &sexo);

            //validacao do sexo
            if(sexo[i]!='M'||sexo[i]!='F'){
            printf("Sexo invalido, digite novamente:");
            }

            //contagem sexo
            if(sexo=='M'){
                masculino++;
            }else if(sexo=='F'){
                feminino++;
            }

        }while(sexo!='M'||sexo!='F');
        
       
         //definicao da idade
        do{
            printf("Forneça a idade de cada pessoa: \n");
            scanf("%d", &idade[i]);

            //validacao da idade  
            if (idade[i] < 3 || idade[i] > 100)
            {
            printf("Idade inválida, digite novamente!");
            }

            //validacao para contar pessoas maiores de 18
            if(idade>=18){
                maior_idade++;
            }
        }while(idade[i]<3 || idade[i]>100);
       
    //impressao da valores para ingresso
    printf("-----|VALORES|-----\n Inteira = R$ 50.00 \n Meia = R$ 25.00 \n "); //valor já definido para o usuário escolher 
    
    //validacao inteiro e meia
    do
    {
    printf("Informe o ingresso desejado(i = inteiro/m = meia):");
    scanf("%d", &ingresso);
    printf("\n");

    //validacao ingresso
    if(ingresso!='i'||ingresso!='m'){
        printf("Invalido, digite novamente!");
    }
    //contagem de inteiras e meias
    if(ingresso=='i'){
        inteira++;
    }else if(ingresso=='m'){
        meia++;
    }

    }while(ingresso!='i'||ingresso!='m');

    //calculo para definir o valor arrecadado 
    total_inteira==inteira*50;
    total_meia==inteira*25;
    //valor total da sessao
    total_im==total_inteira+total_meia;

    //IMPRESSAO DE RESULTADOS
    printf("\n----------TABELA----------\n");
    printf("Quantidade de pessoas maiores de idade do sexo feminino:");
    printf("Quantidade de pessoas maiores de idade do sexo masculino:");
    printf("Valor total arrecadado=%.2f",total_im);

}