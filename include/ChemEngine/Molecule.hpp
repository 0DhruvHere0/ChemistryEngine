#pragma once
#include <vector>
#include <initializer_list>
#include "ChemEngine/Atom.hpp"
#include "ChemEngine/Bond.hpp"
namespace ChemEngine
{
    class Molecule
    {
    public:
        Molecule();
        Molecule(std::initializer_list<Atom> atoms,
            std::initializer_list<Bond> bonds);
        void addAtom(const Atom& atom);
        void addBond(const Bond& bond);
        std::size_t atomCount() const;
        std::size_t bondCount() const;
        const Atom& atom(std::size_t index) const;
        const Bond& bond(std::size_t index) const;
    private:
        std::vector<Atom> m_atoms;
        std::vector<Bond> m_bonds;
    };

}