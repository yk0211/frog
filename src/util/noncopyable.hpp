#ifndef _NONCOPYABLE_HPP_
#define _NONCOPYABLE_HPP_

namespace frog {

class NonCopyable {
 protected:
	NonCopyable() = default;
	~NonCopyable() = default;
 private:
	NonCopyable(const NonCopyable&) = delete;
	NonCopyable& operator=(const NonCopyable&) = delete;
};

}

#endif
