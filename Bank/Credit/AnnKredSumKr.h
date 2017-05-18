//
// Created by Lisa on 18.05.2017.
//

#ifndef BANK_ANNKREDSUMKR_H
#define BANK_ANNKREDSUMKR_H


#include "Credit.h"

class AnnKred: Credit {
public:
    AnnKred(int flag);

private:
   int flag;

    int Count_Credit() override;


};


#endif //BANK_ANNKREDSUMKR_H
