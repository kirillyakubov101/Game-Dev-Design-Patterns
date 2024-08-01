#pragma once
#include <memory>
#include "Subject.h"

class Observer : public ISubscriber
{
	
public:
	static int id;
	int currentId;

	Observer()
	{
		id++;
		currentId = id;
	}

	void TryToSub()
	{
		std::weak_ptr<ISubscriber> selfWeak = shared_from_this();
		Subject::SubscribeToSubject(selfWeak);
	}

private:

	// Inherited via ISubscriber
	void OnEvent() override
	{
		std::cout << currentId << " Called event\n";
	}


	friend class Subject;
};
