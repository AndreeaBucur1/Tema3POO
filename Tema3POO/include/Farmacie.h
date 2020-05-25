#ifndef FARMACIE_H
#define FARMACIE_H
#include<iostream>
#include <Proprietar.h>
#pragma once
using namespace std;

class Farmacie: public Proprietar
{
    protected:
        string numeFarmacie;
        int nrAngajati;
        float profit;

    public:
        Farmacie();
        Farmacie(string nume,int angajati,float profit);
        Farmacie(const Farmacie &f);
        virtual ~Farmacie();
        friend istream& operator >> (istream &in, Farmacie &f);
        friend ostream& operator << (ostream &out, Farmacie &f);
        Farmacie & operator=(const Farmacie &f);
        virtual void afisare(ostream &out);
        string getNume()
        {
            return numeFarmacie;
        }
        int getNrAngajati()
        {
            return nrAngajati;
        }
        int getProfit()
        {
            return profit;
        }
        void setNume(string nume)
        {
            this->numeFarmacie=nume;
        }
        void setNrAngajati(int nr)
        {
            this->nrAngajati=nr;
        }
        void setProfit(float p)
        {
            this->profit=p;
        }


    private:
};

#endif // FARMACIE_H
