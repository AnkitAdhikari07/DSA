// #include<iostream>
// #include<algorithm>
// using namespace std;

// void Pattern22(int n){
//     for(int i=0; i=2*n-1; i++){
//         for(int j=0; j=2*n-1; j++){
//             int top = i;
//             int left = j;
//             int right = (2 * n - 2) - j;
//             int bottom = (2 * n - 2) - i;
//             cout<<(n - std::min(top, left, right, bottom));
//         }

//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the integer : ";
//     cin>>n;

//     Pattern22(n);

//     return 0;
// }


#include <iostream>
#include <algorithm> 
using namespace std; // For std::min

void Pattern22(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {  // Corrected loop condition
        for (int j = 0; j < 2 * n - 1; j++) {  // Corrected loop condition
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            std::cout << (n - min({top, bottom, left, right}));  // Corrected min function and added std:: namespace
        }
        cout <<endl;  // Added newline for correct pattern formatting
    }
}

int main() {
    int n = 3;  // Example value
    Pattern22(n);
    return 0;
}
