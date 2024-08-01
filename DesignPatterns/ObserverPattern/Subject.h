#pragma once
#include <vector>
#include <memory>
#include <iostream>

class ISubscriber: public std::enable_shared_from_this<ISubscriber>
{
	
	
public:
	virtual void OnEvent() = 0;
	virtual ~ISubscriber() = default;

private:
};

class Subject
{
public:
	static void SubscribeToSubject(std::weak_ptr<ISubscriber> newSub)
	{
		if (!newSub.expired())
		{
			m_Subscribers.push_back(newSub);
		}
	}

	static void Notify()
	{
		for (auto it = m_Subscribers.begin(); it != m_Subscribers.end();)
		{
			if (auto subscriber = it->lock()) 
			{
				subscriber->OnEvent();
				it++;
			}
			else 
			{
				it = m_Subscribers.erase(it);
			}
		}
	}

private:
	static std::vector<std::weak_ptr<ISubscriber>> m_Subscribers;
	Subject() = delete;
};

