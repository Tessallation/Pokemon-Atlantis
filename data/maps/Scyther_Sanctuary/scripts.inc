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

# 60 "data/maps/Scyther_Sanctuary/scripts.pory"
WalkOffSceenScyther:
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
# 61 "data/maps/Scyther_Sanctuary/scripts.pory"
	walk_down
	step_end

DefeatedOrm1::
# 65 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 66 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 67 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 68 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 69 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PreScytherF
# 70 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF1
# 71 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 72 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PostScytherF2
# 75 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 5
# 77 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 4
# 78 "data/maps/Scyther_Sanctuary/scripts.pory"
	setvar VAR_SCYTHER_SANCT_STATE, 1
# 79 "data/maps/Scyther_Sanctuary/scripts.pory"
	setflag FLAG_SCYTHER_SANCT_CLEARED
# 80 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PostScytherF1
# 85 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 86 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, WalkOffSceenScyther
# 87 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 88 "data/maps/Scyther_Sanctuary/scripts.pory"
	removeobject 1
# 89 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 90 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
	return


Initiate_Battle_Scyther_Sanctuary::
# 94 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 95 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 96 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceplayer
# 97 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 98 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 99 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF1
# 100 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF2
# 101 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Tessa_PreScytherF3
# 102 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 103 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 1, NPC_faceup
# 104 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 1
# 105 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 106 "data/maps/Scyther_Sanctuary/scripts.pory"
	releaseall
# 107 "data/maps/Scyther_Sanctuary/scripts.pory"
	applymovement 4, TalkDown
# 108 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitmovement 4
# 109 "data/maps/Scyther_Sanctuary/scripts.pory"
	lockall
# 110 "data/maps/Scyther_Sanctuary/scripts.pory"
	msgbox Orm_PreScytherF
# 111 "data/maps/Scyther_Sanctuary/scripts.pory"
	special SavePlayerParty
# 112 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/Scyther_Sanctuary/scripts.pory"
	special ChooseHalfPartyForBattle
# 114 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitstate
# 115 "data/maps/Scyther_Sanctuary/scripts.pory"
	multi_2_vs_1 ORM_1, Orm_Loss1, PARTNER_TESSA
# 116 "data/maps/Scyther_Sanctuary/scripts.pory"
	special LoadPlayerParty
# 117 "data/maps/Scyther_Sanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Initiate_Battle_Scyther_Sanctuary_1
# 121 "data/maps/Scyther_Sanctuary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/Scyther_Sanctuary/scripts.pory"
	special SetCB2WhiteOut
# 123 "data/maps/Scyther_Sanctuary/scripts.pory"
	waitstate
	return

Initiate_Battle_Scyther_Sanctuary_1:
# 118 "data/maps/Scyther_Sanctuary/scripts.pory"
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
	.string "Thanks for the help, kid. If you still\n"
	.string "want to challenge me, I'll be at my gym.$"
