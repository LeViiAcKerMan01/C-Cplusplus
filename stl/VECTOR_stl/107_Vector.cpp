#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v(5, 1);
    vector<int> last(v);    // here we have copied elements of vector V to vector last!
    cout<<"Print a :"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
}