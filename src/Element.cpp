#include <ChemEngine/Element.hpp>
namespace ChemEngine
{
    Element::Element(
        const std::string& symbol,
        const std::string& name,
        int atomicNumber,
        double atomicMass,
        int valenceElectrons
    )
        : m_symbol(symbol),
          m_name(name),
          m_atomicNumber(atomicNumber),
          m_atomicMass(atomicMass),
          m_valenceElectrons(valenceElectrons)
    {
    }
    const std::string& Element::symbol() const
    {
        return m_symbol;
    }
    const std::string& Element::name() const
    {
        return m_name;
    }
    int Element::atomicNumber() const
    {
        return m_atomicNumber;
    }
    double Element::atomicMass() const
    {
        return m_atomicMass;
    }
    int Element::valenceElectrons() const
    {
        return m_valenceElectrons;
    }
}