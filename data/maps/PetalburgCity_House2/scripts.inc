PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_PodGuyA::
	applymovement LOCALID_PetalburgCity_House2_PodGuyA, Common_Movement_FaceOriginalDirection
	lockall
	msgbox PetalburgCity_House2_Text_PodGuyA1, MSGBOX_NPC
	applymovement LOCALID_PetalburgCity_House2_PodGuyA, Common_Movement_Delay48
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_PetalburgCity_House2_PodGuyA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PetalburgCity_House2_PodGuyA, Common_Movement_Delay48
	waitmovement 0
	faceplayer
	msgbox PetalburgCity_House2_Text_PodGuyA2, MSGBOX_NPC
	waitmessage
	applymovement LOCALID_PetalburgCity_House2_PodGuyA, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

PetalburgCity_House2_EventScript_PodGuyB::
	faceplayer
	msgbox PetalburgCity_House2_Text_PodGuyB, MSGBOX_NPC
	playmoncry SPECIES_PIDOVE, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_PetalburgCity_House2_PodGuyB, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

PetalburgCity_House2_EventScript_PodGuyC::
	faceplayer
	msgbox PetalburgCity_House2_Text_PodGuyC, MSGBOX_NPC
	applymovement LOCALID_PetalburgCity_House2_PodGuyC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

PetalburgCity_House2_EventScript_PodGuyD::
	faceplayer
	msgbox PetalburgCity_House2_Text_PodGuyD, MSGBOX_NPC
	applymovement LOCALID_PetalburgCity_House2_PodGuyD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

PetalburgCity_House2_EventScript_Drawer::
	msgbox PetalburgCity_House2_Text_Drawer, MSGBOX_SIGN
	end

PetalburgCity_House2_Text_Drawer:
	.string "{PLAYER} looked in the drawer…\p"
	.string "…It's empty.$"

PetalburgCity_House2_Text_PodGuyA1:
	.string "And today on the programme…$"

PetalburgCity_House2_Text_PodGuyA2:
	.string "Oh, ah…\p"
	.string "We're currently recording.\p"
	.string "Could you go?$"

PetalburgCity_House2_Text_PodGuyB:
	.string "It wasn't a military coup,\n"
	.string "it was a military--$"

PetalburgCity_House2_Text_PodGuyC:
	.string "HENRICUS…\p"
	.string "He was a notable drunkard\n"
	.string "in ancient Kalos.$"


PetalburgCity_House2_Text_PodGuyD:
	.string "Aww! The Mudbray were\n"
	.string "getting a ride!\p"
	.string "Their lil' ears flappin'\n"
	.string "in the wind…\p"
	.string "Getting a drawing of it\n"
	.string "as a souvenir…$"

