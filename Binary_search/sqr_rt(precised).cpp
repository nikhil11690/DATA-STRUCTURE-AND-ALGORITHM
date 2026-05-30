// METHOD TO FIND SQUARE ROOT(PRECISED VALUE)
#include<iostream>
using namespace std;

 long long int sqrtinteger(int n){
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;
    long long int ans = -1;

    while(start<=end){
       long long int square = mid*mid;
       if(square == n ){
        return mid;
       }

       if(square<n){
        start = mid+1;
        ans = mid;
       }
       else{
        end = mid -1;
       }
        mid = start + (end - start)/2;


    }
    return ans;
}

double precison(int n , int prec, int temp){
    double factor = 1;
    double ans = temp;
    for(int i = 0; i<prec; i++){
        factor = factor/10;
        for(double j = ans; j*j<n ; j =j+factor){
            ans = j;
        }
    }
    return ans ;

}


int main (){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    long long int temp = sqrtinteger(n);
    double ans = precison(n,3,temp);
    cout<<"square root of number"<< "  " << ans <<endl;

    return 0;
}
