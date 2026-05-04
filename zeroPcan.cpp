// Zero para cancelar prova 21
#include<bits/stdc++.h>
using namespace std;


int main(){
    int T = 0;
    int t;
    cin >> t;
    int nums[t];
    for(int i = 0; i < t; i++){
        cin >> nums[i];
    }
    // aida possui erro possivelmente nesse for daqui de baixo
    for(int j = t; j >= 0; j--){
        if(nums[j] == 0){
            nums[j - 1] = 0;
        }
    }
    for(int x =0; x < t; x++){
        T = nums[x] + T;
    }
    cout << T;
    return 0;
}