#include "GameInstance.h"

namespace Soarks
{
	void GameInstance::BeginPlay() { }

	void GameInstance::Tick(float _deltaTime) { }

	void GameInstance::Render() { }

	void GameInstance::EndpPlay() { }

	GameInstance::GameInstance()
		: m_screen{ nullptr }
	{
	}

	GameInstance::~GameInstance()
	{
		m_screen = nullptr;
	}
}
