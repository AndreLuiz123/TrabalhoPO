#ifndef LINHADOTEMPO_H_INCLUDED
#define LINHADOTEMPO_H_INCLUDED

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
    Data dataEncomendaMaisBaixa;
    Data dataEntregaMaisAlta;

    void simplificaDataPedido(int diaEncomenda,int mesEncomenda, int anoEncomenda, int diaEntrega,int mesEntrega, int anoEntrega);


    void setPedido(Pedido pedido);
    vector<Pedido> getPedidos();

}

#endif
