// Zero para cancelar prova 21
#include<bits/stdc++.h>
using namespace std;

void addvector(vector<int>& v, int x){
    
    for(int j = 0; j < x; j++){
        int z;
        cin >> z;
        v.push_back(z);
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    vector<int> valores ={};
    addvector(valores, tamanho);
    for(int j = tamanho; j >= 0; j--){
        if(valores[j] == 0){
            
            
            valores.erase(valores.begin() + j);
           // valores.erase(valores.begin() + (j - 1));
        }
    }
    for(int i = 0; i < tamanho; i++){
        cout << valores[i] << " ";
    }
    return 0;
}