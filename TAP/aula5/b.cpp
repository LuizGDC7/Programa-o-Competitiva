#include <iostream>
#include <vector>

using namespace std;

int exponenciacao(int num, int qtd) {
  if (qtd > 1) {
    if (qtd % 2 == 0) {
      return exponenciacao((num * num), qtd / 2 );
    } else {
      return (num) * (exponenciacao((num * num), qtd / 2));
    }
  } else {
    if (qtd == 1) {
      return num;
    } else {
      return 1;
    }
  }
}

vector<int> divisors2(int num, int encontrar) {
  for (int c = 1; c * c <= num; c++) {
    if (num % c == 0) {
      if (c != num / c) {
        if (exponenciacao(c, (num / c) - 1) + exponenciacao(num / c, c - 1) ==
            encontrar) {
          return {c, num / c};
        }
      } else {
        if (2 * exponenciacao(c, c - 1) == encontrar) {
          return {c, c};
        }
      }
    }
  }
  return {-1, -1};
}

vector<int> divisors(int num) {
  for (int c = 1; c * c <= num; c++) {
    if (num % c == 0) {
        vector<int> res1 = {-1, -1}; 
        res1 = divisors2(c, num/c);
        if(res1[0] != -1 && res1[1] != -1){
            return res1;
        }
    }
  }

  return {-1, -1};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res = {-1, -1};
        res = divisors(n);
        if(res[0] != -1 && res[1] != -1){
            cout << res[0] << ' ' << res[1] << '\n';
        }else{
            cout << -1 << '\n';
        }
    }

    return 0;
}