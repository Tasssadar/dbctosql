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

#ifndef __LFGDUNGEON_H__
#define __LFGDUNGEON_H__

char const *LFGDUNGEON_DBC     = "LfgDungeons.dbc";
char const *LFGDUNGEON_SQL     = "lfg_dungeon.sql";
char const *LFGDUNGEON_TABLE   = "lfg_dung";

#define LFGDUNGEON_DBC_CLIENT_BUILD    12340 // 3.3.5a

#define LFGDUNGEON_DBC_COLUMN_NUMS     49
#define LFGDUNGEON_DBC_ROWS_NUMS       195

// Achievement.dbc struct: TrinityCore2 r4907
char const *lfgdungeon_translation[LFGDUNGEON_DBC_COLUMN_NUMS][2] =
{
    {"uint32",  "ID"},          // ID
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
    {"uint32",  "minlevel"},          // name_flags
    {"uint32",  "maxlevel"},          // desc_flags
    {"uint32",  "reclevel"},          // categoryId
    {"uint32",  "recminlevel"},          // points
    {"uint32",  "recmaxlevel"},          // OrderInCategory
    {"uint32",  "map"},          // flags
    {"uint32",  "heroic"},          // icon
    {"uint32",  "unk1"},          // icon
    {"uint32",  "type"},          // icon
    {"uint32",  "unk2"},          // icon
    {"char*",  "unk3"},          // icon
    {"uint32",  "expansion"},          // icon
    {"uint32",  "unk4"},          // icon
    {"uint32",  "grouptype"},          // icon
    {"char*",   "desc"},           // name[0]
    {"char*",   "22"},           // name[1]
    {"char*",   "33"},           // name[2]
    {"char*",   "44"},           // name[3]
    {"char*",   "55"},           // name[4]
    {"char*",   "66"},           // name[5]
    {"char*",   "77"},           // name[6]
    {"char*",   "88"},           // name[7]
    {"char*",   "99"},           // name[8]
    {"char*",   "101"},          // name[9]
    {"char*",   "112"},          // name[10]
    {"char*",   "123"},          // name[11]
    {"char*",   "134"},          // name[12]
    {"char*",   "145"},          // name[13]
    {"char*",   "155"},          // name[14]
    {"char*",   "166"},          // name[15]
    {"uint32",  "176"}          // name_flags
};

char const *LFGDUNGEON_TABLE_INDEX = lfgdungeon_translation[0][1];

#endif
