#include "../h/Semana.h"

Semana::Semana(float tempoSemanalTotal, float tempoSemanalDisponivel, float horasExtras){
    setTempoSemanalTotal(tempoSemanalTotal);
    setTempoSemanalDisponivel(tempoSemanalDisponivel);
    setHorasExtras(horasExtras);
}

void Semana::setPedido(Pedido pedido){
    pedidos.push_back(pedido);
}

std::vector<Pedido> Semana::getPedidos(){
    return pedidos;
}

void Semana::setTempoSemanalTotal(float tempoSemanalTotal){
    this->tempoSemanalTotal = tempoSemanalTotal;
}

float Semana::getTempoSemanalTotal(){
    return tempoSemanalTotal;
}

void Semana::setTempoSemanalDisponivel(float tempoSemanalDisponivel){
    this->tempoSemanalDisponivel = tempoSemanalDisponivel;
}

float Semana::getTempoSemanalDisponivel(){
    return tempoSemanalDisponivel;
}

void Semana::setHorasExtras(float horasExtras){
    this->horasExtras = horasExtras;
}

float Semana::getHorasExtras(){
    return horasExtras;
}

void Semana::criaFuncionario(int id, float perdaProducao, float salario, bool temporario){
    Funcionario funcionario;
    funcionario.id = id;
    funcionario.perdaProducao = perdaProducao;
    funcionario.salario = salario;
    funcionario.temporario = temporario;
    funcionarios.push_back(funcionario);
}

std::vector<Funcionario> Semana::getFuncionariosDisponiveis(){
   return funcionarios;
}

Semana::~Semana(){

}

