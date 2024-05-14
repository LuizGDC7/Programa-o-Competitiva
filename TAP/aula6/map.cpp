#include <iostream>
#include <map>

using namespace std;

struct init_value_as{
    int init = -1;
};

typedef map<int, init_value_as> mapi;

int main(){
    mapi teste;
    
    teste[1].init = 198;
    /*
    teste[20] = 300;
    */
    cout << teste[1].init << '\n' << teste[20].init << '\n' << teste[300].init << '\n';
    return 0;
}