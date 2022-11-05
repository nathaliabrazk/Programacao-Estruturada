/* com OK está pronto:
Utilizando os conceitos de vetor, implemente um algoritmo que:
1-inclua até 1000 usuários; OK mas com bug na validacao do sexo
2-edite um usuário; OK mas com bug na validacao do sexo
3-exclua um usuário;falta fazer
4-busque um usuário pelo email;erro nas variaveis
5-imprima todos os usuários cadastrados - ok case 5 pronto com bug
6-faça backup dos usuários cadastrados;erro nas variaveis
7-faça restauração dos dados;falta fazer
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
	int i=0,id[1000];
	char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50], emailBusca[1000][50]; //tipo %s
	double altura[1000]; //%lf
	char vacina [1000][4]; //%s
	int menu;
	int x, j, excluir;//x=case 5 para imprimir dados
		//impressao de menu e escolha de case	
	do {
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
				
	switch (menu){
        //case 1-Cadastro de usuario
		case 1:
	    id[i] = rand() %5000;
	    printf("Usuario:%d\nID:%d\n", i +1,id[i]); // i+1 para saber em qual cadastro esta.
	    
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(nome[i],50,stdin);//usa-se para uma string onde o usuario vai digitar nome composto
        printf("\n"); 

		printf("Digite seu email: ");
		scanf("%s", email[i]);
		getchar();

		
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Forneca um email valido contendo @: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		}
		else{
			printf("Email valido\n\n");
		}
		
		printf("Digite seu endereco: ");
		fflush(stdin);
		fgets(endereco[i],50,stdin);
		printf("\n");

		printf("Informe seu sexo (Feminino, Masculino ou Nao declarar):");//arrumar bug na validacao
            fflush(stdin);
            fgets(sexo[i],50,stdin);
            
            if(strcmp(sexo[i], "Feminino") == 0 || strcmp(sexo[i], "Masculino") == 0 || strcmp(sexo[i], "Feminino") == 0){
                printf("Sexo invalido\n\n");//nao esta imprimindo sexo valido nem invalido
            }else{
                printf("Sexo valido\n\n");
            }

		printf("Digite a altura: ");
		scanf("%lf", &altura[i]);
		
		if(altura[i] > 1.00 && altura[i] < 2.00){
			printf("Altura valida\n");	
		 }
		 else{
		 	printf("Altura invalida\n");
			printf("Digite uma altura valida: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			printf("\n");
		}
				
		printf("Digite sim se voce foi vacinado ou nao, caso nao tenha sido: ");
		fflush(stdin);
		scanf("%s", &vacina[i]);
					
		if (strcmp(vacina[i], "sim")==0){// o strcmp é utilizado para comparar uma string. "string comper"
			printf("Voce tomou a vacina!\n\n");		
		}
		else{
			printf("Voce nao tomou a vacina!\n\n");
		}
		i++;
		break;

        //case 2-editar algum dado de registro
            case 2: // completo mas com bug na validacao de sexo
            int editar;
                
            int i=0, id[1000];
            char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50];
            double altura[1000]; //%lf
            char vacina [1000][4]; 
            int menu;
            printf("Deseja editar algum usuario? Digite 1 para sim ou 2 para nao:  ");
            fflush(stdin);
            scanf("%d", &editar);
        
            if(editar == 1){
            int index, opcao;
            printf("Digite o index que voce deseja editar: ");
            fflush(stdin);
            scanf("%d", &index); 
            
            
			printf("\n----------MENU DE ALTERACAO----------\n");
			printf("10 - Alterar nome\n");
			printf("11 - Alterar Email\n");
			printf("12 - Alterar Sexo\n");
			printf("13 - Alterar Endereco\n");
			printf("14 - Alterar Altura\n");
			printf("15 - Alterar status de vacina\n");
            printf("Digite a alteracao que deseja fazer: ");
            fflush(stdin);
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 10:
                printf("Alterar nome:  ");
                fflush(stdin);
                fgets(nome[index],50,stdin);
                break;
	            
	            case 11:
	                printf("Alterar email: ");
	                fflush(stdin);
	                fgets(email[index],50,stdin);
	                
	                printf("\n%s", email[i]);
	            
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
		            
	            case 12:
	                printf("Alterar sexo: ");
	                fflush(stdin);
	                fgets(sexo[index],15,stdin);
	                
	                break;
		                
		                case 13: 
		                printf("Alterar endereco: ");
		                fflush(stdin);
		                fgets(endereco[index],50,stdin);
		                break;
		                
		                    case 14 : 
		                    printf("Alterar altura: ");
		                    scanf("%lf", &altura[i]);
		                    if(altura[i] > 1.00 && altura[i] < 2.00){//arrumar validacao de altura
							printf("Altura valida\n");	
		 					}
		 					else{
		 					printf("Altura invalida\n");
							printf("Digite uma altura valida: ");
							fflush(stdin);
							scanf("%lf", &altura[i]);
							printf("\n");
							}
			                
				                case 15: 
				                printf("Alterar status de vacina: ");
				                fflush(stdin);
				           		scanf("%s", &vacina[i]);
				                if (strcmp(vacina[i], "sim")== 0)
								{
								printf("Voce tomou a vacina!\n");		
									}
						            else{
						                printf("Voce nao tomou a vacina!\n");
						            }
						            i++;
						            break;	 	
        
        }
            }
            //case 3-excluir algum dado de registro do usuario
            /*case 3://incompleto
            int excluir;
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
        } */
                //case 4-buscar por email
                case 4: //incompleto
            
                printf("\nDigite o email que deseja buscar: ");
                scanf("%s", &emailBusca);
                for(i=0;i<i;i++){
                
                if(strcmp(email[i], emailBusca[i])==0){
                printf("ID:%d\n",id[x]);
                printf("Email:%s\n",email[x]);
                printf("Nome:%s\n",nome[x]);
                printf("Endereco:%s\n",endereco [x]);
                printf("Sexo:%s\n",sexo[x]);
                printf("Altura:%.2lf\n",altura[x]);
                printf("Vacinado:%s\n",vacina[x]);
                fflush(stdin);
                break;
        }
        }
        
                    // case 5-imprimir toos os usuarios cadastrados
                    /*case 5: //erro na variavel
                    printf("----------Usuarios cadastrados----------\n");
        
                    for (x=0; x<=i; x++){
                    printf("ID:%d\n",id[x]);
                    printf("Email:%s\n",email[x]);
                    printf("Nome:%s\n",nome[x]);
                    printf("Endereco:%s\n",endereco [x]);
                    printf("Sexo:%s\n",sexo[x]);
                    printf("Altura:%.2lf\n",altura[x]);
                    printf("Vacinado:%s\n",vacina[x]);
                    
                    fflush(stdin);
                    break;*/
                
                        //case 6-para realizar backup de registros
                        case 6://incompleto
                        printf("Realizar backup\n");
							
							//restaurar dados
                            case 7://incompleto
                            printf("Restaurar dados\n");
                }
        
}while(menu!=8);

}
