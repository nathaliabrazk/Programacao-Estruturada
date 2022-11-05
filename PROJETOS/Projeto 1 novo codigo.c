//incluir 1000 usuarios-OK
//edite um usuario-FALTA VALIDACAO NA ALTURA
//exclua um usuario-INCOMPLETO
//busque um usuario pelo email-PRECISA ARRUMAR A SAIDA
//imprima os usuarios cadastrados-FALTA
//backup-FALTA
//restauracao de dados-FALTA
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define tam 1000

int main(){
//Declaracao de todas as variaveis
int i=0, id[tam];//%d
char nome[tam][50], email[tam][50], sexo[tam][15], endereco[tam][50], emailBusca[tam][50]; //tipo %s
double altura[tam]; //%lf
char vacina [tam][4]; //%s
int menu;//%i
int x, j, editar, excluir;//%d
int vetor[] = {1, 2, 3, 4, 5};
int remove_num = 5;
int tamV = 5;

	do{
		printf("----------MENU----------\n\n");
		printf("1 - Cadastrar um usuario \n");
		printf("2 - Editar cadastro \n");
		printf("3 - Excluir cadastro \n");
		printf("4 - Buscar pelo email \n");
		printf("5 - Imprimir todos usuarios cadastrados \n");
		printf("6 - Realizar backup \n");
		printf("7 - Restaurar dados \n");
        printf("8 - Fechar o programa\n\n");
        printf("Digite a opcao desejada: ");
		fflush(stdin);
		scanf("%i", &menu);

		//switch para a escolha de acordo com o menu
		switch (menu){
		//case 1-cadastro de usuario
		case 1:
			id[i] = rand() %5000;
	    	printf("Usuario:%d\nID:%d\n", i+1,id[i]);
			//nome
			printf("Digite seu nome: ");
			fflush(stdin);
			fgets(nome[i],50,stdin);//usa-se para uma string onde o usuario vai digitar nome composto
        	printf("\n"); 
			//email
			printf("Digite seu email: ");
			scanf("%s", email[i]);
			getchar();
			//validacao do email
			if(strchr(email[i], '@') == 0){		
			printf("Email invalido\n");
			printf("Forneca um email valido contendo @: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
			}else{
			printf("Email valido\n\n");
			}
			//endereco
			printf("Digite seu endereco: ");
			fflush(stdin);
			fgets(endereco[i],50,stdin);
			printf("\n");
			//sexo
			printf("Informe seu sexo (Feminino, Masculino ou Nao declarar):");
            fflush(stdin);
            scanf("%s", &sexo[i]);
            //validacao do sexo
            if(strcmp(sexo[i], "Feminino") == 0 || strcmp(sexo[i], "Masculino") == 0 || strcmp(sexo[i], "Nao declarar") == 0){
                printf("Sexo valido\n\n");//nao esta imprimindo sexo valido nem invalido
            }else{
                printf("Sexo invalido\n\n");
            }
			//altura
			printf("Digite a altura: ");
			scanf("%lf", &altura[i]);
			//validacao de altura
			if(altura[i] > 1.00 && altura[i] < 2.00){
			printf("Altura valida\n");	
		 	}else{
		 	printf("Altura invalida\n");
			printf("Digite uma altura valida: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			printf("\n");
			}
			//vacina
			printf("Digite sim se voce foi vacinado ou nao, caso nao tenha sido: ");
			fflush(stdin);
			scanf("%s", &vacina[i]);
			//validacao de vacina	
			if (strcmp(vacina[i], "sim")==0){// o strcmp é utilizado para comparar uma string. "string comper"
			printf("Voce tomou a vacina!\n\n");		
			}else{
			printf("Voce nao tomou a vacina!\n\n");
			}
			i++;
			break;
			//case 2-editar alguma parte do registro
			case 2:
			printf("Deseja editar algum usuario?\n Digite 1 para sim ou 2 para nao: ");
            fflush(stdin);
            scanf("%d", &editar);

            if(editar == 1){
            int index, opcao;
            printf("Digite o index que voce deseja editar: ");
            fflush(stdin);
            scanf("%d", &index); 
			//impressao de opcoes para alteracao
            printf("----------MENU DE ALTERACAO----------\n");
			printf("10 - Nome\n");
			printf("11 - Email\n");
			printf("12 - Sexo\n");
			printf("13 - Endereco\n");
			printf("14 - Altura\n");
			printf("15 - Vacina\n");
			printf("Digite o numero da informacao do cadastro voce quer alterar: ");
            fflush(stdin);
            scanf("%d", &opcao);
			//alterar nome
			if(opcao==10){
				printf("Alterar nome: ");
	            fflush(stdin);
	            fgets(nome[index],50,stdin);
	            break; 
			}
			//alterar email
			if(opcao==11){
				printf("Alterar email: ");
	            fflush(stdin);
	            fgets(email[index],50,stdin);
		                
	            printf("\n%s", email[i]);
	            //validacao alterar email
	            if(strchr(email[index], '@') == 0){
	            printf("Email invalido\n");
	                
	            printf("Alterar email: ");
	            fflush(stdin);
		        fgets(email[index],50,stdin);
	            }
	            else{
	            printf("Email valido\n");
	            }
				break;
			}
			//alterar sexo
			if(opcao==12){
				printf("Alterar sexo: \n");
	            fflush(stdin);
	            scanf("%d",&sexo[i]);
				//validacao alterar sexo
	            if (strcmp(sexo[i],"feminino")==0){
				printf("Sexo invalido");
				}else {
				printf("Sexo valido");
				}
				i++;
	            break;
			}
			//alterar endereco
			if(opcao==13){
				printf("Alterar endereco: ");
		        fflush(stdin);
		        fgets(endereco[index],50,stdin);
		        break;
			}
			//alterar altura FALTA VALIDACAO
			if(opcao==14){
				printf("Alterar altura: \n ");
		        scanf("%lf", &altura[i]);
				break;
			}
			//alterar vacina
			if(opcao==15){
				printf("Alterar status de vacina: ");
				fflush(stdin);
				scanf("%s", &vacina[i]);
				if (strcmp(vacina[i], "sim")== 0){// o strcmp é utilizado para comparar uma string. "string comper"
				printf("voce tomou a vacina.\n");		
				}else{
			    printf("voce nao tomou a vacina.\n");
			    }
			    i++;
			    break;	 	
			}
			//case 3-excluir algum dado do registro INCOMPLETO
			case 3:
				for(i = 0; i < tamV; i++){
				if(vetor[i] == remove_num){
				vetor[i] = -1;
				}
				}for(i = 0; i < tamV; i++)
				{
				if(vetor[i] >= 0){
				printf("%d\n", vetor[i]);
				}
			//buscar dados de cadastro pelo email PRECISA ARRUMAR
			case 4:
			 	printf("\nDigite o email que deseja buscar: ");
           	 	scanf("%s", &emailBusca);
            	for(i=0;i<i;i++){
                
                if(strcmp(email[i], emailBusca[i])==0){
				printf("----------DADOS CORRESPONDENTES AO EMAIL----------");
                printf("/ID:%d\n",id[x]);
				printf("Nome:%s\n",nome[x]);
				printf("Email:%s\n",email[x]);
				printf("Endereco:%s\n",endereco[x]);
				printf("Sexo:%s\n",sexo[x]);
				printf("Altura:%.2lf\n",altura[x]);
				printf("Vacinado:%s\n",vacina[x]);
                fflush(stdin);
                break;




	
		}
		}

	}

}
}
}while(menu!=8);
}
