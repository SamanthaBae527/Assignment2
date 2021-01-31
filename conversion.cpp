#include <iostream>

using namespace std;

void getInput(double feet, double inches){
  cout << "Please enter the number of feet: " << endl;
  cin >> feet;
  cout << "Please enter the number of remainder inches: " << endl;
  cin >> inches;
}

void getCalculations(double feet, double inchasss, double meters, double centi){
  feet = feet + (inchasss / 12.0);
  meters = feet * 0.3048;
  centi = 100 * meters;
}
 void getOutput(double meters, double centi){
   cout << "In meters: " << meters << endl;
   cout << "In centimeters: " << centi << endl;
 }

 int main(){
   double feet;
   double inches;
   double meters;
   double centi;
   getInput(feet, inches);
   getCalculations(feet, inches, meters, centi);
   getOutput(meters, centi);
 }
