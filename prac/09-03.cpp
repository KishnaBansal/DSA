#include<iostream>
#include<limits.h>
using namespace std;
// int main() {
//     int arr[] = {10,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n-1;
//     while(s <= e) {
//         if(s == e) {
//             cout << arr[s] <<" ";
//             break;
//         }
//         else {
//             cout << arr[s] <<" ";
//             s++;
//             cout<<arr[e]<<" ";
//             e--;
//         }
//     }
// }

// int main() {
//     int arr[] = {10,20,10,30,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int ans = 0;
//     for(int i=0;i<n;i++) {
//         ans ^= arr[i];
//     }
//     cout<<ans<<endl;
// }

// int main() {
//     int arr[] = {0,1,1,0,0,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n-1;
//     while(s <= e) {
//         if(arr[s] == 1) {
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//         }
//         else {
//             if(arr[s] == 0) s++;
//             if(arr[e] == 1) e--;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout << arr[i] <<" ";
//     }
// }

// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row = sizeof(arr) / sizeof(arr[0]);
//     int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//     int min = INT_MAX;
//     int max = INT_MIN;
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(arr[i][j] < min) {
//                 min = arr[i][j];
//             }
//             if(arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout << "Max: " << max << endl;
//     cout << "Min: " << min << endl;
// }

// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row = sizeof(arr) / sizeof(arr[0]);
//     int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
            
//         }
//     }
// }

int main() {
    int arr[] = {23,-7,12,-10,-11,40,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n == 0) return 0;
    if(n==1) return arr[0];
    int i=0,j=1;
    while(i<n && j<n) {
        if(arr[i] < 0) i++;
        else if(arr[i] > 0 && arr[j] < 0) {
            swap(arr[i],arr[j]);
            i++;j++;
        }
        else {j++;}
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}