EvergrandeCity_House1_MapScripts::
	.byte 0

EverGrandeCity_House1_EventScript_Sign::
	msgbox EverGrandeCity_House1_Text_Sign, MSGBOX_SIGN
	end

EverGrandeCity_House1_EventScript_NPC1::
	msgbox EverGrandeCity_House1_Text_NPC1, MSGBOX_NPC
	end

EverGrandeCity_House1_EventScript_NPC2::
	msgbox EverGrandeCity_House1_Text_NPC2, MSGBOX_NPC
	end

EverGrandeCity_House1_Text_Sign:
	.string "A sign is tied to the tree...\p"
	.string "EMPLOYEES ONLY!$"


EverGrandeCity_House1_Text_NPC1:
	.string "They erected this observation\n"
	.string "area sometime last year.\p"
	.string "It's fun watching trainers\n"
	.string "making their way to the League.$"

EverGrandeCity_House1_Text_NPC2:
	.string "Some people look out the\n"
	.string "window to hype themselves up.\p"
	.string "Me, I just like watching the\n"
	.string "overconfident ones get thrashed.$"

