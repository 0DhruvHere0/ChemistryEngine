#include "ChemEngine/Molecule.hpp"
namespace ChemEngine
{
    Molecule::Molecule() = default;
    Molecule::Molecule(std::initializer_list<Atom> atoms,
                    std::initializer_list<Bond> bonds)
    : m_atoms(atoms),
      m_bonds(bonds)
    {
    }
    void Molecule::addAtom(const Atom& atom)
    {
        m_atoms.push_back(atom);
    }
    void Molecule::addBond(const Bond& bond)
    {
        m_bonds.push_back(bond);
    }
    std::size_t Molecule::atomCount() const
    {
        return m_atoms.size();
    }
    std::size_t Molecule::bondCount() const
    {
        return m_bonds.size();
    }
    const Atom& Molecule::atom(std::size_t index) const
    {
        return m_atoms.at(index);
    }
    const Bond& Molecule::bond(std::size_t index) const
    {
        return m_bonds.at(index);
    }
}