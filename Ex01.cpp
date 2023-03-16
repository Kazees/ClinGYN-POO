
#include <iostream>
#include <iomanip>
#include <string>
#include "Paciente.h"
#include "Paciente.cpp"

using namespace std;

int main()
{
    Paciente n1;
    string nome,sexo;
    float peso,altura;
    bool continuar=true;

    cout<<"Digite seu nome: ";
    getline(cin,nome);
    n1.setNome(nome);

    while(continuar)
    {
        cout<<"Digite seu sexo: ";
        cin>>sexo;

        try
        {
            n1.setSexo(sexo);
            continuar=false;
        }

        catch(string erro1)
        {
            cout<<erro1<<endl;
            continuar=true;
        }
    }

    continuar=true;
    cout<<'\n';

    while(continuar)
    {
        cout<<"Digite seu peso: ";
        cin>>peso;

        try
        {
            n1.setPeso(peso);
            continuar=false;
        }

        catch(string erro2)
        {
            cout<<erro2<<endl;
            continuar=true;
        }
    }

    continuar=true;
    cout<<'\n';

    while(continuar)
    {
        cout<<"Digite sua altura: ";
        cin>>altura;

        try
        {
            n1.setAltura(altura);
            continuar=false;
        }

        catch(string erro2)
        {
            cout<<erro2<<endl;
            continuar=true;
        }
    }

    cout<<endl<<"Nome: "<<n1.getNome()<<endl;
    cout<<"Sexo: "<<n1.getSexo()<<endl;
    cout<<"Peso: "<<n1.getPeso()<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Altura: "<<showpoint<<n1.getAltura()<<endl;
    cout<<"IMC: "<<n1.calcularIMC()<<endl;

    return 0;
}