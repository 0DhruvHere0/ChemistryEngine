#include "ChemEngine/Bond.hpp"
namespace ChemEngine
{
    Bond::Bond(std::size_t atom1,
               std::size_t atom2,
               BondType type)
        : m_atom1(atom1),
          m_atom2(atom2),
          m_type(type)
    {
    }
    std::size_t Bond::atom1() const
    {
        return m_atom1;
    }
    std::size_t Bond::atom2() const
    {
        return m_atom2;
    }
    BondType Bond::type() const
    {
        return m_type;
    }
    void Bond::setType(BondType type)
    {
        m_type = type;
    }
    std::string Bond::symbol() const
    {
        switch (m_type)
        {
            case BondType::Single:
                return "-";
            case BondType::Double:
                return "=";
            case BondType::Triple:
                return "≡";
            case BondType::Aromatic:
                return ":";
            default:
                return "?";
        }
    }
}