//
// Created by Lisa on 18.05.2017.
//

#ifndef BANK_CREDIT_H
#define BANK_CREDIT_H


class Credit {

private:
    double Summa;
    double Pr_Stavka;
    int Monthes;
public:
    Credit(double Summa, double Pr_Stavka, int Monthes);

    virtual int Count_Credit()= 0;
    
};


#endif //BANK_CREDIT_H
