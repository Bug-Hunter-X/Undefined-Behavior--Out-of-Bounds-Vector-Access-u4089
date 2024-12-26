#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);

  try {
    vec.at(2) = 3; // Use at() for bounds checking
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  //Or ensure correct size before access
  vec.resize(3);
  vec[2] = 3; // Now this is safe

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
