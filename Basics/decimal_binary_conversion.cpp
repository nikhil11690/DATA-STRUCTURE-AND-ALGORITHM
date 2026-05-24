#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int ans = 0;
    int place = 1;
    while(n != 0){
        int bit = n&1;
        ans = (bit * place) + (ans); // place ka mtlb hota h one . tens and humders place .. 10^powers
        place = place * 10;
        n = n>>1;
        



    }
    cout<<"answer is "<<ans<<endl;
}
