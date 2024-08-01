#pragma once
#include "Component.h"

class HealthComponent : public IComponent
{
public:
	HealthComponent();
	// Inherited via IComponent
	void OnAttach(const IEntity* owner) override;
	void OnDetach() override;
	void OnBeginPlay() override;

	virtual ~HealthComponent() override;

	// Inherited via IComponent
	void PrintName() override;

private:
	static int id;
};

