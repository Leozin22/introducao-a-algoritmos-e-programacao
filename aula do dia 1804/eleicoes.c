/*5) Escreva um algoritmo para ler a idade de uma pessoa e mostrar qual sua situa��o de eleitor, 
conforme as seguintes condi��es:

� Se a idade for menor que 16 anos, informar que a pessoa n�o est� apta a votar.

� Se a idade for maior ou igual a 16 anos e menor que 18 anos ou superior a 70 anos, informar que o voto � facultativo.

� Caso contr�rio, informar que o voto � obrigat�rio.*/
#include<stdio.h>
main(){
	int idade;
	printf("qual a sua idade?");
	scanf("%i",&idade);
	if (idade<16){
		printf("voce nao pode votar");
	}
	else if (idade>=16 && idade<18 || idade>70){
		printf("seu voto � facultativo");
	}
	else{
		printf("seu voto � obrigatorio");
	}
	
	
	
	getch();

}
