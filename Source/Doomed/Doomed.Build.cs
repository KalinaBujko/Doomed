// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Doomed : ModuleRules
{
	public Doomed(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
