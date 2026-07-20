#include <iostream>
#include <ChemEngine/Molecule.hpp>
using namespace ChemEngine;
void printMolecule(const Molecule& molecule)
{
    std::cout << "Atoms : " << molecule.atomCount() << '\n';
    std::cout << "Bonds : " << molecule.bondCount() << "\n\n";
    std::cout << "Atoms\n";
    std::cout << "-----\n";
    for (std::size_t i = 0; i < molecule.atomCount(); ++i)
    {
        const Atom& atom = molecule.atom(i);
        std::cout
            << "Index : " << atom.index()
            << "  Atomic Number : " << atom.atomicNumber()
            << "  Charge : " << atom.formalCharge()
            << '\n';
    }
    std::cout << "\nBonds\n";
    std::cout << "-----\n";
    for (std::size_t i = 0; i < molecule.bondCount(); ++i)
    {
        const Bond& bond = molecule.bond(i);
        std::cout
            << bond.atom1()
            << " "
            << bond.symbol()
            << " "
            << bond.atom2()
            << '\n';
    }
}
int main()
{
    std::cout << "Molecule Test";
    Molecule water(
        {
            Atom(0, 1),
            Atom(1, 8),
            Atom(2, 1)
        },
        {
            Bond(0, 1),
            Bond(1, 2)
        }
    );
    std::cout << "Water (H2O)\n";
    printMolecule(water);
    Molecule carbonDioxide(
        {
            Atom(0, 6),
            Atom(1, 8),
            Atom(2, 8)
        },
        {
            Bond(0, 1, BondType::Double),
            Bond(0, 2, BondType::Double)
        }
    );
    std::cout << "Carbon Dioxide (CO2)\n";
    printMolecule(carbonDioxide);
    return 0;
}