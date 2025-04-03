#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m, c, i;
    vector<string> fg; // gerais
    vector<string> fp; // proibidos
    vector<string> cf; // consultas
    
    cin >> n;

    // gerais
    for (i = 0; i < n; i++) {
        string spell;
        cin >> spell;
        fg.push_back(spell);
    }

    cin >> m;

    // lista de feitiços proibidos
    for (i = 0; i < m; i++) {
        string spell;
        cin >> spell;
        fp.push_back(spell);
    }

    cin >> c;

    // n° consultas
    for (i = 0; i < c; i++) {
        string spell;
        cin >> spell;
        cf.push_back(spell);
    }
    
    // ordenação
    stable_sort(fg.begin(), fg.end());
    stable_sort(fp.begin(), fp.end());

    // saídas
    for (i = 0; i < c; i++) {
        if (binary_search(fg.begin(), fg.end(), cf[i])) {
            cout << "Geral" << endl;
        } else if (binary_search(fp.begin(), fp.end(), cf[i])) {
            cout << "Proibido" << endl;
        }
    }

    return 0;
}
