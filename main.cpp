#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
#include "sorting.h"

int main(int argc, char* argv[]) {
  int i, j, n = argc-2;
  int *a;

   string sortType = argv[1];
  a = new int[n];

  for(i = 0; i<n; i++){
    a[i] = atoi(argv[i+2]);
  }

  display(a,n);

  if(sortType == "insert"){
    insertion(a,n); 
  }

  display(a,n);

  delete[]a;
 return 0; 
}


