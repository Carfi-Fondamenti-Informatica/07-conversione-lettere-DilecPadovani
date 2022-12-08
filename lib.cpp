#include "lib.h"

bool is_letter(char letter) {

if ( letter >= 65 && letter<= 90 ||    letter >=97   && letter<= 122 ) {
  return true; 
}
return false;

}

char convert(char letter){
  if ( letter >= 65 && letter<= 90) {

  return letter + 32; 
} 
if (  letter >= 97   && letter <= 122 )
 return letter - 32; 

}