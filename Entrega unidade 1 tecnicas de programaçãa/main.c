#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

// Unidade 1 Técnicas de programação unidade 01 //

typedef struct
{
    int ativo;
    char nome [20], modelo [20],placa [9];
    int ano;
}veiculo;
veiculo automovel [MAX];

void menu();


int main (){
	setlocale(LC_ALL, "Portuguese");
	menu();

return 0;
}

void menu(){
		
	char modelo [20];
	int i, voltar, filt_mod, escolha, op1 , ano_fabr, lista, filt_ano; 

	filt_mod=0;
	ano_fabr=0;
	i=0;
	automovel[i].ativo =0;

	strcpy(automovel[i].nome,"NULL");
	strcpy(automovel[i].modelo,"NULL");
	strcpy(automovel[i].placa,"NULL");
	automovel[i].ano=0;

do{
		system("cls");
    printf("\n ========== Veículos ========== \n");
    printf("\n 1 - Novo Veículo.  ");
    printf("\n 2 - Veículos Cadastrados. ");
    printf("\n 3 - Filtrar veículos pelo modelo.  ");
    printf("\n 4 - Filtrar veículos pelo ano de fabricação.  ");
    printf("\n 0 - Fechar \n ");
    scanf("%d", &escolha);
    
    
switch(escolha)
    {
    case 1:
  			system("cls");
        if(automovel[i].ativo< MAX)
        {
            automovel[i].ativo=i;
            
			printf("\n Fabricante do veículo: ");
           		scanf("%s",&automovel[i].nome);
            
			printf("\n Modelo do veículo: ");
            	scanf("%s",&automovel[i].modelo);
           
            printf("\n Digite o ano de fabricação do veículo: ");
            	scanf("%d",&automovel[i].ano);
			
			printf("\n Digite a placa do veículo. Ex:  ABC1234 : " );
           		scanf("%s",&automovel[i].placa);
            i=i+1;
            
          
        }else{
        	
          	printf("\n ========== Espaço Completo. Não foi possível realizar um novo cadastro  ========== \n\n" );
        }
        break;
    case 2:
    	system("cls");
			printf("\n  =================== Veículos cadastrados ========================== \n");
		
		for ( lista =0 ; lista < i ; lista++)
        {
            printf("\n Veículo: %s \n",strupr(automovel[lista].nome));
            printf("\n Modelo: %s \n",strupr(automovel[lista].modelo));
            printf("\n Ano de Fabricação: %d \n",automovel[lista].ano);
            printf("\n Placa do veículos: %s  \n\n",strupr(automovel[lista].placa));
            printf("\n\n  ============================================================ \n");  
		}	getchar();
do{
			printf("\n 0 - voltar \n ");
				scanf("%d \n" , &voltar);
			if ( voltar == 0){
				menu();
			}
}while
			(voltar!=0);
        break;
    case 3:
  			system("cls");
     printf("\n ========== Pesquisa Modelo  ========== \n");
     
      	  	scanf("%s",modelo);
       
	    for( lista = 0 ; lista < i; lista++)
        {
            if (strcmp(automovel[lista].modelo,strlwr(modelo))==0)
            {	
            printf("\n Veículo: %s \n",strupr(automovel[lista].nome));
            printf("\n Modelo: %s \n",strupr(automovel[lista].modelo));
            printf("\n Ano de Fabricação: %d \n",automovel[lista].ano);
            printf("\n Placa do veículos: %s  \n\n",strupr(automovel[lista].placa));
            printf("\n\n  ============================================================ \n");
            filt_mod++;
            }
        }
        if(filt_mod==0)
        {
            printf(" \n ========== Não encontrado modelo  ========== \n\n",modelo);
        }
        
        else
        {
            filt_mod=0;
        }
        
do{
			printf("\n 0 - voltar \n ");
				scanf("%d \n" , &voltar);
			if ( voltar == 0){
				menu();
			}
}while(voltar!=0);
        
        break;
   	case 4:
  	  system("cls");
		printf("\n ========== Pesquisa Ano  ========== \n");
        	scanf("%d",&ano_fabr);
        
		for( lista = 0; lista < i; lista ++)
        {
            if(automovel[lista].ano>= ano_fabr)
            {
                 printf("\n Veículo :%s",automovel[lista].nome);
                 printf("\n Modelo: %s",automovel[lista].modelo);
                 printf("\n Ano de Fabricação: %d",automovel[lista].ano);
                 printf("\n Placa do veículos:%s \n\n",automovel[lista].placa);
                 printf("\n\n===================================\n\n");
                 filt_mod++;
            }
        }
        if(filt_mod==0)
        {
            printf( "\n ========== Não encontrado  ========== \n",ano_fabr);
        }
        else
        {
            filt_mod=0;
        }
        break;
    	//  defaut:
        printf("\n ========== Opcao não Existe  ========== \n");
            break;
    }
}
while (escolha!=4 &&i<=9);
if (i== MAX)
{
    	printf("\n ========== Limite de Veiculos Alcançado!  ========== \n" );
}
		for ( filt_ano = 0 ; filt_ano < i ; filt_ano++)
{
                 printf("\n Veículo :%s",automovel[lista].nome);
                 printf("\n Modelo: %s",automovel[lista].modelo);
                 printf("\n Ano de Fabricação: %d",automovel[lista].ano);
                 printf("\n Placa do veículos:%s \n\n",automovel[lista].placa);
                 printf("\n\n===================================\n\n");
}
do{
			printf("\n 0 - voltar \n");
			scanf("%d \n" , &voltar);
			if ( voltar == 0){
				menu();
			}
}while
		(voltar!=0);	
}

