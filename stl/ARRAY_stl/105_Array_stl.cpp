#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int, 4> a={12, 23, 32, 43};
    int b=a.front();
    int c=a.back();
    int avg= (b+c)/2;
    cout<<avg<<endl;
    return 0;
}