#include "HealthComponent.h"
#include <iostream>

int HealthComponent::id = 0;

HealthComponent::HealthComponent()
{
	this->id++;
}

void HealthComponent::OnAttach(const IEntity* owner)
{
	this->Owner = Owner;
	std::cout << "HealthComponent was attached\n";
}

void HealthComponent::OnDetach()
{
	std::cout << "HealthComponent was detached\n";
}

void HealthComponent::OnBeginPlay()
{
	std::cout << "HealthComponent OnBeginPlay\n";
}

HealthComponent::~HealthComponent()
{
	std::cout << "HealthComponent was destroyed\n";
}

void HealthComponent::PrintName()
{
	std::cout << "HealthComponent id " << id << "\n";
}
