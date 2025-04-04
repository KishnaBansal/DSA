#include<iostream>
using namespace std;

// void solve(int arr[],int n,int i) {
//     if(i >= n) return;
//     cout << arr[i] << " ";
//     solve(arr,n,i+1);
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     solve(arr,n,0);
// }


bool search(int arr[], int n, int target,int i) {
    if(i == target) return true;
    if(i >= n) return false;
    return search(arr,n,target,i+1);
}

int minVal(int arr[], int n, int i) {
    if(i >= n) return -1;
    int recAns = minVal(arr,n,i+1);
    int ans = min(arr[i],recAns);
    return ans;
}

void printDigits(int &num) {
    if(num == 0) return;
    int dig = num % 10;
    cout << dig << endl;
    num = num / 10;
    printDigits(num);
}




int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout << search(arr,n,50,0);
    // cout << minVal(arr,n,0) << " " ;
    int a = 9876;
    printDigits(a);
}