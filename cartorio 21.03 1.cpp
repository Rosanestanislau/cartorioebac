#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema 
{
	//inicio cria��o de vari�veis/string
	char arquivo [40];
	char cpf  [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
		// cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado:");
	scanf ("%s",cpf);//%s refere-se a string
	
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string 
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo,"w"); //cria o arquivo e o "w" significa escrever
	fprintf (file, cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo  
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");	
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	}

  int consulta()
  
{ 
  setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
  
  char cpf[40];
  char conteudo[200];
  
  printf("Digite o CPF a ser consultado: ");
  scanf ("%s",cpf);
  
  FILE *file;
  file = fopen(cpf,"r");
  
  if(file == NULL)
  {
  	printf("N�o foi poss�vel abrir o arquivo, n�o localizado! .\n");
  	system("pause");
  	
  }
  
  while(fgets(conteudo, 200, file) != NULL)
  {
  	printf("\nEssas s�o as informa��es do usu�rio");
  	printf("%s", conteudo);
  	printf("\n\n");
  }
  
  system ("pause");
  
  
}
  

int deletar()
{
    char cpf[40];
    
    printf("Digite o CPF do usu�rio a ser deletado: ");
    scanf("%s",cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("O usu�rio n�o se encontra no sistema!.\n" );
    	system("pause");
	}
}





int main()
{
	      
    int opcao=0; //Definindo vari�veis 
    int laco=1;
   
   for(laco=1;laco=1;)
   {
   	      system("cls");//respons�vel por limpar a tela 
  
          setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
    
          printf("###cart�rio da EBAC###\n\n"); //Inicio do menu 
          printf("Escolha op��o desejada do menu:\n\n");
          printf("\t1 - Registrar nomes\n");
          printf("\t2 - Consultar nomes\n"); 
          printf("\t3 - Deletar nomes\n\n");
          printf("Op��o:");// Fim do menu
    
           scanf("%d",&opcao); // armazenando a escolha do usu�rio
    
           system("cls");//respons�vel por limpar a tela 
    
           switch(opcao)//inicio da sele��o do menu
	       {  
	        case 1: 
	        registro();//chamada de fun��es 
    	    break;
    	    
    	    case 2:
    	    consulta();
    	    break;
    	    
    	    case 3:
    	    deletar();
	        break;
	        
	        
	        
	        default:
	        printf("Essa op��o n�o esta disponivel!\n");
	        system("pause"); 
			break;
    	    
    	     }  
	  }
       } 
    	    
    	  
 
