#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

#include <vector>

using namespace std;

typedef struct Data{
    int dia;    
    int mes;
    int ano; 
}data;

class Produto{
    public:

        /*
        O vetor etapas[] guarda taxas de produção 
        etapas[0]: Injetora
        etapas[1]: Cartucho
        etapas[2]: Diplomata
        etapas[3]: Especial
        etapas[4]: Purse
        */
        int etapas[5];
        int etapasQuantidade[5];        
        float etapasPreco[5];
        int demanda;          
        bool pronto = false; 

        Produto(int injetora, int cartucho, int diplomata, int especial, int purse,int demanda);
        ~Produto();

        void produzEtapa(int etapa);
        int verificaMaior();
        int verificaNumeroProdutosProntos();
        bool verificaDemandaAtendida();

        void setEtapas(int injetora, int cartucho, int diplomata, int especial, int purse);
        int* getEtapas();
        void setEtapasQuantidade(int injetora, int cartucho, int diplomata, int especial, int purse);
        int* getEtapasQuantidade();
        void setEtapasPreco(float injetora, float cartucho, float diplomata, float especial, float purse);
        float* getEtapasPreco();
        void setDemanda(int demanda);
        int getDemanda();
        void setPronto(bool pronto);
        bool getPronto();      
};

class Pedido{
    public:

        /*
        O vetor etapas[] guarda taxas de produção 
        etapas[0]: Injetora
        etapas[1]: Cartucho
        etapas[2]: Diplomata
        etapas[3]: Especial
        etapas[4]: Purse
        */    

        Pedido(int dataEncomenda, int dataEntrega);
        ~Pedido();

        vector<Produto> produtos;
        int dataEncomenda;
        int dataEntrega;


        void terminaProducaoProduto(int idProduto);

        void setProduto(Produto produto);
        std::vector<Produto> getProdutos();
        void setDataEncomenda(float dataEncomenda);
        int getDataEncomenda();
        void setDataEntrega(float dataEntrega);
        int getDataEntrega();        


};


#endif
