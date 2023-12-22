#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, aux;
    char a;
    cin >> n >> a;
    int vet[] = {0,0,0};
    vet[a-65] = 1;


    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        if(aux == 1)
            swap(vet[0], vet[1]);
        else if(aux == 2)
            swap(vet[1],vet[2]);
        else if(aux == 3)
            swap(vet[0], vet[2]);
    }

    if(vet[0])
        cout << 'A';
    else if(vet[1])
        cout << 'B';
    else if(vet[2])
        cout << 'C';
    cout << endl;
}