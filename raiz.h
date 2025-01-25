/*Este código tem como objetivo realizar uma rapida simulação de herança com
o conceito inicial do polimorfismo como atividade da aula 17 - Polimorfismo
LUCAS ANTONIO CUNHA RODRIGUES DA SILVA - 25/01/2025*/
using namespace std;//namespace para facilitar escrita do codigo
#include<iostream>//diretriz pre-processamento fluxo entrada
#define raiz_h//definindo o arquivo


class ToolBox{//declaração classe ToolBox
    public: virtual void sum(){//metodo virtual para soma 
        cout<<"A soma dos valores : "<<a+b<<endl;
        return;
    };
    public: virtual void divide(){//metodo virtual para divisão
        cout<<"A divisao dos valores : "<<a/b<<endl;
        return;
    }
    public: void setData(const float a1, const float b1){//função para setar os dados
        a = a1;
        b = b1;
    }
    protected:
    float a;
    float b;
};

