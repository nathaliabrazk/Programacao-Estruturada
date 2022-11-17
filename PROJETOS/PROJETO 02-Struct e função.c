//incluir 1000 usuarios-OK
//edite um usuario-OK
//busque um usuario por email-OK
//imprima os usuarios cadastrados-OK
//backup-OK
//excluir dados de registro-OK
//restauracao de dados-OK
//incluir endereco(Rua Cidade Estado CEP)-OK

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1000

struct cadastro_usuario{//tipo de dado
	char nome[TAM][50], email[TAM][50], sexo[TAM][15], endereco[TAM][50];
    double altura[TAM];
    int vacina [TAM];
};//definicao da struct para cadastro

//definicao de variavel
struct cadastro_usuario  usuario;//variavel usuario do tipo cadastro_usuario

struct endereco_completo_usuario{//tipo de dado
	char rua[TAM][50], cidade[TAM][50], estado[TAM][50], CEP[TAM][50];
};//definicao da struct para endereco

//definicao de variavel
struct endereco_completo_usuario enderecoC;


int main(){
//Declaracao de todas as variaveis
struct cadastro_usuario usuario;
struct endereco_completo_usuario enderecoC;
//variaveis %d/%i
int count = 0;
int i=0, menu, x, j, editar, index, excluir, repete=1, contador=1, cadastro=1, cadastroBackup,opcaoMenuAlterar, flag=0;
//variaveis %d com vetores
int id[TAM],idBackup[TAM], vacina [TAM],vacinaBackup[TAM], CEPBackup[TAM][50];
char emailBusca[TAM][50];//%s
char nomeBackup[TAM][50], emailBackup[TAM][50], sexoBackup[TAM][15],enderecoBackup[TAM][50];//%s
char alturaBackup[TAM];
char ruaBackup[TAM][50], cidadeBackup[TAM][50], estadoBackup[TAM][50];

//variavies %lf
double altura[TAM];

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
      
        //case 1-registro de todos os dados
        case 1:
        i=0;

        //id aleatorio
        id[i] = rand() %5000;
	    printf("Usuario:%d\nID:%d\n", i+1,id[i]);

		//nome
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(usuario.nome[i],50,stdin);//usa-se para uma string onde o usuario vai digitar nome composto
        printf("\n"); 

		//email
		printf("Digite seu email: ");
		scanf("%s", &usuario.email[i]);
		getchar();

        //validacao de email
        if(strchr(usuario.email[i], '@') == 0){
            printf("Email invalido\n");
			printf("Forneca um email valido contendo @: ");
	 		fflush(stdin);
	 		fgets(usuario.email[i],50,stdin);
        }else{
            printf("Email valido!\n\n");
        }//fim do else de validacao de email

        //endereco
            printf("Digite seu endereco: ");
			fflush(stdin);
			fgets(usuario.endereco[i],50,stdin);
			printf("\n");

            //INCLUSAO DO ENDERECO COMPLETO

            //rua
            printf("Digite a rua em que reside: ");
            fflush(stdin);
            fgets(enderecoC.rua[i],50,stdin);
            printf("\n");

            //cidade
            printf("Digite a cidade: ");
            fflush(stdin);
            fgets(enderecoC.cidade[i],50,stdin);
            printf("\n");

            //estado
            printf("Digite o estado: ");
            fflush(stdin);
            fgets(enderecoC.estado[i],50,stdin);
            printf("\n");

            //CEP
            printf("Digite o CEP: ");
            fflush(stdin);
            fgets(enderecoC.estado[i],50,stdin);
            printf("\n");

        do{
            //sexo
        	printf("Informe seu sexo (feminino, masculino ou nao declarar):");
            fflush(stdin);
            fgets(usuario.sexo[i],15,stdin);
        //validacao de sexo
          if(strcmp(usuario.sexo[i], "feminino") == 1 || strcmp(usuario.sexo[i], "masculino") == 1 || strcmp(usuario.sexo[i], "nao declarar") == 1){//erro na validacao do sexo(esta validando todos como validos)
            printf("Sexo valido\n\n");
            flag=0;
        }else{
            printf("Sexo invalido!\n\n");
            flag=1;
        }
		}while(flag==1);//fim da validacao do sexo

        //altura
			printf("Digite a altura: ");
			scanf("%lf", &usuario.altura[i]);
        //validacao da altura
        if(altura[i] > 1.00 || altura[i] < 2.00){
            printf("Altura valida!\n\n");
        }else{
            printf("Altura invalida\n\n");
			printf("Digite uma altura valida: ");
			fflush(stdin);
			scanf("%lf", &usuario.altura[i]);
			printf("\n");
        }//fim da validacao de altura

            //vacina
            printf("Digite 1 se voce nao foi vacinado ou 0, caso tenha sido: ");
			fflush(stdin);
			scanf("%d", &usuario.vacina[i]);
        //validacao de vacina
        if(vacina[i]==0){
            printf("Voce tomou a vacina!\n\n");		
        }else{
            printf("Voce nao a vacina!\n\n");
        }//fim da validacao de vacina
        i++;
        count++;
        break;

        //case 2-Edicao de registro
        case 2:
        printf("Deseja editar algum usuario?\n Digite 1 para sim ou 0 para nao: ");
        fflush(stdin);
        scanf("%d", &editar);
        
        //impressao de opcoes para alteracao
        
        printf("Informe o index que deseja alterar: ");//index=endereco de memoria(posicao do vetor) index 0=primeiro cadastro
        scanf("%d", &index);
        
        printf("----------MENU DE ALTERACAO----------\n");
		printf("1 - Nome\n");
		printf("2 - Email\n");
		printf("3 - Sexo\n");
		printf("4 - Altura\n");
		printf("5 - Vacina\n");
        printf("6 - Endereco\n");
        printf("7 - Rua:\n");
        printf("8 - Cidade:\n");
        printf("9 - Estado:\n");
        printf("10 - CEP\n");
	
		printf("Digite o numero da informacao do cadastro voce quer alterar: ");
        fflush(stdin);
        scanf("%d", &opcaoMenuAlterar);

        //alterar nome
        if(opcaoMenuAlterar==1){
            printf("Alterar nome: ");
	        fflush(stdin);
	        fgets(usuario.nome[index],50,stdin);
        }//fim do altera nome 

            //alterar email
            if(opcaoMenuAlterar==2){
                printf("Alterar email: ");
                fflush(stdin);
                fgets(usuario.email[index],50,stdin);
                //impressao de email alterado
                printf("\n%s", usuario.email[i]);

                //validacao de alterar email
                if(strchr(usuario.email[index], '@') ==0){
                    printf("Email invalido!\n");

                    printf("Digite um email valido para alterar: ");
	                fflush(stdin);
		            fgets(usuario.email[index],50,stdin);
                }else{
                    printf("Email valido!\n");
                }//fim da validacao do alterar email

            }//fim do alterar email

                    //alterar sexo
                    if(opcaoMenuAlterar==3){
                        printf("Alterar sexo: \n");
                        fflush(stdin);
                        scanf("%d",&usuario.sexo[i]);
                        //validar sexo alteracao
                        if(strcmp(usuario.sexo[i],"feminino")==0){
                            printf("Sexo invalido!\n");
                        }else{
                            printf("Sexo valido!\n");
                            printf("Sexo alterado com sucesso!\n");
                        }//fim da validacao do alterar sexo 

                    }//fim do alterar sexo

                         //alterar altura
                        if(opcaoMenuAlterar==4){
                            printf("Alterar altura: \n ");
		                    scanf("%lf", &usuario.altura[i]);

                            //validacao do alterar altura
                            if(usuario.altura[i] >= 1.00 && usuario.altura[i] <= 2.00){
                                printf("Altura valida\n");
                                printf("Altura alterada com sucesso!\n");
                            }else{
                                printf("Altura invalida\n");
			                    printf("Digite uma altura valida: ");
			                    fflush(stdin);
			                    scanf("%lf", &usuario.altura[i]);
                                printf("Altura alterada com sucesso!\n");
			                    printf("\n");

                            }//fim da validacao do alterar altura
                        
                        }//fim do alterar altura
                       
                            //alterar vacina
                                if(opcaoMenuAlterar==5){
                                    //alterar status de vacina
                                    printf("Alterar status de vacina: ");
                                    fflush(stdin);
                                    scanf("%s", &usuario.vacina[index]);
                                if(vacina[i]==0){
                                    printf("Voce tomou a vacina!\n");
                                    printf("Status de vacina alterado com sucesso!\n");
                                }else{
                                    printf("voce nao tomou a vacina.\n");
                                    printf("Status de vacina alterado com sucesso!\n");
                                }
                                }//fim do validar status de vacina
                                break;//break do alterar status de vacina
                                        
                                    //alterar endereco
                                    if(opcaoMenuAlterar==6){
                                        printf("Alterar endereco: ");
                                        fflush(stdin);
                                        fgets(usuario.endereco[index],50,stdin);
                                        printf("Endereco alterado com sucesso!\n");
                                    }//fim do alterar endereco

                                        //alterar rua
                                        if(opcaoMenuAlterar==7){
                                            printf("Alterar rua: ");
                                            fflush(stdin);
                                            fgets(enderecoC.rua[index],50,stdin);
                                            printf("Rua alterada com sucesso!\n");
                                        }//fim do alterar rua

                                            //alterar cidade
                                            if(opcaoMenuAlterar==8){
                                                printf("Alterar cidade: ");
                                                fflush(stdin);
                                                fgets(enderecoC.rua[index],50,stdin);
                                                printf("Cidade alterada coom sucesso!\n");
                                            }//fim do alterar cidade

                                                //alterar estado
                                                if(opcaoMenuAlterar==9){
                                                printf("Alterar estado: ");
                                                fflush(stdin);
                                                fgets(enderecoC.estado[index],50,stdin);
                                                printf("Estado alterado com sucesso!\n");
                                                }//fim alterar estado

                                                    //alterar CEP
                                                    if(opcaoMenuAlterar==10){
                                                        printf("Aterar CEP: ");
                                                        fflush(stdin);
                                                        fgets(enderecoC.CEP[index],50,stdin);
                                                        printf("CEP alterado com sucesso!\n");
                                                    }//fim do alterar CEP

        //case 3-Buscar dados de usuario por email                              
        case 3:
            printf("\nDigite o email que deseja buscar: ");
           	scanf("%s", &emailBusca);

            for(i=0;i<TAM;i++){
                if(strcmp(usuario.email[i],emailBusca[i])==0){

                //impressao de dados correspondentes ao email
                printf("\n----------DADOS CORRESPONDENTES AO EMAIL----------\n");
                printf("/ID:%d\n",id[i]);
				printf("Nome:%s\n",usuario.nome[i]);
				printf("Email:%s\n",usuario.email[i]);
                printf("Sexo:%s\n",usuario.sexo[i]);
                printf("Altura:%.2lf\n",usuario.altura[i]);
                printf("Vacinado:%s\n",usuario.vacina[i]);
				printf("Endereco:%s\n",usuario.endereco[i]);
                printf("Rua:%s\n",enderecoC.rua[i]);//erro na impressao do struct do endereco completo
                printf("Cidade:%s\n",enderecoC.cidade[i]);
                printf("Estado:%s\n",enderecoC.estado[i]);
                printf("CEP:%s\n",enderecoC.CEP[i]);
                fflush(stdin);
                }
            }//fim do buscar dados de usuario por email
            break;//break do buscar dados de usuario por email

            //case 4-imprima os usuarios cadastrados
            case 4:

            //inicio da impressao dos usuarios 
            for(j=0;j<count;j++){
                printf("\n----------USUARIOS CADASTRADOS----------\n");
                printf("ID:%d\n",id[j]);
                printf("Index:%d\n");
                printf("Nome:%s\n",usuario.nome[j]);   
                printf("Email:%s\n",usuario.email[j]);   
                printf("Sexo:%s\n",usuario.sexo[j]);
                printf("Altura %.2f\n",usuario.altura[j]);  
                if (usuario.vacina[j] == 0){
                	printf("Status de vacina:Nao\n");
				}else if (usuario.vacina[j] == 1){
					printf("Status de vacina:Sim\n");
				}
                printf("Endereco:%s\n",usuario.endereco[j]);
                printf("Rua:%s\n",enderecoC.rua[j]);
                printf("Cidade:%s\n",enderecoC.cidade[j]);
                printf("Estado:%s\n",enderecoC.estado[j]);
                printf("CEP:%d\n",enderecoC.CEP[j]);//erro na impressao do cep(nao esta localizando o )
               
            }//final do laco de repeticao que imprime os usuarios
		break;

            //case 5-realizar backup dos dados
            case 5:
            for(j = 0; j < TAM; j++){
                idBackup[j] = id[j];
                strcpy(nomeBackup[j],usuario.nome[j]);
				strcpy(emailBackup[j],usuario.email[j] );
				strcpy( sexoBackup[j],usuario.sexo[j] );
                alturaBackup[j] = usuario.altura[j];
                vacinaBackup[j] = usuario.vacina[j];
				strcpy(enderecoBackup[j],usuario.endereco[j]);
				strcpy(ruaBackup[j],enderecoC.rua[j] );
				strcpy(cidadeBackup[j],enderecoC.cidade[j] );
				strcpy(estadoBackup[j],enderecoC.estado[j]);
				strcpy(CEPBackup[j],enderecoC.CEP[j]);
				
            }//final da repeticao para backup

            printf("Backup concluido!\n");//printf do backup

            //impressao dos dados de backup
			for(j = 0; j < cadastro; j++){
                printf("\n----------BACKUP----------\n");
                printf("ID:%d\n",idBackup[j]);
                printf("Index:%d\n",j);
                printf("Nome:%s\n",nomeBackup[j]);
                printf("Email:%s\n",emailBackup[j]);
                printf("Sexo:%s\n",sexoBackup[j]);
                printf("Altura:%.2f\n",alturaBackup[j]);
                printf("Status de vacina:%d\n",vacinaBackup[j]);
                printf("Endereco:%s\n",enderecoBackup[j]);
                printf("Rua:%s\n",ruaBackup[j]);
                printf("Cidade:%s\n",cidadeBackup[j]);
                printf("Estado:%s\n",estadoBackup[j]);
                printf("CEP:%d\n",CEPBackup[j]);
                printf("Backup concluido com sucesso!\n");
            }//fim da impressao
			break;//break da impressao de dados
			
            //case 6-excluir dados de registro
            case 6:
            printf("Digte o index: ");
            fflush(stdin);
            scanf("%d", &excluir);

            //inicio do excluir
            for(j = excluir; j != cadastro+1; j++){
		
                id[j] = id[j + 1];
                strcpy(usuario.nome[j],usuario.nome[j + 1]);
                strcpy(usuario.email[j],usuario.email[j + 1]);
                strcpy(usuario.sexo[j],usuario.sexo[j + 1]);
                altura[j] == altura[j + 1];
                vacina[j] == vacina[j + 1];
                strcpy(usuario.endereco[j],usuario.endereco[j + 1]);
                strcpy(enderecoC.rua[j],enderecoC.rua[j + 1]);
                strcpy(enderecoC.cidade[j],enderecoC.cidade[j + 1]);
                strcpy(enderecoC.estado[j],enderecoC.estado[j + 1]);
                strcpy(enderecoC.CEP[j],enderecoC.CEP[j + 1]);
                printf("Dados excluidos com sucesso!\n");
            }//final de excluir
            
			break;//break do excluir
			
            //case 7-restauracao de dados
            case 7:
            for(j = 0; j < TAM; j++){
            	
	            printf("ID:",idBackup[j]);
	            printf("Index:",j);
	            printf("Nome:",nomeBackup[j]);
	            printf("Email:",emailBackup[j]);
	            printf("Sexo:",sexoBackup[j]);
                printf("Altura:",alturaBackup[j]);
	            printf("Status de vacina:",vacinaBackup[j]);
	            printf("Endereco:",enderecoBackup[j]);
	            printf("Rua:",ruaBackup[j]);
                printf("Cidade:",cidadeBackup[j]);
                printf("Estado:",estadoBackup);
                printf("CEP:",CEPBackup[j]);
                printf("Dados restaurados!\n");
            }//final do case 7
            
            break;//break do case 7

            //case 8-fechar programa
            case 8:
            printf("FIM DO PROGRAMA");
            break;//break do case 8

    }//fim do switch

    } while (menu!=8);//fim do while

}//fim da main