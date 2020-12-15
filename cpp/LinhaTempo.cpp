#include "../h/LinhaTempo.h"

LinhaTempo::LinhaTempo(){

}

void LinhaTempo::encaixaDataLinhaTempo(Data data){
    
    bool ano=false, mes=false, dia=false;
    int i = agenda.size()-1;      
    Data aux;

    if(agenda.empty())
    {            
        agenda.push_back(data);         
    }else
    {
        agenda.push_back(data);    
        while(!ano && !mes && !dia){
            if(i==0)
            {
                ano = true;
                mes = true;
                dia = true;
            }else if(agenda[i].ano < agenda[i-1].ano)
            {
                aux = agenda[i];
                agenda[i] = agenda[i-1];
                agenda[i-1] = aux;
                i--;   
            }else{
                ano = true;
                if(agenda[i].mes < agenda[i-1].mes)
                {   
                    aux = agenda[i];
                    agenda[i] = agenda[i-1];
                    agenda[i-1] = aux;
                    i--; 
                }else{
                    mes = true;
                    if(agenda[i].dia < agenda[i-1].dia)
                    {   
                        aux = agenda[i];
                        agenda[i] = agenda[i-1];
                        agenda[i-1] = aux;
                        i--; 
                    }else{
                        dia = true;                    
                    }   
                }
            }        
        }
    }
}

void LinhaTempo::setPedido(Pedido pedido){
    pedidos.push_back(pedido);
}

vector<Pedido> LinhaTempo::getPedidos(){
    return pedidos;
}

void LinhaTempo::setDataEncomendaMaisBaixa(Data dataEncomendaMaisBaixa){
    this->dataEncomendaMaisBaixa = dataEncomendaMaisBaixa;
}

Data LinhaTempo::getDataEncomendaMaisBaixa(){
    return dataEncomendaMaisBaixa;
}

void LinhaTempo::setDataEntregaMaisAlta(Data dataEntregaMaisAlta){
    this->dataEntregaMaisAlta = dataEntregaMaisAlta;
}

Data LinhaTempo::getDataEntregaMaisAlta(){
    return dataEntregaMaisAlta;
}

LinhaTempo::~LinhaTempo(){

}
