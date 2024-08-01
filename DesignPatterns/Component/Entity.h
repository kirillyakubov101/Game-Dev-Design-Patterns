#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "Component.h"

class IEntity
{
public:

	template <typename comp, typename... Args>
	void AttachComponent(Args&&...args)
	{
		std::unique_ptr<comp> temp = std::make_unique<comp>(std::forward<Args>(args)...);
		temp->OnAttach(this);
		m_ListOfComponents.push_back(std::move(temp));
	}

	virtual void DetachComponent(IComponent* component);

	virtual void Destroy();

	virtual ~IEntity()
	{
		Destroy();
	}

	template<typename ComponentClass>
	ComponentClass* GetComponent()
	{
		if (m_ListOfComponents.size() == 0) { return nullptr; }

		for (const auto& ele : m_ListOfComponents)
		{
			if (auto comp = dynamic_cast<ComponentClass*>(ele.get()))
			{
				return comp;
			}
		}

		return nullptr;
	}
	
	virtual void PrintEntityName() = 0;

protected:



private:
	std::vector<std::unique_ptr<IComponent>> m_ListOfComponents;
};