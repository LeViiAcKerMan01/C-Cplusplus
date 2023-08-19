#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char op;
    int result;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter operator:";
    cin>>op;
    cout<<"Enter second number:";
    cin>>num2;

    if(op=='+'){
        result=num1+num2;
    }
    else if(op=='-'){
        result=num1-num2;
    }
    else if(op=='/'){
        result=num1/num2;
    }
    else if(op=='*'){
        result=num1*num2;
    }
    else{
        cout<<"Invalid Operator";
    }
    cout<<result;
    return 0;

}