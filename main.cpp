#include <iostream>
#include "TaxBracket.h"

int main() {
    double salary;
    std::cout << "What is your yearly income: ";
    std::cin >> salary;
    std::cout << std::endl;
    TaxBracket person(salary);
    double outputSal = person.retSalary;
    std::cout << "Your tax bracket is: " << (char)toupper(person.bracket) << std::endl;
    std::cout << "Your salary after tax is: " << outputSal << std::endl;
    return 0;
}
