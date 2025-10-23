#include <iostream>
#include <string>
#include <cstdlib>
/*#include <algorithm>
#include <chrono>

#include<vector>

using namespace std::chrono;*/

using namespace std;
#include "sorting.h"

int main(int argc, char **argv) {
  int i, j, n = argc-2;
  int *a;
  if(argc < 3){
        cerr<<"Usage: "<<argv[0]<<" <sortType> <numbers...>"<< endl;
        return 1;
    }//the pointer will not point to NULL when there's only 1 argc ex. ./sort

  string sortType = argv[1];
  a=new int[n];//pointer

  for(i = 0; i<n; i++){
    a[i] = atoi(argv[i+2]);
  }

  cout<<"Before: ";
  display(a,n);
  if(sortType=="insertion") insertSort(a,n);
  else if(sortType=="bubble") bubbleSort(a,n);
  else if(sortType=="selection") selectSort(a,n);
  else if(sortType=="heap") heapSort(a,n);

  display(a,n);
  //function for calculating for each algorithm
  /*vector<int> values(10000);
    auto f = []() -> int { return rand() % 10000; };
    generate(values.begin(), values.end(), f);

    auto start = high_resolution_clock::now();
    sort(values.begin(), values.end());
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;*/
  
  delete[]a;
  return 0; 
}


