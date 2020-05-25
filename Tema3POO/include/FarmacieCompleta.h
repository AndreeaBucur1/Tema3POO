#ifndef FARMACIECOMPLETA_H
#define FARMACIECOMPLETA_H
#include "Farmacie.h"
#include "FarmacieOnline.h"


class FarmacieCompleta:public Farmacie , public FarmacieOnline
{   private:

    public:
        FarmacieCompleta();
        FarmacieCompleta(string numeFarmacie,int nrAngajati,float profit,string adresaWeb,int numarVizitatori,int discount);
        FarmacieCompleta(const FarmacieCompleta &f);
        virtual ~FarmacieCompleta();
        virtual void afisare(ostream & out);
        friend istream & operator >> (istream & in, FarmacieCompleta &f);
        friend ostream & operator << (ostream & out,FarmacieCompleta &f);
        FarmacieCompleta & operator =(const FarmacieCompleta &f);



};

#endif // FARMACIECOMPLETA_H
