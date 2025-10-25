#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
#include "sorting.h"

int main(int argc, char **argv) {
  int i, j, n = argc-2;
  int *a;
  if(argc < 3)
      return 1;//the pointer will not point to NULL when there's only 1 argc ex. ./sort

  string sortType = argv[1];
  a=new int[n];//pointer

  for(i = 0; i<n; i++){
    a[i] = atoi(argv[i+2]);
  }

  //cout<<"Before: ";
 // display(a,n);
  if(sortType=="insertion") insertSort(a,n);
  else if(sortType=="bubble") bubbleSort(a,n);
  else if(sortType=="selection") selectSort(a,n);
  else if(sortType=="heap") heapSort(a,n);

  display(a,n);

  delete[]a;
  return 0; 
}


