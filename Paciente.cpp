#include "Paciente.h"

void Paciente::setSexo(string sexo)
{
    if((sexo=="Masculino"||sexo=="masculino") || (sexo=="Feminino"||sexo=="feminino"))
    {
        this->sexo=sexo;
    }

    else
    {
        throw string("Genero nao cadastrado");
    }
}

void Paciente::setAltura(float altura)
{
    if(altura<=0)
    {
        throw string("Numero tem que ser maior que zero");
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
        throw string("Numero tem que ser maior que zero");
    }

    this->peso=peso;
}

Paciente::Paciente()
{
    peso=0;
    altura=0;
}