// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Forever_Kingdom : ModuleRules
{
	public Forever_Kingdom(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
