#include <iostream>
#include <fstream>
using namespace std;

int main () {
  
  ofstream myfile;

  while(true) {
  string name, response;
  myfile.open ("list.csv");
  cout<< "\nEnter name:";
  cin>> name;

  myfile << name;
  cout<<"Updating file...\n";
  cout<< "\nAdd another? Y/N?";
  cin >> response;
  if(response == "N" || response == "n") {
    cout<< "Thank you, good bye.";
    break;
    }
  }
  myfile.close();

  return 0;
}
