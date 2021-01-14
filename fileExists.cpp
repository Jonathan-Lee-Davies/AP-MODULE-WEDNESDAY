#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fstream>
 using namespace std;

  bool fileExists(std::string filename) {
    struct stat buf;
    if (stat(filename.c_str(), &buf) == 0) {
      std::cout << filename << ", " << buf.st_size << " bytes, " << "modified: " << ctime(&buf.st_mtime);
      std::ifstream f(filename);
      return true;
    }
    cout<< filename << " does not exist";
    return false;
  }


 int main() {
  
  string filename;

  cout << "Filename to check: ";
  cin >> filename;

  struct stat buf;
  stat("file",&buf);

  fileExists(filename);
 }
