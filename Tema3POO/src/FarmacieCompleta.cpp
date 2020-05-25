#include "FarmacieCompleta.h"

FarmacieCompleta::FarmacieCompleta():Farmacie(),FarmacieOnline()
{
    //ctor
}
FarmacieCompleta::FarmacieCompleta(string numeFarmacie,int nrAngajati,float profit,string adresaWeb,int numarVizitatori,int discount):Farmacie(numeFarmacie,nrAngajati,profit),FarmacieOnline(adresaWeb,numarVizitatori,discount)
        {
        }
FarmacieCompleta::FarmacieCompleta(const FarmacieCompleta &f):Farmacie(f),FarmacieOnline(f)
{

}

FarmacieCompleta::~FarmacieCompleta()
{
    //dtor
}

void FarmacieCompleta::afisare(ostream & out)
    {
        Farmacie::afisare(out);
        FarmacieOnline::afisare(out);
    }

istream & operator >> (std::istream & in, FarmacieCompleta &f)
    {
        in >> dynamic_cast<Farmacie&>(f);
        in >> dynamic_cast<FarmacieOnline&>(f);
        return in;
    }

ostream & operator << (ostream & out,FarmacieCompleta &f)
    {
        f.afisare(out);
        return out;
    }

FarmacieCompleta & FarmacieCompleta::operator=(const FarmacieCompleta &f)
    {
            if (this!= &f)
                {
                Farmacie::operator=(f);
                FarmacieOnline::operator=(f);
                }
            return *this;
    }
