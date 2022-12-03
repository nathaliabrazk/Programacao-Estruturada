/* Desenvolva uma estrutura em C conforme o modelo abaixo e após crie as funções
solicitadas:
a) Cadastrar os dados.
b) Apresentar todos os dados.
c) Exibir a porcentagem de alunos aprovados e reprovados por turma, totalizados por
série.
d) Exibir a porcentagem de alunos do sexo masculino e do sexo feminino por turma,
totalizados por série.
e) Apresentar a média das idades de cada uma das séries.*/
#include<stdio.h>
typedef struct cadastro{
    
    float media;
    char nome[60], naturalidade[50], turma, sexo, aprovado;
    int matricula, serie, anoNasc;

} cadastro;

cadastroaluno[3];

void cadastraAluno(){

    for (int i = 0; i < 1; i++){

        printf("Numero da matricula: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("Nome: ");
        fgets(aluno[i].nome, 50, stdin);
        fflush(stdin);
        printf("Serie: ");
        scanf("%d", &aluno[i].serie);
        fflush(stdin);
        printf("Turma: ");
        scanf("%c", &aluno[i].turma);
        fflush(stdin);
        printf("Sexo: ");
        scanf("%c", &aluno[i].sexo);
        fflush(stdin);
        printf("Media: ");
        scanf("%f", &aluno[i].media);
        fflush(stdin);
        printf("Aprovado: ");
        scanf("%c", &aluno[i].aprovado);
        fflush(stdin);
        printf("Ano de nascimento: ");
        scanf("%d", &aluno[i].anoNasc);
        fflush(stdin);
        printf("Naturalidadde: ");
        fgets(aluno[i].naturalidade, 30, stdin);
        fflush(stdin);

        printf("\n");
    }
    
}

void printaCadastro(){

    for(int i = 0; i < 1; i++){

        printf("Nome: %s", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Serie: %d\n", aluno[i].serie);
        printf("Turma: %c\n", aluno[i].turma);
        printf("Sexo: %c\n", aluno[i].sexo);
        printf("Media: %.2f\n", aluno[i].media);
        printf("Arovado: %c\n", aluno[i].aprovado);
        printf("Ano de nascimento: %d\n", aluno[i].anoNasc);
        printf("Naturalideade: %s\n", aluno[i].naturalidade);

        printf("\n");
    }

}

void aprovados(){

    float countAprovados=0, countAlunos, countReprovados=0;
    int i;

    for(i = 0; i < 1; i++){

        if (aluno[i].aprovado == 's'){
            
            countAprovados++; 

        }
        else{
            countReprovados++;
        }
    }

    printf("Aprovados: %2.f porcento\n", (countAprovados/i)*100);

}

int main(void){

    int opt;

    do{
        printf("Menu\n");
        printf("[1]Cadastras aluno\n");
        printf("[2]Mostrar aluno\n");
        printf("[3]Porcentagem de alunos reprovados e aprovados \n");
        printf("[4]Porcentagem de homen e mulher\n");
        printf("[5]Media da idade\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            cadastraAluno();
            break;
        
        case 2:
            printaCadastro();
            break;
        
        case 3:
            aprovados();
            break;
        
        case 4:
            cadastraAluno();
            break;

        case 5:
            cadastraAluno();
            break;
        
        default:
            break;
        }
    }while (opt < 6 && opt > 0);
    
    
        

    


    return 0;
}