#include <ChemEngine/Atom.hpp>
#include <stdexcept>
namespace ChemEngine
{
Atom::Atom(
    std::size_t index,
    int atomicNumber,
    int formalCharge
)
    : m_index(index),
      m_atomicNumber(atomicNumber),
      m_formalCharge(formalCharge)
    {
    if (atomicNumber < 1 || atomicNumber > 118)
    {
        throw std::out_of_range("Invalid atomic number.");
    }
    if (formalCharge < -8 || formalCharge > 8)
    {
        throw std::invalid_argument("Invalid formal charge.");
    }
    }
    std::size_t Atom::index() const
    {
        return m_index;
    }
    int Atom::atomicNumber() const
    {
        return m_atomicNumber;
    }
    int Atom::formalCharge() const
    {
        return m_formalCharge;
    }
    void Atom::setFormalCharge(int formalCharge)
    {
        m_formalCharge= formalCharge;
    }
}