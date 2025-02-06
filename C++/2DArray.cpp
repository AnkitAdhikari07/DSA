#include<iostream>
#include<climits>
using namespace std;

// bool isPresent(int arr[][4], int target, int row, int column){
//     for(int row=0; row<3; row++){
//         for(int column=0; column<4; column++){
//             if(arr[row][column] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[3][4];

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int target;
//     cout<<"Enter the element you want to search : ";
//     cin>>target;

//     if(isPresent(arr, target, 3, 4)){
//         cout<<"Element found";
//     }
//     else{
//         cout<<"Element not found";
//     }


//     return 0;
// }





// Row wise sum 

// void printSum(int arr[][3], int row, int col){
//     cout<<"Printing Sum : "<<endl;
//     for(int row=0; row<3; row++){
//         int sum=0;
//         for(int col=0; col<3; col++){
//             sum += arr[row][col];
//         }
//         cout<<sum<<" ";
//     }
// }

// int main(){
//     int arr[3][3];

//     cout<<"Enter the array element : ";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     printSum(arr, 3, 3);

//     return 0;
// }





// Largest row sum
// int largestRowSum(int arr[][3], int row, int col){
//     int maxi=INT_MIN;
//     int rowIndex=-1;

//     for(int row=0; row<3; row++){
//         int sum=0;
//         for(int col=0; col<3; col++){
//             sum += arr[row][col];
//         }
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = row;
//         }
//     }
//     cout<<"The maximum sum is : "<<maxi<<endl;
//     return rowIndex;
// }

// int main(){
//     int arr[3][3];

//     cout<<"Enter the array element : ";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int ans = largestRowSum(arr, 3, 3);
//     cout<<"The max row is at index : "<<ans;

//     return 0;
// }


// GCD/HCF Code (Grestest Common Divisor)

// int gcd(int a, int b) {
//     if(a==0){
//         return b;
//     }

//     if(b==0){
//         return a;
//     }

//     while(a!=b) {
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }

//     return b;
// }

// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b : ";
//     cin>>a>>b;

//     int ans = gcd(a, b);
//     cout<<"The value of gcd a and b is : "<<ans;

//     return 0;
// }





// Pointer topic

// int main(){
//     int num = 5;

//     cout<<"The address of num is : "<<&num;

//     int *ptr = &num;
//     cout<<"\nThe value of pointer is : "<<*ptr;

//     return 0;
// }




// Understanding of & and * operator in pointer

// int main(){
//     int a[20] = {1, 2, 3, 5};

//     cout<<&a[0]<<endl;
//     cout<<&a<<endl;
//     cout<<a<<endl;

//     int *p = &a[0];

//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;

//     return 0;
// }



// Double pointer Concept

// int main(){
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout<<"value of i is : "<<i<<endl;
//     cout<<"value of p is : "<<*p<<endl;
//     cout<<"value of p2 is : "<<**p2<<endl;

//     return 0;
// }



// Function pointer concept

// void update(int **p2){
    // p2 = p2 + 1;
    // Kuch change hoga - No

    // *p2 = *p2 + 1;
    // Kuch change hoga - Yes but p1 pointer pe change layega

    // **p2 = **p2 + 1;
    // kuch change hoga - Yes and ye p2 pointer pe change layega
// }



// Reference variable

// int update1(int n){
//     n++;
//     return n;
// }

// int update2(int &n){
//     n++;
//     return n;
// }

// int main(){
//     int n = 5;

//     cout<<"Pass by value : ";
//     update1(n);
//     cout<<n<<endl;

//     cout<<"Pass by referance : ";
//     update2(n);
//     cout<<n;
// }






// ---------- Dynamic memory Allocation 2D Array --------------

// int main(){

//     int row;
//     cin>>row;

//     int col;
//     cin>>col;

//     // creating a 2D array
//     int **arr = new int *[row];
//     for(int i=0; i<row; i++){
//         arr[i] = new int[col];
//     }

//     // taking input
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;

//     // printing
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // Releasing column memory
//     for(int i=0; i<row; i++){
//         delete [] arr[i];
//     }
//     // Releasing row memory
//     delete [] arr;

//     return 0;
// }










// ------------------ Inline Function --------------------

// inline int getMax(int &a, int &b){
//     return (a>b) ? a : b;
// }

// int main(){
//     int a = 1, b = 2;
//     int ans = 0;

//     ans = getMax(a, b);
//     cout<<ans<<endl;

//     a = a+3;
//     b = b+1;

//     ans = getMax(a, b);
//     cout<<ans<<endl;

//     return 0;
// }





// ----------- Recursion example -----------------

// int factorial(int n){
//     // Base case
//     if(n==0){
//         return 1;
//     }

//     // Recursive relation
//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;

//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);

//     cout<<ans;

//     return 0;
// }




// ------------ Recursion power example ----------

// int power(int n){
//     if(n==0){
//         return 1;
//     }

//     int smallerProblem = power(n-1);
//     int biggerProblem = 2*smallerProblem;

//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans<<endl;

//     return 0;
// }




// -----------Recursion Step example----------------------

// void reachHome(int src, int dest){
//     cout<<"Source "<< src << " desination "<<dest<<endl;

//     // base case
//     if(src == dest){
//         cout<<"Pahuch gaye"<<endl;
//         return ;
//     }

//     // Processing
//     src++;

//     reachHome(src, dest);
// }

// int main(){
//     int dest = 10;
//     int src = 1;

//     reachHome(src, dest);

//     return 0;
// }







// -------- Recursive Binary Search --------------

// bool isSorted(int *arr, int size){

//     // base case
//     if(size == 0 || size == 1){
//         return true;
//     }

//     // Processing
//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         bool remaining = isSorted(arr+1, size-1);
//         return remaining;
//     }
// }

// int main(){
//     int arr[5] = {2, 4, 6, 10, 9};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if(ans == true){
//         cout<<"array is sorted";
//     }
//     else{
//         cout<<"array is not sorted";
//     }

//     return 0;
// }






// ----------- Recursion Array Sum ------------

// int recursiveSum(int arr[], int size){
//     // Base case
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }

//     // recursive relation
//     int remainingPart = recursiveSum(arr+1, size-1);

//     // Processing
//     int sum = arr[0] + remainingPart;

//     return sum;
// }

// int main(){
//     int arr[5] = {2, 4, 6, 8, 10};
//     int size = 5;

//     int ans = recursiveSum(arr, size);

//     cout<<"Sum is : "<<ans;

//     return 0;
// }







//----------------- Recursive linear search ------------------

//  bool LinearSearch(int *arr, int size, int key){

//     // base case
//     if(size == 0){
//         return false;
//     }

//     // Processing
//     if(arr[0] == key){
//         return true;
//     }
//     else{
//         bool remaining = LinearSearch(arr+1, size-1, key);
//         return remaining;
//     }
// }

// int main(){
//     int arr[5] = {2, 4, 6, 10, 9};
//     int size = 5;
//     int key = 10;

//     bool ans = LinearSearch(arr, size, key);

//     if(ans == true){
//         cout<<"Present";
//     }
//     else{
//         cout<<"absent";
//     }

//     return 0;
// }







// ---------------- Recursive binary search ------------------

// bool BinarySearch(int arr[], int s, int e, int key){
//     // Base case
//     if(s>e){
//         return false;
//     }

//     int mid = s + (e-s)/2;
//     if(arr[mid] == key){
//         return true;
//     }
 
//     if(arr[mid] < key){
//         return BinarySearch(arr, mid+1, e, key);
//     }
//     else{
//         return BinarySearch(arr, s, mid-1, key);
//     }
// }

// int main(){
//     int arr[6] = {2, 4, 6, 8, 10, 12};
//     int size = 6;
//     int key = 150;

//     cout<<BinarySearch(arr, 0, 5, key);

//     return 0;
// }







// ------------- Reverse string by recusion -------------

// void reverse(string &str, int start, int end){
//     // base case
//     if(start > end){
//         return ;
//     }

//     swap(str[start], str[end]);
//     start++;
//     end--;

//     reverse(str, start, end);
// }

// int main(){
//     string name = "babbar";

//     reverse(name, 0, name.length()-1);
    
//     cout<<name;

//     return 0;
// }






// -------------------- Check Palindrome by recursion --------------

// bool checkPalindrome(string s, int i, int j){
//     // base case
//     if(i>j){
//         return true;
//     }

//     if(s[i] != s[j]){
//         return false;
//     }
//     else{
//         return checkPalindrome(s, i+1, j-1);
//     }
// }

// int main(){
//     string name = "aabbaa";

//     bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

//     if(isPalindrome){
//         cout<<"It is a palindrome";
//     }
//     else{
//         cout<<"It is not a palindrome";
//     }

//     return 0;
// }








// -------------- Calculating Power by recursion ------------

// int Power(int a, int b){
//     // base case
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     // Recursive call
//     int ans = Power(a, b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }
// }

// int main(){
//     int a, b;
//     cin>>a>>b;

//     int ans = Power(a, b);
//     cout<<"The answer is : "<<ans;

//     return 0;
// }













// --------------- Bubble sort by recursion --------------

// void bubbleSort(int *arr, int n){
//     // 
//     if(n==0 || n==1){
//         return ;
//     }

//     for(int i=0; i<n-1; i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }

//     bubbleSort(arr, n-1);
// }


// int main(){
//     int arr[5] = {2, 5, 1, 6, 9};

//     bubbleSort(arr, 5);

//     for(int i=0; i<5; i++){
//         cout<<arr[i];
//     }

//     return 0;
// }







// --------------- Merge Sort using Recursion ------------------------

// void mergeSort(int *arr, int s, int e){
    
// }

// int main(){
//     int arr[5] = {2, 5, 1, 6, 9} ;
//     int n = 5;

//     mergeSort(arr, 0, n-1);


//     return 0;
// }





// ------------------ Quick sort  using recursion ----------

// int partition(int arr[], int s, int e){
//     int pivot = arr[s];
//     int cnt = 0;

//     for(int i=s+1; i<=e; i++){
//         if(arr[i] <= pivot){
//             cnt++;
//         }
//     }

//     // Placing pivot at right 
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]);

//     // pivot sahi jagah chale jaa chuka hai ab left and right part ko sambhalna hai
//     int i = s;
//     int j = e;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i] < pivotIndex){
//             i++;
//         }
//         while(arr[j] > pivotIndex){
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e){

//     // base case
//     if(s >= e){
//         return ;
//     }

//     // partition
//     int p = partition(arr, s, e);

//     // Left sorting
//     quickSort(arr, s, p-1);

//     // Right sorting
//     quickSort(arr, p+1, e);
// }

// int main(){

//     int arr[6] = {2, 4, 1, 6, 9, 9};
//     int n = 6;

//     quickSort(arr, 0, n-1);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }