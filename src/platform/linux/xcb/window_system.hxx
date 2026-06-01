#ifndef LASTHAVEN_SRC_PLATFORM_XCB_WINDOW_SYSTEM_HXX
#define LASTHAVEN_SRC_PLATFORM_XCB_WINDOW_SYSTEM_HXX

#include "platform/linux/window_system.hxx"

namespace lasthaven {

class LinuxXCBWindowSystem final : public LinuxWindowSystem {
 public:
  LinuxXCBWindowSystem() = default;
  LinuxXCBWindowSystem(const LinuxXCBWindowSystem &) = delete;
  auto operator=(const LinuxXCBWindowSystem &) -> LinuxXCBWindowSystem &;
  LinuxXCBWindowSystem(LinuxXCBWindowSystem &&) noexcept = delete;
  auto operator=(LinuxXCBWindowSystem &&) noexcept -> LinuxXCBWindowSystem &;
  ~LinuxXCBWindowSystem() override = default;
};

};  // namespace lasthaven

#endif  // LASTHAVEN_SRC_PLATFORM_XCB_WINDOW_SYSTEM_HXX
