#include "lasthaven/application.hxx"

#include <exception>
#include <iostream>

auto main() -> int {
  using namespace lasthaven;
  try {
    auto app = Application({.name{"LastHaven"}});
  } catch (std::exception &e) {
    std::cerr << "Caught exception: " << e.what() << '\n';
    return 1;
  }
  return 0;
}
