#include <iostream>
#include <vector>
#include <string>
#include <ChemEngine/Chemistry/OxidationState.hpp>
using namespace ChemEngine;
int main()
{
    std::vector<std::string> symbols = {
        "H","He","Li","Be","B","C","N","O","F","Ne",
        "Na","Mg","Al","Si","P","S","Cl","Ar",
        "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn",
        "Ga","Ge","As","Se","Br","Kr",
        "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd",
        "In","Sn","Sb","Te","I","Xe",
        "Cs","Ba",
        "La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu",
        "Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg",
        "Tl","Pb","Bi","Po","At","Rn",
        "Fr","Ra",
        "Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr",
        "Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn",
        "Nh","Fl","Mc","Lv","Ts","Og"
    };
    std::cout<< "Oxidation States Test"<<std::endl;
    for (const auto& symbol: symbols)
    {
        try
        {
            const std::vector<int>& states= OxidationStates::get(symbol);
            std::cout << symbol << " : ";
            if (states.empty())
            {
                std::cout << "No oxidation states available";
            }
            else
            {
                for (int state : states)
                {
                    if (state > 0)
                        std::cout << "+" << state << " ";
                    else
                        std::cout << state << " ";
                }
            }
            std::cout << '\n';
        }
        catch (const std::exception& ex)
        {
            std::cout << symbol << " : ERROR - " << ex.what() << '\n';
        }
    }
    return 0;
}