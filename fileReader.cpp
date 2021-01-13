#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fstream>
 using namespace std;

  bool fileExists(std::string filename) {
    struct stat buf;
    if (stat(filename.c_str(), &buf) == 0) {
      std::ifstream f(filename);
      return true;
    }
    cout<< "Sorry, " << filename << " does not exist";
    return false;
  }


int main () {

string filename, line;
int numOfLines = 0;
  cout << "Filename to check: ";
  cin >> filename;

  struct stat buf;
  stat("file",&buf);

  while(fileExists(filename)) {
  ifstream myfile (filename);
  if (myfile.is_open()) {
    while(getline(myfile,line)){
      numOfLines++;
      cout << numOfLines<< ":" << line << '\n';
    }
      cout<< "\nTotal number of lines read: " << numOfLines;
    myfile.close();
  }
  else cout << "Unable to open file"; 
  return 0;
  }

}
 
