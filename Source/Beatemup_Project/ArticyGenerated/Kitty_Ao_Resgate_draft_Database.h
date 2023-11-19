﻿// articy Software GmbH & Co. KG
/** This code file was generated by ArticyImporter. Changes to this file will get lost once the code is regenerated. */

#pragma once

#include "CoreUObject.h"
#include "ArticyRuntime/Public/ArticyDatabase.h"
#include "Kitty_Ao_Resgate_draft_ExpressoScripts.h"
#include "Kitty_Ao_Resgate_draft_Database.generated.h"

UCLASS(BlueprintType)
class BEATEMUP_PROJECT_API UKitty_Ao_Resgate_draft_Database : public UArticyDatabase
{
	GENERATED_BODY()
	
public:
	 UKitty_Ao_Resgate_draft_Database() 
	{
		SetExpressoScriptsClass(UKitty_Ao_Resgate_draft_ExpressoScripts::StaticClass());
	}
	
	/** Get the instace (copy of the asset) of the database. */
	UFUNCTION(BlueprintPure, Category = "articy:draft", meta=(HidePin="WorldContext", DefaultToSelf="WorldContext", DisplayName="GetArticyDB", keywords="database"))
	static UKitty_Ao_Resgate_draft_Database* Get(const UObject* WorldContext) 
	{
		return static_cast<UKitty_Ao_Resgate_draft_Database*>(Super::Get(WorldContext));
	}
	
	/** Get the global variables. */
	UFUNCTION(BlueprintPure, Category = "articy:draft", meta=(keywords="global variables"))
	UKitty_Ao_Resgate_draft_GlobalVariables* GetGVs() const override
	{
		return static_cast<UKitty_Ao_Resgate_draft_GlobalVariables*>(Super::GetGVs());
	}
	/** Gets the current runtime instance of a set of GVs. */
	UFUNCTION(BlueprintPure, Category = "articy:draft", meta=(keywords="global variables"))
	UKitty_Ao_Resgate_draft_GlobalVariables* GetRuntimeGVs(UArticyAlternativeGlobalVariables* Asset) const override
	{
		return static_cast<UKitty_Ao_Resgate_draft_GlobalVariables*>(Super::GetRuntimeGVs(Asset));
	}
};
