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
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13 :"<<m.count(13)<<endl;

    m.erase(2);
    cout<<"After erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}