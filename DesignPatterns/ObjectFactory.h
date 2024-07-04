#pragma once

#include <memory>
//Factory Design Pattern
class ObjectFactory
{
public:
	template<class T,typename... Args>
	inline std::shared_ptr<T> CreateObject(Args&&... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
};
