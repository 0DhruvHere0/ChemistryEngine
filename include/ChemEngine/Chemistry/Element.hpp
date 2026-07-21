#pragma once
#include <string>
namespace ChemEngine
{
    enum class Category{
        AlkaliMetal,
        AlkalineEarthMetal,
        TransitionMetal,
        PostTransitionMetal,
        Metalloid,
        NonMetal,
        Halogen,
        NobleGas,
        Lanthanide,
        Actinide,
        Unknown
    };
    enum class State{
        Solid,
        Liquid,
        Gas,
        Unknown
    };
    class Element
    {
    public:
        Element(
            const std::string& symbol,
            const std::string& name,
            int atomicNumber,
            double atomicMass,
            int valenceElectrons,
            int group,
            int period,
            State state,
            Category category,
            double elecronegativity
        );
        const std::string& symbol() const;
        const std::string& name() const;
        int atomicNumber() const;
        double atomicMass() const;
        int valenceElectrons() const;
        int group() const;
        int period() const;
        State state() const;
        Category category() const;
        double electronegativity() const;
    private:
        std::string m_symbol;
        std::string m_name;
        int m_atomicNumber;
        double m_atomicMass;
        int m_valenceElectrons;
        int m_group;
        int m_period;
        State m_state;
        Category m_category;
        double m_electronegartivity;
    };
}