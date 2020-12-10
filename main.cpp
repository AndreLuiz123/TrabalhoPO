#include <iostream>
#include "h/Pedido.h"
#include "h/Semana.h"

using namespace std;
int main(){

    cout<<"Hello world"<<endl;    
    Pedido pedido(10,20,1,2,3,4,5);
    cout<<pedido.getDataEncomenda()<<endl;
    cout<<pedido.getDataEntrega()<<endl;

    Semana semana(56,56,2);

    semana.setPedido(pedido);
    semana.criaFuncionario(1000,2000,3000,false);
    cout<<semana.getTempoSemanalTotal()<<endl;
    cout<<semana.getTempoSemanalDisponivel()<<endl;
    cout<<semana.getHorasExtras()<<endl;
    cout<<semana.getFuncionariosDisponiveis()[0].id<<endl;


    
    return 0;
}
