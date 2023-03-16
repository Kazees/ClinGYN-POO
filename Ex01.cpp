
#include <iostream>
#include <iomanip>
#include <string>
#include "Paciente.h"
#include "Paciente.cpp"

using namespace std;

int main()
{
    string nome,sexo;
    float peso,altura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite seu nome: ";
        getline(cin,nome);

        cout<<"Digite seu sexo: ";
        cin>>sexo;

        cout<<"Digite seu peso: ";
        cin>>peso;

        cout<<"Digite sua altura: ";
        cin>>altura;

        try
        {
            Paciente n1(nome,sexo,peso,altura);
            cout<<endl<<"Nome: "<<n1.getNome()<<endl;
            cout<<"Sexo: "<<n1.getSexo()<<endl;
            cout<<"Peso: "<<n1.getPeso()<<endl;
            cout<<fixed<<setprecision(2);
            cout<<"Altura: "<<showpoint<<n1.getAltura()<<endl;
            cout<<"IMC: "<<n1.calcularIMC()<<endl;
            conti=false;
        }

        catch(invalid_argument &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }

        catch(out_of_range &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }

        cin.ignore();
    }

    return 0;
}
