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

int LinhaTempo::calculaDistanciaDataEntregaEncomenda(){
    
    int dia1, mes1, ano1, dia2, mes2;

    if(dataEncomendaMaisBaixa.mes%2 == 0)
        dia1 = 31 - dataEncomendaMaisBaixa.dia;
    else
        dia1 = 30 - dataEncomendaMaisBaixa.dia;

    mes1 = (12 - dataEncomendaMaisBaixa.mes + 1)*30;

    ano1 = (dataEntregaMaisAlta.ano - dataEncomendaMaisBaixa.ano)*365;

    mes2 = dataEntregaMaisAlta.mes*30;

    dia2 = dataEntregaMaisAlta.dia;

    return dia1 + mes1 + ano1 + mes2; 
}

void LinhaTempo::criaLinhaTempo(){
    
    int diasDisponiveis = calculaDistanciaDataEntregaEncomenda();
    Data novaData;
    novaData = dataEncomendaMaisBaixa;

    agenda.push_back(novaData);

    for(int i=0; i<diasDisponiveis; i++){
        novaData.dia++;
        if((novaData.dia == 32 && novaData.mes%2==0 && novaData.mes%2!=2) || (novaData.dia == 31 && novaData.mes%2!=0) ||(novaData.dia == 29 && novaData.mes%2==2)) 
        {
            novaData.dia = 1;
            novaData.mes ++;
            if(novaData.mes == 13)
            {
                novaData.mes = 1;            
                novaData.ano ++;
            }
        }
        
        agenda.push_back(novaData);    
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
