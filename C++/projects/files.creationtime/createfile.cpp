#include <iostream>
#include <filesystem>
 
using namespace std;
namespace fs = std::filesystem;

int main(int argc, char** argv)
{
    filesystem::path p("tmp.txt");
    if(filesystem::exists(p)){
        cout << "el archivo: tmp.txt ya existe." << endl;
    }else{
        cout << "el archivo: tmp.txt aun NO existe." << endl;
    }

    fs::path cd("~");
    cout << fs::absolute(cd) << endl;
    cout << fs::is_directory(cd) << endl;
    return 0;
}
