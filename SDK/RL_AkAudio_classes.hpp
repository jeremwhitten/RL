#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x000C (0x00A8 - 0x009C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UAkEvent*                                    AmbientEvent;                                             // 0x00A0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0010 (0x0280 - 0x0270)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                            // 0x0270(0x0004)
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                             // 0x0270(0x0004) (Edit)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0270(0x0004) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UAkEvent*                                    PlayEvent;                                                // 0x0278(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkBusActor
// 0x0011 (0x0279 - 0x0268)
class AAkBusActor : public AActor
{
public:
	class UAkSoundSource*                              SoundSource;                                              // 0x0268(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       TargetBusName;                                            // 0x0270(0x0008)
	TEnumAsByte<EPinnedAxisType>                       PinnedAxis;                                               // 0x0278(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkBusActor");
		return ptr;
	}


	void RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<EBusEmitterType> BusType);
	void SetPinnedAxis(TEnumAsByte<EPinnedAxisType> AxisToPin);
};


// Class AkAudio.AkComponent
// 0x0017 (0x00B4 - 0x009D)
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00A0(0x0008) (Edit)
	class UAkEvent*                                    AutoPlayEvent;                                            // 0x00A8(0x0008)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                              // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.AkDevice
// 0x0058 (0x00B8 - 0x0060)
class UAkDevice : public UObject
{
public:
	struct FName                                       DynamicRangeSetting_Low_Master;                           // 0x0060(0x0008)
	struct FName                                       DynamicRangeSetting_Medium_Master;                        // 0x0068(0x0008)
	struct FName                                       DynamicRangeSetting_High_Master;                          // 0x0070(0x0008)
	struct FName                                       DynamicRangeSetting_Low_Gameplay;                         // 0x0078(0x0008)
	struct FName                                       DynamicRangeSetting_Medium_Gameplay;                      // 0x0080(0x0008)
	struct FName                                       DynamicRangeSetting_High_Gameplay;                        // 0x0088(0x0008)
	struct FName                                       MasterAudioBusName;                                       // 0x0090(0x0008)
	struct FName                                       GameplayAudioBusName;                                     // 0x0098(0x0008)
	struct FScriptDelegate                             __EventInitialized__Delegate;                             // 0x00A0(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDevice");
		return ptr;
	}


	void STATIC_SetBusEffect(const struct FName& BusName, const struct FName& EffectSetting, int EffectSlot);
	void STATIC_ResetSlapbackObjects();
	void STATIC_SetSoundEnvironment(class AActor* Actor, TEnumAsByte<EAkEnvironmentType> EnvironmentType);
	class UAkEnvironments* STATIC_GetEnvironments();
	void STATIC_NotifyWhenInitialized(const struct FScriptDelegate& Callback);
	void STATIC_ProfileStop();
	void STATIC_ProfileStart();
	void STATIC_PrintData();
	void STATIC_SetDynamicRange(TEnumAsByte<EAkDynamicRangeType> Type);
	void STATIC_SetOutputType(TEnumAsByte<EAkOutputType> Type);
	void STATIC_SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<EAkListenerSpacialization> Value);
	void STATIC_SetSplitScreenListenerEnabled(bool bEnable);
	void STATIC_SetSplitScreenListenerPosition(const struct FVector& Location);
	void STATIC_UpdateSecondaryOutputs();
	void STATIC_SetGlobalRTCP(const struct FName& Key, float Value);
	void STATIC_StopGlobalSound(class UAkSoundCue* Sound);
	void STATIC_PlayGlobalSound(class UAkSoundCue* Sound);
	void STATIC_SetState(const struct FName& InStateGroup, const struct FName& InState);
	void STATIC_SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value);
	void STATIC_SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value);
	void STATIC_StopAllSounds(class AActor* SourceActor);
	void STATIC_StopSound(class AActor* SourceActor, class UAkSoundCue* Sound);
	class UAkSoundSource* STATIC_PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	class UAkSoundSource* STATIC_GetSoundSource(class AActor* SourceActor, const struct FVector& Translation, const struct FRotator& Rotation);
	void EventInitialized();
};


// Class AkAudio.AkDialogueEvent
// 0x0010 (0x0070 - 0x0060)
class UAkDialogueEvent : public UObject
{
public:
	TArray<class UAkSwitch*>                           Arguments;                                                // 0x0060(0x0010) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDialogueEvent");
		return ptr;
	}

};


// Class AkAudio.AkEnvironments
// 0x002C (0x008C - 0x0060)
class UAkEnvironments : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;                     // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FAkEnvironment>                      LevelEnvironments;                                        // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FAkActorEnvironment>                 ActorEnvironments;                                        // 0x0078(0x0010) (NeedCtorLink)
	unsigned long                                      bLevelDirty : 1;                                          // 0x0088(0x0004)
	unsigned long                                      bActorEnvironmentDirty : 1;                               // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEnvironments");
		return ptr;
	}


	void RemoveActorEnvironment(class AActor* TargetActor, struct FString* EnvironmentID);
	void AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment* Environment);
	void AddLevelDefault(struct FAkEnvironment* Environment);
};


// Class AkAudio.AkEnvironmentVolume
// 0x0024 (0x02C8 - 0x02A4)
class AAkEnvironmentVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FAkEnvironment                              Environment;                                              // 0x02A8(0x0020) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEnvironmentVolume");
		return ptr;
	}

};


// Class AkAudio.AkMusicDevice
// 0x0030 (0x0090 - 0x0060)
class UAkMusicDevice : public UObject
{
public:
	struct FScriptDelegate                             __EventTrackStart__Delegate;                              // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventTrackEnd__Delegate;                                // 0x0078(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicDevice");
		return ptr;
	}


	void STATIC_SetRTCP(const struct FName& Key, float Value);
	void STATIC_StopPlayingID(int PlayingID);
	void STATIC_Stop(class UAkSoundCue* Sound);
	int STATIC_Play(class UAkSoundCue* Sound);
	void EventTrackEnd(int PlayingID);
	void EventTrackStart(int PlayingID, const struct FString& FileMarker);
};


// Class AkAudio.AkParamGroup
// 0x00C1 (0x015E - 0x009D)
class UAkParamGroup : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FPointer                                    VfTable_IISetParameter;                                   // 0x00A0(0x0008) (Const, Native, NoExport)
	struct FAkParamSet                                 StoredParameters;                                         // 0x00A8(0x00A0) (Const, Transient)
	TArray<class UAkSoundSource*>                      SoundSources;                                             // 0x0148(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	int                                                ControllerId;                                             // 0x0158(0x0004) (Transient)
	TEnumAsByte<EReflectionSendType>                   SendType;                                                 // 0x015C(0x0001) (Transient)
	TEnumAsByte<EAttenuationType>                      AttenuationType;                                          // 0x015D(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkParamGroup");
		return ptr;
	}


	void SetSendToSlapbacks(bool bSend);
	void SetControllerId(int InID);
	void EnableObjectAttenuation();
	void DisableObjectAttenuation();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void UpdateSoundSourceAttenuationScaling();
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues);
	void StopSound(class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
};


// Class AkAudio.AkPlaySoundComponent
// 0x00FB (0x0198 - 0x009D)
class UAkPlaySoundComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FPointer                                    VfTable_IISetParameter;                                   // 0x00A0(0x0008) (Const, Native, NoExport)
	class UAkSoundCue*                                 SoundCue;                                                 // 0x00A8(0x0008) (Edit)
	unsigned long                                      bAutoPlay : 1;                                            // 0x00B0(0x0004) (Edit)
	unsigned long                                      bKillSoundOnDetach : 1;                                   // 0x00B0(0x0004) (Edit)
	unsigned long                                      bWasAttached : 1;                                         // 0x00B0(0x0004) (Const, Transient)
	struct FVector                                     Translation;                                              // 0x00B4(0x000C) (Edit, Const)
	struct FRotator                                    Rotation;                                                 // 0x00C0(0x000C) (Edit, Const)
	float                                              ReFireDelay;                                              // 0x00CC(0x0004) (Edit)
	TEnumAsByte<EAkPlaySoundReceiver>                  Receiver;                                                 // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FName>                               RestartSwitches;                                          // 0x00D8(0x0010) (Edit, NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                              // 0x00E8(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	float                                              LastPlayTime;                                             // 0x00F0(0x0004) (Const, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FAkParamSet                                 StoredParameters;                                         // 0x00F8(0x00A0) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPlaySoundComponent");
		return ptr;
	}


	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	bool IsPlaying();
	void Stop();
	void Play();
};


// Class AkAudio.AkRevPhysicsSimulation
// 0x0050 (0x00B0 - 0x0060)
class UAkRevPhysicsSimulation : public UObject
{
public:
	float                                              EngineGearRatio;                                          // 0x0060(0x0004) (Edit)
	float                                              EngineFriction;                                           // 0x0064(0x0004) (Edit)
	float                                              GroundFriction;                                           // 0x0068(0x0004) (Edit)
	float                                              WindResistancePerVelocity;                                // 0x006C(0x0004) (Edit)
	float                                              UpShiftingRPM;                                            // 0x0070(0x0004) (Edit)
	float                                              DownShiftRPM;                                             // 0x0074(0x0004) (Edit)
	float                                              InfiniteGearRatioDecreaseAmount;                          // 0x0078(0x0004) (Edit)
	float                                              ThrottleInterpolationTime;                                // 0x007C(0x0004) (Edit)
	float                                              EngineTorque;                                             // 0x0080(0x0004) (Transient)
	float                                              BrakingForce;                                             // 0x0084(0x0004) (Transient)
	float                                              WindResistance;                                           // 0x0088(0x0004) (Transient)
	float                                              FrictionResistance;                                       // 0x008C(0x0004) (Transient)
	float                                              EngineResistance;                                         // 0x0090(0x0004) (Transient)
	float                                              NetForce;                                                 // 0x0094(0x0004) (Transient)
	struct FScriptDelegate                             __EventGearChange__Delegate;                              // 0x0098(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRevPhysicsSimulation");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	float STATIC_InterpGearRatio(int Gear, struct FAkRevSimUpdateParams* SimUpdate);
	float STATIC_GetGearRatio(struct FAkRevSimUpdateParams* SimUpdate);
	float CalcVelocity(float GearRatio, float RPM);
	float CalcRPM(float GearRatio, float Velocity);
	struct FAkRevSimFrame Step(float DeltaTime, struct FAkRevSimUpdateParams* Params);
	void EventGearChange(class UAkRevPhysicsSimulation* Simulation);
};


// Class AkAudio.AkRTPCDecayComponent
// 0x003F (0x00DC - 0x009D)
class UAkRTPCDecayComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FName                                       RTPC;                                                     // 0x00A0(0x0008) (Edit)
	float                                              GrowValue;                                                // 0x00A8(0x0004) (Edit)
	float                                              MaxValue;                                                 // 0x00AC(0x0004) (Edit)
	struct FInterpCurveFloat                           DecayPerSecond;                                           // 0x00B0(0x0018) (Edit, NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                              // 0x00C8(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	float                                              CurrentValue;                                             // 0x00D0(0x0004) (Const, Transient)
	float                                              LastAttachTime;                                           // 0x00D4(0x0004) (Const, Transient)
	unsigned long                                      bWasAttached : 1;                                         // 0x00D8(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRTPCDecayComponent");
		return ptr;
	}

};


// Class AkAudio.AkSoundCue
// 0x0028 (0x0088 - 0x0060)
class UAkSoundCue : public UObject
{
public:
	class UAkBank*                                     RequiredBank;                                             // 0x0060(0x0008) (Edit)
	struct FString                                     StartEvent;                                               // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     StopEvent;                                                // 0x0078(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundCue");
		return ptr;
	}

};


// Class AkAudio.AkSoundSource
// 0x00FB (0x0198 - 0x009D)
class UAkSoundSource : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00A0(0x000C) (Edit, Const)
	struct FRotator                                    Rotation;                                                 // 0x00AC(0x000C) (Edit, Const)
	unsigned long                                      bDetachOnComplete : 1;                                    // 0x00B8(0x0004) (Edit, Const)
	unsigned long                                      bRegistered : 1;                                          // 0x00B8(0x0004) (Const, Transient)
	unsigned long                                      bUpdateOrientation : 1;                                   // 0x00B8(0x0004) (Const, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FMatrix                                     CachedParentToWorld;                                      // 0x00C0(0x0040) (Const, Transient)
	struct FVector                                     WorldLocation;                                            // 0x0100(0x000C) (Const, Transient)
	struct FRotator                                    WorldRotation;                                            // 0x010C(0x000C) (Const, Transient)
	class UAkParamGroup*                               Params;                                                   // 0x0118(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	TArray<struct FActiveSound>                        ActiveSounds;                                             // 0x0120(0x0010) (Const, Transient, NeedCtorLink)
	TEnumAsByte<EAkEnvironmentType>                    EnvironmentType;                                          // 0x0130(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EAkCallbackType>>               CallbackTypes;                                            // 0x0138(0x0010) (NeedCtorLink)
	struct FPointer                                    SoundSourceId;                                            // 0x0148(0x0008) (Native, Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                                // 0x0150(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0150(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMarker__Delegate;                                  // 0x0168(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0168(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDuration__Delegate;                                // 0x0180(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0180(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundSource");
		return ptr;
	}


	void SetSubtitlesEnabled(bool bValue);
	void SetAttenuationScaling(TEnumAsByte<EAttenuationType> AttenuationType);
	void ForceUpdatePosition();
	void RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<EBusEmitterType> BusType);
	bool IsPlayingAny();
	bool IsPlaying(class UAkSoundCue* Sound);
	void StopAll();
	void Stop(class UAkSoundCue* Sound);
	int Play(class UAkSoundCue* Sound);
	void EventDuration(class UAkSoundSource* Source, int PlayingID, float DurationMS);
	void EventMarker(class UAkSoundSource* Source, int PlayingID, const struct FString& Marker);
	void EventFinished(class UAkSoundSource* Source, int PlayingID);
};


// Class AkAudio.AkSwitch
// 0x0000 (0x0060 - 0x0060)
class UAkSwitch : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitch");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x0014 (0x00D8 - 0x00C4)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                 // 0x00C8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0014 (0x00F8 - 0x00E4)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FString                                     Param;                                                    // 0x00E8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0064 - 0x0060)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkEnvironment
// 0x0021 (0x0181 - 0x0160)
class USeqAct_AkEnvironment : public USequenceAction
{
public:
	struct FAkEnvironment                              Environment;                                              // 0x0160(0x0020) (Edit, NeedCtorLink)
	TEnumAsByte<EAkEnvironmentTarget>                  Target;                                                   // 0x0180(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkEnvironment");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0014 (0x018C - 0x0178)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                                // 0x0178(0x0004) (Edit)
	unsigned long                                      bWaitingCallback : 1;                                     // 0x0178(0x0004) (Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	class UAkBank*                                     Bank;                                                     // 0x0180(0x0008) (Edit)
	int                                                Signal;                                                   // 0x0188(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPlayMusicWithCues
// 0x0018 (0x0190 - 0x0178)
class USeqAct_AkPlayMusicWithCues : public USeqAct_Latent
{
public:
	class UAkSoundCue*                                 SoundCue;                                                 // 0x0178(0x0008) (Edit)
	TArray<struct FMusicSyncEvent>                     MusicSyncEvents;                                          // 0x0180(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlayMusicWithCues");
		return ptr;
	}


	void TriggerEvents(const struct FString& CueName);
};


// Class AkAudio.SeqAct_AkPlaySound
// 0x000C (0x016C - 0x0160)
class USeqAct_AkPlaySound : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                                 // 0x0160(0x0008) (Edit)
	unsigned long                                      bBGMusic : 1;                                             // 0x0168(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlaySound");
		return ptr;
	}


	void ToggleSoundFor(class AActor* A, bool bPlay);
	void ToggleSound(bool bPlay);
	void Activated();
};


// Class AkAudio.SeqAct_AkPostEvent
// 0x001C (0x0194 - 0x0178)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	TArray<int>                                        PlayingIDs;                                               // 0x0178(0x0010) (Const, Transient, NeedCtorLink)
	class UAkSoundCue*                                 SoundCue;                                                 // 0x0188(0x0008) (Edit)
	unsigned long                                      bHasSubtitles : 1;                                        // 0x0190(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}


	void HandleSoundCueFinished(class UAkSoundSource* Source, int PlayingID);
};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0170 - 0x0160)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                                  // 0x0160(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0190 - 0x0178)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                                    // 0x0178(0x0010) (Edit, NeedCtorLink)
	float                                              Value;                                                    // 0x0188(0x0004) (Edit)
	unsigned long                                      Running : 1;                                              // 0x018C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0180 - 0x0160)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                               // 0x0160(0x0010) (Edit, NeedCtorLink)
	struct FString                                     State;                                                    // 0x0170(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0180 - 0x0160)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                              // 0x0160(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Switch;                                                   // 0x0170(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


// Class AkAudio.AkAudioDevice
// 0x00E0 (0x0148 - 0x0068)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
	int                                                DefaultMemoryPoolKB;                                      // 0x0078(0x0004) (Config)
	int                                                DefaultEngineMemoryPoolKB;                                // 0x007C(0x0004) (Config)
	float                                              LowMemoryThreshold;                                       // 0x0080(0x0004) (Config)
	unsigned char                                      UnknownData01[0xC4];                                      // 0x0084(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSoundActor
// 0x0008 (0x0278 - 0x0270)
class AAkAmbientSoundActor : public AKeypoint
{
public:
	class UAkPlaySoundComponent*                       PlaySoundComponent;                                       // 0x0270(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSoundActor");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class AkAudio.SeqEvent_AkMusicCue
// 0x0014 (0x0190 - 0x017C)
class USeqEvent_AkMusicCue : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FString                                     CueName;                                                  // 0x0180(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqEvent_AkMusicCue");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
