#ifndef SEMANA_H_INCLUDED
#define SEMANA_H_INCLUDED

#include "Pedido.h"
#include <vector>

using namespace std;

typedef struct Funcionario{
    int id;    
    float perdaProducao;
    float salario;
    bool temporario; 
}func;

class Semana{

    public:

    vector<Pedido> pedidos;
    float tempoSemanalTotal;
    float tempoSemanalDisponivel;    

    float horasExtras;
    vector<Funcionario> funcionarios;


    Semana(float tempoSemanalTotal, float tempoSemanalDisponivel, float horasExtras);
    ~Semana();

    void setPedido(Pedido pedido);
    std::vector<Pedido> getPedidos();

    void setTempoSemanalTotal(float tempoSemanalTotal);
    float getTempoSemanalTotal();

    void setTempoSemanalDisponivel(float tempoSemanalDisponivel);
    float getTempoSemanalDisponivel();

    void setHorasExtras(float horasExtras);
    float getHorasExtras();

    void criaFuncionario(int id, float perdaProducao, float salario, bool temporario);
    std::vector<Funcionario> getFuncionariosDisponiveis();

};


#endif
