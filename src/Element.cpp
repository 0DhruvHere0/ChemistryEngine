#include <ChemEngine/Element.hpp>
namespace ChemEngine
{
    Element::Element(
        const std::string& symbol,
        const std::string& name,
        int atomicNumber,
        double atomicMass,
        int valenceElectrons,
        int group,
        int period,
        State state,
        Category category,
        double electronegativity
    )
        : m_symbol(symbol),
          m_name(name),
          m_atomicNumber(atomicNumber),
          m_atomicMass(atomicMass),
          m_valenceElectrons(valenceElectrons),
          m_group(group),
          m_period(period),
          m_state(state),
          m_category(category),
          m_electronegartivity(electronegativity)
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
    int Element::group() const
    {
        return m_group;
    }
    int Element::period() const
    {
        return m_period;
    }
    State Element::state() const
    {
        return m_state;
    }
    Category Element::category() const
    {
        return m_category;
    }
    double Element::electronegativity() const
    {
        return m_electronegartivity;
    }
}
