

using UnrealBuildTool;
using System.Collections.Generic;

public class UnSeenTarget : TargetRules
{
	public UnSeenTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "UnSeen" } );
	}
}
