#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "MQTT-Based Industrial IoT Gateway",
  "Yocto-generated gateway image that polls serial telemetry from Modbus or CAN simulation, parses frames, and publishes cloud updates over MQTT/TLS.",
  "Industrial protocol bridging, hardened Linux image ownership, secure MQTT publishing, and cloud-ready telemetry flow.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "Yocto",
    "MQTT",
    "TLS",
    "Modbus",
    "CAN",
    "Serial telemetry"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
