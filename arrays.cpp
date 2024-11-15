#include <iostream>
usin namespace std
int main(){
int a;
int b = 10000;
cout << "элементов в массиве: ";
cin >> a;
int *arr = new int[a];

for  (int i = 0; i < a, i++){
    cout << "задайте число массива" << i << ": ";
    cin >> arr[i]
    if(b > arr[i]){
        b = arr[i]
    }
}



}