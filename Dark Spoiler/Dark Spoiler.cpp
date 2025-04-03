#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct dark {
    int data;
    int mes;
    int ano;
};

// Função de comparaçao
bool cmp(dark a, dark b) {
    if (a.ano != b.ano) return a.ano < b.ano;
    if (a.mes != b.mes) return a.mes < b.mes;
    return a.data < b.data;
}

int main() {
    vector<dark> calend;
    dark aux;

    // Lendo os dados 
    while (cin >> aux.data >> aux.mes >> aux.ano) {
        calend.push_back(aux);
    }

    // Ordenação
    stable_sort(calend.begin(), calend.end(), cmp);

    // Saída 
    for (const auto &d : calend) {
        cout << d.data << " " << d.mes << " " << d.ano << endl;
    }

    return 0;
}
