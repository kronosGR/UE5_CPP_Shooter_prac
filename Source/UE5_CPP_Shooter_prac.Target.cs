// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_CPP_Shooter_pracTarget : TargetRules
{
	public UE5_CPP_Shooter_pracTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "UE5_CPP_Shooter_prac" } );
	}
}
