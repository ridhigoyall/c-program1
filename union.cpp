#include<iostream>
using namespace std;

union money{
    char car;
    float pounds;
    int rice;
};
int main(){
    union money m1;
    m1.car='c';
    m1.rice=34;
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;

    return 0;
}