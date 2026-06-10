#pragma once
#include <string>
namespace ChemEngine
{
    class Element
    {
    public:
        Element(
            const std::string& symbol,
            const std::string& name,
            int atomicNumber,
            double atomicMass,
            int valenceElectrons
        );
        const std::string& symbol() const;
        const std::string& name() const;
        int atomicNumber() const;
        double atomicMass() const;
        int valenceElectrons() const;
    private:
        std::string m_symbol;
        std::string m_name;
        int m_atomicNumber;
        double m_atomicMass;
        int m_valenceElectrons;
    };
}