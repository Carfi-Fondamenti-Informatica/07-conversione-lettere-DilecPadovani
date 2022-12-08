#include <iostream>
#include "lib.h"
using namespace std;




int main(){

  char n ; 
  cin >> n; 

  if (is_letter(n)) {
    cout << convert(n);
  } else {
    cout << "errore"; 
  }

  return 0;
}
