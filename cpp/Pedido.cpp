#include "../h/Pedido.h"

Pedido::Pedido(int dataEncomenda, int dataEntrega,  int injetora, int cartucho, int diplomata, int especial, int purse){
    setEtapas(injetora, cartucho, diplomata, especial, purse);
    setDataEncomenda(dataEncomenda);
    setDataEntrega(dataEntrega);
}

void Pedido::setEtapas(int injetora, int cartucho, int diplomata, int especial, int purse){
    etapas[0] = injetora;
    etapas[1] = cartucho;
    etapas[2] = diplomata;
    etapas[3] = especial;
    etapas[4] = purse;
}

int* Pedido::getEtapas(){
    return etapas;
}

void Pedido::setDataEncomenda(float dataEncomenda){
    this->dataEncomenda = dataEncomenda;
}

float Pedido::getDataEncomenda(){
    return dataEncomenda;
}

void Pedido::setDataEntrega(float dataEntrega){
    this->dataEntrega = dataEntrega;
}

float Pedido::getDataEntrega(){
     return dataEntrega;
}

Pedido::~Pedido(){

}
