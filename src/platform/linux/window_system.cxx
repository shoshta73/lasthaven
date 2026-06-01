#include "platform/linux/window_system.hxx"

#include "platform/linux/xcb/window_system.hxx"

namespace lasthaven {

auto LinuxWindowSystem::create() -> LinuxWindowSystem * {
  return new LinuxXCBWindowSystem();  // NOLINT(cppcoreguidelines-owning-memory): Application owns the window system
}

}  // namespace lasthaven
