
#include <iostream>
#include <vector>

using namespace std;

// 
struct fase {
    int exp;  // Experiência da fase
    int bonus; // Bônus da fase
};

int main() {
    vector<fase> fases; // Vetor para armazenar as fases
    fase aux;

    int n, d, e, f = 0,x;

    // Leitura do número de fases c
    cin >> n;

    // Leitura da experiência 
    for (int i = 0; i < n; i++) {
        cin >> aux.exp;
        fases.push_back(aux);
    }

    // Leitura do bônus 
    for (int i = 0; i < n; i++) {
        cin >> fases[i].bonus;
    }

    // Leitura da experiência necessária para subir de nível e do bônus adicional
    cin >> d;
    cin >> e;

    // Cálculo da pontuação total (experiência + bônus)
    for (int i = 0; i < n; i++) {
        f += fases[i].exp * (fases[i].bonus + e);
    }

    // Verificacao
    if (f >= d) {
        cout << "Upou de Nivel!" << endl;
    } else {
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}
