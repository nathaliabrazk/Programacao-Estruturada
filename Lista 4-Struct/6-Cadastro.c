/*Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com
os tipos básicos necessários.
a) Crie um vetor Cadastro com 5 elementos.
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros.
c) Encontre a pessoa com maior idade entre os cadastrados
d) Encontre as pessoas do sexo masculino
e) Encontre as pessoas com salário maior que 1000.
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
usuário
rua, bairro,cidade,estado,cep*/
#include<stdio.h>
//definicao struct endereco
struct endereco{
  char rua[50],bairro[50],cidade[50],estado[50];
};
//definicao struct cadastro
struct cadastro{

  struct endereco end;
  char nome[50],cpf[11],sexo;
  int salario,identidade,idade;
};

//main principal
int main (){
  int i, maior = -1,a,busca ;
  struct cadastro cliente[5];//A

  for (i=0;i<5;i++){//B
    
    printf("\n|INICIO DE CADASTRO|\n\n");
    printf("Digite o Nome:");
    fflush(stdin);
    fgets(cliente[i].nome,50,stdin);
    printf("\n");

    printf("Digite o CPF:");
    fflush(stdin);
    fgets(cliente[i].cpf,11,stdin);
    printf("\n");

    printf("Digite o sexo (M)asculino ou (F)eminino:");
    fflush(stdin);
    scanf("%c",&cliente[i].sexo,1,stdin);
    printf("\n");

    printf("Digite o Salario:");
    fflush(stdin);
    scanf("%d",&cliente[i].salario);
    printf("\n");

    printf("Digite a identidade:");
    fflush(stdin);
    scanf("%d",&cliente[i].identidade);
    printf("\n");

    printf("Digite a idade:");
    fflush(stdin);
    scanf("%d",&cliente[i].idade);
    printf("\n");

    printf("Digite a rua:");
    fflush(stdin);
    fgets(cliente[i].end.rua,50,stdin);
    printf("\n");

    printf("Digite a cidade:");
    fflush(stdin);
    fgets(cliente[i].end.cidade,50,stdin);
    printf("\n");

    printf("Digite o bairro:");
    fflush(stdin);
    fgets(cliente[i].end.bairro,50,stdin);
    printf("\n");

    printf("Digite o estado:");
    fflush(stdin);
    fgets(cliente[i].end.estado,50,stdin);
    printf("\n");
  }

  for(i=0;i<5;i++){

        if(cliente[i].idade > maior ){//C
        maior = cliente[i].idade;
        a=i;
        }

        if(cliente[i].sexo == 'm' || cliente[i].sexo == 'M'){//D
        printf("Cliente %d e do sexo Masculino:");
        }
        if (cliente[i].salario > 1000){//D
        printf("Cliente %d e do Recebe um salario Maior que 1000");
        }
        
    }

    //impressao de dados
    printf("A pessoa %d tem a maior idade com a idade: %d",a,maior);
    printf ("Digite a identidade para busca:");
    scanf("%d",&busca);

    //busca por identidade
    for (i=0;i<5;i++){
      if (busca == cliente[i].identidade){
        printf("A Pessoa %d e a que vc busca com a identidade de %d",i,cliente[i].identidade);
      }
      
    }
}
