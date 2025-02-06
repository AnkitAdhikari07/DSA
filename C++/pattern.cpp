#include<iostream>
#include<algorithm>
using namespace std;

void Pattern7(int n){
    for(int i=0; i<n; i++){
        //Spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        //Star
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }

        // Spaces
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void Pattern8(int n){
    for(int i=0; i<n; i++){
        // Spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        // Star
        for(int k=0; k<2*n-(2*i+1); k++){
            cout<<"*";
        }

        // Spaces
        for(int l=0; l<i; l++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void Pattern10(int n){
    for(int i=1; i<2*n-1; i++){
        int start = i;
        if(i > n){
            start = 2*n-i;
        }
        for(int j=1; j<=start; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }

        cout<<endl;
    }
}

void Pattern12(int n){
    for(int i=1; i<=n; i++){
        // Number
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        // Space
        for(int k=1; k<=2*n - 2*i; k++){
            cout<<" ";
        }

        // Numbers
        for(int l=i; l>=1; l--){
            cout<<l;
        }

        cout<<endl;
    }
}

void Pattern13(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num;
            num+=1;
        }

        cout<<endl;
    }
}

void Pattern14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A' + i; j++){
            cout<<j;
        }

        cout<<endl;
    }
}

void Pattern15(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+(n-i-1); j++){
            cout<<j;
        }

        cout<<endl;
    }
}

void Pattern16(int n){
    for(int i=0; i<4; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<<ch;
        }

        cout<<endl;
    }
}

void Pattern17(int n){
    for(int i=0; i<n; i++){
        // Spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        // alphabet
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int k=1; k<=2*i + 1; k++){
            cout<<ch;
            if(k <= breakPoint){
                ch++;
            }
            else{
                ch--;
            }
        }


        // Spaces
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void Pattern18(int n){
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void Pattern19(int n){
    int spaces = 0;
    for(int i=0; i<n; i++){
        // Star
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }

        // Spaces
        for(int k=0; k<spaces; k++){
            cout<<" ";
        }

        // Star
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }

        spaces = spaces+2;
        cout<<endl;
    }

    spaces = 8;
      for(int i=1; i<=n; i++){
        // Star
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        // Spaces
        for(int k=0; k<spaces; k++){
            cout<<" ";
        }

        // Star
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        spaces = spaces-2;
        cout<<endl;
    }
}

void Pattern20(int n){
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int star;

        if(i<=n){
            star = i;
        }
        else{
            star = 2*n-i;
        }
        
        // star
        for(int j=1; j<=star; j++){
            cout<<"*";
        }

        // Space
        for(int k=1; k<=spaces; k++){
            cout<<" ";
        }

        // Star
        for(int j=1; j<=star; j++){
            cout<<"*";
        }

        cout<<endl;

        if(i<n){
            spaces -=2;
        }
        else{
            spaces+=2;
        }
    }
}

void Pattern21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void Pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout<<(n - min({top, left, right, bottom}));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;

    Pattern22(n);

    return 0;
}