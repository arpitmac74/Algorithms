#include <iostream>

using namespace std;


int recurbinary(int arr[],int l,int r,int key){
    
    if(r>=l){
    int mid = l + (r - l) / 2; 
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return recurbinary(arr,mid+1,r,key);
    }
    else{
        return recurbinary(arr,l,mid-1,key);
    }

    }
    return -1;

}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int key =2; //number to find 
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = recurbinary(arr,0,n-1,key);
    cout<<result;
    return 0;

}