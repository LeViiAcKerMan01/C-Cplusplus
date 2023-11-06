#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1]="Priyanshu";
    m[2]="Singh";
    m[11]="Tadhiyal";

    for(auto i:m){
        cout<<i.first<<endl;
    }

}