#include <stdio.h> //bilioteca de comunica��o com o usu�rio
#include <stdio.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.>  //biblioteca de aloca��o de texto por regi�o
#include <string.h> //bilicoteca respons�vel por cuidar das string

  int registro()  //fun��o cadastrar usu�rios no sistema
  
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da cria��o de vari�veis/string
    
    printf("Digite o cpf a ser cadastrado: ");  //coletando informa��o do usu�rio
    scanf("%s" , cpf);                          //%s refere-se a string
    
    strcpy(arquivo, cpf); //respons�vel por criar os valores das string
    
    FILE *file; //cria o arquivo 
    file = fopen(arquivo, "w"); // cria oarquvio e o "w" significa escrever 
    fprintf(file,cpf);  // salvo o valor da variavel        
    fclose(file);  // fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s" , nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s" , sobrenome);
    
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s" , cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
    
}
    
    
  int consulta()
  
{    setlocale(LC_ALL, "Portuguese");  //Definindo a linguagem

    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("N�o foi possivel abrir o arquivo, n�o localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		  printf("\nEssas s�o  as informa��es do usu�rio: ");
		  printf("%s" , conteudo);
		  printf("\n\n");
		  
	}
	
	system("pause");
 }
  int deletar ()
{
    printf("Voc� escolheu deletar nomes!\n");
    system("pause");
 }
 
int main()


{ 
	int opcao=0; //Definindo as vari�veis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");  //Definindo a linguagem
	
	printf("### cart�rio da EBAC ###\n\n");  //�nicio do menu
	printf("escolha a opcao desejada do menu\n\n");
	
	printf("\t1 - Registro de nomes \n");
	
	
	printf("\t2 - Consultar nomes \n");
	
	
	printf("\t3 - Deletar nomes \n\n"); 
	
	printf("Opcao: ");  //Fim do menu
	scanf("%d" , &opcao); //armazenando a escolha do usu�rio
	
	system("cls"); //responsavel por limpar a tela 
	
	switch(opcao) //inicio da sess�o do menu
	
	{
	 case 1:
	 registro();  //chamada de fun��es
	 break;	
		
	 case 2:
	 consulta();
	 break;
	 	
	 case 3:
	 deletar();	
	 break;
	    	
	 default:
	 printf("Essa opcao n�o est� disponivel!\n");
	 system("pause");
	 break;
	 //fim da sess�o	
	 
	}
	
	
 }
 }
    
    
    
    
    
	

   
   
   
   

 
