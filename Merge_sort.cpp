#include <iostream>
#include <vector>

using namespace std;




void printl(vector<int> avector){
    for(vector<int>::iterator i=avector.begin();i!= avector.end();i++){
        cout<<*i<<" ";
    }

}


vector<int> mergesort(vector<int> avector){
    if(avector.size()>1){
    int mid = avector.size()/2;

    vector<int> lefthalf(avector.begin(),avector.begin()+mid);
    vector<int> righthalf(avector.begin()+mid,avector.begin()+avector.size());
    lefthalf = mergesort(lefthalf);
    righthalf = mergesort(righthalf);

    
    unsigned i=0;
    unsigned j=0;
    unsigned k=0;
    
    while(i<lefthalf.size() && j<righthalf.size()){
        if(lefthalf[i]<righthalf[j]){
            avector[k]=lefthalf[i];
            i++;
            k++;
        }
        else{
            avector[k]=righthalf[j];
            j++;
            k++;
        }
        }

    while(i<lefthalf.size()){
        avector[k] = lefthalf[i];
        i++;
        k++;
        }
    while(j<righthalf.size()){
        avector[k]=righthalf[j];
        j++;
        k++;
        }

    
    
    
    
}
return avector;
}



int main(){
const int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
vector<int> avector (arr, arr + sizeof(arr) / sizeof(arr[0]) );
printl(mergesort(avector));
return 0;
}