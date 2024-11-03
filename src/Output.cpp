#include <iostream>

#include "Output.hpp"

namespace subspace3 {
void Output::writeString(std::string str) {
  std::cout << "SP3: " << str << std::endl;
}
}  // namespace subspace3