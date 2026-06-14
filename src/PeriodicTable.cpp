#include <ChemEngine/PeriodicTable.hpp>
#include <stdexcept>
namespace ChemEngine
{
    static const Element hydrogen(
        "H",
        "Hydrogen",
        1,
        1.00784,
        1
    );
    static const Element helium(
        "He",
        "Helium",
        2,
        4.002602,
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
        9.012182,
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
        12.0107,
        4
    );
    static const Element nitrogen(
        "N",
        "Nitrogen",
        7,
        14.0067,
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
        18.9984032,
        7  
    );
    static const Element neon(
        "Ne",
        "Neon",
        10,
        20.1797,
        8
    );
    static const Element sodium(
        "Na",
        "Sodium",
        11,
        22.98976928,
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
        26.9815386,
        3
    );
    static const Element silicon(
        "Si",
        "Silicon",
        14,
        28.0855,
        4
    );
    static const Element phosphorus(
        "P",
        "Phosphorus",
        15,
        30.973762,
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
    static const Element argon(
        "Ar",
        "Argon",
        18,
        39.948,
        8
    );
    static const Element potassium(
        "K",
        "Potassium",
        19,
        39.0983,
        1
    );
    static const Element calcium(
        "Ca",
        "Calcium",
        20,
        40.078,
        2
    );
    static const Element scandium(
        "Sc",
        "Scandium",
        21,
        44.955912,
        2
    );
    static const Element titanium(
        "Ti",
        "Titanium",
        22,
        47.867,
        2
    );
    static const Element vanadium(
        "V",
        "Vanadium",
        23,
        50.9415,
        2
    );
    static const Element chromium(
        "Cr",
        "Chromium",
        24,
        51.9961,
        1
    );
    static const Element manganese(
        "Mn",
        "Manganese",
        25,
        54.938044,
        2
    );
    static const Element iron(
        "Fe",
        "Iron",
        26,
        55.845,
        2
    );
    static const Element cobalt(
        "Co",
        "Cobalt",
        27,
        58.933195,
        2
    );
    static const Element nickel(
        "Ni",
        "Nickel",
        28,
        58.6934,
        2
    );
    static const Element copper(
        "Cu",
        "Copper",
        29,
        63.546,
        1
    );
    static const Element zinc(
        "Zn",
        "Zinc",
        30,
        65.380,
        2
    );
    static const Element gallium(
        "Ga",
        "Gallium",
        31,
        69.723,
        3
    );
    static const Element germanium(
        "Ge",
        "Germanium",
        32,
        72.640,
        4
    );
    static const Element arsenic(
        "As",
        "Arsenic",
        33,
        74.9216,
        5
    );
    static const Element selenium(
        "Se",
        "Selenium",
        34,
        78.960,
        6
    );
    static const Element bromine(
        "Br",
        "Bromine",
        35,
        79.904,
        7
    );
    static const Element krypton(
        "Kr",
        "Krypton",
        36,
        83.798,
        8
    );
    static const Element rubidium(
        "Rb",
        "Rubidium",
        37,
        85.4678,
        1
    );
    static const Element strontium(
        "Sr",
        "Strontium",
        38,
        87.620,
        2
    );
    static const Element yttrium(
        "Y",
        "Yttrium",
        39,
        88.90585,
        2
    );
    static const Element zirconium(
        "Zr",
        "Zirconium",
        40,
        91.224,
        2
    );
    static const Element niobium(
        "Nb",
        "Niobium",
        41,
        92.90638,
        1
    );
    static const Element molybdenum(
        "Mo",
        "Molybdenum",
        42,
        95.950,
        1
    );
    static const Element technetium(
        "Tc",
        "Technetium",
        43,
        98.00,
        2
    );
    static const Element ruthenium(
        "Ru",
        "Ruthenium",
        44,
        101.07,
        1
    );
    static const Element rhodium(
        "Rh",
        "Rhodium",
        45,
        102.9055,
        1
    );
    static const Element palladium(
        "Pd",
        "Palladium",
        46,
        106.42,
        0
    );
    static const Element silver(
        "Ag",
        "Silver",
        47,
        107.8682,
        1
    );
    static const Element cadmium(
        "Cd",
        "Cadmium",
        48,
        112.411,
        2
    );
    static const Element indium(
        "In",
        "Indium",
        49,
        114.818,
        3
    );
    static const Element tin(
        "Sn",
        "Tin",
        50,
        118.71,
        4
    );
    static const Element antimony(
        "Sb",
        "Antimony",
        51,
        121.76,
        5
    );
    static const Element tellurium(
        "Te",
        "Tellurium",
        52,
        127.60,
        6
    );
    static const Element iodine(
        "I",
        "Iodine",
        53,
        126.90447,
        7
    );
    static const Element xenon(
        "Xe",
        "Xenon",
        54,
        131.293,
        8
    );
    static const Element caesium(
        "Cs",
        "Caesium",
        55,
        132.9054519,
        1
    );
    static const Element barium(
        "Ba",
        "Barium",
        56,
        137.327,
        2
    ); 
    static const Element lanthannum(
        "La",
        "Lanthanum",
        57,
        138.90547,
        2
    );
    static const Element cerium(
        "Ce",
        "Cerium",
        58,
        140.116,
        2
    );
    static const Element praseodymium(
        "Pr",
        "Praseodymium",
        59,
        140.90765,
        2
    );
    static const Element neodymium(
        "Nd",
        "Neodymium",
        60,
        144.242,
        2
    );
    static const Element promethium(
        "Pm",
        "Promethium",
        61,
        145,
        2
    );
    static const Element samarium(
        "Sm",
        "Samarium",
        62,
        150.36,
        2
    );
    static const Element europium(
        "Eu",
        "Europium",
        63,
        151.964,
        2
    );
    static const Element gadolinium(
        "Gd",
        "Gadolinium",
        64,
        157.25,
        2
    );
    static const Element terbium(
        "Tb",
        "Terbium",
        65,
        158.92535,
        2
    );
    static const Element dysprosium(
        "Dy",
        "Dysprosium",
        66,
        162.5,
        2
    );
    static const Element holmium(
        "Ho",
        "Holmium",
        67,
        164.93032,
        2
    );
    static const Element erbium(
        "Er",
        "Erbium",
        68,
        167.259,
        2
    );
    static const Element thulium(
        "Tm",
        "Thulium",
        69,
        168.93421,
        2
    );
    static const Element ytterbium(
        "Yb",
        "Ytterbium",
        70,
        173.04,
        2
    );
    static const Element lutetium(
        "Lu",
        "Lutetium",
        71,
        174.967,
        2
    );
    static const Element hafnium(
        "Hf",
        "Hafnium",
        72,
        178.49,
        2
    );
    static const Element tantalum(
        "Ta",
        "Tantalum",
        73,
        180.94788,
        2
    );
    static const Element tungsten(
        "W",
        "Tungsten",
        74,
        183.84,
        2
    );
    static const Element rhenium(
        "Re",
        "Rhenium",
        75,
        186.207,
        2
    );
    static const Element osmium(
        "Os",
        "Osmium",
        76,
        190.23,
        2
    );
    static const Element iridium(
        "Ir",
        "Iridium",
        77,
        192.217,
        2
    );
    static const Element platinum(
        "Pt",
        "Platinum",
        78,
        195.084,
        1
    );
    static const Element gold(
        "Au",
        "Gold",
        79,
        196.966569,
        1
    );
    static const Element mercury(
        "Hg",
        "Mercury",
        80,
        200.59,
        2
    );
    static const Element thallium(
        "Tl",
        "Thallium",
        81,
        204.3833,
        3
    );
    static const Element lead(
        "Pb",
        "Lead",
        82,
        207.2,
        4
    );
    static const Element bismuth(
        "Bi",
        "Bismuth",
        83,
        208.9804,
        5
    );
    static const Element polonium(
        "Po",
        "Polonium",
        84,
        209,
        6
    );
    static const Element astatine(
        "At",
        "Astatine",
        85,
        210,
        7
    );
    static const Element radon(
        "Rn",
        "Radon",
        86,
        222,
        8
    );
    static const Element francium(
        "Fr",
        "Francium",
        87,
        223,
        1
    );
    static const Element radium(
        "Ra",
        "Radium",
        88,
        226,
        2
    );
    static const Element actinium(
        "Ac",
        "Actinium",
        89,
        227,
        2
    );
    static const Element thorium(
        "Th",
        "Thorium",
        90,
        232.03806,
        2
    );
    static const Element protactinum(
        "Pa",
        "Protactinum",
        91,
        231.03588,
        2
    );
    static const Element uranium(
        "U",
        "Uranium",
        92,
        238.02891,
        2
    );
    static const Element neptunium(
        "Np",
        "Neptunium",
        93,
        237.0482,
        2
    );
    static const Element plutonium(
        "Pu",
        "Plutonoium",
        94,
        244,
        2
    );
    static const Element americium(
        "Am",
        "Americium",
        95,
        243,
        2
    );
    static const Element curium(
        "Cm",
        "Curium",
        96,
        247.07035,
        2
    );
    static const Element berkelium(
        "Bk",
        "Berkelium",
        97,
        247.07031,
        2
    );
    static const Element californium(
        "Cf",
        "Californium",
        98,
        251,
        2
    );
    static const Element einsteinium(
        "Es",
        "Einsteinium",
        99,
        252,
        2
    );
    static const Element fermium(
        "Fm",
        "Fermium",
        100,
        257,
        2
    );
    static const Element mendelevium(
        "Md",
        "Mendelevium",
        101,
        258,
        2
    );
    static const Element nobelium(
        "No",
        "Nobelium",
        102,
        259,
        2
    );
    static const Element lawrencium(
        "Lr",
        "Lawrencium",
        103,
        262,
        2
    );
    static const Element rutherfordium(
        "Rf",
        "Rutherfordium",
        104,
        261,
        2
    );
    static const Element dubnium(
        "Db",
        "Dubnium",
        105,
        268,
        2
    );
    static const Element seaborgium(
        "Sg",
        "Seaborgium",
        106,
        269,
        2
    );
    static const Element bohrium(
        "Bh",
        "Bohrium",
        107,
        270,
        2
    );
    static const Element hassium(
        "Hs",
        "Hassium",
        108,
        277,
        2
    );
    static const Element meitnerium(
        "Mt",
        "Meitnerium",
        109,
        278,
        2
    );
    static const Element darmstadtium(
        "Ds",
        "Darmstadtium",
        110,
        281,
        1
    );
    static const Element roentgenium(
        "Rg",
        "Roentgenium",
        111,
        282,
        1
    );
    static const Element copernicium(
        "Cn",
        "Copernicium",
        112,
        285,
        2
    );
    static const Element nihonium(
        "Nh",
        "Nihonium",
        113,
        286,
        3
    );
    static const Element flerovium(
        "Fl",
        "Flerovium",
        114,
        289,
        4
    );
    static const Element moscovium(
        "Mc",
        "Moscovium",
        115,
        290,
        5
    );
    static const Element livermorium(
        "Lv",
        "Livermorium",
        116,
        293,
        6
    );
    static const Element tennessine(
        "Ts",
        "Tennessine",
        117,
        294,
        7
    );
    static const Element oganesson(
        "Og",
        "Oganesson",
        118,
        294,
        8
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
        if (symbol == "Li")
        {
            return lithium;
        }
        if (symbol == "Be")
        {
            return beryllium;
        }
        if (symbol == "B")
        {
            return boron;
        }
        if (symbol == "C")
        {
            return carbon;
        }
        if (symbol == "N")
        {
            return nitrogen;
        }
        if (symbol == "O")
        {
            return oxygen;
        }
        if (symbol == "F")
        {
            return fluorine;
        }
        if (symbol == "Ne")
        {
            return neon;
        }
        if (symbol == "Na")
        {
            return sodium;
        }
        if (symbol == "Mg")
        {
            return magnesium;
        }
        if (symbol == "Al")
        {
            return aluminium;
        }
        if (symbol == "Si")
        {
            return silicon;
        }
        if (symbol == "P")
        {
            return phosphorus;
        }
        if (symbol == "S")
        {
            return sulphur;
        }
        if (symbol == "Cl")
        {
            return chlorine;
        }
        if (symbol == "Ar")
        {
            return argon;
        }
        if (symbol == "K")
        {
            return potassium;
        }
        if (symbol == "Ca")
        {
            return calcium;
        }
        if (symbol == "Sc")
        {
            return scandium;
        }
        if (symbol == "Ti")
        {
            return titanium;
        }
        if (symbol == "V")
        {
            return vanadium;
        }
        if (symbol == "Cr")
        {
            return chromium;
        }
        if (symbol == "Mn")
        {
            return manganese;
        }
        if (symbol == "Fe")
        {
            return iron;
        }
        if (symbol == "Co")
        {
            return cobalt;
        }
        if (symbol == "Ni")
        {
            return nickel;
        }
        if (symbol == "Cu")
        {
            return copper;
        }
        if (symbol == "Zn")
        {
            return zinc;
        }
        if (symbol == "Ga")
        {
            return gallium;
        }
        if (symbol == "Ge")
        {
            return germanium;
        }
        if (symbol == "As")
        {
            return arsenic;
        }
        if (symbol == "Se")
        {
            return selenium;
        }
        if (symbol == "Br")
        {
            return bromine;
        }
        if (symbol == "Kr")
        {
            return krypton;
        }
        if (symbol == "Rb")
        {
            return rubidium;
        }
        if (symbol == "Sr")
        {
            return strontium;
        }
        if (symbol == "Y")
        {
            return yttrium;
        }
        if (symbol == "Zr")
        {
            return zirconium;
        }
        if (symbol == "Nb")
        {
            return niobium;
        }
        if (symbol == "Mo")
        {
            return molybdenum;
        }
        if (symbol == "Tc")
        {
            return technetium;
        }
        if (symbol == "Ru")
        {
            return ruthenium;
        }
        if (symbol == "Rh")
        {
            return rhodium;
        }
        if (symbol == "Pd")
        {
            return palladium;
        }
        if (symbol == "Ag")
        {
            return silver;
        }
        if (symbol == "Cd")
        {
            return cadmium;
        }
        if (symbol == "In")
        {
            return indium;
        }
        if (symbol == "Sn")
        {
            return tin;
        }
        if (symbol == "Sb")
        {
            return antimony;
        }
        if (symbol == "Te")
        {
            return tellurium;
        }
        if (symbol == "I")
        {
            return iodine;
        }
        if (symbol == "Xe")
        {
            return xenon;
        }
        if (symbol == "Cs")
        {
            return caesium;
        }
        if (symbol == "Ba")
        {
            return barium;
        }
        if (symbol == "La")
        {
            return lanthannum;
        }
        if (symbol == "Ce")
        {
            return cerium;
        }
        if (symbol == "Pr")
        {
            return praseodymium;
        }
        if (symbol == "Nd")
        {
            return neodymium;
        }
        if (symbol == "Pm")
        {
            return promethium;
        }
        if (symbol == "Sm")
        {
            return samarium;
        }
        if (symbol == "Eu")
        {
            return europium;
        }
        if (symbol == "Gd")
        {
            return gadolinium;
        }
        if (symbol == "Tb")
        {
            return terbium;
        }
        if (symbol == "Dy")
        {
            return dysprosium;
        }
        if (symbol == "Ho")
        {
            return holmium;
        }
        if (symbol == "Er")
        {
            return erbium;
        }
        if (symbol == "Tm")
        {
            return thulium;
        }
        if (symbol == "Yb")
        {
            return ytterbium;
        }
        if (symbol == "Lu")
        {
            return lutetium;
        }
        if (symbol == "Hf")
        {
            return hafnium;
        }
        if (symbol == "Ta")
        {
            return tantalum;
        }
        if (symbol == "W")
        {
            return tungsten;
        }
        if (symbol == "Re")
        {
            return rhenium;
        }
        if (symbol == "Os")
        {
            return osmium;
        }
        if (symbol == "Ir")
        {
            return iridium;
        }
        if (symbol == "Pt")
        {
            return platinum;
        }
        if (symbol == "Au")
        {
            return gold;
        }
        if (symbol == "Hg")
        {
            return mercury;
        }
        if (symbol == "Tl")
        {
            return thallium;
        }
        if (symbol == "Pb")
        {
            return lead;
        }
        if (symbol == "Bi")
        {
            return bismuth;
        }
        if (symbol == "Po")
        {
            return polonium;
        }
        if (symbol == "At")
        {
            return astatine;
        }
        if (symbol == "Rn")
        {
            return radon;
        }
        if (symbol == "Fr")
        {
            return francium;
        }
        if (symbol == "Ra")
        {
            return radium;
        }
        if (symbol == "Ac")
        {
            return actinium;
        }
        if (symbol == "Th")
        {
            return thorium;
        }
        if (symbol == "Pa")
        {
            return protactinum;
        }
        if (symbol == "U")
        {
            return uranium;
        }
        if (symbol == "Np")
        {
            return neptunium;
        }
        if (symbol == "Pu")
        {
            return plutonium;
        }
        if (symbol == "Am")
        {
            return americium;
        }
        if (symbol == "Cm")
        {
            return curium;
        }
        if (symbol == "Bk")
        {
            return berkelium;
        }
        if (symbol == "Cf")
        {
            return californium;
        }
        if (symbol == "Es")
        {
            return einsteinium;
        }
        if (symbol == "Fm")
        {
            return fermium;
        }
        if (symbol == "Md")
        {
            return mendelevium;
        }
        if (symbol == "No")
        {
            return nobelium;
        }
        if (symbol == "Lr")
        {
            return lawrencium;
        }
        if (symbol == "Rf")
        {
            return rutherfordium;
        }
        if (symbol == "Db")
        {
            return dubnium;
        }
        if (symbol == "Sg")
        {
            return seaborgium;
        }
        if (symbol == "Bh")
        {
            return bohrium;
        }
        if (symbol == "Hs")
        {
            return hassium;
        }
        if (symbol == "Mt")
        {
            return meitnerium;
        }
        if (symbol == "Ds")
        {
            return darmstadtium;
        }
        if (symbol == "Rg")
        {
            return roentgenium;
        }
        if (symbol == "Cn")
        {
            return copernicium;
        }
        if (symbol == "Nh")
        {
            return nihonium;
        }
        if (symbol == "Fl")
        {
            return flerovium;
        }
        if (symbol == "Mc")
        {
            return moscovium;
        }
        if (symbol == "Lv")
        {
            return livermorium;
        }
        if (symbol == "Ts")
        {
            return tennessine;
        }
        if (symbol == "Og")
        {
            return oganesson;
        }
        throw std::runtime_error(
            "Element not found."
        );
    }
}