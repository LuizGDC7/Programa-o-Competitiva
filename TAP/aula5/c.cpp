#include <iostream>
#include <limits.h>

using namespace std;

const long long modulo = 1e9 + 7;

long long int exponenciacao(long long num, long long qtd, const long long modulo) {
  if (qtd > 1) {
    if (qtd % 2 == 0) {
      return exponenciacao((num * num) % modulo, qtd / 2, modulo) % modulo;
    } else {
      return (num) * (exponenciacao((num * num) % modulo, qtd / 2, modulo) % modulo) %
             modulo;
    }
  } else {
    if (qtd == 1) {
      return num % modulo;
    } else {
      return 1;
    }
  }
}

int main() {
  long long int qt, a, b, c;
  cin >> qt;
  for (; qt > 0; qt--) {
    cin >> a >> b >> c;
    cout << exponenciacao(a, exponenciacao(b, c, modulo - 1), modulo) % modulo << '\n';
  }

  return 0;
}