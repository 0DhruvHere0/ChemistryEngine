#include <ChemEngine/PeriodicTable.hpp>
#include <stdexcept>
namespace ChemEngine
{
    static const Element hydrogen(
        "H",
        "Hydrogen",
        1,
        1.008,
        1
    );
    static const Element helium(
        "He",
        "Helium",
        2,
        4.0026,
        2
    );
    static const Element lithium(
        "Li",
        "Lithium",
        3,
        6.9410,
        1
    );
    static const Element beryllium(
        "Be",
        "Beryllium",
        4,
        9.0122,
        2
    );
    static const Element boron(
        "B",
        "Boron",
        5,
        10.811,
        3
    );
    static const Element carbon(
        "C",
        "Carbon",
        6,
        12.011,
        4
    );
    static const Element nitrogen(
        "N",
        "Nitrogen",
        7,
        14.007,
        5
    );
    static const Element oxygen(
        "O",
        "Oxygen",
        8,
        15.999,
        6
    );
    static const Element fluorine(
        "F",
        "Fluorine",
        9,
        18.998,
        7  
    );
    static const Element neon(
        "Ne",
        "Neon",
        10,
        20.180,
        8
    );
    static const Element sodium(
        "Na",
        "Sodium",
        11,
        22.990,
        1
    );
    static const Element magnesium(
        "Mg",
        "Magnesium",
        12,
        24.305,
        2
    );
    static const Element aluminium(
        "Al",
        "Aluminium",
        13,
        26.982,
        3
    );
    static const Element silicon(
        "Si",
        "Silicon",
        14,
        28.086,
        4
    );
    static const Element phosphorus(
        "P",
        "Phosphorus",
        15,
        30.974,
        5
    );
    static const Element sulphur(
        "S",
        "Sulphur",
        16,
        32.065,
        6
    );
    static const Element chlorine(
        "Cl",
        "Chlorine",
        17,
        35.453,
        7
    );
    const Element& PeriodicTable::get(
        const std::string& symbol
    )
    {
        if (symbol == "H")
        {
            return hydrogen;
        }
        if (symbol == "He")
        {
            return helium;
        }
        throw std::runtime_error(
            "Element not found."
        );
    }
}