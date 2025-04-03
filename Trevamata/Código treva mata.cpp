#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> nomes;
    vector<int> pesos;
    int pesoTotal = 0;

    for (int i = 0; i < N; ++i) {
        string nome;
        int peso;
        cin >> nome >> peso;
        nomes.push_back(nome);
        pesos.push_back(peso);
        pesoTotal += peso;
    }

    int capacidade;
    cin >> capacidade;

    if (pesoTotal <= capacidade) {
        cout << "Vamos todos encontrar a montanha!" << endl;
    } else {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for (int i = 0; i < nomes.size(); ++i) {
            if (pesos[i] > capacidade) {
                cout << nomes[i] << endl;
            }
        }
    }

    return 0;
}