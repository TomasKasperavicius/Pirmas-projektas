#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string vardas, pasisveikinimas;
    int remelio_plotis;
    cout << "Iveskite savo varda:"<< endl;
    cin >> vardas;
    std::string zinute="Iveskite remelio ploti:";
    do
    {     
        cout << zinute << endl;
        cin >> remelio_plotis;
        zinute="Plotis turi buti teigiamas skaicius!";
    } while (remelio_plotis<0);
    std::string eilute;
    if(vardas[vardas.size()-1]=='s')
    {
        pasisveikinimas="Sveikas, ";
        vardas[vardas.size()-1]='i';
    }
    else
    {
        pasisveikinimas="Sveika, ";
    }
    for(int i=0;i<remelio_plotis;i++)
    {

    }
    eilute="*"+pasisveikinimas+vardas+"!"+"*";
    if(remelio_plotis==0)
    {
        for(int i=0;i<eilute.size()+remelio_plotis;i++)
        {
            cout << "*";
        }
        cout << endl;
        cout <<eilute<<endl;
        for(int i=0;i<eilute.size()+remelio_plotis;i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    else
    {
        std::string tarpai;
        for(int i=0;i<remelio_plotis;i++)
        {
            tarpai+=" ";
        }
        eilute="*"+tarpai+pasisveikinimas+vardas+"!"+tarpai+"*";
        for(int i=0;i<remelio_plotis*2+3;i++)
        {
            if(i==0||i==remelio_plotis*2+3-1)
            {
                for(int j=0;j<eilute.size();j++)
                {
                cout << "*";
                }
                cout << endl;
            }
            else if(i==remelio_plotis+1)
            {
                cout << eilute <<endl;
            }
            else
            {
                for(int j=0;j<eilute.size();j++)
                {
                    if (j==0||j==eilute.size()-1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }    
                }
                cout << endl;
            }            
        }
    }
    return 0;
}
