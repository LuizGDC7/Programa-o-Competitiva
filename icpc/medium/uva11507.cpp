#include <iostream>

using namespace std;

string direction(string pre, string pos){

    if(pre[0] == '+'){
        if(pre[1] == 'x'){
            return pos;
        }


    }

    if(){
        
    }

    if(pre == "+x"){
        return pos;
    }

    if(pre == "-x"){
        if(pos == "+y"){
            return "-y";
        }

        if(pos == "-y"){
            return "+y";
        }

        if(pos == "+z"){
            return "-z";
        }

        if(pos == "-z"){
            return "+z";
        }
    }

    if(pre == ""){

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l;
    string aba;
    while(1){
        cin >> l;
        if(!l){
            break;
        }
        for(int c = 1; c < l; c++){

        }
    }

    return 0;
}