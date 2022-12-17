#include <iostream>

namespace IzerMath {
  int round_up(double x){
   if((int)x > x){
    return (int)x + 1;
   }else{
     return (int)x;
   }
  }
}

int main () {
  int sticked;
  int required;
  
  std::cin >> sticked >> required;


  if(sticked >= required){
    std::cout<<0<<std::endl;
  }
  else{
    int additional;
    additional = IzerMath::round_up((double)(required - sticked)/(double)10);
    std::cout<<additional<<std::endl;
  }
  return 0;
}
