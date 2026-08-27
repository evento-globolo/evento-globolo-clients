#pragma once
#include <optional>
#include <string>
#include <utility>
namespace evento_globolo {
class EventoGloboloClient final {
 public:
  explicit EventoGloboloClient(std::string base_url, std::optional<std::string> bearer_token = std::nullopt)
      : base_url_(std::move(base_url)), bearer_token_(std::move(bearer_token)) {}
  [[nodiscard]] bool health() const noexcept { return !base_url_.empty(); }
 private:
  std::string base_url_;
  std::optional<std::string> bearer_token_;
};
}
