#include <windows.h>

#include "PatternFinder.hpp"
#include "NamesStore.hpp"

#include "EngineClasses.hpp"

// This class contains the class which allows the generator access to global names list.

class FNameEntry
{
public:
	char    pad_0000[8];
	uint32_t Index;
	char    pad_000C[12];
	wchar_t WideName[1024];

	int32_t GetIndex() const
	{
		return Index;
	}

	const wchar_t* GetWideName() const
	{
		return WideName;
	}

	std::string GetName() const
	{
		const auto length = std::wcslen(WideName);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(WideName, WideName + length, '?', &str[0]);

		return str;
	}
};

TArray<FNameEntry*>* GlobalNames = nullptr;

bool NamesStore::Initialize()
{
	// TODO: Here you need to tell the class where the global names list is. You can use the function 'FindPattern()' to make this dynamic.

	GlobalNames = reinterpret_cast<decltype(GlobalNames)>(0x7FF67EB428B0);

	return true;
}

void* NamesStore::GetAddress()
{
	return GlobalNames;
}

int64_t NamesStore::GetNamesNum() const
{
	return GlobalNames->Num();
}

bool NamesStore::IsValid(int64_t id) const
{
	return GlobalNames->IsValidIndex(id) && (*GlobalNames)[id] != nullptr;
}

std::string NamesStore::GetById(int64_t id) const
{
	return (*GlobalNames)[id]->GetName();
}
