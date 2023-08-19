/*   
Program-1

#include<iostream>
using namespace std;

double cube(double num){
    double result=num*num*num;
    return result;
}
int main()
{
    double answer=cube(5.0);
    cout<<answer;
    return 0;
    
}
*/

/*   
Program-2


#include<iostream>
using namespace std;

double cube(double num){
    double result;
}
int main()
{
    cout<<cube(5.0);
    return 0;
}
*/


#include<iostream>
using namespace std;

double cube(double num){
return num*num*num;
cout<<"Hello";   // Never executed as return statement makes it get out of the code block!
}
int main()
{
    cout<<cube(5.0);
    return 0;
}