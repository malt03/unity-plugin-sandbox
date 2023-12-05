#include <iostream>

extern "C" void say_hello()
{
  std::cout << "Hello World from Plugin!" << std::endl;
}
