#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int vet[n];
    for(int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    int maiorCaminho = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int aux = vet[i] + vet[j] + (j-i) + 1;
            if(aux > maiorCaminho)
                maiorCaminho = aux;
        }
    }

    if(!maiorCaminho)
        maiorCaminho = vet[0];

    maiorCaminho--;
    cout << maiorCaminho << endl;
}