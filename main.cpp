#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
#include "sorting.h"

int main(int argc, char **argv) {
  int i, j, n = argc-2;
  int *a;

  string sortType = argv[1];
  a = new int[n];//pointer

  for(i = 0; i<n; i++){
    a[i] = atoi(argv[i+2]);
  }

  cout<<"Before: ";
  display(a,n);
  if(sortType=="insert") insertSort(a,n);
  else if(sortType=="bubble") bubbleSort(a,n);
  else if(sortType=="select") selectSort(a,n);
  else if(sortType=="heap") heapSort(a,n);

  display(a,n);

  delete[]a;
  return 0; 
}


