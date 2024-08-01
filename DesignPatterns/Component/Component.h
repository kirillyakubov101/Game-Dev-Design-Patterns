#pragma once
#include <memory>

class IEntity;

class IComponent
{
public:
	virtual void OnAttach(const IEntity* owner) = 0;
	virtual void OnDetach() = 0;
	virtual void OnBeginPlay() = 0;
	virtual void PrintName() = 0;

	virtual ~IComponent() = default;

protected:
	std::weak_ptr<IEntity> Owner;
};