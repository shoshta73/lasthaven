#ifndef LASTHAVEN_INCLUDE_LASTHAVEN_WINDOW_SYSTEM_HXX
#define LASTHAVEN_INCLUDE_LASTHAVEN_WINDOW_SYSTEM_HXX

namespace lasthaven {

class WindowSystem {
 public:
  WindowSystem() = default;
  WindowSystem(const WindowSystem &) = delete;
  auto operator=(const WindowSystem &) -> WindowSystem &;
  WindowSystem(WindowSystem &&) noexcept = delete;
  auto operator=(WindowSystem &&) noexcept -> WindowSystem &;
  virtual ~WindowSystem() = default;

  static auto create() -> WindowSystem *;
};

};  // namespace lasthaven

#endif  // LASTHAVEN_INCLUDE_LASTHAVEN_WINDOW_SYSTEM_HXX
