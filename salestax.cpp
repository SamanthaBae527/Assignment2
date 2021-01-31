#include <iostream>

using namespace std;

float addTax (float taxRate, float cost){
  taxRate = taxRate * 0.01;
  cost = cost - (cost * taxRate);
  return cost;
}

int main(){
  float taxRate;
  float cost;
  float finalcost;

  cout << "Please enter the tax percentage ex. enter 35% as 35: " << endl;
  cin >> taxRate;
  cout << "Please enter the original cost: " << endl;
  cin >> cost;
  finalcost = addTax(taxRate, cost);
  cout << "Here's your final cost: " << finalcost << endl;
}
