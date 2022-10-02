int biarySearch(int arr[], int n, int key){
    int l=0;
    int h=n-1;
    int mid = (l+h)/2;

    while(l<=h){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=(l+h)/2;
    }
    return -1;
}
