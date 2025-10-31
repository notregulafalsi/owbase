#pragma once

#include <Windows.h>
#include <vector>
#include <string>

namespace SonyDriverHelper {

	class api {
	public:
		static void Init();

		static void MouseMove(float x, float y);

		static bool GetKey(int id);
	};
}

LPCSTR TargetProcess = "Overwatch.exe";

LPCSTR MenuName = "OW2 External";

std::vector<uintptr_t> Entity{};

int index = -1;

/********** Menu **********/
int Tab = 0, SelectedKey = 0;

bool ShowMenu = true, CreateConsole = true;

/********** Cheats **********/
//In Game
bool isKeepUpdated = true, isTeam;

//Esp
bool isCrossHairShow = false, isChangeTeam = true, isEspLines = false, isEspBox = true, isEspHead = false, isEspFPS = false, isEspwatermark = true, isEspfovshow = true, fastoverlay = false;

const char* BoxTypeName = "Box Type";
const char* LineTypeName = "Default";

int CrossHairSize = 40, CrossHairThick = 2, LineType = 1, BoxType = 1;

//Aimbot
int FovCircle = 100, MSpeed = 3, AimSpeed = 5, Smoothnessx = 10, Smoothnessy = 10, Bone = 1;

const char* BoneName = "Head";

bool isAimbot = false, isRandomizer = false, isBoneid = false, isTracking = false, isFlickBot = false, isTriggerBot = false;

namespace Offsets {
	BYTE AOB[] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x02\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00";
	std::string MASK = "??xx??xx?xxx?xxxxxxxxxxxxxxx???";

	enum Offsets {
		EntitySize = 0x180000,

		ViewMatrix = 0x3D5EED8,
		ViewMatrix_Ptr = 0x7E0,

		Origin = 0x9C,
		Head = 0x8C,

		Alive = 0x1,
		Alive_Ret = 0x14,

		Team = 0x21,
		EnemyTeam = 0x8,
		OwnTeam = 0x10,
	};
}