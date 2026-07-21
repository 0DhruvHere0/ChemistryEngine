#pragma once
#include <string>
#include <ChemEngine/Chemistry/Element.hpp>
namespace ChemEngine
{
    class PeriodicTable
    {
    public:
        static const Element& get(
            const std::string& symbol
        );
    };
}