// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Burbujero_Project : ModuleRules
{
	public Burbujero_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
