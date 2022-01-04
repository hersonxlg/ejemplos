#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& s, regex re) {
  vector<string> elems;
  sregex_token_iterator iter(s.begin(), s.end(), re, -1);
  sregex_token_iterator end;
  while (iter != end) {
    if (iter->length()) {
      elems.push_back(*iter);
    }
    ++iter;
  }
  return elems;
}


int main( int argc, char** argv ){
    string s = "hola mundo.";
    regex re("o");
    vector<string> lista = split(s,re);
    for ( auto e: lista ){
        cout<<e<<endl;
    }
    return 0;
}
