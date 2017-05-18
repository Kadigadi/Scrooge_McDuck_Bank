//
// Created by Lisa on 18.05.2017.
//

#include "Credit.h"

Credit::Credit(double Summa, double Pr_Stavka, int Monthes)  {
    if (Summa < 10000){
        this->Summa = 10000;
    }
    else if (Summa > 100000000){
        this->Summa = 1000000;
    }
    this->Pr_Stavka = 0.01 * Pr_Stavka;
    this->Monthes = Monthes;
}
