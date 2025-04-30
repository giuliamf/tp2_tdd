#include "romano.hpp"
#include <map>
#include <string>
#include <regex>

int romanoParaArabico(const std::string &romano) {
    // Expressão regular para validar números romanos até 3000
    std::regex regex_romano_valido("^M{0,3}(CM|CD|D?C{0,3})"
                                   "(XC|XL|L?X{0,3})"
                                   "(IX|IV|V?I{0,3})$");

    if (!std::regex_match(romano, regex_romano_valido)) {
        return -1;
    }

    std::map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int anterior = 0;

    for (int i = romano.size() - 1; i >= 0; --i) {
        char letra = romano[i];
        int valor = valores[letra];

        if (valor < anterior)
            total -= valor;
        else {
            total += valor;
            anterior = valor;
        }
    }

    return total;
}
