	/*importações padrão para iniciar o programa, 
	estes comandos abaixo contém input e output*/

	#include <stdio.h> 
	#include <conio.h> 
	#include <stdlib.h> 
	
	int main()
{
	//declaração de variáveis
	float anonasc[4], idade;
	int i;
	

	for (i=0; i<4; i++){
		printf("\nEntre com o %d ano de nascimento: ", i+1);
		scanf("%f", & anonasc[i]);
		idade =(2020-anonasc[i]);
		printf("\nSua idade eh %.f: ", idade);
			
			if (idade<18){
				printf("\nVoce eh menor de idade!");
			}
			else {
				printf("\nVoce eh maior de idade!");
			}
		printf("\n");
		printf("\n");
	}


	printf("\n");
	system("pause");
	return 0;
	printf("\n");	
}
