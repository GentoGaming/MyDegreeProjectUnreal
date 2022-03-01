

using UnrealBuildTool;
using System.Collections.Generic;

public class UnSeenEditorTarget : TargetRules
{
	public UnSeenEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "UnSeen" } );
	}
}
