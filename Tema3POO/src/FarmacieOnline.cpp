#include "FarmacieOnline.h"

FarmacieOnline::FarmacieOnline()
{

}
int FarmacieOnline::nr_viz=0;

FarmacieOnline::FarmacieOnline(string a,int nr,int discount)
        {
            this->adresaWeb=a;
            this->numarVizitatori=nr;
            this->discount=discount;
            this->nr_viz+=numarVizitatori;
        }


FarmacieOnline::FarmacieOnline(const FarmacieOnline &f)
        {
            this->adresaWeb=f.adresaWeb;
            this->numarVizitatori=f.numarVizitatori;
            this->discount=f.discount;
            this->nr_viz+=f.numarVizitatori;
        }


FarmacieOnline::~FarmacieOnline()
        {
            adresaWeb="";
            numarVizitatori=0;
            discount=0;
        }


void FarmacieOnline::afisare(ostream & out)
        {
           out<<"Adresa web a farmaciei este: "<<adresaWeb<<endl<<"Numar vizitatori: "<<numarVizitatori<<endl<<"Discount: "<<discount<<"%"<<endl;
        }

void FarmacieOnline::afisareViz()
        {
            nr_viz+=this->numarVizitatori;
        }
istream& operator >> (istream &in, FarmacieOnline &f)
        {

            cout<<"Adresa web a farmaciei este: ";
            in>>f.adresaWeb;
            cout<<"Numarul de vizitatori este: ";
            in>>f.numarVizitatori;
            cout<<"Discountul este: ";
            in>>f.discount;
            return in;
        }
ostream& operator << (ostream &out, FarmacieOnline &f)
        {
            f.afisare(out);
            return out;
        }

FarmacieOnline & FarmacieOnline::operator=(const FarmacieOnline &f)
        {
            if(this!= &f)
                {
                this->adresaWeb=f.adresaWeb;
                this->numarVizitatori=f.numarVizitatori;
                this->discount=f.discount;
                }
            return *this;
        }






