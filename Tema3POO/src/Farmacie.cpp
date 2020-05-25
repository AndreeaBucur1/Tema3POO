#include "Farmacie.h"
#include<bits/stdc++.h>
#include "MyExceptions.h"
using namespace std;

Farmacie::Farmacie() {}

Farmacie::Farmacie(string nume,int angajati,float profit)
    {
        this->numeFarmacie=nume;
        this->nrAngajati=angajati;
        this->profit=profit;
    }
Farmacie::Farmacie(const Farmacie &f)
    {
        this->numeFarmacie=f.numeFarmacie;
        this->nrAngajati=f.nrAngajati;
        this->profit=f.profit;
    }
Farmacie::~Farmacie()
{

    this->numeFarmacie="";
    this->nrAngajati=0;
    this->profit=0;
}

void Farmacie::afisare(ostream &out)
    {
        out<<"Numele farmaciei: "<<numeFarmacie<<endl<<"Numar angajati: "<<nrAngajati<<endl<<"Profit: "<<profit<<endl;
    }
istream& operator >> (istream & in, Farmacie &f)
    {
        cout<<"Nume farmacie: ";
        in>>f.numeFarmacie;
        cout<<"Nr. angajati: ";
        in>>f.nrAngajati;
        cout<<"Profit: ";
        in>>f.profit;
        if(f.nrAngajati<=0)
            throw (MyExceptions("Numar angajati incorect"));
        if(f.profit<0)
            throw (MyExceptions("Profit incorect"));
        if(f.numeFarmacie=="")
            throw (MyExceptions("Nu ati dat un nume"));
        return in;
    }

ostream& operator << (ostream &out, Farmacie &f)
{
     //out<<"Numele farmaciei: "<<f.numeFarmacie<<endl<<"Numar angajati: "<<f.nrAngajati<<endl<<"Profit: "<<f.profit<<endl;
     f.afisare(out);
     return out;
}

Farmacie & Farmacie::operator =(const Farmacie &f)
    {
        if(this!= &f)
            {this->numeFarmacie=f.numeFarmacie;
            this->nrAngajati=f.nrAngajati;
            this->profit=f.profit;
            }
        return *this;
    }
