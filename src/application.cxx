#include "lasthaven/application.hxx"

#include "lasthaven/window_system.hxx"

#include <stdexcept>

namespace lasthaven {

Application::Application(const CreateInfo &create_info) {
  if (create_info.name.empty()) {
    throw std::invalid_argument("Application name must not be empty");
  }

  name_ = create_info.name;
  window_system_ = new WindowSystem();  // NOLINT(cppcoreguidelines-owning-memory): Application owns the window system
}

Application::~Application() { delete window_system_; }

}  // namespace lasthaven
