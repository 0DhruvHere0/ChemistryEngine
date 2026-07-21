#pragma once
#include <string>
#include <vector>
#include <ChemEngine/Chemistry/Element.hpp>
namespace ChemEngine{
    class OxidationStates{
        public:
            static const std::vector<int>& get(
                const std::string& symbol
        );
    };
}