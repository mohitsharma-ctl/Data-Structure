#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a = "abcd";
    string b = "ef";
    string c;
    
    
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    cout<<b[0]+ a.substr(1,a.size())<<" "<<a[0]+b.substr(1,b.size());;
    
    
    return 0;
}