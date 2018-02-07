

using UnrealBuildTool;
using System.Collections.Generic;

public class Battle_MachineTarget : TargetRules
{
	public Battle_MachineTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Battle_Machine" } );
	}
}
