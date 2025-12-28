#include <iostream>
using namespace std;

int main(){
  int choice;
  double converted;
  double fahrenheit,celsius;

  //repeat until user choose to exit
  while(true){
    // display list
    cout<<"\n Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Exit\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if(choice ==3){
      cout << "Exiting Temperature Converter.\n";
      break;
    }

    if(choice==1){
      cout<< "Enter temperature in Celsius: ";
      cin>>celsius;
      fahrenheit= (celsius*9/5)+32;
      cout<< celsius <<" C = " << fahrenheit<< "F\n";

    }
    else if(choice ==2){
      cout << "Enter temperature in Fahrenheit: ";
      cin>> fahrenheit;
      celsius = (fahrenheit - 32) *5 /9;
      cout<< fahrenheit <<" F = "<< celsius << "\n";
    }
    else{
      cout<< "Invalid choice. Please try again. \n";
    }
  }
  return 0;
}