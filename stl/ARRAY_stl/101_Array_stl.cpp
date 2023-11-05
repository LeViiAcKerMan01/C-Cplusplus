#include<iostream>
#include<array>
using namespace std;
int main(){
int arr[3]={1,2,3};
array<int, 4> a={12,43,56,32};
for(int i=0; i<4; i++){
cout<<a[i]<<endl;
}

cout<<a.front()<<" ";
cout<<a.back()<<"\n";

}

