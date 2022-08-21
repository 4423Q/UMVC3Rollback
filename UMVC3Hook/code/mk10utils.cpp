#include "..\pch.h"
#include "mk10utils.h"
#include "..\sigscan.h"

int64 GetMKXEntryPoint()
{
	static __int64 addr = reinterpret_cast<__int64>(GetModuleHandle(nullptr));
	return addr;
}

unsigned long long start = 0;
unsigned long long _adjust(unsigned long long addr) {
	if (start == 0) {
		start = sigscan::get().start;
	}
	return start + addr;
}
int64 _addr(__int64 addr)
{
	return GetMKXEntryPoint() - 0x140000000 + addr;
}

unsigned long long baseaddr(unsigned long long addr)
{
	return (unsigned long long)GetMKXEntryPoint() + addr;
}
