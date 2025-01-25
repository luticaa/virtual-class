/*Este código tem como objetivo realizar uma rapida simulação de herança com
o conceito inicial do polimorfismo como atividade da aula 17 - Polimorfismo
LUCAS ANTONIO CUNHA RODRIGUES DA SILVA - 25/01/2025*/
#include "derivada.hpp"

int main(){
    ToolBox* ptr1 = new ToolBox();
    ToolBox* ptr2 = new Numerica();
    ptr1->setData(3.2705,5.4433);
    ptr2->setData(3.2705,5.4433);
    cout<<"RESULTADOS PARA BASE"<<endl;
    ptr1->sum();
    ptr1->divide();
    cout<<"RESULTADOS PARA HERDADA"<<endl;
    ptr2->sum();
    ptr2->divide();
}