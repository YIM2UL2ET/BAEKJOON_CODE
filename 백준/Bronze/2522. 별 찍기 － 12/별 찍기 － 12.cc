#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  int i;
  for (i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << ' ';
    }
    for (int j = n - i; j < n; j++) {
      cout << '*';
    }
    cout << '\n';
  }
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < n - i; j++) {
      cout << ' ';
    }
    for (int j = n - i; j < n; j++) {
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}