#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct  anao{
    string nome;
    int peso;
};

int main() {
    int N;
    cin >> N;

    vector<string> nomes;
    vector<anao> anoes;
    anao aux;

    for (int i = 0; i < N; ++i) {
        cin >> aux.nome >> aux.peso;
        anoes.push_back(aux);
    }

    int capacidade;
    cin >> capacidade;
    bool cmp = false;

    for(int i = 0; i < N; i++){
        if(anoes[i].peso > capacidade){
            cmp = true;
            nomes.push_back(anoes[i].nome);
        }
    }
    if(cmp == false){
        cout << "Vamos todos encontrar a montanha!" << endl;
    }else{
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for(int i = 0; i < nomes.size(); i++){
            cout << nomes[i] << endl;
        }
    }

   

    return 0;
} 