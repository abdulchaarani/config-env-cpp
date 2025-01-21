#include <span>
#include <vector>
#include <iostream>

using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4};
    for (int i: span<int>(vec)){
        cout << i << " ";
    }
    cout << "\nSpan fonctionne!\n";

    // pour tester le debogeur avec cin sur macOs
    int num = 0;
    cout << "Entrer une nombre: ";
    cin >> num;
    cout << "Votre nombre est: " << num << '\n';
}