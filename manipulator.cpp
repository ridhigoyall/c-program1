#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=3,b=78,c=132;
    // with a manipulator setw
    cout<< "the value of a is "<<setw(4)<<a<<endl;
    cout<< "the value of b is "<<setw(4)<<b<<endl;
    cout<< "the value of c is "<<setw(4)<<c<<endl;
    //without a manipulator
    cout<< "the value of a is "<<a<<endl;
    cout<< "the value of b is "<<b<<endl;
    cout<< "the value of c is "<<c<<endl;

    return 0;
}