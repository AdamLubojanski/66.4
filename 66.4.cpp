#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool isTriangle(int a, int b, int c) {
  return (a + b > c && a + c > b && b + c > a);
}

int main(int argc, char** argv) {
	int SIZE = 1000;
  cout << "Zadanie 66.4:" << endl;
  ifstream in("trojki.txt");
  int counter = 0, maxChain = 0, chain = 0;
  int a, b, c;
  for (int i = 0; i < SIZE; i++) {
    in >> a >> b >> c;
    if (isTriangle(a, b, c)) {
      counter++;
      chain++;
    }else {
      if (chain > maxChain) maxChain = chain;
      chain = 0;
    }
  }
  cout << counter << " wierszy" << endl<< "najdłuższy ciąg: " << maxChain;
}
