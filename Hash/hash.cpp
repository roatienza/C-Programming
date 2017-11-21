// g++ -std=c++11 hash.cpp -o hash -Wall

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    unordered_set<string> colors = {"red", "green", "blue"};
    unordered_set<string>::const_iterator itr = colors.find("green");
    if (itr != colors.end()){
        cout << *itr << endl;
    }
    cout << "Load factor: " << colors.load_factor() << endl;
    cout << "Bucket count: " << colors.bucket_count() << endl;
    cout << "Bucket where green is: " << colors.bucket("green") << endl;
    
    return 0;
}
