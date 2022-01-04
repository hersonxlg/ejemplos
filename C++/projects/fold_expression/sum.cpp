#include <iostream>
#include <vector>

using namespace std;

template <typename... T>
auto sum( T... num ){
    return (num + ...);
}

int main( int argc, char** argv ){
    // vector<int> nums;
    // for ( int i=0; i<argc; ++i ){
    //     nums.push_back(stoi(argv[i]));
    // }
    auto sum2 = [](auto... num){return (num + ...);};
    cout << "suma: " << [](auto... num){return (num + ...);}(2.2,3,3,4)<<endl;
    return 0;
}
