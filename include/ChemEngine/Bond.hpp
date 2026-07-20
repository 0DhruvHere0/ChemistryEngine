#pragma once
#include <cstddef>
#include <string>
namespace ChemEngine
{
    enum class BondType
    {
        Single,
        Double,
        Triple,
        Aromatic
    };
    class Bond
    {
    public:
        Bond(std::size_t atom1,
            std::size_t atom2,
            BondType type = BondType::Single);
        std::size_t atom1() const;
        std::size_t atom2() const;
        BondType type() const;
        void setType(BondType type);
        std::string symbol() const;
    private:
        std::size_t m_atom1;
        std::size_t m_atom2;
        BondType m_type;
    };
}