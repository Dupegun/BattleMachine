

using UnrealBuildTool;
using System.Collections.Generic;

public class Battle_MachineEditorTarget : TargetRules
{
	public Battle_MachineEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Battle_Machine" } );
	}
}
