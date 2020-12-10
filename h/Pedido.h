#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

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
        int etapas[5] = {0,0,0,0,0};
        float dataEncomenda = 0;
        float dataEntrega = 0;

        Pedido(int dataEncomenda, int dataEntrega, int injetora, int cartucho, int diplomata, int especial, int purse);
        ~Pedido();

        void setEtapas(int injetora, int cartucho, int diplomata, int especial, int purse);
        int* getEtapas();
        void setDataEncomenda(float dataEncomenda);
        float getDataEncomenda();
        void setDataEntrega(float dataEntrega);
        float getDataEntrega();
};

#endif
