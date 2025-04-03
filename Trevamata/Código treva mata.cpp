
#include <iostream>
#include <vector>

using namespace std;

// 
struct fase {
    int f;    // Número da fase
    int exp;  // Experiência da fase
    int bonus; // Bônus da fase
};

int main() {
    vector<fase> fases; // Vetor para armazenar as fases
    fase aux;

    int n, d, e, f = 0;

    // Leitura do número de fases c
    cout << "Digite o número de fases cumpridas: ";
    cin >> n;

    // Leitura do número 
    cout << "Digite o número de cada fase: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> aux.f;
        fases.push_back(aux);
    }

    // Leitura da experiência 
    cout << "Digite a quantidade de exp em cada fase: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> fases[i].exp;
    }

    // Leitura do bônus 
    cout << "Digite a quantidade de bônus de cada fase: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> fases[i].bonus;
    }

    // Leitura da experiência necessária para subir de nível e do bônus adicional
    cout << "Digite a experiência necessária para subir de nível: ";
    cin >> d;
    cout << "Digite o bônus adicional: ";
    cin >> e;

    // Cálculo da pontuação total (experiência + bônus)
    for (int i = 0; i < n; i++) {
        f += fases[i].exp + fases[i].bonus;
    }
    f += e; // Adiciona o bônus adicional

    // Verificacao
    if (f >= d) {
        cout << "Upou de Nivel!" << endl;
    } else {
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}
