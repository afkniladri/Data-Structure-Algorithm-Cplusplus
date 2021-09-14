#include <iostream>
using namespace std;

class Array{
    public:
        int *A;
        int size;
        int length;
};

void Display(class Array arr){
    cout<<endl<<"Elements in the array are : "<<endl;
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}

void Delete(class Array *arr,int index){
    for(int i=index; i>arr->length; i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1]=0;
    arr->length--;
}

int main(){
    Array arr;
    cout<<"Enter size of an array"<<endl;
    cin>>arr.size;
    
    arr.A = new int[arr.size];
    
    cout<<"Enter the actual length"<<endl;
    cin>>arr.length;

    cout<<"Enter the elements for the array"<<endl;
    for(int i=0; i<arr.length; i++){
        cin>>arr.A[i];
    }

    Delete(&arr,5);

    Display(arr);

    return 0;
}