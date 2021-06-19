#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include<conio.h>

#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

struct Contato
{
	string nome;
	string telefone;
};

int main(){
	struct Contato ficha[200];
	int op, cont = 0, i;
	string nome;
	do{
		system("cls");
		cout<< "1-Cadastro\n2-Listar os Contatos\n3-Pesquisar Pelo Nome\n0-sair\nOpcao:" <<endl;
		scanf("%d",&op);
		switch(op){
			case 1:
				system("cls");
				if(cont < 200){
					fflush(stdin);
					cout<< "Informe o nome: ";
					getline(cin, ficha[cont].nome);
					fflush(stdin);
					cout<< "Informe o Telefone: ";
					getline(cin, ficha[cont].telefone);
					
					cont++;
				}else{
					printf("\nBase de Dados Cheia: ");
				}
			break;
			case 2:
				system("cls");
				if(cont > 0){
					for( i = 0; i < cont; i++){
						
						cout <<"Nome: "<< ficha[i].nome << endl;
						cout <<"Telefone: "<< ficha[i].telefone << endl;
						printf("\n=========================================\n");
					}
				}else{
					printf("\nBase de Dados Vazia: ");
				}
				system("pause");
			break;
			case 3:
				system("cls");
				if(cont > 0){
					fflush(stdin);
					printf("Informe o Nome para ser Pesquisado: ");
					getline(cin, nome);
					for( i = 0; i < cont; i++){
						if(nome == ficha[i].nome){
							cout <<"Telefone: "<< ficha[i].telefone << endl;
							cout <<"========================================="<< endl;
						}
						
						
					}
				}else{
					printf("\nBase de Dados Vazia: ");
				}
				system("pause");
			break;
			case 0:
				printf("\nFim");
			break;
			default:
				printf("\nValor Invalido: ");
				
		}
			
	}while(op != 0);
	
	return 0;
}
	
