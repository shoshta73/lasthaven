#include "lasthaven/application.hxx"

#include <stdexcept>

namespace lasthaven {

Application::Application(const CreateInfo &create_info) {
  if (create_info.name.empty()) {
    throw std::invalid_argument("Application name must not be empty");
  }

  name_ = create_info.name;
}

}  // namespace lasthaven
