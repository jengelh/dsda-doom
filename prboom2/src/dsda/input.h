//
// Copyright(C) 2020 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	DSDA Input
//

#ifndef __DSDA_INPUT__
#define __DSDA_INPUT__

#include "doomtype.h"
#include "d_event.h"

#define DSDA_SEPARATE_CONFIG_COUNT 2
#define NUMKEYS 512
#define MAX_MOUSE_BUTTONS 8
#define MAX_JOY_BUTTONS 8

typedef enum {
  dsda_input_null,
  dsda_input_forward,
  dsda_input_backward,
  dsda_input_turnleft,
  dsda_input_turnright,
  dsda_input_speed,
  dsda_input_strafeleft,
  dsda_input_straferight,
  dsda_input_strafe,
  dsda_input_autorun, // todo - mouse / joy ignored
  dsda_input_reverse,
  dsda_input_use, // note - joyb use doubles as join demo
  dsda_input_flyup,
  dsda_input_flydown,
  dsda_input_flycenter,
  dsda_input_mlook, // todo - mouse / joy ignored
  dsda_input_novert, // todo - mouse / joy ignored
  dsda_input_weapon1,
  dsda_input_weapon2,
  dsda_input_weapon3,
  dsda_input_weapon4,
  dsda_input_weapon5,
  dsda_input_weapon6,
  dsda_input_weapon7,
  dsda_input_weapon8,
  dsda_input_weapon9,
  dsda_input_nextweapon,
  dsda_input_prevweapon,
  dsda_input_toggleweapon,
  dsda_input_fire,
  dsda_input_lookup,
  dsda_input_lookdown,
  dsda_input_lookcenter,
  dsda_input_use_artifact,
  dsda_input_arti_tome,
  dsda_input_arti_quartz,
  dsda_input_arti_urn,
  dsda_input_arti_bomb,
  dsda_input_arti_ring,
  dsda_input_arti_chaosdevice,
  dsda_input_arti_shadowsphere,
  dsda_input_arti_wings,
  dsda_input_arti_torch,
  dsda_input_arti_morph,
  dsda_input_invleft,
  dsda_input_invright,
  dsda_input_spy,
  dsda_input_join_demo,
  DSDA_INPUT_IDENTIFIER_COUNT
} dsda_input_identifier_t;

typedef struct
{
  int key;
  int mouseb;
  int joyb;
} dsda_input_t;

void dsda_InputTrackTick(void);
void dsda_InputTrackEvent(event_t* ev);
dboolean dsda_InputActivated(int identifier);
dboolean dsda_InputTickActivated(int identifier);
dboolean dsda_InputDeactivated(int identifier);
dsda_input_t dsda_Input(int identifier);
void dsda_InputFlush(void);
void dsda_InputCopy(int identifier, dsda_input_t input[DSDA_SEPARATE_CONFIG_COUNT]);
int dsda_InputKey(int identifier);
int dsda_InputMouseB(int identifier);
int dsda_InputJoyB(int identifier);
void dsda_InputReset(int identifier);
void dsda_InputSet(int identifier, dsda_input_t input);
void dsda_InputSetSpecific(int config_index, int identifier, dsda_input_t input);
void dsda_InputSetKey(int identifier, int value);
void dsda_InputSetMouseB(int identifier, int value);
void dsda_InputSetJoyB(int identifier, int value);
dboolean dsda_InputActive(int identifer);
dboolean dsda_InputKeyActive(int identifier);
dboolean dsda_InputMouseBActive(int identifier);
dboolean dsda_InputJoyBActive(int identifier);

#endif
