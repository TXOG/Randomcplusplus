#include <iostream>
using namespace std;
#include <algorithm>
#include <cctype>
#include <string>

// main
int main() {
  cout << "Enter number a: ";
  float numa;
  cin >> numa;
  cout << "Enter number b: ";
  float numb;
  cin >> numb;
  cout << "Enter operation (add, subtract, multiply, divide): ";
  string operation;
  cin >> operation;
  transform(operation.begin(), operation.end(), operation.begin(), ::tolower);
  if (operation == "add") {
    cout << "Add"
         << "\n";
    float numc;
    numc = numa + numb;
    cout << numc;
  } else if (operation == "subtract") {
    cout << "Subtract"
         << "\n";
    float numc;
    numc = numa - numb;
    cout << numc;
  } else if (operation == "multiply") {
    cout << "Multiply"
         << "\n";
    float numc;
    numc = numa * numb;
    cout << numc;
  } else if (operation == "divide") {
    cout << "Divide"
         << "\n";
    float numc;
    numc = numa / numb;
    cout << numc;
  }
}
