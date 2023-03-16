#include "Paciente.h"

void Paciente::setSexo(string sexo)
{
    if((sexo=="Masculino"||sexo=="masculino") || (sexo=="Feminino"||sexo=="feminino"))
    {
        this->sexo=sexo;
    }

    else
    {
        throw invalid_argument("Genero nao cadastrado");
    }
}

void Paciente::setAltura(float altura)
{
    if(altura<=0)
    {
        throw out_of_range("Valor tem que ser maior que zero");
    }

    if(altura>=100) // Está em centímetros
    {
        altura/=100; // Transformar em metros
    }

    this->altura=altura;
}

void Paciente::setPeso(float peso)
{
    if(peso<=0)
    {
        throw out_of_range("Valor tem que ser maior que zero");
    }

    this->peso=peso;
}

Paciente::Paciente(string nome,string sexo,float peso,float altura)
{
    setNome(nome);
    setSexo(sexo);
    setPeso(peso);
    setAltura(altura);
}
