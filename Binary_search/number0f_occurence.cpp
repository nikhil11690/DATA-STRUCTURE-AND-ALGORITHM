// find no. of occurence using binary search o(log n)
int firstoccurnece(vector<int>& arr, int size , int x){
    int start = 0;
    int end  = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == x){
            ans = mid;
            end = mid-1;
        }
        else if(x > arr[mid]){
            start = mid +1;


        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastoccurnece(vector<int>& arr, int size , int x){
    int start = 0;
    int end  = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == x){
            ans = mid;
            start = mid + 1;
        }
        else if(x > arr[mid]){
            start = mid +1;


        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int count(vector<int>& arr, int n, int x) {
	int first = firstoccurnece(arr,n,x);
	if(first == -1){
		return 0;
	}
	int last = lastoccurnece(arr,n,x);

	return last - first +1;
}
