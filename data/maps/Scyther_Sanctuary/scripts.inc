Scyther_Sanctuary_MapScripts::
	.byte 0


ScytherSanctExec1::
# 16 "data/maps/Scyther_Sanctuary/scripts.pory"
	trainerbattle_double EXECUTIVE_HENRY, ScytherSanctExec1_d1, ScytherSanctExec1_d2, ScytherSanctExec1_Text_0
# 17 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox ScytherSanctExec1_d2
# 18 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmessage
# 19 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
	return


# 35 "data/maps/Scyther_Sanctuary/scripts.pory"
NPC_faceup:
# 36 "data/maps/Scyther_Sanctuary/scripts.pory"
	face_up
	step_end

# 66 "data/maps/Scyther_Sanctuary/scripts.pory"
WalkOffSceenScyther:
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
	step_end

DefeatedOrm1::
# 71 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 72 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 73 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 74 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 75 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF1
# 76 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 77 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF2
# 80 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 5
# 82 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 4
# 83 "data/maps/Scyther_Sanctuary/scripts.pory"
	setvar VAR_SCYTHER_SANCT_STATE, 1
# 84 "data/maps/Scyther_Sanctuary/scripts.pory"
	setflag FLAG_SCYTHER_SANCT_CLEARED
# 85 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceplayer
# 90 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PostScytherF1
# 91 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PostScytherF2
# 92 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PostScytherF3
# 93 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 94 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, WalkOffSceenScyther
# 95 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 96 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 1
# 97 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 98 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
	return


Initiate_Battle_Scyther_Sanctuary::
# 102 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 103 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 104 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceplayer
# 105 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 106 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 107 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF1
# 108 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 109 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF3
# 110 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 111 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceup
# 112 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 113 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 114 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 115 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 116 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 117 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 118 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PreScytherF
# 119 "data/maps/Scyther_Sanctuary/scripts.pory"
	special SavePlayerParty
# 120 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/Scyther_Sanctuary/scripts.pory"
	special ChooseHalfPartyForBattle
# 122 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitstate
# 123 "data/maps/Scyther_Sanctuary/scripts.pory"
	multi_2_vs_1 ORM_1, Orm_Loss1, PARTNER_TESSA
# 124 "data/maps/Scyther_Sanctuary/scripts.pory"
	special LoadPlayerParty
# 125 "data/maps/Scyther_Sanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Initiate_Battle_Scyther_Sanctuary_1
# 129 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/Scyther_Sanctuary/scripts.pory"
	special SetCB2WhiteOut
# 131 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitstate
	return

Initiate_Battle_Scyther_Sanctuary_1:
# 126 "data/maps/Scyther_Sanctuary/scripts.pory"
	call DefeatedOrm1
	return


ScytherSanctExec1_Text_0:
# 16 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "ERROR$"

ScytherSanctExec1_d1::
# 6 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Silph Co. must be serious about Project\n"
	.string "Babble if they're sending me down here.$"

ScytherSanctExec1_d2::
# 10 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Could you forget I said that?$"

Tessa_PreScytherF1::
# 23 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "You're that gym challenger, right? Silph\n"
	.string "Co. showed up here and started tearing\l"
	.string "apart the santuary.$"

Tessa_PreScytherF2::
# 27 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "............$"

Tessa_PreScytherF3::
# 31 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "You're not going to leave, are you? Fine.\n"
	.string "Help me beat this guy and then I'll let\l"
	.string "you challenge my gym.$"

Orm_PreScytherF::
# 39 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "All the natural resources of Atlantia\n"
	.string "belongs to Silph Co. per, the Colress\l"
	.string "Treaty- this Sanctuary included. If\l"
	.string "you're going to get in my way, I will\l"
	.string "remove you.$"

Orm_Loss1::
# 43 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "...$"

Orm_PostScytherF1::
# 47 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "...You're stronger than I expected. My\n"
	.string "men and I will leave. I gathered the\l"
	.string "samples I needed anyways. Don't expect\l"
	.string "me to be the last person sent here.$"

Orm_PostScytherF2::
# 52 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "A scyther taken from a young girl? Ah,\n"
	.string "yes- it wasn't want we needed. You may\l"
	.string "have it.$"

Tessa_PostScytherF1::
# 57 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Would you take this Scyther to Maya?\n"
	.string "She lives in the house in the woods with\l"
	.string "her Mother.$"

Tessa_PostScytherF2::
# 60 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "...$"

Tessa_PostScytherF3::
# 63 "data/maps/Scyther_Sanctuary/scripts.pory"
	.string "Thanks for the help, kid. If you still\n"
	.string "want to challenge me, I'll be at my gym.$"
