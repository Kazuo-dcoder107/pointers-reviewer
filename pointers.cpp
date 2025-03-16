#include<iostream>
using namespace std;

int main(){
    int arr []={10, 20, 30, 40, 50};

    int *ptr = arr+4;
for(int i = 4; i>=0; i--){
    cout<<*ptr<<" ";
    ptr--;
}
return 0;
}