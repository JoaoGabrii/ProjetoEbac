#include <stdio.h> //biblioteca de comunica��o com o us�ario
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> // biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das strings

int registro () // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//inicio cria��o de vari�veis/stings
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da cria��o de vari�veis
	
	
	printf ("Digite o CPF a ser cadastrado:\n");// solicitando a informa��o pro usu�rio
	scanf ("%s", &cpf);// scaneia o que o usu�rio digitar %s=string %d=int ?
	
	strcpy (arquivo, cpf); // copia o valor do cpf p arquivo, pois a chave principal tem que ser o nome do arquivo 
	
	
	FILE *file;
	file=fopen (arquivo, "w"); // w=writer // r=read // a=atualizar 
	fprintf (file,cpf);
	fclose (file);
	
	file=fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	
	printf ("Digite o nome a ser cadastrado:\n");
	scanf ("%s", &nome);
	
	file=fopen (arquivo, "a");
	fprintf (file,nome );
	fclose (file);
	
	file=fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	
	printf ("Digite o sobrenome:\n");
	scanf ("%s", &sobrenome);
	
	file=fopen (arquivo, "a");
	fprintf (file, sobrenome);
	fclose (file);
	
	file=fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	
	printf ("Digite o cargo:\n");
	scanf ("%s", &cargo);
	
	file=fopen (arquivo, "a");
	fprintf (file, cargo);
	fclose (file);
	
	file=fopen (arquivo, "a");
	fprintf (file, ".");
	fclose (file);
	
	
	system ("pause"); // da um pequeno pause no sistema
	
	
}

int consulta ()
{
	setlocale (LC_ALL, "Portuguese");
	
	char cpf [40]; // cria a vari�vel cpf novamente, pois cada fun��o s� enxerga as pr�prias vari�veis
	char conteudo [200]; // cria a vari�vel cpf novamente, pois cada fun��o s� enxerga as pr�prias vari�veis
	
	printf ("Digite o CPF a ser consultado.\n");
	scanf ("%s" ,&cpf);
	system ("cls");
	
	FILE *file;
	file=fopen (cpf, "r");
	
	if (file == NULL)
	{
		printf ("CPF n�o encontrado.\n\n");
		system ("pause");
	}
	
	while (fgets(conteudo,200,file)!= NULL)
	{
	printf ("Essa s�o as informa��es do usu�rio.\n\n");
	printf ("%s", &conteudo);
	printf ("\n\n");
	
	system ("Pause");
}
}

int deletar ()
{
	
	char cpf [40]; // cria a vari�vel cpf novamente, pois cada fun��o s� enxerga as pr�prias vari�veis
	
	printf ("Digite o CPF a ser deletado.\n\n");
	scanf ("%s",&cpf);
	
	remove(cpf); // comando para remover do banco de dados o (cpf)
	
	FILE *file;
	file= fopen (cpf,"r");
	
	
	
	if (file == NULL); // comando if else // se == NULL -> comando. Se n�o {comando}
	{
		printf ("\nCPF n�o existe na base de dados ou j� foi deletado, obrigado.\n\n");	
}
	
	
		
	system ("pause");
}


int nao ()
{
	printf ("Essa op��o n�o existe.");
	system("pause");
}




int main ()
{
	int opcao=0;
	int laco=1;
	char senhadigitada[]="a";
	int comparacao;
	
	
			printf ("\t### Bem vindo ao menu ###\n\n");
			printf ("mais uma coisinha");
			printf ("Login para acesso ao sistema \n\n");
			printf ("Digite sua senha: ");
			scanf ("%s",&senhadigitada);
		
		
		
		comparacao = strcmp (senhadigitada,"admin");
		
	if (comparacao == 0)
	
	{
		
		system("cls");
		for (laco=1;laco=1;)
		{
		system ("cls");
		
		setlocale (LC_ALL, "Portuguese");
	
			printf ("\t### Bem vindo ao menu ###\n\n");
			printf ("Escolha uma op��o do menu:\n\n");
			printf ("\t1- Registrar nomes\n");
			printf ("\t2- Consultar nomes\n");
			printf ("\t3- Deletar nomes\n");
			printf ("\t4- Sair do sistema\n");
			printf ("Op��o:");
	
	scanf ("%d", &opcao);
	system ("cls");
	
	switch (opcao) // sele��o, parecido com o if
	
			{
	
			case 1: // caso escolha 1
			registro (); // comando, printf ("lala"); ou qualquer outro, como a fun��o registro (); sendo puxada caso o usu�rio digite 1
			break; // fecha o case 1
	
			case 2:
			consulta ();
			break;
	
			case 3:
			deletar ();
			break;
	
			case 4:
			printf("\n\nObrigado por utilizar o sistema.\n");
			return 0;
			break;
	
			default:
			nao ();
			break;
			}
		}
	
	}	
	else 
	system ("cls");
	printf ("\nSenha incorreta!");
	
}
