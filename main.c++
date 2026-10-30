//GRUPO 3
//RA: 2611600734
//CARLOS ALEXANDRE SILVA DE CAMARGO
//RA: 2611600680
//ENZO FELIPE XAVIER
//RA: 2611600357
//RAFAEL DE CARVALHO COSTA
//Tema: CATÁLOGO DE FILMES

#include <iostream>
#include <locale>
#include <string>
#include <conio.h>

using namespace std;

struct Filme{

               int ano; //ano de lançamento
               int id;
               string nome;
			   float preco;
               string categoria; //drama, ação, suspense...
               string sinopse;
               float duracao; //tempo do filme (min)
               int faixaet; //faixa etária
               float avaliacao; //nota crítica
               bool disponivel;  //(0-Não|1-Sim)

};
    const int C=3;
    Filme vetor[C];
    int quant=0;
    novofilme 
    

void insercao(){
    system("cls");
    if (quant>=C){
        cout << "\n\n\t\tCatalogo cheio!\n\n";
        return;

    }
    Filme novo;
	cout << "\t\tInsira novo filme!\n\n";

	cout << "\n";
    cout << "Nome: ";
    getline(cin >> ws, novo.nome);

    cout << "ID: ";
    cin >> novo.id;

    cout << "Ano de lançamento: ";
    cin >> novo.ano;

    cout << "Preço: ";
    cin >> novo.preco;

    cout << "Categoria: ";
    cin >> novo.categoria;

    cout << "Duração (min): ";
    cin >> novo.duracao;

    cout << "Faixa etária: ";
    cin >> novo.faixaet;

    cout << "Avaliação (0-10): ";
    cin >> novo.avaliacao;

    cout << "O filme está disponível?: ";
    cin >> novo.disponivel;

    vetor[quant] = novo;
    quant++;

    cout << "\n\n\t\tFilme inserido com sucesso!\n\n";
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op = 99;
	while(op != 0){
		system("cls");
	    cout << "\t--------- CATÁLOGO DE FILMES --------- \n\n";
	    cout << "\t*** MENU INICIAL ***" << endl;
	    cout << "\tSelecione uma opção: " << endl;
        cout <<"\t1  - inserir filme" << endl;
        cout <<"\t2  - inserir novo filme no início" << endl;
        cout <<"\t3  - Inserir um nó da posição k" << endl;
        cout <<"\t4  - Selecione nó pelo ID e remova o nó posterior" << endl;
        cout <<"\t5  - Consulte o filme na posição anterior ao nó de nome escolhido" << endl;
        cout <<"\t6  - Imprimir Lista" << endl;
        cout <<"\t7  - Consulte nó com o nome escolhido e aumentar o preço em 15%" << endl; // mostrando o preço antes e o atualizado
        cout <<"\t8  - Quantidade de filmes com avaliação maior ou igual a escolhida" << endl;
        cout <<"\t9  - Imprimir filmes da categoria escolhida" << endl;
        cout <<"\t10 - Filmes disponíveis para faixa etária igual ou maior a escolhida" << endl;
        cout <<"\t11 - Ordem decrescente de filmes por ano" << endl; // filme mais novo > filme mais antigo
        cout <<"\t12 - Valor total (R$) de todos os filmes e média por categoria" << endl;
        cout <<"\t13 - Remover filme com nome igual ao escolhido" << endl;
        cout <<"\t0  - Sair";

        cout << "\n\n\tInforme uma opção: ";
	    cin >> op; 

        switch (op){
    
        case 1:
            insercao();
            break;
        
        case 2:
            remoção();
            break;


        default:
            break;
        }
    }
}
