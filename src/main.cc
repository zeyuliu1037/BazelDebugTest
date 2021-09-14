#include <iostream>

void test(){
}

int main(){
  std::cout << "begin the test" << std::endl;
  test();
  for(int i = 0; i < 10; ++i){
    std::cout << i << std::endl;
  }

  std::cout << "end of the test" << std::endl;
  return 1;
}
