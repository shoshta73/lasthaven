#ifndef LASTHAVEN_INCLUDE_LASTHAVEN_APPLICATION_HXX
#define LASTHAVEN_INCLUDE_LASTHAVEN_APPLICATION_HXX

#include <string>
#include <string_view>

namespace lasthaven {

class Application {
 public:
  struct CreateInfo {
    std::string_view name;
  };

  explicit Application(const CreateInfo &create_info);

  Application(const Application &) = delete;
  auto operator=(const Application &) -> Application & = delete;
  Application(Application &&) noexcept = delete;
  auto operator=(Application &&) noexcept = delete;

  ~Application() = default;

 private:
  std::string name_;
};

}  // namespace lasthaven

#endif  // LASTHAVEN_INCLUDE_LASTHAVEN_APPLICATION_HXX
