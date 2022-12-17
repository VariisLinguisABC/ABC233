#include <iostream>

int main(){
  int sticked;
  int required;
  int total_amount_of_stamps;
  int price_of_10stamp;
  int additional_number_of_sheets;

  std::cin >> sticked >> required;
  total_amount_of_stamps = sticked;
  price_of_10stamp = 10;
  additional_number_of_sheets = 0;

  while (total_amount_of_stamps<required){
    total_amount_of_stamps+=price_of_10stamp;
    additional_number_of_sheets++;
  }

  std::cout<<additional_number_of_sheets<<std::endl;

  return 0;
}
