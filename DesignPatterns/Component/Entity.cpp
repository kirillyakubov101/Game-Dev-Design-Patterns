#include "Entity.h"
#include "Component.h"

void IEntity::DetachComponent(IComponent* component)
{

}

void IEntity::Destroy()
{
	if (m_ListOfComponents.size() > 0)
	{
		for (const auto& ele : m_ListOfComponents)
		{
			ele->OnDetach();
		}
	}

	m_ListOfComponents.clear();
}


