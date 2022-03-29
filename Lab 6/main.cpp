#include <iostream>
#include "Clase/Cerc.h"
#include "Clase/Repo.h"
#include "test/test.h"

using namespace std;

void menu()
{
    cout<<"1.Adaugare entitati"<<endl;
    cout<<"2.Afisare entitati"<<endl;
    cout<<"3.Afisare cea mai mare entitate"<<endl;
    cout<<"4.Afisarea tuturor entitatilor care se afla in primul cadran"<<endl;
    cout<<"5.Afisarea celei mai lungi secvente de elemente egale"<<endl;
    cout<<"x.Iesire"<<endl;
}

int main() {
    testAll();
    Repo repository;
    char option;
    bool ok = true;
    int n=0;
    while(ok)
    {
        menu();
        cout<<"Dati o optiune: "<<endl;
        cin>>option;
        Cerc e;
        switch(option)
        {
            case '1': {
                cout<<"Dati nr de elemente pe care doriti sa le adaugati: "<<endl;
                cin>>n;
                if(repository.getVector().size()!=0)
                    repository.getVector().clear();
                for(int i=0;i<n;i++)
                {
                    cout<<"#"<<i+1<<endl;
                    cin>>e;
                    repository.addEntity(e);
                }
                cout<<endl;
                break;
            }
            case '2': {
                for(int i=0;i<n;i++)
                    cout<<repository.getEntity(i);
                cout<<endl;
                break;
            }
            case '3':{
                cout<<"Cel mai mare cerc dintre entitati este: ";
                cout<<repository.getBiggest()<<endl;
                break;
            }
            case '4':{
                vector<Cerc> rezultat;
                if(rezultat.size()==0)
                    cout<<"Nu exista un cerc in primul cadran"<<endl;
                else{
                    cout<<"Cercurile care se afla in primul cadran sunt: "<<endl;
                    rezultat = repository.circleInFirstQuadrant();
                    for(auto i=rezultat.begin(); i<rezultat.end(); i++)
                        cout<<*i;
                }

                break;
            }
            case '5':{
                int start, end;
                repository.sequenceEqualEntities(n, start, end);
                if(start == 0 && end == 0)
                    cout<<"Nu exista o secventa de lungime mai mare de 1";
                else{
                    cout<<repository.getEntity(start);
                    cout<<start<<" "<<end<<endl;
                }

                break;
            }
            case 'x':{
                ok = false;
                break;
            }
            default:{
                cout<<"Optiunea aleasa este gresita!"<<endl;
                break;
            }

        }
    }

    return 0;
}
