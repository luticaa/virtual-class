/*Este código tem como objetivo realizar uma rapida simulação de herança com
o conceito inicial do polimorfismo como atividade da aula 17 - Polimorfismo
LUCAS ANTONIO CUNHA RODRIGUES DA SILVA - 25/01/2025*/
#include "raiz.h"//diretriz para inclusão classe ToolBox
#include <iomanip>//diretriz para manipulação do fluxo

class Numerica: public ToolBox{//declaração classe Numerica herdada 
    public://membros public
        void sum(){//função soma com precisão de dois decimais
            cout<<fixed<<setprecision(2);
            cout<<"A soma com 2 casas de precisao : "<<a+b<<endl;
        }
        void divide(){//funçaõ divisão dois decimais:
            cout<<fixed<<setprecision(2);
            cout<<"A divisao com 2 casas de precisao : "<<a/b<<endl;
        }
    private:
    /*NÃO HÁ*/

};

