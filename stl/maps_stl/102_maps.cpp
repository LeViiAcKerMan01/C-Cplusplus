#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1]="Priyanshu";
    m[14]="Tadhiyal";
    m[2]="Singh";

    m.insert({5, "Bheem"});

    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<"Finding 13 :"<<m.count(13)<<endl;

}