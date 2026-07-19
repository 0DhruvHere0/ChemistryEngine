#pragma once
#include <cstddef>
namespace ChemEngine
{
    class Atom
    {
    private:
        std::size_t m_index;
        int m_atomicNumber;
        int m_formalCharge;
    public:
        Atom(
            std::size_t index,
            int atomicNumber,
            int formalCharge = 0
        );
        std::size_t index() const;
        int atomicNumber() const;
        int formalCharge() const;
        void setFormalCharge(int charge);
    };
}