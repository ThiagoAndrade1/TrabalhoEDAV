#include <iostream>
#include <stdlib.h>
using namespace std;

class Professor
{
	public:
		int matricula;
		char nome[20];
		int salariomes;
		int salariohora;
        int quanthora;
		
		void mostraMatricula()
		{
			cout << matricula;
		} 
		
		void mostraSalarioMes()
		{
			cout << salariomes;
		} 
		
		void mostraNome()
		{
			cout << nome;
		} 
		void mostraSalarioHora()
		{
			cout << salariohora;
		}
}; 

class ProfessorTI: public Professor
{
    public:
        void calcularTI()
        {
            salariomes = salariohora * 40;
            cout << salariomes;
        }

};
class ProfessorTP: public Professor
{
    public:
        void calcularTP()
        {
            salariomes = salariohora * 20;
            cout << salariomes;
        }
};
class ProfessorHorista: public Professor
{
    public:
        void calcularH()
        {
            salariomes = quanthora *  salariohora;
            cout << salariomes;
        }
};

int main()
{
    ProfessorTI c1;
    cout <<"---Professor TI---";
    cout << "\n"<<"Informe seu nome: ";
    scanf("%s",c1.nome);
    c1.mostraNome(); cout <<", informe sua matricula: ";
    scanf("%i",&c1.matricula);
    c1.mostraNome();
     cout << ", informe seu salario por hora: ";
    scanf("%i",&c1.salariohora);
    cout <<"\n"<<"Nome: "<<c1.nome;
    cout <<"\n"<<"Matricula: "<<c1.matricula;
    cout <<"\n"<<"Salario: ";
    c1.calcularTI();
    cout << "\n""\n";

    ProfessorTP c2;
    cout <<"---Professor TP---";
    cout << "\n"<<"Informe seu nome: ";
    scanf("%s",c2.nome);
    c2.mostraNome();
     cout <<", informe sua matricula: ";
    scanf("%i",&c2.matricula);
    c2.mostraNome();
     cout << ", informe seu salario por hora: ";
    scanf("%i",&c2.salariohora);
    cout <<"\n";
    cout <<"\n"<<"Nome: "<<c2.nome;
    cout <<"\n"<<"Matricula: "<<c2.matricula;
    cout <<"\n"<<"Salario: ";
    c2.calcularTP();
    cout << "\n""\n";
    

    ProfessorHorista c3;
    cout <<"---Professor Horista---";
    cout << "\n"<<"Informe seu nome: ";
    scanf("%s",c3.nome);
    c3.mostraNome();
     cout <<", informe sua matricula: ";
    scanf("%i",&c3.matricula);
    c3.mostraNome();
     cout << ", informe seu salario por hora: ";
    scanf("%i",&c3.salariohora);
    c3.mostraNome(); cout << "Informe a quantidade de horas trabalhadas: ";
    scanf("%i",&c3.quanthora);
    cout << "\n""\n";
    cout <<"\n"<<"Nome: "<<c3.nome;
    cout <<"\n"<<"Matricula: "<<c3.matricula;
    cout <<"\n"<<"Salario: ";
    c3.calcularH();
    cout <<"\n";
}
