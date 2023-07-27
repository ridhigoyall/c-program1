#include<iostream>
using namespace std;

int product(int a ,int b){
    static int c=0;//this executes only oncei;
    c=c+1;//next time the funnction is run ,the value of c will be retaianed
    return a*b+c;
}

int main(){
    int a,b;
    cout<<"Enter a value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
   
    return 0;
}