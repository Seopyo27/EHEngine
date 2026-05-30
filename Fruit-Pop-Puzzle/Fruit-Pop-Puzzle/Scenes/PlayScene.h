#pragma once
#include "Core/Scene.h"
#include "Components/Transform.h"
#include "Components/SpriteRenderer.h"

namespace EHEngine
{
	class PlayScene : public Scene
	{
	public:
		PlayScene(std::string sceneName, ResourceManager* resourceManager, InputManager* inputManager) :
			Scene(sceneName, resourceManager, inputManager) {}

		void LoadData() override
		{
			// 보드오브젝트 생성 및 위치 조정
			GameObject* obj = CreateGameObject();
			obj->SetName("Board");
			Transform* transform = obj->GetComponent<Transform>();
			transform->SetWidth(800);
			transform->SetHeight(800);
			transform->SetPosition(400, 400);

			// 스프라이트 추가
			SpriteRenderer* sprite = obj->AddComponent<SpriteRenderer>();
			sprite->SetBitmapInfo(m_resourceManager->GetBitmapInfo("Board"));
			// 렌더링 순서 제일 먼저
			sprite->SetOrderInLayer(0);
		}

		void OnEnter() override
		{

		}

		void OnExit() override
		{

		}
	};
}

