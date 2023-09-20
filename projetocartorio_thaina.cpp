#include <stdio.h> //bilioteca de comunicação com o usuário
#include <stdio.h>  //biblioteca de alocação de espaço em memória
#include <locale.>  //biblioteca de alocação de texto por região
#include <string.h> //bilicoteca responsável por cuidar das string

  int registro()  //função cadastrar usuários no sistema
  
{
	//inicio criação de variáveis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da criação de variáveis/string
    
    printf("Digite o cpf a ser cadastrado: ");  //coletando informação do usuário
    scanf("%s" , cpf);                          //%s refere-se a string
    
    strcpy(arquivo, cpf); //responsável por criar os valores das string
    
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
    	printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		  printf("\nEssas são  as informações do usuário: ");
		  printf("%s" , conteudo);
		  printf("\n\n");
		  
	}
	
	system("pause");
 }
  int deletar ()
{
    printf("Você escolheu deletar nomes!\n");
    system("pause");
 }
 
int main()


{ 
	int opcao=0; //Definindo as variáveis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");  //Definindo a linguagem
	
	printf("### cartório da EBAC ###\n\n");  //ínicio do menu
	printf("escolha a opcao desejada do menu\n\n");
	
	printf("\t1 - Registro de nomes \n");
	
	
	printf("\t2 - Consultar nomes \n");
	
	
	printf("\t3 - Deletar nomes \n\n"); 
	
	printf("Opcao: ");  //Fim do menu
	scanf("%d" , &opcao); //armazenando a escolha do usuário
	
	system("cls"); //responsavel por limpar a tela 
	
	switch(opcao) //inicio da sessão do menu
	
	{
	 case 1:
	 registro();  //chamada de funções
	 break;	
		
	 case 2:
	 consulta();
	 break;
	 	
	 case 3:
	 deletar();	
	 break;
	    	
	 default:
	 printf("Essa opcao não está disponivel!\n");
	 system("pause");
	 break;
	 //fim da sessão	
	 
	}
	
	
 }
 }
    
    
    
    
    
	

   
   
   
   

 
