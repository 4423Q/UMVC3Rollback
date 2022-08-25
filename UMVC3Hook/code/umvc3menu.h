#pragma once
#include "umvc3.h"
class Trampoline;
class UMVC3Menu {
public:
	bool m_bIsActive;
	bool m_bIsFocused;
	bool m_bCustomCameraPos;
	bool m_bCustomCameraFOV;
	bool m_bCustomCameraRot;
	bool m_bFreeCam;

	int  m_nFreeCameraSpeed;
	int  m_nFreeCameraRotationSpeed;

	vector camPos;
	vector camRot;
	float  camFov;

	void Initialize();
	void PostInit();
	void Process();
	void Draw();
	void UpdateControls();
	bool GetActiveState();
	Trampoline* tramp=nullptr;
};

char* GetUMVC3HookVersion();
extern UMVC3Menu* TheMenu;

#include <climits>

template <typename T>
T swap_endian(T u)
{
	static_assert (CHAR_BIT == 8, "CHAR_BIT != 8");

	union
	{
		T u;
		unsigned char u8[sizeof(T)];
	} source, dest;

	source.u = u;

	for (size_t k = 0; k < sizeof(T); k++)
		dest.u8[k] = source.u8[sizeof(T) - k - 1];

	return dest.u;
};