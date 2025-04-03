#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> fila;
    queue<int> fil;
    
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        fila.push(j);
    }
    
    int l;
    cin >> l;
    
    for (int i = 0; i < l; i++) {
        int j;
        cin >> j;
        fil.push(j);
    }
    
    int c = 0;
    
    while (!fila.empty() && !fil.empty()) {
        if (fila.front() >= fil.front()) {
            int a = fila.front();
            fila.pop();
            fila.push(a);
            fil.pop();
        } else {
            fila.pop();
            fil.pop();
            c++;
        }
    }
    
    cout << c << endl;
    return 0;
}
