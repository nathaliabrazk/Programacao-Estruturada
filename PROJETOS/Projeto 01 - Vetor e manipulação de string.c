//incluir 1000 usuarios-OK
//edite um usuario-OK
//busque um usuario por email-OK
//imprima os usuarios cadastrados-OK
//backup-OK
//excluir dados de registro-OK
//restauracao de dados-OK
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1000

int main(){
//Declaracao de todas as variaveis

//variaveis %d/%i
int i=0, menu, x, j, editar, index, excluir, repete=1, contador=1, cadastro=1, cadastroBacku,opcaoMenuAlterar, cadastroBackup;
//variaveis %d com vetores
int id[TAM],idBackup[TAM], vacina [TAM][4],vacinaBackup[TAM][4];
//variavies %s
char nome[TAM][50], email[TAM][50], sexo[TAM][15], endereco[TAM][50], emailBusca[TAM][50];//%s
char nomeBackup[TAM][50], emailBackup[TAM][50], sexoBackup[TAM][15],enderecoBackup[TAM][50];//%s
char alturaBackup[TAM];
//variavies %lf
double altura[TAM];

for(cadastroBackup = 0; cadastroBackup < 10; cadastroBackup++){
	printf("%d", cadastroBackup);
}

//inicio
do{
	printf("\n----------MENU----------\n\n");
	printf("1 - Cadastrar um usuario\n");
	printf("2 - Editar cadastro \n");
	printf("3 - Buscar dados de usuario por email\n");
	printf("4 - Iprimir todos suarios cadastrados\n");
	printf("5 - Realizar backup de dados\n");
	printf("6 - Excluir dados de registro\n");
	printf("7 - Restaurar dados\n");
    printf("8 - Fechar o programa\n\n");
    printf("Digite a opcao desejada: ");
	fflush(stdin);
	scanf("%i", &menu);
    printf("\n");

    //escolha do case de acordo com o menu
    switch (menu){
        id[i] = rand() %5000;
	    printf("Usuario:%d\nID:%d\n", i+1,id[i]);

        //case 1-registro de todos os dados
        case 1:
		//nome
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(nome[i],50,stdin);//usa-se para uma string onde o usuario vai digitar nome composto
        printf("\n"); 
		//email
		printf("Digite seu email: ");
		scanf("%s", email[i]);
		getchar();
        //validacao de email
        if(strchr(email[i], '@') == 0){
            printf("Email invalido\n");
			printf("Forneca um email valido contendo @: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
        }else{
            printf("Email valido!\n\n");
        }//fim do else de validacao de email

        //endereco
            printf("Digite seu endereco: ");
			fflush(stdin);
			fgets(endereco[i],50,stdin);
			printf("\n");
        //sexo
            printf("Informe seu sexo (Feminino, Masculino ou Nao declarar):");
            fflush(stdin);
            scanf("%s", &sexo[i]);
        //validacao de sexo
        if(strcmp(sexo[i], "Feminino") == 0 || strcmp(sexo[i], "Masculino") == 0 || strcmp(sexo[i], "Nao declarar") == 0){
            printf("Nao declarar");
        }else{
            printf("Sexo valido!\n\n");
        }//fim da validacao do sexo

        //altura
			printf("Digite a altura: ");
			scanf("%lf", &altura[i]);
        //validacao da altura
        if(altura[i] > 1.00 && altura[i] < 2.00){
            printf("Altura valida!\n\n");
        }else{
            printf("Altura invalida\n");
			printf("Digite uma altura valida: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			printf("\n");
        }//fim da validacao de altura

            //vacina
            printf("Digite 1 se voce foi vacinado ou 0, caso nao tenha sido: ");
			fflush(stdin);
			scanf("%d", &vacina[i]);
        //validacao de vacina
        if(vacina[i]==0){
            printf("Voce nao tomou a vacina!\n\n");		
        }else{
            printf("Voce tomou a vacina!\n\n");
        }//fim da validacao de vacina
        break;

        //case 2-Edicao de registro
        case 2:
        printf("Deseja editar algum usuario?\n Digite 1 para sim ou 2 para nao: ");
        fflush(stdin);
        scanf("%d", &editar);

        
        printf("Deseja inserir um usuário?  1 para sim ou 0 para nao: ");
        fflush(stdin);
        ("%d", &repete);

        if(repete==0){
             printf("Pessoas cadastradas %d\n",cadastro);
             break;//break do repetir      
        }
        cadastro ++;
        break;
        contador=cadastro;
        break;

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
        scanf("%d", &opcaoMenuAlterar);

        //alterar nome
        if(opcaoMenuAlterar==10){
            printf("Alterar nome: ");
	        fflush(stdin);
	        fgets(nome[index],50,stdin);
        }
         break;//break do nome

            //alterar email
            if(opcaoMenuAlterar==11){
                printf("Alterar email: ");
                fflush(stdin);
                fgets(email[index],50,stdin);
                //impressao de email alterado
                printf("\n%s", email[i]);

                //validacao de alterar email
                if(strchr(email[index], '@') ==0){
                    printf("Email invalido!\n");

                    printf("Digite um email valido para alterar: ");
	                fflush(stdin);
		            fgets(email[index],50,stdin);
                }else{
                    printf("Email valido!\n");
                }//fim da validacao do alterar email

            }//fim do alterar email
                break;//break do alterar email

                    //alterar sexo
                    if(opcaoMenuAlterar==12){
                        printf("Alterar sexo: \n");
                        fflush(stdin);
                        scanf("%d",&sexo[i]);
                        //validar sexo alteracao
                        if(strcmp(sexo[i],"feminino")==0){
                            printf("Sexo invalido!\n");
                        }else{
                            printf("Sexo valido!\n");
                            printf("Sexo alterado com sucesso!");
                        }//fim da validacao do alterar sexo 

                    }//fim do alterar sexo
                    break;//break do alterar sexo

                        //alterar endereco
                        if(opcaoMenuAlterar==13){
                            printf("Alterar endereco: ");
                            fflush(stdin);
                            fgets(endereco[index],50,stdin);
                            printf("Endereco alterado com sucesso!\n");
                        }//fim do alterar endereco
                        break;//break do alterar endereco

                            //alterar altura
                            if(opcaoMenuAlterar==14){
                                printf("Alterar altura: \n ");
		                        scanf("%lf", &altura[i]);
                                //validacao do alterar altura
                                if(altura[i] > 1.00 && altura[i] < 2.00){
                                    printf("Altura valida\n");
                                    printf("Altura alterada com sucesso!\n");
                                }else{
                                    printf("Altura invalida\n");
			                        printf("Digite uma altura valida: ");
			                        fflush(stdin);
			                        scanf("%lf", &altura[i]);
                                    printf("Altura alterada com sucesso!\n");
			                        printf("\n");
                                }//fim da validacao do alterar altura

                            }//fim do alterar altura
                            break;//break do alterar altura

                                        //alterar status de vacina
                                        if(opcaoMenuAlterar==15){
                                            printf("Alterar status de vacina: ");
				                            fflush(stdin);
				                            scanf("%s", &vacina[index]);
                                            if(vacina[i]==0){
                                                printf("Voce tomou a vacina!\n");
                                                printf("Status de vacina alterado com sucesso!\n");
                                            }else{
                                                printf("voce nao tomou a vacina.\n");
                                                printf("Status de vacina alterado com sucesso!\n");
                                            }//fim do validar status de vacina

                                        }//fim do alterar status de vacina
                                        break;//break do alterar status de vacina

        //case 3-Buscar dados de usuario por email                              
        case 3:
            printf("\nDigite o email que deseja buscar: ");
           	scanf("%s", &emailBusca);

            for(i=0;i<TAM;i++){
                if(strcmp(email[i], emailBusca[i])==0){
                //impressao de dados correspondentes ao email
                printf("----------DADOS CORRESPONDENTES AO EMAIL----------");
                printf("/ID:%d\n",id[x]);
				printf("Nome:%s\n",nome[x]);
				printf("Email:%s\n",email[x]);
				printf("Endereco:%s\n",endereco[x]);
				printf("Sexo:%s\n",sexo[x]);
				printf("Altura:%.2lf\n",altura[x]);
				printf("Vacinado:%s\n",vacina[x]);
                fflush(stdin);
                }
            }//fim do buscar dados de usuario por email
            break;//break do buscar dados de usuario por email

            //case 4-imprima os usuarios cadastrados
            case 4:
            //inicio da impressao dos usuarios 
            for(j=0;j<TAM;j++){
                printf("----------USUARIOS CADASTRADOS----------");
                printf("ID:%d",id[i]);
                printf("Index:%d\n");
                printf("Nome:%s\n",nome[i]);   
                printf("Email:%s\n",email[i]);   
                printf("Sexo:%s\n",sexo[i]);   
                printf("Endereco:%s\n",endereco[i]);
                printf("Altura %.2f\n",altura[i]);
                printf("Status de vacina:%s",vacina[i]);   
            }//final do laco de repeticao que imprime os usuarios

            //case 5-realizar backup dos dados
            case 5:
            for(j = 0; j < 1000; j++){
                strcpy(nomeBackup[j],nome[j]);
				strcpy(emailBackup[j],email[j] );
				strcpy( sexoBackup[j],sexo[j] );
				strcpy(enderecoBackup[j],endereco[j]);
				idBackup[j] == id[j];
				alturaBackup[j] == altura[j];
				vacinaBackup[j] == vacina[j];
            }//final da repeticao para backup
            printf("Backup concluido!\n");//printf do backup
            //impressao dos dados de backup
			for(j = 0; j < cadastro; j++){
                printf("\n----------BACKUP----------\n");
                printf("ID:%d",idBackup[j]);
                printf("Index:%d",j);
                printf("Nome:%s",nomeBackup[j]);
                printf("Email:%s",emailBackup[j]);
                printf("Sexo:%s",sexoBackup[j]);
                printf("Endereco:%s",enderecoBackup[j]);
                printf("Altura:%.2f",alturaBackup[j]);
                printf("Status de vacina:%d",vacinaBackup[j]);
            }//fim da impressao

            //case 6-excluir dados de registro
            case 6:
            printf("Diigte o index: ");
            fflush(stdin);
            scanf("%d", &excluir);
            //inicio do excluir
            for(j = excluir; j != cadastro+1; j++){
		
                id[j] = id[j + 1];
                strcpy(nome[j], nome[j + 1]);
                strcpy(email[j], email[j + 1]);
                strcpy(sexo[j], sexo[j + 1]);
                strcpy(endereco[j], endereco[j + 1]);
                altura[j] == altura[j + 1];
                vacina[j] == vacina[j + 1];
                
            }//final de excluir

            //case 7-restauracao de dados
            case 7:
            for(j = 0; j < 5; j++){
            printf("ID:",idBackup[j]);
            printf("Index:",j);
            printf("Nome:",nomeBackup[j]);
            printf("Email:",emailBackup[j]);
            printf("Sexo:",sexoBackup[j]);
            printf("Endereco:",enderecoBackup[j]);
            printf("Altura:",alturaBackup[j]);
            printf("Status de vacina:",vacinaBackup[j]);
            }//final do case 7
            break;//break do case 7


            //case 8-fechar programa
            case 8:
            printf("FIM DO PROGRAMA");
            break;//break do case 8

    }//fim do switch

    
} while (menu!=8);//fim do while
}//fim da main
