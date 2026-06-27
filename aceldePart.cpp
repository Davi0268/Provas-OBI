#include<bits/stdc++.h>
using namespace std;

int acelerador(int km){
    int cont = 0; 
    int j;
    //cout << km;
    // 1 indexado
    for(int i = 1; i <= km; i++){
        cont++;
        if(cont == 2){
            j = i + 2;
            if(j == km){
                return 1;
               
            }
        }
         if(cont == 3){
            j = i + 2;
            if(j == km){
                return 2;
                break;
            }
        } if(cont == 4){
            j = i + 2;
            if(j == km){
                return 3;
                break;
            }
        }
        //cout << cont;
        if(cont == 8){
            cont = 0;
        }    
    }
}


int main(){
    int km;
    cin >> km;

    if(acelerador(km) == 1 || acelerador(km) == 2 || acelerador(km) == 3 ){
        cout << "ave meu D";
    }
    
    return 0;
}