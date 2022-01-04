#include <iostream>
#include <algorithm>
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
    vector<string> arguments;
    for ( int i=0; i<argc; ++i ){
        arguments.push_back(argv[i]);
    }
    bool isVerbose = false;
    for( string e:arguments ){
        transform(e.begin(),e.end(),e.begin(),[](char c){return tolower(c);});
        if( e == "-verbose"){
            isVerbose=true;
        }
    }
    if(isVerbose){
        cout<<"string: \""<<str<<"\""<<endl;
        cout<<"pattern: \""<<pattern<<"\""<<endl;
    }
    auto lista = split(str,pattern);
    if(isVerbose){
        cout<<"\n\nresultado:"<<endl;
    }
    for ( auto e:lista ){
        cout<<e<<endl;
    }
    return 0;
}
