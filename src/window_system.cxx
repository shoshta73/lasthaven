#include "lasthaven/window_system.hxx"

#include "platform/linux/window_system.hxx"

namespace lasthaven {

auto WindowSystem::create() -> WindowSystem * {
#ifdef __linux__
  return LinuxWindowSystem::create();
#else  // ^^^ ___linux___ ^^^ || vvv !__linux__
#error "Unsuported Platform"
#endif
}

}  // namespace lasthaven
