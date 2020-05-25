#ifndef PROPRIETAR_H
#define PROPRIETAR_H
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Proprietar
{
    protected:
        string fname;
        string lname;
    public:
        Proprietar();
        Proprietar(string nume,string prenume);
        Proprietar(const Proprietar &p);
        virtual ~Proprietar();
        void afisare(ostream& out);

        friend istream & operator >> (istream&  in, Proprietar & p);
        friend ostream & operator << (ostream & out,Proprietar & p);
        string getName()
        {
            return lname;
        }
        string setName(string n,string p)
        {
            this->lname=n;
            this->fname=p;
        }

    protected:

    private:
};

#endif // PROPRIETAR_H
