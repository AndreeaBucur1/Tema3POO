#include "Proprietar.h"
#include<iostream>
#include "MyExceptions.h"
using namespace std;

Proprietar::Proprietar()
{
    //ctor
}
Proprietar::Proprietar(string nume,string prenume)
        {
            this->fname=prenume;
            this->lname=nume;
        }
Proprietar::Proprietar(const Proprietar &p)
        {
            this->lname=p.lname;
            this->fname=p.fname;
        }
Proprietar::~Proprietar()
{
    lname="";
    fname="";
}

void Proprietar::afisare(ostream& out)
    {
        out<<"Proprietarul lantului este: "<<lname<<' '<<fname<<endl;
    }
istream & operator >> (istream & in,Proprietar & p){
    in>>p.lname;
    in>>p.fname;
    if(p.fname.size()<=0 || p.lname.size()<=0)
        throw (MyExceptions("Nu ati dat un nume!"));
    return in;

}

ostream & operator << (ostream & out,  Proprietar & p){
    p.afisare(out);
    return out;
}
