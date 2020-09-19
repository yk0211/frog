#pragma once

namespace stellar {
class Noncopyable {
protected:
  Noncopyable() = default;
  ~Noncopyable() = default;
private:
  Noncopyable(const Noncopyable&) = delete;
  Noncopyable& operator=(const Noncopyable&) = delete;        
};
}
