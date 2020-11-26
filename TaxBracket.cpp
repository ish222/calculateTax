//
// Created by Ishfaq Wardag on 26/11/2020.
//

#include "TaxBracket.h"

TaxBracket::TaxBracket(double inpSalary) {  // Constructor of class which automatically calls relevant functions to calculate tax,
    salary = inpSalary;
    bracket = TaxBracket::BracketCalculator(salary);
    switch (bracket){
        case 'a':
            retSalary = salary;
            break;
        case 'b':
            retSalary = BracketB(salary);
            break;
        case 'c':
            retSalary = BracketC(salary);
            break;
        case 'd':
            retSalary = BracketD(salary);
            break;
        case 'e':
            retSalary = BracketE(salary);
            break;
    }

}

TaxBracket::~TaxBracket() = default;  // Destructor

char TaxBracket::BracketCalculator(double inpSalary) {  // Finds the relevant tax bracket of the user
    if(inpSalary <= 12000){
        return 'a';
    }else if(inpSalary > 12000 && inpSalary <= 25000){  // 15% Tax Bracket
        return 'b';
    }else if(inpSalary > 25000 && inpSalary <= 50000){  // 25% Tax Bracket
        return 'c';
    }else if(inpSalary > 50000 && inpSalary <= 100000){  // 35% Tax Bracket
        return 'd';
    }else if(inpSalary > 100000){  // 45% Tax Bracket
        return 'e';
    }


}

double TaxBracket::BracketB(double inpSalary) {
    inpSalary -= 12000;
    inpSalary *= 0.85;

    return inpSalary+12000;
}

double TaxBracket::BracketC(double inpSalary) {
    inpSalary -= 25000;
    double inpSalaryB = TaxBracket::BracketB(25000);
    double inpSalaryC = inpSalary * 0.75;

    return inpSalaryC + inpSalaryB;
}

double TaxBracket::BracketD(double inpSalary) {
    inpSalary -= 50000;
    double inpSalaryC = TaxBracket::BracketC(50000);
    double inpSalaryD = inpSalary * 0.65;

    return inpSalaryC + inpSalaryD;
}

double TaxBracket::BracketE(double inpSalary) {
    inpSalary -= 100000;
    double inpSalaryD = TaxBracket::BracketD(100000);
    double inpSalaryE = inpSalary * 0.55;

    return inpSalaryD + inpSalaryE;
}
