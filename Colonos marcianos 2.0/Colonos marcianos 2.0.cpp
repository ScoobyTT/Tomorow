#include <iostream>
#include <algorithm>
#include <vector>
#include <utility> // para pair

using namespace std;

int main() {
    int N, Q, C;
    cin >> N >> Q;

    vector<pair<int, int>> candidatos(Q); // 
    vector<pair<int, int>> selecionados;

    // Ler todos os candidatos
    for(int i = 0; i < Q; i++) {
        cin >> candidatos[i].first >> candidatos[i].second;
    }

    
    sort(candidatos.begin(), candidatos.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first != b.first) {
            return a.first > b.first; // maior nota primeiro
        } else {
            return a.second < b.second; // menor ID primeiro em caso de empate
        }
    });

    
    for(int i = 0; i < N && i < Q; i++) {
        selecionados.push_back(candidatos[i]);
    }

    //
    cin >> C;
    for(int i = 0; i < C; i++) {
        int nota, id;
        cin >> nota >> id;
        bool encontrado = false;

        // Verifica
        for(const auto& cand : selecionados) {
            if(cand.first == nota && cand.second == id) {
                encontrado = true;
                break;
            }
        }

        if(encontrado) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }

    return 0;
}