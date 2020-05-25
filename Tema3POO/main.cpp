#include <iostream>
#include "Proprietar.h"
#include "Farmacie.h"
#include "GestionareFarmacii.h"
#include "FarmacieOnline.h"
#include "FarmacieCompleta.h"
using namespace std;

void afisare_meniu()
{
    cout << "MENIU\n";
    cout << "1.Citire si afisare n lanturi farmacii.\n";
    cout << "2. Adaugare farmacie.\n";
    cout << "3. Memorare farmacie online.\n";
    cout << "4.Citire+afisare farmacie completa.\n";
    cout << "6. Exit\n";
    cout<<endl;

}

int main()
{   //afisare_meniu();

    /*vector<tuple<string,int,int>> farmacii;
    FarmacieOnline fo,fo1;
    cin>>fo;
    cin>>fo1;
    farmacii.push_back(tuple<string,int,int> (fo.getAdresaWeb(),fo.getNumarVizitatori(),fo.getdiscount()));
    farmacii.push_back(tuple<string,int,int> (fo1.getAdresaWeb(),fo1.getNumarVizitatori(),fo1.getdiscount()));
     for(const auto &i : farmacii)
        cout<<get<0>(i)<<"  "<<get<1>(i)<<"  "<<get<2>(i)<<endl;*/
      int op,n,i,exit=0;

      GestionareFarmacii <FarmacieCompleta> *farmacii=new GestionareFarmacii<FarmacieCompleta>;

      vector <GestionareFarmacii<FarmacieOnline>*> g;
      vector<tuple<string,int,int>> farm;
    do
    {
        afisare_meniu();
        cout<<"Introduceti o optiune: "<<endl;
        cin>>op;
        cout<<endl;
        if(op==1)
            {

                cout<<"Cate lanturi de farmacii?"<<endl;
                cin>>n;
                cout<<endl;
                for(i=0;i<n;i++)
                    {
                    GestionareFarmacii <FarmacieOnline> *f=new GestionareFarmacii<FarmacieOnline>;

                    cin>>*f;
                    g.push_back(f);
                    }
                cout<<endl<<endl;
                for(i=0;i<n;i++)
                    cout<<*g[i];
                cout<<endl;
            }
        else if(op==2)
            {
                  cout<<*farmacii;
                  FarmacieCompleta farmacieNoua;
                  farmacieNoua.setNume("Catena");
                  farmacieNoua.setNrAngajati(10);
                  farmacieNoua.setProfit(5000);
                  farmacieNoua.setAdresaWeb("Catena.ro");
                  farmacieNoua.setNumarVizitatori(1000);
                  farmacieNoua.setDiscount(15);

                  *farmacii+=farmacieNoua;
                  cout<<*farmacii;
            }
        else if(op==3)
            {
                FarmacieOnline fo;
                cout<<"Dati farmacia: "<<endl;
                cin>>fo;
                farm.push_back(tuple<string,int,int> (fo.getAdresaWeb(),fo.getNumarVizitatori(),fo.getdiscount()));
                cout<<"Vectorul este: ";
                for(const auto &i : farm)
                    cout<<get<0>(i)<<"  "<<get<1>(i)<<"  "<<get<2>(i)<<endl;
                cout<<endl;
            }
        else if(op==4)
            {
                FarmacieCompleta fc;
                cin>>fc;
                cout<<fc;
            }

        else if(op==6)
            exit=1;
        else cout<<"Introduceti o optiune valida!"<<endl;


    }while(exit==0);


  /* vector <GestionareFarmacii<Farmacie>*> g;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        {
        GestionareFarmacii <Farmacie> *f=new GestionareFarmacii<Farmacie>;

        cin>>*f;
        g.push_back(f);
        }

    for(i=0;i<n;i++)
        cout<<*g[i];

    /*Proprietar p;
    cin>>p;
    cout<<p;

    GestionareFarmacii <FarmacieCompleta> f1;
    cin>>f1;
    cout<<f1;
    FarmacieCompleta g1;
    cin>>g1;
    cout<<g1;
    f1+=g1;
    cout<<f1;*/


    return 0;
}
