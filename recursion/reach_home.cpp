#include<iostream>
using namespace std;

void reachhome(int source , int destination){
    cout<<"source: "<<source<<" destination: "<<destination<<endl;
    if(source == destination){
        cout<<"arrived"<<endl;
        return ;
    }
    // processing
    source++;
    // recurssive call
    reachhome(source, destination);

}
int main(){
    int source = 2;
    int destination = 10 ;

    cout<<endl;
    reachhome(source,destination);
}