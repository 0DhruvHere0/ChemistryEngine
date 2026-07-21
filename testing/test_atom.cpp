#include <iostream>
#include <ChemEngine/Chemistry/Atom.hpp>
using namespace ChemEngine;
void printAtom(const Atom& atom)
{
    std::cout << "Index          : " << atom.index() << '\n';
    std::cout << "Atomic Number  : " << atom.atomicNumber() << '\n';
    std::cout << "Formal Charge  : " << atom.formalCharge() << '\n';
}
int main()
{
    std::cout << "Atom Test"<<std::endl;
    Atom hydrogen(0, 1);
    std::cout << "Hydrogen\n";
    printAtom(hydrogen);
    Atom oxygen(1, 8);
    std::cout << "Oxygen\n";
    printAtom(oxygen);
    Atom iron(2, "Fe", 2);
    std::cout << "Iron (+2)\n";
    printAtom(iron);
    std::cout << "\nChanging iron oxidation state...\n\n";
    iron.setFormalCharge(3);
    printAtom(iron);
    return 0;
}