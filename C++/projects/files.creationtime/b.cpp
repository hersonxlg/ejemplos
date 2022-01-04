#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

namespace fs = std::filesystem;
using namespace std;


int main(int argc, char** argv){
   fs::path p("a.txt");
   fs::file_time_type time = fs::last_write_time(p);
   cout << "hola" << time.data << endl;
   return 0;
}
