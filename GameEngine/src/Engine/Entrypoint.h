#pragma once
#include "Application.h"

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

#endif // EN_PLATFORM_WINDOWS

int main(int argc, char** argv)
{
	auto app = Engine::CreateApplication();

}