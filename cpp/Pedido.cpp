#include "../h/Pedido.h"

//PEDIDO

Pedido::Pedido(int dataEncomenda, int dataEntrega){
    setDataEncomenda(dataEncomenda);
    setDataEntrega(dataEntrega);
}

void Pedido::terminaProducaoProduto(int idProduto){
    produtos[idProduto].setPronto(true);
}

void Pedido::setProduto(Produto produto){
    produtos.push_back(produto);
}

vector<Produto> Pedido::getProdutos(){
    return produtos;
}

void Pedido::setDataEncomenda(float dataEncomenda){
    this->dataEncomenda = dataEncomenda;
}

int Pedido::getDataEncomenda(){
    return dataEncomenda;
}

void Pedido::setDataEntrega(float dataEntrega){
    this->dataEntrega = dataEntrega;
}

int Pedido::getDataEntrega(){
     return dataEntrega;
}

Pedido::~Pedido(){

}

//PRODUTO

Produto::Produto(int injetora, int cartucho, int diplomata, int especial, int purse){
    setEtapas(injetora, cartucho, diplomata, especial, purse);
    setEtapasPreco(0,0,0,0,0);
    setPronto(false);
}

void Produto::setEtapas(int injetora, int cartucho, int diplomata, int especial, int purse){
    etapas[0] = injetora;
    etapas[1] = cartucho;
    etapas[2] = diplomata;
    etapas[3] = especial;
    etapas[4] = purse;
}

int* Produto::getEtapas(){
    return etapas;
}

void Produto::setEtapasPreco(float injetora, float cartucho, float diplomata, float especial, float purse){
    etapasPreco[0] = injetora;
    etapasPreco[1] = cartucho;
    etapasPreco[2] = diplomata;
    etapasPreco[3] = especial;
    etapasPreco[4] = purse;
}

float* Produto::getEtapasPreco(){
    return etapasPreco;
}

void Produto::setDemanda(int demanda){
    this->demanda = demanda;
}

int Produto::getDemanda(){
    return demanda;
}

void Produto::setPronto(bool pronto){
    this->pronto = pronto;    
}

bool Produto::getPronto(){
    return pronto;
}

Produto::~Produto(){

}
