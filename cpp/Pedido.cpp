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

Produto::Produto(int injetora, int cartucho, int diplomata, int especial, int purse, int demanda){
    setEtapas(injetora, cartucho, diplomata, especial, purse);
    setEtapasQuantidade(demanda,demanda,demanda,demanda,demanda);
    setEtapasPreco(0,0,0,0,0);
    setDemanda(demanda);
    setPronto(false);
}

void Produto::produzEtapa(int etapa, int ganhoVelocidade=0){
    //A quantidade de 'etapa', etapasQuantidade[etapa], para ser produzida é subtraída da taxa de produção etapas[etapa]
    etapasQuantidade[etapa] -= (etapas[etapa] + ganhoVelocidade);

}

int Produto::verificaMaior(){
    int maior=0;
    int retorno=0;
    for(int j=0; j<5; j++){
        if(etapasQuantidade[j] > maior)
        {
            maior = etapasQuantidade[j];
            retorno = j;
        }    
    }
    return retorno;
}

int Produto::verificaNumeroProdutosProntos(){
    int i = verificaMaior();
    return demanda - etapasQuantidade[i];
}

bool Produto::verificaDemandaAtendida(){
    if(verificaNumeroProdutosProntos()==0)
        return true;

    return false;
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

void Produto::setEtapasQuantidade(int injetora, int cartucho, int diplomata, int especial, int purse){
    etapasQuantidade[0] = injetora;
    etapasQuantidade[1] = cartucho;
    etapasQuantidade[2] = diplomata;
    etapasQuantidade[3] = especial;
    etapasQuantidade[4] = purse;
}

int* Produto::getEtapasQuantidade(){
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
