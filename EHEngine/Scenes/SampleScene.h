#pragma once
#include "Core/Scene.h"

namespace EHEngine
{
	class SampleScene : public Scene
	{
	public:
		SampleScene(std::string sceneName, ResourceManager* resourceManager, InputManager* inputManager) :
			Scene(sceneName, resourceManager, inputManager) {}

		void LoadData() override;
		void OnEnter() override;
		void OnExit() override;
	};
}

