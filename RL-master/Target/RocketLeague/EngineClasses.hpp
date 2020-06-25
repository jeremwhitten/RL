#pragma once

#include <set>
#include <string>
#include <windows.h>

struct FPointer
{
	uintptr_t Dummy;
};


struct FQWord
{
	int32_t A;
	int32_t B;
};

struct FName
{
	int32_t Index;
	int32_t Number;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	size_t Num() const
	{
		return Count;
	};

	T& operator[](size_t i)
	{
		return Data[i];
	};

	const T& operator[](size_t i) const
	{
		return Data[i];
	};

	bool IsValidIndex(size_t i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FString : public TArray<wchar_t>
{
	std::string ToString() const
	{
		int size = WideCharToMultiByte(CP_UTF8, 0, Data, Count - 1, nullptr, 0, nullptr, nullptr);
		std::string str(size, 0);
		WideCharToMultiByte(CP_UTF8, 0, Data, Count - 1, &str[0], size, nullptr, nullptr);
		return str;
	}
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	UObject* GetObject() const
	{
		return ObjectPointer;
	}

	UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FScriptDelegate
{
	unsigned char UnknownData[0x10];
};



class UObject
{
public:
	void*    VTableObject;
	char     pad_0008[0x30];
	int32_t  ObjectInternalInteger;
	int32_t  NetIndex;
	UObject* Outer;
	FName    Name;
	UObject* Inner;
	UObject* ObjectArchetype;
	UObject*  Class;
};


class UField : public UObject
{
public:
	UField*				Next;
	char				pad_0008[0x8];
};

class UEnum : public UField
{
public:
	TArray<FName>		Names;
};

class UConst : public UField
{
public:
	FString				Value;
};

class UStruct : public UField
{
public:
	char    pad_0000[0x10];
	UField* SuperField;
	UField* Children;
	int32_t PropertySize;
	char    pad_0094[0x9c];
};

class UScriptStruct : public UStruct
{
public:
	char pad_0000[0x28];
};

class UFunction : public UStruct
{

public:

int32_t FunctionFlags;
  char    pad_0134[0x8];
  FName   FriendlyName;
  int16_t NumParams;
  int16_t ParamSize;
  int32_t ReturnValueOffset;
  char    pad_014C[0x8];
  void*   Function;
  class UClass;

};

class UState : public UStruct
{
public:
	char pad_0000[0x60];
};

class UClass : public UState
{
public:
	char pad_0000[0x228];
};

class UProperty : public UField
{
public:

int32_t ArrayDim;
  int32_t ElementSize;
  FQWord  PropertyFlags;
  char    pad_0080[0x10];
  int32_t PropertySize;
  char    pad_0094[0x4];
  int32_t Offset;
  char    pad_009C[0x2c];

};

class UByteProperty : public UProperty
{
public:
	UEnum*			Enum;
};



class UBoolProperty : public UProperty
{
public:
	int64_t BitMask;
};

class UObjectProperty : public UProperty
{
public:
	UClass* PropertyClass;
	char    pad_00D0[0x8];
};



class UClassProperty : public UObjectProperty
{
public:
	UClass* MetaClass;
	char    pad_00D0[0x10];
};

class UInterfaceProperty : public UProperty
{
public:
	UClass*			InterfaceClass;
};





class UStructProperty : public UProperty
{
public:
	UStruct*		Struct;
};



class UArrayProperty : public UProperty
{
public:
	UProperty*		Inner;
};

class UMapProperty : public UProperty
{
public:
	UProperty*		KeyProp;
	UProperty*		ValueProp;
};


