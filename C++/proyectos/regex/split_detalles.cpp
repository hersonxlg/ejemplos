#include <iostream>
#include <vector>
#include <regex>

using namespace std;

std::vector<std::string> split(const std::string &str, std::string regex)
{
    std:: regex r{ regex };
    std::sregex_token_iterator start{ str.begin(), str.end(), r, -1 }, end;
    return std::vector<std::string>(start, end);
}

int main( int argc, char** argv ){
    if( argc < 3 ){
        return -1;
    }
    string str = argv[1];
    string pattern = argv[2];
    cout<<"string: \""<<str<<"\""<<endl;
    cout<<"pattern: \""<<pattern<<"\""<<endl;
    auto lista = split(str,pattern);
    cout<<"\n\nresultado:"<<endl;
    for ( auto e:lista ){
        cout<<"\""<<e<<"\""<<endl;
    }
    
    return 0;
}
