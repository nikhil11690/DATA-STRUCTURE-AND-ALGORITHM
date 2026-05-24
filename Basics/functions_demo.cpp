// FUNCTION 
// int function name(int a,int b )

#include<iostream>
using namespace std;
int power(int a , int b){
    int ans = 1;
    for(int i =1 ; i<=b ; i++ )
    ans = ans*a;
    return ans;
}

int main(){

    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"answer is "<<  "  "  <<answer<<endl;
    return 0;
}

 

// program to calculate nCr:

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1 ; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int m , int r){

    int num = factorial(m);
    int deno = factorial(r)*factorial(m-r);
    int ans = num/deno;
    return ans;

}
int main(){

    int a ,b ;
    cin>>a>>b;
    int answer = nCr(a,b);
        cout<<"nCr of this "<< answer <<endl;
}

// .FUNCTION PASS BY VALUE 

#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"n is"<< n <<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"number n is"<<n<<endl;
    return 0 ;
}
