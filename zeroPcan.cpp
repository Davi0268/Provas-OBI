// Zero para cancelar prova 21
#include<bits/stdc++.h>
using namespace std;

void addvector(vector<int>& v, int x){
    
    for(int j = x; j > 0; j--){
        int z;
        cin >> z;
        v.push_back(z);
    }
}

int main(){
    int as = 0;
    int tamanho;
    cin >> tamanho;
    vector<int> valores ={};
    addvector(valores, tamanho);
    for(int j = 0; j < tamanho; j++){
        if(valores[j] == 0 ){
            if(valores[j - 1] = 0){
                valores[j - 2] = 0;
            }
            valores[j - 1] = 0;
            //valores[j - 1] = 0;
        //valores.erase(valores.begin() + j);
        // valores.erase(valores.begin() + (j - 1));
        }
    }/*
    if(z == 0){
            v[j - 1] = 0;
        }    
    */
    for(int i = 0; i < tamanho; i++){
        cout << valores[i] << " ";
        //as = valores[i] + as;
    }
    //cout << as;
    return 0;
}