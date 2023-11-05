#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v(5, 1);    // a vector is declared with name having 5 elements and each is assigned with value 1!
    cout<<"Print a"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;
    cout<<"Size of vector :"<<v.size()<<endl;

}