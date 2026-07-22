#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    cout<<"address of i"<< p<<endl;
    cout <<"value of i "<< *p<<endl;


    return 0;
}
