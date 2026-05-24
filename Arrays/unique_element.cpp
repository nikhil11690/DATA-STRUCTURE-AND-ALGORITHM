// find unique element in an array (using XOR because XOR cancel outs same elemnet)
int findUnique(int *arr, int size)
{ int ans= 0;
    for(int i = 0 ;i<size;i++){
        ans = ans^arr[i];

        
    }
    return ans;
   
}
