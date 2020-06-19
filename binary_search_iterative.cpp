#include <iostream>

using namespace std;

int binIter(int arr[],int l,int r,int key){
    

    while(l<=r){
    int mid = l+(r-l)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(key<arr[mid]){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
    }
    return -1;
}


int main(){
    
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    int result = binIter(arr,0,n-1,key);
    cout<<result<<endl;
    return 0;
}