#include <iostream>
#include <ChemEngine/Bond.hpp>
using namespace ChemEngine;
void printBond(const Bond& bond)
{
    std::cout << "Atom 1      : " << bond.atom1() << '\n';
    std::cout << "Atom 2      : " << bond.atom2() << '\n';
    std::cout << "Bond Symbol : " << bond.symbol() << '\n';
}
int main()
{
    std::cout << "Bond Test";
    Bond bond(0, 1);
    std::cout << "Default Bond\n";
    printBond(bond);
    bond.setType(BondType::Double);
    std::cout << "After setType(Double)\n";
    printBond(bond);
    bond.setType(BondType::Triple);
    std::cout << "After setType(Triple)\n";
    printBond(bond);
    bond.setType(BondType::Aromatic);
    std::cout << "After setType(Aromatic)\n";
    printBond(bond);
    return 0;
}