#include<bits/stdc++.h>
using namespace std;

void acelerador(int km){
    int cont = 0; 
    km = km - 2;
    for(int i = 0; i < km; i++){
        cont++;
        if(cont == 2){
            int j = i + 2;
            if(j == km){
                cout << "1";
                break;
            }
        }
        if(cont == 8){
            cont = 0;
        }
    }
}


int main(){
    int km;
    cin >> km;

    acelerador(km);

    return 0;
}