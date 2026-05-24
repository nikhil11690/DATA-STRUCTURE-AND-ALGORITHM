// continue  mein program skip hojata h 

    #include<iostream>
    using namespace std;
    int main(){
         for(int i =0 ; i<=5 ; i ++){
              cout<<i<<" ";
              i++;
         }
         for(int i =0; i<=5; i++){
             for(int j=i;j<=5;j++){
                 cout<<i<<endl;
             }
         }
        
         for(int i = 0 ; i<=5 ; i++){
             for(int j = i ; j<=5 ; j++){
                 if(i+j == 10){
                     break;

                 }
                 cout<<i<<" "<<j<<endl;
             }
         }

         
    }
