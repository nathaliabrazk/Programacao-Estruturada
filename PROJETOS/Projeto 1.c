/* com OK está pronto:
Utilizando os conceitos de vetor, implemente um algoritmo que:
inclua até 1000 usuários; OK
edite um usuário;
exclua um usuário;
busque um usuário pelo email;
imprima todos os usuários cadastrados - ok case 5 pronto com bug;
faça backup dos usuários cadastrados;
faça restauração dos dados;

Dados do usuário:
Id (int) => preenchido automaticamente por números randômicos
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m
Vacina (tomou a vacina? boolean)*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    //declaracao de variaveis
	int i=0, id[1000];
	char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50], emailBusca[1000][50]; //tipo %s
	double altura[1000]; //%lf
	char vacina [1000][4]; //%s
	int menu;
	int x, j, excluir;
		//impressao de menu e escolha de case	
	do {
		printf("Digite a opcao desejada do menu:\n");
		printf ("1 - Cadastrar um usuario \n");
		printf ("2 - Editar cadastro \n");
		printf ("3 - Excluir cadastro \n");
		printf ("4 - Buscar pelo email \n");
		printf ("5 - Imprimir todos usuarios cadastrados \n");
		printf ("6 - Realizar backup \n");
		printf ("7 - Restaurar dados \n");
        printf("8  - Fechar o programa\n");
		fflush(stdin);
		scanf("%i", &menu);
				
	switch (menu){
        //case 1-Cadastro de usuario
		case 1:
	    id[i] = rand() %5000;
	    printf("Usuario:%d\n ID:%d\n", i +1,id[i]); // i+1 para saber em qual cadastro estar.
	    
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(nome[i],50,stdin);//usa-se para uma string onde o usuario vai digitar nome composto
        printf("\n"); 

		printf("Digite seu email: ");
		scanf("%s", email[i]);
		getchar();
        printf("\n");
		
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Forneca o email: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		}
		else{
			printf("Email valido\n");
		}
		
		printf(" Digite seu endereco: \n");
		fflush(stdin);
		fgets(endereco[i],50,stdin);
		printf("\n");

		printf("Informe seu sexo (Feminino, Masculino e Não declarar):");//arrumar bug na validacao
            fflush(stdin);
            fgets(sexo[i],50,stdin);
            
            if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Feminino") == 0){
                printf("Sexo invalido\n");//nao esta imprimindo sexo valido nem invalido
            }else{
                printf("Sexo valido");
            }
            break;

		printf("Digite a altura: \n");
		scanf("%lf", &altura[i]);
		
		if(altura[i] > 1.00 && altura[i] < 2.00){//arrumar validacao de altura
			printf("Altura valida\n");	
		 }
		 else{
		 	printf("Altura invalida\n");
		
		} 
				
		printf("Digite sim se voce foi vacinado ou nao, caso nao tenha sido: \n");
		fflush(stdin);
		scanf("%s", &vacina[i]);
					
		if (strcmp(vacina[i], "sim")==0){// o strcmp é utilizado para comparar uma string. "string comper"
			printf("voce tomou a vacina.\n");		
		}
		else{
			printf("voce nao tomou a vacina.\n");
		}
		i++;
		break;

        //case 2-editar algum dado de registro
            case 2: // esta em forma de switch case precisa ser ajustado para a estrutura adequada
            int editar;
                
            int i=0, id[1000];
            char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50];
            double altura[1000]; //%lf
            char vacina [1000][4]; 
            int menu;
            printf("Deseja editar algum usuario? Digite 1 para sim ou 2 para nao. ");
            fflush(stdin);
            scanf("%d", &editar);
        
            if(editar == 1){
            int index, opcao;
            printf("Digite o index que você deseja editar: ");
            fflush(stdin);
            scanf("%d", &index); 

            printf("Qual informacao do cadastro voce quer alterar ?\n1: Nome\n2: Email\n3: Sexo\n4: Endereco\n5: Altura\n6: Vacina\n\nDigite o numero: ");
            fflush(stdin);
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
                printf("Alterar nome:  ");
                fflush(stdin);
                fgets(nome[index],50,stdin);
                break;
            
            case 2:
                printf("Alterar email: ");
                fflush(stdin);
                fgets(email[index],50,stdin);
                
                printf("\n%s", email[i]);
            
            if(strchr(email[index], '@') == 0){
                printf("Email invalido\n");
                
                printf("Alterar email:");
                fflush(stdin);
                fgets(email[index],50,stdin);
            }
            else{
                printf("Email valido\n");
            }

                break;
            
            case 3:
                printf("Alterar sexo: \n");
                fflush(stdin);
                fgets(sexo[index],15,stdin);
                break;
                
                case 4: 
                printf("Atualizar endereco: \n ");
                fflush(stdin);
                fgets(endereco[index],50,stdin);
                break;
                
                    case 5 : 
                    printf("Alterar altura: \n ");
                    scanf("%lf", &altura[i]);
                
                case 6: 
                printf("Alterar status de vacina: \n");
                    fflush(stdin);
            scanf("%s", &vacina[i]);
                if (strcmp(vacina[i], "sim")== 0){// o strcmp é utilizado para comparar uma string. "string comper"
                printf("voce tomou a vacina.\n");		
            }
            else{
                printf("voce nao tomou a vacina.\n");
            }
            i++;
            break;	 	
        
        }
            }
            //case 3-excluir algum dado de registro do usuario
            case 3://incompleto
            int excluir;
            int j;
            Printf("qual index do usuario que sera excluido? ");
            Scanf("%d",&excluir);
            for(j = excluir; j != i; j++){
            id[j] = id[j + 1];
            strcpy(nome[j], nome[j + 1]);
            strcpy(email[j], email[j + 1]);
            strcpy(sexo[j], sexo[j + 1]);
            strcpy(endereco[j], endereco[j + 1]);
            altura[j] = altura[j + 1];
            //vacina[j] = vacina[j + 1];//
        } 
                //case 4-buscar por email
                case 4: //incompleto
            
                printf("\nDigite o email que deseja buscar: ");
                scanf("%s", &emailBusca);
                for(i=0;i<i;i++){
                
                if(strcmp(email[i], emailBusca[i])==0){
                printf("/ID:%d\n Nome:%s\n Email:%s\n Endereco:%s\n Sexo:%s\n Altura:%.2lf\n Vacinado:%s\n", id[x], nome[x], email[x], endereco [x], sexo[x], altura[x], vacina[x]);
                fflush(stdin);
                break;
        }
        }
        
                    // case 5-imprimir usuarios cadastrados
                    case 5: //incompleto
                    printf("Usuarios cadastrados:\n");
                    
                    for (x=0; x<i; x++){
                    printf("ID:%d\n Nome:%s\n Email:%s\n Endereco:%s\n Sexo:%s\n Altura:%.2lf\n Vacinado:%s\n", id[x], nome[x], email[x], endereco [x], sexo[x], altura[x], vacina[x]);
                    fflush(stdin);
                    break;
                }
                        //case 6-para realizar backup de registros
                        case 6://incompleto
                        printf("Realizar backup\n");

                            case 7://incompleto
                            printf("Restaurar dados\n");
                }
        
    }while(menu!=8);
    

return 0; 
}
		
