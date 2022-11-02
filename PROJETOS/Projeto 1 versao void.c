#include<stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define tam 1000

//FUNCAO PARA ADICIONAR CLIENTE
void adiciona_usuario(){
int i=0, id[tam];
char nome[tam][50], email[tam][50], sexo[tam][15], endereco[tam][50]; //tipo %s
double altura[tam]; //%lf
char vacina [tam][4]; //%s   
printf("\nADICIONAR USUARIO\n");
id[i] = rand() %5000;
printf("Usuario:%d\n ID:%d\n", i +1,id[i]); // i+1 para saber em qual cadastro estar.
//NOME
printf("Digite seu nome: ");
fflush(stdin);
fgets(nome[i],50,stdin); //usa-se para uma string onde o usuario vai digitar nome composto;
printf("\n");
//EMAIL
printf("Digite seu email: ");
scanf("%s", email[i]);
getchar();
printf("\n");
if(strchr(email[i], '@') == 0){
printf("Email invalido\n");			
printf("Forneca o email:");
fflush(stdin);
fgets(email[i],50,stdin);
printf("\n");
}
else{
printf("Email valido\n");
printf("\n");
}
//ENEDERECO
printf(" Digite seu endereco: ");
fflush(stdin);
fgets(endereco[i],50,stdin);
printf("\n");
//SEXO
printf("Digite seu sexo: ");
scanf("%s", sexo[i]);
getchar();
printf("\n");
//ALTURA
printf("Digite a altura: ");
scanf("%lf", &altura[i]);
printf("\n");
//VACINA
printf("Digite sim se voce foi vacinado ou nao, caso nao tenha sido: ");
fflush(stdin);
scanf("%s", &vacina[i]);
printf("\n");
}
    void edita_usuario(){
    printf("\nEDITAR USUARIO\n");
    }

        void exclui_usuario(){
        printf("\nEXCLUIR USUARIO\n");
        }
            void busca_usuario(){
            printf("\nBUSCAR USUARIO POR EMAIL\n");
            }
                void imprime_dados(){
                printf("\nIMPRIMIR DADOS DE USUARIOS\n");
                }
                    void backup(){
                    printf("\nBACKUP\n");
                    }
                        void restaura_dados(){
                        printf("\nRESTAURACAO DE DADOS\n");
                        }

                            void imprime_menu(){
                            printf("\nOPCOES DISPONIVEIS:\n");
                            printf("a-Adicionar usuario\n");
                            printf("b-Editar usuario\n");
                            printf("c-Excluir usuario\n");
                            printf("d-Buscar usuario por email\n");
                            printf("e-Imprimir dados de usuarios\n");
                            printf("f-Fazer backup\n");
                            printf("g-Restaurar dados\n");
                            printf("h-Sair do prorama\n");
                            }

int main(void){
char opcao=0;
while(opcao !='s'){
    printf("Digite uma opcao: ");
    scanf("%c", &opcao);

    switch (opcao){

    case'a':
        adiciona_usuario();
            case 'b':
            edita_usuario();
          
                case'c':
                   exclui_usuario();

                   case'd':
                    busca_usuario();
                
                       case'e':
                         imprime_dados();
                    
                            case'f':
                                backup();
    
                                case'g':
                                     restaura_dados();
                                
                                        case'h':
                                        break;
                                        default:
                                        imprime_menu();
                                        
                        }
      
           
             
        }                                   
return 0;                               
}