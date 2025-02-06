#include<iostream>
#include<climits>
using namespace std;


// Min Max question 
// int getMax(int num[], int size){
    // int maxi = INT_MIN;
    
    // for(int i=0; i<size; i++){

        // Method 1
        // if(num[i] > max){
        //     max = num[i];
        // }

        // Method 2
//         maxi = max(maxi, num[i]);
//     }

//     return maxi;
// }

// int MINArr(int num[], int size){
//     int mini = INT_MAX;

//     for(int i=0; i<size; i++){

        // Method 1
        // if(num[i] < min){
        //     min = num[i];
        // }

        // Method 2
//         mini = min(mini, num[i]);
//     }

//     return mini;
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array : ";
//     cin>>size;

//     int num[100];

//     for(int i=0; i<size; i++){
//         cin>>num[i];
//     }

//     cout<<"Max value : "<<getMax(num, size);
//     cout<<"Min value : "<<MINArr(num, size);

//     return 0;
// }



//-------------------------------- Linear search ----------------------------------

// bool Linear_Search(int arr[], int size, int target){

//     for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[10] = {-2, 5, 7, 10, 4, 6, 3, 1};
//     int target;
//     cout<<"Enter the element you want to search : ";
//     cin>>target;

//     bool found = Linear_Search(arr, 10, target);

//     if(found == true){
//         cout<<"Target "<<target<<" found";
//     }
//     else{
//         cout<<"Target is not found";
//     }

//     return 0;
// }




// ----------------------------------- Reverse array -----------------------------

// int Reverse_Array(int arr[], int size){
//     int start = 0;
//     int end = size-1;

//     while(start <= end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void Print_Array(int arr[], int size){
//     for(int i=0;  i<size; i++){
//         cout<<arr[i];
//         cout<<" ";
//     }

//     cout<<endl;
// }

// int main(){
//     int arr[6] = {2, 3, 4, 5, 6, 7};
//     int brr[7] = {8, 9, 10, 11, 12, 13, 14};

//     Reverse_Array(arr, 6);
//     Reverse_Array(brr, 7);

//     Print_Array(arr, 6);
//     Print_Array(brr, 7);

//     return 0;
// }




// -------------------------------- Swap Alternate --------------------------------------

// void swap_Alternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1 < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// };

// void Print_Array(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// };

// int main(){
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

//     swap_Alternate(arr, 8);
//     Print_Array(arr, 8);

//     return 0;
// }





//------------------------------------------ Binary Search -----------------------------
// int Binary_Search(int arr[], int size, int key){
//         int start = 0;
//         int end = size-1;
//         int mid = (start+end)/2;

//         while(start <= end){
//                 if(arr[mid] == key){
//                         return mid;
//                 }
//                 else if(key > arr[mid]){
//                         start = mid+1;
//                 }
//                 else{
//                         end = mid-1;
//                 }
//                 mid = (start+end)/2;
//         }

//         return -1;
// }

// int main(){
//         int arr[6] = {10, 20, 30, 40, 50, 60};

//         int index = Binary_Search(arr, 6, 30);

//         cout<<"Index of 30 is : "<<index;

//         return 0;
// }




// -------------- Pivot in an array -------------------

// int Pivot_Array(int arr[], int size){
//         int start = 0;
//         int end = size-1;
//         int mid = start + (end - start)/2;

//         while(start < end){
//                 if(arr[mid] >= arr[0]){
//                         start = mid+1;
//                 }
//                 else{
//                         end = mid;
//                 }
//                 mid = start + (end-start)/2;
//         }
//         return start;
// }

// int main(){
//         int arr[5] = {8, 10, 17, 1, 3};

//         int Pivot = Pivot_Array(arr, 5);
//         cout<<"Pivot element at index : "<<Pivot;

//         return 0;
// }




// ------------------ Square root ---------------------
// int mySqrt(int x) {
//         int start = 0;
//         int end = x;
//         long long int mid = start + (end - start)/2;
//         long long int ans;
        
//         while(start <= end){
//             long long int square = mid*mid;
//             if(square == x){
//                 return mid;
//             }
//             else if(square < x){
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//             mid = start + (end - start)/2;
//         }
//         return ans;
// }

// double Precise(int x, int precision, int temp_Sol){
//         double factor = 1;
//         double ans = temp_Sol;
//         for(int i=0; i<precision; i++){
//                 factor = factor/10;
//                 for(double j=ans; j*j<x; j=j+factor){
//                         ans = j;
//                 }
//         }
//         return ans;
// }

// int main(){
//         int x;
//         cout<<"Enter the number you want square root : ";
//         cin>> x;

//         int temp_Sol = mySqrt(x);
//         cout<<"The square root is : "<<Precise(x, 3, temp_Sol);

//         return 0;
// }


// 