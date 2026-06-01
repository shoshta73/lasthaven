#ifndef LASTHAVEN_SRC_PLATFORM_LINUX_WINDOW_SYSTEM_HXX
#define LASTHAVEN_SRC_PLATFORM_LINUX_WINDOW_SYSTEM_HXX

#include "lasthaven/window_system.hxx"

namespace lasthaven {

class LinuxWindowSystem : public WindowSystem {
 public:
  LinuxWindowSystem() = default;
  LinuxWindowSystem(const LinuxWindowSystem &) = delete;
  auto operator=(const LinuxWindowSystem &) -> LinuxWindowSystem &;
  LinuxWindowSystem(LinuxWindowSystem &&) noexcept = delete;
  auto operator=(LinuxWindowSystem &&) noexcept -> LinuxWindowSystem &;
  ~LinuxWindowSystem() override = default;
};

}  // namespace lasthaven

#endif  // LASTHAVEN_SRC_PLATFORM_LINUX_WINDOW_SYSTEM_HXX
