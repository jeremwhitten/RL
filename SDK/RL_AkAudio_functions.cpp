// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   BusName                        (Parm)
// TEnumAsByte<EBusEmitterType>   BusType                        (Parm)

void AAkBusActor::RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<EBusEmitterType> BusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkBusActor.RegisterReflectionEmitter");

	AAkBusActor_RegisterReflectionEmitter_Params params;
	params.BusName = BusName;
	params.BusType = BusType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkBusActor.SetPinnedAxis
// (Final, Native, Public, K2Call)
// Parameters:
// TEnumAsByte<EPinnedAxisType>   AxisToPin                      (Parm)

void AAkBusActor::SetPinnedAxis(TEnumAsByte<EPinnedAxisType> AxisToPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkBusActor.SetPinnedAxis");

	AAkBusActor_SetPinnedAxis_Params params;
	params.AxisToPin = AxisToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetBusEffect
// (Final, Native, Static, HasOptionalParms, Public, K2Call)
// Parameters:
// struct FName                   BusName                        (Parm)
// struct FName                   EffectSetting                  (Parm)
// int                            EffectSlot                     (OptionalParm, Parm)

void UAkDevice::STATIC_SetBusEffect(const struct FName& BusName, const struct FName& EffectSetting, int EffectSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetBusEffect");

	UAkDevice_SetBusEffect_Params params;
	params.BusName = BusName;
	params.EffectSetting = EffectSetting;
	params.EffectSlot = EffectSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ResetSlapbackObjects
// (Final, Native, Static, Public, K2Call)

void UAkDevice::STATIC_ResetSlapbackObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ResetSlapbackObjects");

	UAkDevice_ResetSlapbackObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSoundEnvironment
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class AActor*                  Actor                          (Parm)
// TEnumAsByte<EAkEnvironmentType> EnvironmentType                (Parm)

void UAkDevice::STATIC_SetSoundEnvironment(class AActor* Actor, TEnumAsByte<EAkEnvironmentType> EnvironmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSoundEnvironment");

	UAkDevice_SetSoundEnvironment_Params params;
	params.Actor = Actor;
	params.EnvironmentType = EnvironmentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.GetEnvironments
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class UAkEnvironments*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UAkEnvironments* UAkDevice::STATIC_GetEnvironments()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.GetEnvironments");

	UAkDevice_GetEnvironments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.NotifyWhenInitialized
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)

void UAkDevice::STATIC_NotifyWhenInitialized(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.NotifyWhenInitialized");

	UAkDevice_NotifyWhenInitialized_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStop
// (Final, Native, Static, Public, K2Call)

void UAkDevice::STATIC_ProfileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStop");

	UAkDevice_ProfileStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStart
// (Final, Native, Static, Public, K2Call)

void UAkDevice::STATIC_ProfileStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStart");

	UAkDevice_ProfileStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PrintData
// (Final, Native, Static, Public, K2Call)

void UAkDevice::STATIC_PrintData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PrintData");

	UAkDevice_PrintData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetDynamicRange
// (Final, Native, Static, Public, K2Call)
// Parameters:
// TEnumAsByte<EAkDynamicRangeType> Type                           (Parm)

void UAkDevice::STATIC_SetDynamicRange(TEnumAsByte<EAkDynamicRangeType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetDynamicRange");

	UAkDevice_SetDynamicRange_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetOutputType
// (Final, Native, Static, Public, K2Call)
// Parameters:
// TEnumAsByte<EAkOutputType>     Type                           (Parm)

void UAkDevice::STATIC_SetOutputType(TEnumAsByte<EAkOutputType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetOutputType");

	UAkDevice_SetOutputType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetListenerSpatialization
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (Parm)
// TEnumAsByte<EAkListenerSpacialization> Value                          (Parm)

void UAkDevice::STATIC_SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<EAkListenerSpacialization> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetListenerSpatialization");

	UAkDevice_SetListenerSpatialization_Params params;
	params.Player = Player;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// (Final, Native, Static, Public, K2Call)
// Parameters:
// bool                           bEnable                        (Parm)

void UAkDevice::STATIC_SetSplitScreenListenerEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSplitScreenListenerEnabled");

	UAkDevice_SetSplitScreenListenerEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FVector                 Location                       (Parm)

void UAkDevice::STATIC_SetSplitScreenListenerPosition(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSplitScreenListenerPosition");

	UAkDevice_SetSplitScreenListenerPosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// (Final, Native, Static, Public, K2Call)

void UAkDevice::STATIC_UpdateSecondaryOutputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.UpdateSecondaryOutputs");

	UAkDevice_UpdateSecondaryOutputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetGlobalRTCP
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkDevice::STATIC_SetGlobalRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetGlobalRTCP");

	UAkDevice_SetGlobalRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopGlobalSound
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)

void UAkDevice::STATIC_StopGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopGlobalSound");

	UAkDevice_StopGlobalSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlayGlobalSound
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)

void UAkDevice::STATIC_PlayGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlayGlobalSound");

	UAkDevice_PlayGlobalSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetState
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FName                   InStateGroup                   (Parm)
// struct FName                   InState                        (Parm)

void UAkDevice::STATIC_SetState(const struct FName& InStateGroup, const struct FName& InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetState");

	UAkDevice_SetState_Params params;
	params.InStateGroup = InStateGroup;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSwitch
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)
// struct FName                   Key                            (Parm)
// struct FName                   Value                          (Parm)

void UAkDevice::STATIC_SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSwitch");

	UAkDevice_SetSwitch_Params params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetRTCP
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkDevice::STATIC_SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetRTCP");

	UAkDevice_SetRTCP_Params params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopAllSounds
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)

void UAkDevice::STATIC_StopAllSounds(class AActor* SourceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopAllSounds");

	UAkDevice_StopAllSounds_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopSound
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)
// class UAkSoundCue*             Sound                          (Parm)

void UAkDevice::STATIC_StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopSound");

	UAkDevice_StopSound_Params params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlaySound
// (Final, Native, Static, HasOptionalParms, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)
// class UAkSoundCue*             Sound                          (Parm)
// struct FVector                 Translation                    (OptionalParm, Parm)
// struct FRotator                Rotation                       (OptionalParm, Parm)
// class UAkSoundSource*          ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAkSoundSource* UAkDevice::STATIC_PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlaySound");

	UAkDevice_PlaySound_Params params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.GetSoundSource
// (Final, Native, Static, HasOptionalParms, Public, K2Call)
// Parameters:
// class AActor*                  SourceActor                    (Parm)
// struct FVector                 Translation                    (OptionalParm, Parm)
// struct FRotator                Rotation                       (OptionalParm, Parm)
// class UAkSoundSource*          ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAkSoundSource* UAkDevice::STATIC_GetSoundSource(class AActor* SourceActor, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.GetSoundSource");

	UAkDevice_GetSoundSource_Params params;
	params.SourceActor = SourceActor;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.EventInitialized
// (Final, Public, Delegate)

void UAkDevice::EventInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventInitialized");

	UAkDevice_EventInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  TargetActor                    (Parm)
// struct FString                 EnvironmentID                  (Const, Parm, OutParm, NeedCtorLink)

void UAkEnvironments::RemoveActorEnvironment(class AActor* TargetActor, struct FString* EnvironmentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.RemoveActorEnvironment");

	UAkEnvironments_RemoveActorEnvironment_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnvironmentID != nullptr)
		*EnvironmentID = params.EnvironmentID;
}


// Function AkAudio.AkEnvironments.AddActorEnvironment
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  TargetActor                    (Parm)
// struct FAkEnvironment          Environment                    (Const, Parm, OutParm, NeedCtorLink)

void UAkEnvironments::AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment* Environment)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.AddActorEnvironment");

	UAkEnvironments_AddActorEnvironment_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Environment != nullptr)
		*Environment = params.Environment;
}


// Function AkAudio.AkEnvironments.AddLevelDefault
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAkEnvironment          Environment                    (Const, Parm, OutParm, NeedCtorLink)

void UAkEnvironments::AddLevelDefault(struct FAkEnvironment* Environment)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.AddLevelDefault");

	UAkEnvironments_AddLevelDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Environment != nullptr)
		*Environment = params.Environment;
}


// Function AkAudio.AkMusicDevice.SetRTCP
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkMusicDevice::STATIC_SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.SetRTCP");

	UAkMusicDevice_SetRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkMusicDevice.StopPlayingID
// (Final, Native, Static, Public, K2Call)
// Parameters:
// int                            PlayingID                      (Parm)

void UAkMusicDevice::STATIC_StopPlayingID(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.StopPlayingID");

	UAkMusicDevice_StopPlayingID_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkMusicDevice.Stop
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)

void UAkMusicDevice::STATIC_Stop(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.Stop");

	UAkMusicDevice_Stop_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkMusicDevice.Play
// (Final, Native, Static, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UAkMusicDevice::STATIC_Play(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.Play");

	UAkMusicDevice_Play_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkMusicDevice.EventTrackEnd
// (Final, Public, Delegate)
// Parameters:
// int                            PlayingID                      (Parm)

void UAkMusicDevice::EventTrackEnd(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.EventTrackEnd");

	UAkMusicDevice_EventTrackEnd_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkMusicDevice.EventTrackStart
// (Final, Public, Delegate)
// Parameters:
// int                            PlayingID                      (Parm)
// struct FString                 FileMarker                     (Parm, NeedCtorLink)

void UAkMusicDevice::EventTrackStart(int PlayingID, const struct FString& FileMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMusicDevice.EventTrackStart");

	UAkMusicDevice_EventTrackStart_Params params;
	params.PlayingID = PlayingID;
	params.FileMarker = FileMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// (Final, Defined, Public)
// Parameters:
// bool                           bSend                          (Parm)

void UAkParamGroup::SetSendToSlapbacks(bool bSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetSendToSlapbacks");

	UAkParamGroup_SetSendToSlapbacks_Params params;
	params.bSend = bSend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetControllerId
// (Final, Defined, Public)
// Parameters:
// int                            InID                           (Parm)

void UAkParamGroup::SetControllerId(int InID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetControllerId");

	UAkParamGroup_SetControllerId_Params params;
	params.InID = InID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// (Final, Defined, Public)

void UAkParamGroup::EnableObjectAttenuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.EnableObjectAttenuation");

	UAkParamGroup_EnableObjectAttenuation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// (Final, Defined, Public)

void UAkParamGroup::DisableObjectAttenuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.DisableObjectAttenuation");

	UAkParamGroup_DisableObjectAttenuation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.PrintDebugInfo
// (Defined, Simulated, Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PrintDebugInfo");

	UAkParamGroup_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// (Final, Native, Public, K2Call)

void UAkParamGroup::UpdateSoundSourceAttenuationScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling");

	UAkParamGroup_UpdateSoundSourceAttenuationScaling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetActorParameter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// class AActor*                  Value                          (Parm)

void UAkParamGroup::SetActorParameter(const struct FName& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetActorParameter");

	UAkParamGroup_SetActorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetLinearColorParameter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FLinearColor            Value                          (Parm)

void UAkParamGroup::SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetLinearColorParameter");

	UAkParamGroup_SetLinearColorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetVectorParameter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FVector                 Value                          (Parm)

void UAkParamGroup::SetVectorParameter(const struct FName& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetVectorParameter");

	UAkParamGroup_SetVectorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetFloatParameter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkParamGroup::SetFloatParameter(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetFloatParameter");

	UAkParamGroup_SetFloatParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetNameParameter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FName                   Value                          (Parm)

void UAkParamGroup::SetNameParameter(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetNameParameter");

	UAkParamGroup_SetNameParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.GetDebugData
// (Final, Native, Public, HasOutParms, K2Call)
// Parameters:
// TArray<struct FName>           RTCPKeys                       (Parm, OutParm, NeedCtorLink)
// TArray<float>                  RTCPValues                     (Parm, OutParm, NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (Parm, OutParm, NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (Parm, OutParm, NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.GetDebugData");

	UAkParamGroup_GetDebugData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RTCPKeys != nullptr)
		*RTCPKeys = params.RTCPKeys;
	if (RTCPValues != nullptr)
		*RTCPValues = params.RTCPValues;
	if (SwitchKeys != nullptr)
		*SwitchKeys = params.SwitchKeys;
	if (SwitchValues != nullptr)
		*SwitchValues = params.SwitchValues;
}


// Function AkAudio.AkParamGroup.StopSound
// (Final, Native, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.StopSound");

	UAkParamGroup_StopSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.PlaySound
// (Final, Native, HasOptionalParms, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)
// struct FVector                 Translation                    (OptionalParm, Parm)
// struct FRotator                Rotation                       (OptionalParm, Parm)
// class UAkSoundSource*          ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PlaySound");

	UAkParamGroup_PlaySound_Params params;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkParamGroup.SetSwitch
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FName                   Value                          (Parm)

void UAkParamGroup::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetSwitch");

	UAkParamGroup_SetSwitch_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetRTCP
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkParamGroup::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetRTCP");

	UAkParamGroup_SetRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// class AActor*                  Value                          (Parm)

void UAkPlaySoundComponent::SetActorParameter(const struct FName& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetActorParameter");

	UAkPlaySoundComponent_SetActorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FLinearColor            Value                          (Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");

	UAkPlaySoundComponent_SetLinearColorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FVector                 Value                          (Parm)

void UAkPlaySoundComponent::SetVectorParameter(const struct FName& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");

	UAkPlaySoundComponent_SetVectorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkPlaySoundComponent::SetFloatParameter(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");

	UAkPlaySoundComponent_SetFloatParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FName                   Value                          (Parm)

void UAkPlaySoundComponent::SetNameParameter(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetNameParameter");

	UAkPlaySoundComponent_SetNameParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetRTCP
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Value                          (Parm)

void UAkPlaySoundComponent::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetRTCP");

	UAkPlaySoundComponent_SetRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetSwitch
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FName                   Value                          (Parm)

void UAkPlaySoundComponent::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetSwitch");

	UAkPlaySoundComponent_SetSwitch_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.IsPlaying
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.IsPlaying");

	UAkPlaySoundComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkPlaySoundComponent.Stop
// (Final, Native, Public)

void UAkPlaySoundComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Stop");

	UAkPlaySoundComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.Play
// (Final, Native, Public)

void UAkPlaySoundComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Play");

	UAkPlaySoundComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// (Defined, Simulated, Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (Parm)

void UAkRevPhysicsSimulation::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo");

	UAkRevPhysicsSimulation_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAkRevSimUpdateParams   SimUpdate                      (Const, Parm, OutParm, NeedCtorLink)
// int                            Gear                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAkRevPhysicsSimulation::STATIC_InterpGearRatio(int Gear, struct FAkRevSimUpdateParams* SimUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio");

	UAkRevPhysicsSimulation_InterpGearRatio_Params params;
	params.Gear = Gear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SimUpdate != nullptr)
		*SimUpdate = params.SimUpdate;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAkRevSimUpdateParams   SimUpdate                      (Const, Parm, OutParm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAkRevPhysicsSimulation::STATIC_GetGearRatio(struct FAkRevSimUpdateParams* SimUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.GetGearRatio");

	UAkRevPhysicsSimulation_GetGearRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SimUpdate != nullptr)
		*SimUpdate = params.SimUpdate;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// (Final, Native, Public)
// Parameters:
// float                          GearRatio                      (Parm)
// float                          RPM                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAkRevPhysicsSimulation::CalcVelocity(float GearRatio, float RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.CalcVelocity");

	UAkRevPhysicsSimulation_CalcVelocity_Params params;
	params.GearRatio = GearRatio;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// (Final, Native, Public)
// Parameters:
// float                          GearRatio                      (Parm)
// float                          Velocity                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAkRevPhysicsSimulation::CalcRPM(float GearRatio, float Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.CalcRPM");

	UAkRevPhysicsSimulation_CalcRPM_Params params;
	params.GearRatio = GearRatio;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.Step
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FAkRevSimUpdateParams   Params                         (Const, Parm, OutParm, NeedCtorLink)
// struct FAkRevSimFrame          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step(float DeltaTime, struct FAkRevSimUpdateParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.Step");

	UAkRevPhysicsSimulation_Step_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// (Final, Public, Delegate)
// Parameters:
// class UAkRevPhysicsSimulation* Simulation                     (Parm)

void UAkRevPhysicsSimulation::EventGearChange(class UAkRevPhysicsSimulation* Simulation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.EventGearChange");

	UAkRevPhysicsSimulation_EventGearChange_Params params;
	params.Simulation = Simulation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// (Final, Defined, Event, Public, K2Call)
// Parameters:
// bool                           bValue                         (Parm)

void UAkSoundSource::SetSubtitlesEnabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.SetSubtitlesEnabled");

	UAkSoundSource_SetSubtitlesEnabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.SetAttenuationScaling
// (Final, Native, Public, K2Call)
// Parameters:
// TEnumAsByte<EAttenuationType>  AttenuationType                (Parm)

void UAkSoundSource::SetAttenuationScaling(TEnumAsByte<EAttenuationType> AttenuationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.SetAttenuationScaling");

	UAkSoundSource_SetAttenuationScaling_Params params;
	params.AttenuationType = AttenuationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.ForceUpdatePosition
// (Final, Native, Public, K2Call)

void UAkSoundSource::ForceUpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.ForceUpdatePosition");

	UAkSoundSource_ForceUpdatePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   BusName                        (Parm)
// TEnumAsByte<EBusEmitterType>   BusType                        (Parm)

void UAkSoundSource::RegisterReflectionEmitter(const struct FName& BusName, TEnumAsByte<EBusEmitterType> BusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.RegisterReflectionEmitter");

	UAkSoundSource_RegisterReflectionEmitter_Params params;
	params.BusName = BusName;
	params.BusType = BusType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.IsPlayingAny
// (Final, Native, Public, K2Call)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlayingAny");

	UAkSoundSource_IsPlayingAny_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.IsPlaying
// (Final, Native, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlaying");

	UAkSoundSource_IsPlaying_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.StopAll
// (Final, Native, Public, K2Call)

void UAkSoundSource::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.StopAll");

	UAkSoundSource_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Stop
// (Final, Native, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Stop");

	UAkSoundSource_Stop_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Play
// (Final, Native, Public, K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Play");

	UAkSoundSource_Play_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.EventDuration
// (Final, Public, Delegate)
// Parameters:
// class UAkSoundSource*          Source                         (Parm, EditInline)
// int                            PlayingID                      (Parm)
// float                          DurationMS                     (Parm)

void UAkSoundSource::EventDuration(class UAkSoundSource* Source, int PlayingID, float DurationMS)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.EventDuration");

	UAkSoundSource_EventDuration_Params params;
	params.Source = Source;
	params.PlayingID = PlayingID;
	params.DurationMS = DurationMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.EventMarker
// (Final, Public, Delegate)
// Parameters:
// class UAkSoundSource*          Source                         (Parm, EditInline)
// int                            PlayingID                      (Parm)
// struct FString                 Marker                         (Parm, NeedCtorLink)

void UAkSoundSource::EventMarker(class UAkSoundSource* Source, int PlayingID, const struct FString& Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.EventMarker");

	UAkSoundSource_EventMarker_Params params;
	params.Source = Source;
	params.PlayingID = PlayingID;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.EventFinished
// (Final, Public, Delegate)
// Parameters:
// class UAkSoundSource*          Source                         (Parm, EditInline)
// int                            PlayingID                      (Parm)

void UAkSoundSource::EventFinished(class UAkSoundSource* Source, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.EventFinished");

	UAkSoundSource_EventFinished_Params params;
	params.Source = Source;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// (Final, Defined, Event, Private)
// Parameters:
// struct FString                 CueName                        (Parm, NeedCtorLink)

void USeqAct_AkPlayMusicWithCues::TriggerEvents(const struct FString& CueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents");

	USeqAct_AkPlayMusicWithCues_TriggerEvents_Params params;
	params.CueName = CueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// (Final, Defined, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           bPlay                          (Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");

	USeqAct_AkPlaySound_ToggleSoundFor_Params params;
	params.A = A;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// (Final, Defined, Public)
// Parameters:
// bool                           bPlay                          (Parm)

void USeqAct_AkPlaySound::ToggleSound(bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");

	USeqAct_AkPlaySound_ToggleSound_Params params;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.Activated
// (Defined, Event, Public)

void USeqAct_AkPlaySound::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.Activated");

	USeqAct_AkPlaySound_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// (Final, Native, Event, Private)
// Parameters:
// class UAkSoundSource*          Source                         (Parm, EditInline)
// int                            PlayingID                      (Parm)

void USeqAct_AkPostEvent::HandleSoundCueFinished(class UAkSoundSource* Source, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished");

	USeqAct_AkPostEvent_HandleSoundCueFinished_Params params;
	params.Source = Source;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSoundActor.OnToggle
// (Final, Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSoundActor.OnToggle");

	AAkAmbientSoundActor_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
