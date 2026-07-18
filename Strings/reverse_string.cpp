#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] !='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }

}

int main(){
    char name[20];
    cout<<"enter  your name"<< endl;
    cin>> name;
    cout<<"you name is:"<<name<<endl;
    cout<<"length:" <<getlength(name)<<endl;
    int len = getlength(name);

    reverse(name,len);
    
    cout<<"reverse: "<<name<<endl;

    return 0;
}