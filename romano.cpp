#include "romano.hpp"
#include <map>

int romanoParaArabico(const std::string &romano) {
    std::map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int anterior = 0;

    for (int i = romano.size() - 1; i >= 0; --i) {
        char letra = romano[i];
        if (valores.find(letra) == valores.end()) return -1;

        int valor = valores[letra];
        if (valor < anterior) {
            total -= valor;
        } else {
            total += valor;
            anterior = valor;
        }
    }

    return total;
}
