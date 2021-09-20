#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

// Unidade 1 T�cnicas de programa��o unidade 01 //

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
    printf("\n ========== Ve�culos ========== \n");
    printf("\n 1 - Novo Ve�culo.  ");
    printf("\n 2 - Ve�culos Cadastrados. ");
    printf("\n 3 - Filtrar ve�culos pelo modelo.  ");
    printf("\n 4 - Filtrar ve�culos pelo ano de fabrica��o.  ");
    printf("\n 0 - Fechar \n ");
    scanf("%d", &escolha);
    
    
switch(escolha)
    {
    case 1:
  			system("cls");
        if(automovel[i].ativo< MAX)
        {
            automovel[i].ativo=i;
            
			printf("\n Fabricante do ve�culo: ");
           		scanf("%s",&automovel[i].nome);
            
			printf("\n Modelo do ve�culo: ");
            	scanf("%s",&automovel[i].modelo);
           
            printf("\n Digite o ano de fabrica��o do ve�culo: ");
            	scanf("%d",&automovel[i].ano);
			
			printf("\n Digite a placa do ve�culo. Ex:  ABC1234 : " );
           		scanf("%s",&automovel[i].placa);
            i=i+1;
            
          
        }else{
        	
          	printf("\n ========== Espa�o Completo. N�o foi poss�vel realizar um novo cadastro  ========== \n\n" );
        }
        break;
    case 2:
    	system("cls");
			printf("\n  =================== Ve�culos cadastrados ========================== \n");
		
		for ( lista =0 ; lista < i ; lista++)
        {
            printf("\n Ve�culo: %s \n",strupr(automovel[lista].nome));
            printf("\n Modelo: %s \n",strupr(automovel[lista].modelo));
            printf("\n Ano de Fabrica��o: %d \n",automovel[lista].ano);
            printf("\n Placa do ve�culos: %s  \n\n",strupr(automovel[lista].placa));
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
            printf("\n Ve�culo: %s \n",strupr(automovel[lista].nome));
            printf("\n Modelo: %s \n",strupr(automovel[lista].modelo));
            printf("\n Ano de Fabrica��o: %d \n",automovel[lista].ano);
            printf("\n Placa do ve�culos: %s  \n\n",strupr(automovel[lista].placa));
            printf("\n\n  ============================================================ \n");
            filt_mod++;
            }
        }
        if(filt_mod==0)
        {
            printf(" \n ========== N�o encontrado modelo  ========== \n\n",modelo);
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
                 printf("\n Ve�culo :%s",automovel[lista].nome);
                 printf("\n Modelo: %s",automovel[lista].modelo);
                 printf("\n Ano de Fabrica��o: %d",automovel[lista].ano);
                 printf("\n Placa do ve�culos:%s \n\n",automovel[lista].placa);
                 printf("\n\n===================================\n\n");
                 filt_mod++;
            }
        }
        if(filt_mod==0)
        {
            printf( "\n ========== N�o encontrado  ========== \n",ano_fabr);
        }
        else
        {
            filt_mod=0;
        }
        break;
    	//  defaut:
        printf("\n ========== Opcao n�o Existe  ========== \n");
            break;
    }
}
while (escolha!=4 &&i<=9);
if (i== MAX)
{
    	printf("\n ========== Limite de Veiculos Alcan�ado!  ========== \n" );
}
		for ( filt_ano = 0 ; filt_ano < i ; filt_ano++)
{
                 printf("\n Ve�culo :%s",automovel[lista].nome);
                 printf("\n Modelo: %s",automovel[lista].modelo);
                 printf("\n Ano de Fabrica��o: %d",automovel[lista].ano);
                 printf("\n Placa do ve�culos:%s \n\n",automovel[lista].placa);
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

