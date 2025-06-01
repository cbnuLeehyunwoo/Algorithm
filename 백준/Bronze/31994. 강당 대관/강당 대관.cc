#include <iostream>
#include <algorithm>
using namespace std;

int res[7];
string sem[7] = {
    "Network", "ArtificialIntelligence", "Startup",
    "CyberSecurity", "TestStrategy", "Algorithm", "DataAnalysis"
};

int main() {
    for (int i = 0; i < 7; i++) {
        string a;
        int b;
        cin >> a >> b;

        for (int j = 0; j < 7; j++) {
            if (sem[j] == a) {
                res[j] = b;
                break;
            }
        }
    }

    int maxIndex = max_element(res, res + 7) - res;
    cout << sem[maxIndex] << endl;
}
