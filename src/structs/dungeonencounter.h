/*
 * DBC to SQL Converter
 * Copyright (C) 2009  David Vas, Anubisss
 * <http://code.google.com/p/dbctosql/>

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ENCOUNTER_H__
#define __ENCOUNTER_H__

char const *ENCOUNTER_DBC     = "DungeonEncounter.dbc";
char const *ENCOUNTER_SQL     = "dungeon_encounter.sql";
char const *ENCOUNTER_TABLE   = "dungeon_encounter";

#define ENCOUNTER_DBC_CLIENT_BUILD    12340 // 3.3.5a

#define ENCOUNTER_DBC_COLUMN_NUMS     23
#define ENCOUNTER_DBC_ROWS_NUMS       612

// Achievement.dbc struct: TrinityCore2 r4907
char const *encounter_translation[LFGDUNGEON_DBC_COLUMN_NUMS][2] =
{
    {"uint32",  "ID"},          // ID
    {"uint32",  "map"},          // ID
    {"uint32",  "heroic"},          // ID
    {"int32",   "unk1"},          // ID
    {"uint32",   "order"},
    {"char*",   "name"},           // name[0]
    {"char*",   "2"},           // name[1]
    {"char*",   "3"},           // name[2]
    {"char*",   "4"},           // name[3]
    {"char*",   "5"},           // name[4]
    {"char*",   "6"},           // name[5]
    {"char*",   "7"},           // name[6]
    {"char*",   "8"},           // name[7]
    {"char*",   "9"},           // name[8]
    {"char*",   "10"},          // name[9]
    {"char*",   "11"},          // name[10]
    {"char*",   "12"},          // name[11]
    {"char*",   "13"},          // name[12]
    {"char*",   "14"},          // name[13]
    {"char*",   "15"},          // name[14]
    {"char*",   "16"},          // name[15]
    {"uint32",  "17"},          // name_flags
    {"uint32",  "unk2"},          // name_flags
};

char const *ENCOUNTER_TABLE_INDEX = encounter_translation[0][1];

#endif
