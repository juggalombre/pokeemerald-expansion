EverGrandeCity_Mart_MapScripts::
	.byte 0


EverGrandeCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2


EverGrandeCity_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL

EverGrandeCity_Mart_EventScript_Man::
	msgbox EverGrandeCity_Mart_Text_LastStop, MSGBOX_NPC
	end

EverGrandeCity_Mart_EventScript_Woman::
	msgbox EverGrandeCity_Mart_Text_Winona, MSGBOX_NPC
	end

EverGrandeCity_Mart_Text_LastStop:
	.string "It's your last chance to\n"
	.string "resupply before Victory Road.\p"
	.string "You got your affairs in order?$"

EverGrandeCity_Mart_Text_Winona:
	.string "Son of a--!\p"
	.string "I have to go ALL\n"
	.string "the way back to Fortree!?$"