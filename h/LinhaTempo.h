#ifndef LINHADOTEMPO_H_INCLUDED
#define LINHADOTEMPO_H_INCLUDED

#include "Pedido.h"
#include <vector>

using namespace std;

typedef struct Data{
    int dia;    
    int mes;
    int ano; 
}data;

class LinhaTempo{

    public:
        
    vector<Pedido> pedidos;
    vector<Data> agenda;
    Data dataEncomendaMaisBaixa;
    Data dataEntregaMaisAlta;

    LinhaTempo();
    ~LinhaTempo();
    void adicionaPedidoLinhaTempo(Pedido pedido);
    void encaixaDataLinhaTempo(Data data);


    void setPedido(Pedido pedido);
    vector<Pedido> getPedidos();


    void setDataEncomendaMaisBaixa(Data dataEncomendaMaisBaixa);
    Data getDataEncomendaMaisBaixa();
    void setDataEntregaMaisAlta(Data dataEntregaMaisAlta);
    Data getDataEntregaMaisAlta();

};

#endif
