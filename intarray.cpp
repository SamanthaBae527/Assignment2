#include <iostream>

using namespace std;

int main(){
  int num[10];

  for(int i = 0; i < 10; i++){
    cout << "enter the next array num: " << endl;
    cin >> num[i];
    cout << num[i] << endl;
  }
}
