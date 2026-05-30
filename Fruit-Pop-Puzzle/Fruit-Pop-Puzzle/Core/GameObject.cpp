#include "GameObject.h"
#include "Components/Transform.h"

namespace EHEngine
{
	GameObject::GameObject(Scene* scene) : m_scene(scene)
	{
		AddComponent<Transform>();
	}
}