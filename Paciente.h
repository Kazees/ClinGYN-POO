#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include <stdexcept>

using std::string;
using std::invalid_argument;
using std::out_of_range;

class Paciente
{
    private:
        string nome;
        float peso;
        float altura;
        string sexo;

    public:
        Paciente(string nome,string sexo,float peso,float altura);
        void setNome(string nome) {this->nome=nome;};
        void setPeso(float peso);
        void setAltura(float altura);
        void setSexo(string sexo);

        string getNome()const {return nome;}
        float getPeso()const {return peso;}
        float getAltura()const {return altura;}
        string getSexo()const {return sexo;}

        float calcularIMC()const {return peso/(altura*altura);}
};

#endif
