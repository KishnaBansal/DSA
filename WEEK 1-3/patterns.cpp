#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int num,n;
//     cin >> num;
//     n=num/2;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             if(j==0 || j==i+1-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             if(j==0 || j==n-i-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int num,n;
//     cin>>num;
//     n=num/2;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             if(j==0 || j==i+1-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             if(j==0 || j==n-i-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

// }




// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*n-2*i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int num,n;
//     cin >> num;
//     n=num/2;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*n-2*i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<2*i+1;j++) {
//             if(j%2==0) {
//                 cout<<i+1;
//             }
//             else {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             if(i==0 || j==0 ||j==n-i-1) {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         char ch;
//         for(int j=0;j<i+1;j++) {
//             ch=j+1+'A'-1;
//             cout<<ch;
//         for(char alpha=ch;alpha>'A';) {
//             alpha=alpha-1;
//             cout<<alpha;
//         }
//         }
//         cout<<endl;
//     }
// }