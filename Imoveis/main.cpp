#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nome1, nome2, nome3;
    double venda1,venda2, venda3, comissao1, comissao2, comissao3, vendeu;

    cout << "Bem Vindo a Imoveis ltda\nDigite seu nome: ";
    cin >>nome1;

    cout <<"Total de vendas: ";
    cin >>venda1;

        if(venda1 > 5000000){
            comissao1 = venda1*0.12;
            vendeu = venda1 / 0.12;
        }else if (venda1 >= 3000000 && venda1 <= 5000000){
            comissao1 = venda1*0.095;
            vendeu = venda1 / 0.095;
        } else {
            comissao1 = venda1*0.07;
            vendeu = venda1 / 0.07;
        }

system("cls");

    cout << "Digite seu nome: ";
    cin >>nome2;

    cout <<"Total de vendas: ";
    cin >>venda2;

        if(venda2 > 5000000){
            comissao2 = venda2*0.12;
            vendeu = venda2 / 0.12;
        }else if (venda2 >= 3000000 && venda2 <= 5000000){
            comissao2 = venda2*0.095;
            vendeu = venda2 / 0.095;
        } else {
            comissao2 = venda2*0.07;
            vendeu = venda2 / 0.07;
        }

system("cls");

    cout << "Digite seu nome: ";
    cin >>nome3;

    cout <<"Total de vendas: ";
    cin >>venda3;

        if(venda3 > 5000000){
            comissao3 = venda3*0.12;
            vendeu = venda3 / 0.12;
        }else if (venda3 >= 3000000 && venda3 <= 5000000){
            comissao3 = venda3*0.095;
            vendeu = venda3 / 0.095;
        } else {
            comissao3 = venda3*0.07;
            vendeu = venda3 / 0.07;
        }

system("cls");

cout << fixed << setprecision(0);

cout <<"Fechamento de Abril: "<<endl<<"\nCorretor: "<<nome1<<"\nValor da venda: "<<venda1<<"\nComissao: "<<comissao1<<endl;
cout<<"\n";
cout <<"Corretor: "<<nome2<<"\nValor da venda: "<<venda2<<"\nComissao: "<<comissao2<<endl;
cout<<"\n";
cout <<"Corretor: "<<nome3<<"\nValor da venda: "<<venda3<<"\nComissao: "<<comissao3<<endl;

    return 0;
}
