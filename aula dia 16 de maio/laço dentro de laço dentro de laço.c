#include <stdio.h>
#include <conio.h>
main(){
	int i,j,k;
	for(i=0; i<20; i++){
		printf("i:%d\n",i);
		for(j=0; j<10; j++){
			printf(" j:%d\n",j);
			for(k=0; k<15; k++){
				printf(" k:%d\n",k);
			}
		}
	}
getch();
}
