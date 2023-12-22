#include <iostream>
#include <vector>

using namespace std;

int main() {
    int e, i, v;
    cin >> e >> i >> v;

    vector<vector<int>> G(e, vector<int>(e, 0));
    vector<int> vet;

    for(int m = 0; m < i; m++)
    {
        int from, to;
        cin >> from >> to;
        G[from-1][to-1]++;
    }

    cin >> v;

    int oneLast = 1;

    for(int m = 0; m < e; m++)
    {
        for(int n = e; n; n--)
        {
            if(G[m][n] && oneLast) {
                vet.push_back(G[m][n]);
                oneLast--;
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