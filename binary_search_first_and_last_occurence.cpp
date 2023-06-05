#include <iostream>
#include <vector>

using namespace std;
int firstoccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
    int ans = -1;
    
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        mid = (start + end) / 2;
    }
    //cout << ans << " ans" << endl;
    return ans;
}

int lastoccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
    int ans = -1;
    
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        mid = (start + end) / 2;
    }
    //cout << ans << " ans" << endl;
    return ans;
}

int main() {
    int arr[7] = {1,3,4,4,4,5,8};
    cout<< "first occurence of key 4 at index " << firstoccurence(arr, 7, 4) << endl;
    cout<< "last occurence of key 4 at index " << lastoccurence(arr, 7, 4) << endl;
    return 0;
}
