#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    string c=a+b;
    string subc=a.substr(0,1);
    string subd=a.substr(1, 3);
    string sube=b.substr(0, 1);
    string subf=b.substr(1, 1);
    cout<<a.size();
    cout<<" ";
    cout<<b.size();
    cout<<"\n";
    cout<<c;
    cout<<"\n";
    cout<<sube;
    cout<<subd;
    cout<<" ";
    cout<<subc;
    cout<<subf;

    
    return 0;
}