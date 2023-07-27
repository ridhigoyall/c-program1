#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b= &a;
    cout<<"address of a "<<&a<<endl;
    cout<<"address of b "<<b<<endl;

    //value at 
    cout<<"address of b "<<*b<<endl;

    //pointer to pointer
    int **c=&b;
    cout<<"address of b "<<&b<<endl;
    cout<<"address of  b "<<*c<<endl;
    cout<<"the value of b is"<<*c<<endl;
    cout<<"the value of c is  "<<**c<<endl;

    return 0;
}