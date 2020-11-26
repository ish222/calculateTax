//
// Created by Ishfaq Wardag on 26/11/2020.
//

#ifndef CALCULATETAX_TAXBRACKET_H
#define CALCULATETAX_TAXBRACKET_H


class TaxBracket {
public:
    TaxBracket(double inpSalary);
    ~TaxBracket();

    char BracketCalculator(double inpSalary);
    double BracketB(double inpSalary);
    double BracketC(double inpSalary);
    double BracketD(double inpSalary);
    double BracketE(double inpSalary);


public:
    double salary;
    char bracket;
    double retSalary;

};


#endif //CALCULATETAX_TAXBRACKET_H
