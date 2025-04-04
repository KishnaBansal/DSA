#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isValid(vector<int>&arr,int m,int maxHeight) {
    int totalWood = 0;
    int n = arr.size();
    for(int i=0;i<n;i++) {
        if(arr[i] > maxHeight) {
            totalWood += (arr[i]-maxHeight);
        }
    }
    if(totalWood >= m) {
        return true;
    }
    else return false;
}

int main() {
    int m;
    int n;
    cin >> n;
    cin >> m;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int s = 0;
    int e = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(isValid(arr,m,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    cout << ans <<endl;
}