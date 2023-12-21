#include <iostream>
#include <vector>

using namespace std;

int verH(int i, int* vet) {

}

int main() {
    int e, i, v;
    cin >> e >> i >> v;

    vector<vector<int>> G(e, vector<int>(e, 0));
    int h[v]; //Hanpened

    for(int m = 0; m < i; m++)
    {
        int from, to;
        cin >> from >> to;
        G[from-1][to-1]++;
    }

    for(int m = 0; m < v; m++)
    {
        cin >> h[m];
    }

    for(int m = 0; m < e; m++)
    {
        for(int n = e; n; n--)
        {
            if(verH(G[m][n], h)) {
                
            } else if(G[m][n]) {
                
            }
        }
    }

    for(int m = 0; m < e; m++)
    {
        for(int n = 0; n < e; n++)
        {
            cout << G[m][n] << " ";
        }
        cout << endl;
    }
}