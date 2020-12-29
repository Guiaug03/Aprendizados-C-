
/*importações padrão para iniciar o programa, 
estes comandos abaixo contém input e output*/

#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 

/*
retorno nomeDaFunção e quais parametros ela recebe
retorno float
nome Media
parametro1 => valor1 sendo float aa
parametro2 => valor2 sendo float
*/
float Media(float valor1, float valor2)
{
	return ((valor1+valor2) / 2);	
}

float Soma(float valor1, float valor2){
	float novaSoma = (valor1+valor2); 
	return novaSoma;
}

/*
 inicio de programa
 um programa sempre contém um método ou função principal
 que serve para sua inicialização
*/
int main()
{
	//iniciando de declaração de variável
	int idade=0;
	char nome[50];
	int serie;
	float nota1=0, nota2=0;
    float soma; //,somaPelaFuncao=0;
	//término de ceclaração de variável
	
	/*utilizando um comando output para pedir que o usuário digite o nome*/
	printf("\n entre com o Nome do Aluno.: ");
	/*recebendo o valor digitado pelo usuário e atribuindo-o para a variável*/
	scanf("%s", & nome);
		
	printf(" Idade do Aluno .: ");
	scanf("%d", & idade);
   
    printf(" qual a serie do aluno .: ");
    scanf("%d", & serie);
    
	printf(" nota1 de portugues .: ");
	scanf("%f", & nota1);
    
    printf(" nota2 de matematica .: ");
    scanf("%f", & nota2 );
    
    /*fazendo um processamento de soma*/
    soma =(nota1+nota2);
    // somaPelaFuncao=Soma(nota1,nota2);
    
	/*estamos usando o comando abaixo para exibir os comandos digitados e processados
	  digitado sendo o nome e os processado sendo a variável soma
	*/
    printf("\n\n soma das notas do(a) aluno(a) %s corresponde a %.2f",nome,soma);
	printf("\n\n soma pela funcao %.2f",Soma(nota1,nota2));
	printf("\n\n 1. a media do aluno corresponde a %.2f",Soma(nota1,nota2)/2);
	
	printf("\n\n 2. a media do aluno corresponde a %.2f",soma/2);
	printf("\n\n 3. a media do aluno corresponde a %.2f",Media(nota1,nota2));
	
	printf("\n");
	printf("\n");

	
	system("pause");
	return 0;
}
    
