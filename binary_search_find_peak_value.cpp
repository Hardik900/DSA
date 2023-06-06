#include <iostream>
// #include <vector>

using namespace std;
int peakvalue(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
    int i = 0;

    while(start < end){
        // if( arr[mid-1] < arr[mid] > arr[mid+1]){
        //     return arr[mid];
        // }

        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }

        else {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main(){
    int arr[8] = {0,1,2,3,4,5,1,0};
    cout<< "ffff " << peakvalue(arr, 8) << endl;
    return 0;
}