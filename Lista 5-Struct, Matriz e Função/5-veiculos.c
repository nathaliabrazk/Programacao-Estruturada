/*Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria
dos Transportes criou o seguinte registro padrão:
Proprietário:__________________________ Combustível:____________________
Modelo: _____________________________ Cor: __________________________
Nº chassi: _________________________ Ano: __________ Placa: ____________
Em que:
• Combustível pode ser álcool, diesel ou gasolina;
• Placa possui os três primeiros valores alfabéticos e os quatro restantes
valores numéricos.
Sabendo que o número máximo de veículos da cidade é de 5.000 unidades e que os
valores não precisam ser lidos.
a. Construa uma função que liste todos os proprietários cujos carros são do
ano de 2010 ou posterior e que sejam movidos a diesel.
b. Escreva uma função que liste todas as placas que comecem com a letra J e
terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.
c. Elabore uma função que liste o modelo e a cor dos veículos cujas placas
possuem como segunda letra uma vogal e cuja soma dos valores
numéricos fornece um número par.
d. Construa uma função que permita a troca de proprietário com o
fornecimento do número do chassi apenas para carros com placas que não
possuam nenhum dígito igual a zero.*/
#include<stdio.h>
typedef struct sVeiculo{
	int chassi, ano;
	char placa[6], nome[30], combustivel[30], modelo[50], cor[50];
} Veiculo;


int main(){
	int i;
	Veiculo carros[QNT];

	for(i = 0; i < QNT; i++)
	{
	printf("Digite o nome do proprietario:");
	gets(carros[i].nome);

	printf("Digite o combustão­vel utilizado (lcool, Diesel ou Gasolina):");
	gets(carros[i].combustivel);
	
	printf("Digite o modelo do carro:");
	gets(carros[i].modelo);

	printf("Digite a cor do carro:");
	gets(carros[i].cor);
	
	printf("Digite o numero do chassi:");
	scanf("%d", &carros[i].chassi);

	printf("Digite o ano do veiculo:");
	scanf(" %d", &carros[i].ano);
	getchar(); 

	
	printf("Digite a placa do veiculo:");
	gets(carros[i].placa);

	}

	printf("\nProprietarios com veiculos a diesel do ano de 1980 ou posterior:\n");
	for(i = 0; i < QNT; i++)
	{

		if(carros[i].ano >= 1980 && carros[i].combustivel == "Diesel")	
		{
		printf("Nome: %s \n", carros[i].nome);
		}
	}
	printf("\n");	

	printf("\nPlacas que começam com A e terminam com 0, 2, 4 ou 7:");
	for(i = 0; i < QNT; i++)
	{
		if(carros[i].placa[0] == 'A' && carros[i].placa[6] == '2')	
		{
		printf("\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n\n");		

return 0;
}