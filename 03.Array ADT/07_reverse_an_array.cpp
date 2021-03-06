#include <iostream>
using namespace std;

class Array{
    public:
        int *A;
        int size;
        int length;
};

void Display(Array arr){
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}

void Swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void ReverseArray(Array *arr){
    int temp;
    for(int i=0, j=arr->length-1; i<j; i++, j--){
        Swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
    Array arr;
    cout<<"Enter size of array "<< endl;
    cin>>arr.size;
    arr.A = new int[arr.size];
    cout<<"Enter length of array "<< endl;
    cin>>arr.length;
    cout<<"Enter the values for the array : "<<endl;
    for(int i=0; i<arr.length; i++){
        cin>>arr.A[i];
    }

    ReverseArray(&arr);

    cout<<"Array after being reversed : "<<endl;
    Display(arr);

    return 0;
}