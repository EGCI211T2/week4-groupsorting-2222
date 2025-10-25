#include <iostream>
#include <iomanip> // add this

void display(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << std::setw(5) << a[i];
    }
    std::cout <<endl;
}

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
}

void selectSort(int a[], int n){ 
  int i, j, mi; 
  for(j=0;j<n;j++){
    mi=j;
    for(i=j+1;i<n;i++){
      if(a[mi]>a[i]){
        mi=i;
      }
    }
    swap(a[j],a[mi]);
    display(a,n);
  }
} 

void insertSort(int a[],int n){
  int i, j, value;
  for(j=1; j<n; j++){
    value = a[j];
    for(i=j-1;i>=0;i--){
      if(value<a[i]) a[i+1] = a[i];
      else break;
    }
    a[i+1] = value;
    display(a,n);
    cout<<"----------"<<endl;
  }
}

void bubbleSort(int a[],int n){
  int i,j;
  int sorted;
  for(j=n-1;j>0;j--){
    sorted=1;
    for(i=0;i<j;i++){
      if(a[i]>a[i+1]) {
        swap(a[i], a[i+1]);
        sorted=0;
      }
      display(a,n);
    }
    cout<<"-------------"<<endl;
  }
}

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {largest = left;}
    if (right < n && a[right] > a[largest]) {largest = right;}
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n){
  cout<<"Build a max heap: "<<endl;
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
        display(a,n);
    }
    cout<<"-------------"<<endl;

    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
        display(a,n);
    }
    
}