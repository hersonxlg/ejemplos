#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char** argv) {
   std::filesystem::path p("a.txt");
   cout << "Current path is " << std::filesystem::current_path() << endl;
   cout << "Absolute path for " << p << " is " << std::filesystem::absolute(p) << endl;
   return 0;
}
