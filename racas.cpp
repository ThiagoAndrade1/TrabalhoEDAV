#include <iostream>
#include <stdlib.h>
using namespace std;

class Mamifero
{
	public:
		char especie[20];
		char raca[20];
		char nome[20];
		
		void mostraEspecie()
		{
			cout << especie;
		} 
		
		void mostraRaca()
		{
			cout << raca;
		} 
		
		void mostraNome()
		{
			cout << nome;
		} 
}; 

class Cachorro: public Mamifero
{
	public:
		void latir()
		{
			cout << "\n" << nome << " esta latindo!\n";
		} 
}; 

class Gato: public Mamifero
{
	public:
		void miar()
		{
			cout << "\n" << nome << " esta miando!\n";
		}
};

class Cavalo: public Mamifero
{
	public:
		int idade;
		
		void mostraIdade()
		{
			cout << idade;
		}
		
		void correr()
		{
			cout << "\n" << nome << " esta correndo!\n";
		}
};

int main()
{
	Cachorro c1;
	cout << "Informe a especie do mamifero: ";
	scanf("%s",c1.especie);
	cout << "Informe a raca do ";
	c1.mostraEspecie();
	cout << ": ";
	scanf("%s",c1.raca);
	cout << "Informe o nome do ";
	c1.mostraEspecie();
	cout << ": ";
	scanf("%s",c1.nome);
	c1.mostraEspecie(); cout << "\n";
	c1.mostraRaca();	cout << "\n";
	c1.mostraNome();
	c1.latir();
	
	Gato g1;
	cout << "Informe a especie do mamifero: ";
	scanf("%s",g1.especie);
	cout << "Informe a raca do ";
	g1.mostraEspecie();
	cout << ": ";
	scanf("%s",g1.raca);
	cout << "Informe o nome do ";
	g1.mostraEspecie();
	cout << ": ";
	scanf("%s",g1.nome);
	g1.mostraEspecie(); cout << "\n";
	g1.mostraRaca();    cout << "\n";
	g1.mostraNome();
	g1.miar();
	
	Cavalo ca1;
	cout << "Informe a especie do mamifero: ";
	scanf("%s",ca1.especie);
	cout << "Informe a raca do ";
	ca1.mostraEspecie();
	cout << ": ";
	scanf("%s",ca1.raca);
	cout << "Informe o nome do ";
	ca1.mostraEspecie();
	cout << ": ";
	scanf("%s",ca1.nome);
	cout << "Informe a idade do ";
	ca1.mostraEspecie();
	cout << ": ";
	scanf("%d",&ca1.idade);
	ca1.mostraEspecie(); cout << "\n";
	ca1.mostraRaca();    cout << "\n";
	ca1.mostraNome();    cout << "\n";
	ca1.mostraIdade();
	ca1.correr();
};
