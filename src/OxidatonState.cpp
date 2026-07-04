#include <ChemEngine/OxidationState.hpp>
#include <stdexcept>
namespace ChemEngine
{
    const std::vector<int>&
    OxidationStates::get(
        const std::string& symbol
    )
    {
        static const std::vector<int> hydrogen{
            1,
            -1
        };
        static const std::vector<int> helium{
            0
        };
        static const std::vector<int> lithium{
            -1,
            +1
        };
        static const std::vector<int> beryllium{
            -2,
            0,
            +1,
            +2
        };
        static const std::vector<int> boron{
            -5,
            -1,
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> carbon{
            -4,
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> nitrogen{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> oxygen{
            -2,
            -1,
            0,
            +1,
            +2
        };
        static const std::vector<int> fluorine{
            -1,
            0
        };
        static const std::vector<int> neon{
            0
        };
        static const std::vector<int> sodium{
            -1,
            +1
        };
        static const std::vector<int> magnesium{
            0,
            +1,
            +2
        };
        static const std::vector<int> aluminium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> silicon{
            -4,
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> phosphorus{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> sulphur{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> chlorine{
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> argon{
            0
        };
        static const std::vector<int> potassium{
            -1,
            +1
        };
        static const std::vector<int> calcium{
            +1,
            +2
        };
        static const std::vector<int> scandium{
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> titanium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> vanadium{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> chromium{
            -4,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> manganese{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> iron{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> cobalt{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> nickel{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> copper{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> zinc{
            -2,
            0,
            +1,
            +2
        };
        static const std::vector<int> gallium{
            -5,
            -4,
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> germanium{
            -4,
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> arsenic{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> selenium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> bromine{
            -1,
            +1,
            +2,
            +3,
            +4,
            +5,
            +7
        };
        static const std::vector<int> krypton{
            +2
        };
        static const std::vector<int> rubidium{
            -1,
            +1
        };
        static const std::vector<int> strontium{
            +1,
            +2
        };
        static const std::vector<int> yttrium{
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> zirconium{
            -2,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> niobium{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> molybdenum{
            -4,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> technetium{
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> ruthenium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7,
            +8
        };
        static const std::vector<int> rhodium{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> palladium{
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> silver{
            -2,
            -1,
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> cadmium{
            -2,
            0,
            +1,
            +2
        };
        static const std::vector<int> indium{
            -5,
            -2,
            -1,
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> tin{
            -4,
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> antimony{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> tellurium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> iodine{
            -1,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> xenon{
            0,
            +2,
            +4,
            +6,
            +8
        };
        static const std::vector<int> caesium{
            -1,
            +1
        };
        static const std::vector<int> barium{
            +1,
            +2
        };
        static const std::vector<int> lanthanum{
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> cerium{
            +2,
            +3,
            +4
        };
        static const std::vector<int> praseodymium{
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> neodymium{
            0,
            +2,
            +3,
            +4
        };
        static const std::vector<int> promethium{
            +2,
            +3
        };
        static const std::vector<int> samarium{
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> europium{
            0,
            +2,
            +3
        };
        static const std::vector<int> gadolinium{
            0,
            +1,
            +2,
            +3
        };
        static const std::vector<int> terbium{
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> dysprosium{
            0,
            +2,
            +3,
            +4
        };
        static const std::vector<int> holmium{
            0,
            +2,
            +3
        };
        static const std::vector<int> erbium{
            0,
            +2,
            +3
        };
        static const std::vector<int> thulium{
            +1,
            +2,
            +3
        };
        static const std::vector<int> ytterbium{
            +1,
            +2,
            +3
        };
        static const std::vector<int> lutetium{
            0,
            +2,
            +3
        };
        static const std::vector<int> hafnium{
            -2,
            0,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> tantalum{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> tungsten{
            -4,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6  
        };
        static const std::vector<int> rhenium{
            -3,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> osmium{
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7,
            +8
        };
        static const std::vector<int> iridium{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6,
            +7,
            +8,
            +9
        };
        static const std::vector<int> platinum{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> gold{
            -3,
            -2,
            -1,
            0,
            +1,
            +2,
            +3,
            +5
        };
        static const std::vector<int> mercury{
            -2,
            +1,
            +2
        };
        static const std::vector<int> thallium{
            -5,
            -2,
            -1,
            +1,
            +2,
            +3
        };
        static const std::vector<int> lead{
            -4,
            -2,
            -1,
            0
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> bismuth{
            -3,
            -2,
            -1,
            +1,
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> polonium{
            -2,
            +2,
            +4,
            +5,
            +6
        };
        static const std::vector<int> astatine{
            -1,
            +1,
            +3,
            +5,
            +7
        };
        static const std::vector<int> radon{
            +2,
            +6
        };
        static const std::vector<int> francium{
            +1
        };
        static const std::vector<int> radium{
            +2
        };
        static const std::vector<int> actinium{
            +2,
            +3
        };
        static const std::vector<int> thorium{
            -1,
            +1,
            +2,
            +3,
            +4
        };
        static const std::vector<int> protactinium{
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> uranium{
            -1,
            +1,
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> neptunium{
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> plutonium{
            +2,
            +3,
            +4,
            +5,
            +6,
            +7,
            +8
        };
        static const std::vector<int> americium{
            +2,
            +3,
            +4,
            +5,
            +6,
            +7
        };
        static const std::vector<int> curium{
            +2,
            +3,
            +4,
            +5,
            +6
        };
        static const std::vector<int> berkelium{
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> californium{
            +2,
            +3,
            +4,
            +5
        };
        static const std::vector<int> einsteinium{
            +2,
            +3,
            +4
        };
        static const std::vector<int> fermium{
            +2,
            +3
        };
        static const std::vector<int> mendelevium{
            +2,
            +3
        };
        static const std::vector<int> nobelium{
            +2,
            +3
        };
        static const std::vector<int> lawrencium{
            +3
        };
        static const std::vector<int> rutherfordium{
            +4
        };
        static const std::vector<int> dubnium{
            +5
        };
        static const std::vector<int> seaborgium{
            +6
        };
        static const std::vector<int> bohrium{
            +7
        };
        static const std::vector<int> hassium{
            +8
        };
        static const std::vector<int> meitnerium{
            
        };
        static const std::vector<int> darmstadtium{
            
        };
        static const std::vector<int> roentgenium{
            
        };
        static const std::vector<int> copernicium{
            +2
        };
        static const std::vector<int> nihonium{
            
        };
        static const std::vector<int> flerovium{
            
        };
        static const std::vector<int> moscovium{
            
        };
        static const std::vector<int> livermorium{
            
        };
        static const std::vector<int> tennessine{
            
        };
        static const std::vector<int> oganesson{
            
        };
        if(symbol == "H")
        {
            return hydrogen;
        }
        if(symbol == "He")
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
            return lanthanum;
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
            return protactinium;
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
            "Oxidation states not found."
        );
    }
}