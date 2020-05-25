#ifndef GESTIONAREFARMACII_H
#define GESTIONAREFARMACII_H
#include "Farmacie.h"
#include "Proprietar.h"
#include<bits/stdc++.h>
using namespace std;
#pragma once

template <class T> class GestionareFarmacii;

template<class T>
class GestionareFarmacii: public Proprietar
{
    private:
        const int id=0;
        int nrFarmacii;
        T *farmacii;
        T farmacie;
        static int contor;
        int nr;
        static int nrL;
        static int index;



    public:
        GestionareFarmacii();
        GestionareFarmacii(int nr, T farmacii[]);
        GestionareFarmacii(const GestionareFarmacii<T> &ob);
        virtual ~GestionareFarmacii();
        virtual afisare(ostream &out)
                {
                    Proprietar::afisare(out);
                }
        GestionareFarmacii & operator = (const GestionareFarmacii<T> & ob);
        GestionareFarmacii & operator+= (T & ob);
        friend istream & operator >>(istream &in,GestionareFarmacii<T> &ob)
                {
                    cout<<"Proprietarul este: ";
                    in>>dynamic_cast<Proprietar&>(ob);

                    cout<<"Cate farmacii contine lantul "<<ob.nr-contor+ob.nrL<<" ? "<<endl;
                    in>>ob.nrFarmacii;
                    ob.farmacii=new T[ob.nrFarmacii];
                    for(int i=0;i<ob.nrFarmacii;i++)
                        in>>ob.farmacii[i];
                    cout<<endl;
                    return in;
                }
        friend ostream & operator <<(ostream &out,GestionareFarmacii<T> &ob)
                {

                    if(ob.nrFarmacii==0) cout<<"Nicio farmacie."<<endl<<endl;
                    else {
                    out<<"Lantul "<<ob.nr-contor+ob.nrL<<" are "<<ob.nrFarmacii<<" farmacii."<<endl<<endl;
                    ob.afisare(out);
                    cout<<endl;
                    out<<"Farmaciile lantului "<<ob.nr-contor+ob.nrL<<" sunt: "<<endl<<endl;
                    for(int i=0;i<ob.nrFarmacii;i++)
                    {
                        out<<"Index farmacie: "<<++index<<endl<<ob.farmacii[i]<<endl;

                    }
                     cout<<endl;
                            }
                }

};
template <class T>
int GestionareFarmacii<T>::contor=0;
template <class T>
int GestionareFarmacii<T>::index=0;
template <class T>
int GestionareFarmacii<T>::nrL=0;
template <class T>
GestionareFarmacii<T>::GestionareFarmacii()
        {contor++;
        nr=contor;
        nrL++;

        }

template <class T>
GestionareFarmacii<T>::GestionareFarmacii(int nr,T farm[])
        {
            nrFarmacii=nr;
            farmacii=new T[nrFarmacii];
            for(int i=0;i<nrFarmacii;i++)
                farmacii[i]=farm[i];
            contor++;
            nr=contor;
            nrL++;
        }
template <class T>
GestionareFarmacii<T>::GestionareFarmacii(const GestionareFarmacii<T> &ob)
        {
            this->nrFarmacii=ob.nrFarmacii;
            delete []farmacii;
            farmacii=new T[nrFarmacii];
            for(int i=0;i<nrFarmacii;i++)
                this->farmacii[i]=ob.farmacii[i];
            nrL++;

        }

template <class T>
GestionareFarmacii<T>::~GestionareFarmacii()
        {
            nrFarmacii=0;
            delete []farmacii;
            contor=0;
            nr=0;
        }
template <class T>
GestionareFarmacii<T> & GestionareFarmacii<T>::operator = (const GestionareFarmacii <T>&ob)
        {
            if(this!= &ob){
            this->nrFarmacii=ob.nrFarmacii;
            delete []farmacii;
            farmacii=new T[nrFarmacii];
            for(int i=0;i<nrFarmacii;i++)
                this->farmacii[i]=ob.farmacii[i];
                          }
            return *this;
        }
template <class T>
GestionareFarmacii<T> & GestionareFarmacii<T>::operator += (T & ob)
        {
            int nrf=nrFarmacii+1;
            nrFarmacii++;
            T *aux=new T[nrf];
            for(int i=0;i<nrf-1;i++)
                aux[i]=this->farmacii[i];
            aux[nrf-1]=ob;
            delete []farmacii;
            farmacii=new T[nrf];
            for(int i=0;i<nrf;i++)
                farmacii[i]=aux[i];
            delete []aux;
            contor++;
            nrL++;

        }

#endif // GESTIONAREFARMACII_H
