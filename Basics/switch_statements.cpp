// switch statemmensts:
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;

    cout<<"enter the valude of b"<<endl;
    cin>>b;

    char op;
    cout<<"enter the operation"<<endl;
    cin>>op;


    switch(op){

        case '+': cout<<"answer is"<<(a+b)<<endl;
                break;
        
        case '-': cout<<"answer is"<<(a-b)<<endl;
                break;

        case '*': cout<<"answer is"<<(a*b)<<endl;
                break;

        case '%': cout<<"answer is"<<(a%b)<<endl;
                break;

        case '/': cout<<"answer is"<<(a/b)<<endl;
                break;

        default : cout<<"enter a valid operation"<<endl;

    }

}
