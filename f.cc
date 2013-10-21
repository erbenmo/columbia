#include <iostream>

using namespace std;

float fact[21];

int pick(int from, int num) {
  return fact[from] / fact[num] / fact[from-num];
}

int main() {
  fact[0] = 1.0;
  for(int i=1; i<21; i++) {
    fact[i] = 1.0 * fact[i-1] * i;
  }

  int total = 20;
  int cur = 7;

  float count = 0;

  for(int i=2; i<=cur; i++) {
    count += 1.0 * fact[total-i] * pick(cur-2, i-2) * fact[i-1];
    //      rest permut     pick cand <= cur   permut (cands, cur)
  }

  cout << count << endl;
}
