#pragma once
#include <memory>
#include <mutex>

namespace stellar {
  
template <typename T>
class Singleton {
 public:    
    static T *Instance() {
        static std::once_flag flag;
        std::call_once(flag, [] {
           instance_.reset(new T);
        });
          
        return instance_.get();
    } 
      
protected:
    Singleton() = default;
    ~Singleton() = default;
    
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;    
private:
    static std::shared_ptr<T> instance_;
};

template<typename T>
std::shared_ptr<T> Singleton<T>::instance_;
}

