#include <stdio.h>
#include <conio.h>
main(){
	int i, n;
	float media=0, nota;
	printf("Calculo da media de notas da turma em uma avaliacao \n\n");
	printf("Quantos alunos realizaram a avaliacao? ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("Digite a nota do aluno %d: ", i);	
		scanf("%f", &nota);
		media += nota; //media=media +nota
	}
	media = media/n;
	printf("\nA media final da turma eh %f\n", media);
	getch();
}
