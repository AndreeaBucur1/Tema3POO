#include<bits/stdc++.h>
#include "Proprietar.h"
using namespace std;
#ifndef FARMACIEONLINE_H
#define FARMACIEONLINE_H
#pragma once

class FarmacieOnline: public Proprietar
{   protected:
        string adresaWeb;
        int numarVizitatori;
        int discount;
        static int nr_viz;

    public:
        FarmacieOnline();
        FarmacieOnline(string a,int nr,int discount);
        FarmacieOnline(const FarmacieOnline &f);
        virtual ~FarmacieOnline();
        virtual void afisare(ostream & out);
        friend istream& operator >> (istream &in, FarmacieOnline &f);
        friend ostream& operator << (ostream &out, FarmacieOnline &f);
        FarmacieOnline & operator = (const FarmacieOnline &f);
        void afisareViz();
        string getAdresaWeb()
        {
            return adresaWeb;
        }
        int getNumarVizitatori()
        {
            return numarVizitatori;
        }
        int getdiscount()
        {
            return discount;
        }
        void setAdresaWeb(string a)
        {
            this->adresaWeb=a;
        }
        void setNumarVizitatori(int nr)
        {
            this->numarVizitatori=nr;
        }
        void setDiscount(int d)
        {
            this->discount=d;
        }

    private:
};

#endif // FARMACIEONLINE_H
