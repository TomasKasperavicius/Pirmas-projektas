#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    std::string vardas, pirma_eil, antra_eil, trecia_eil, ketvirta_eil, penkta_eil, pasisveikinimas="Sveikas, ";
    cout << "Iveskite savo varda:"<< endl;
    cin >> vardas;
    vardas[vardas.size()-1]='i';
    trecia_eil="* "+pasisveikinimas+vardas+"! *";
    for(int i=0;i<trecia_eil.size();i++)
    {
        pirma_eil+="*";
        if(i!=0&&i!=trecia_eil.size()-1)
        {
            antra_eil+=" ";
        }
        else
        {
            antra_eil+="*";
        }
    }
    ketvirta_eil=antra_eil;
    penkta_eil=pirma_eil;
    cout <<pirma_eil<<endl;
    cout <<antra_eil<<endl;
    cout <<trecia_eil<<endl;
    cout <<ketvirta_eil<<endl;
    cout <<penkta_eil<<endl;
    return 0;
}
