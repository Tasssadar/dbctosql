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

#ifndef __FACTION_H__
#define __FACTION_H__

char const *FACTION_DBC     = "Faction.dbc";
char const *FACTION_SQL     = "faction_dbc.sql";
char const *FACTION_TABLE   = "dbc_faction";

#define FACTION_DBC_CLIENT_BUILD    12340 // 3.3.5a

#define FACTION_DBC_COLUMN_NUMS     57
#define FACTION_DBC_ROWS_NUMS       401

// Achievement.dbc struct: TrinityCore2 r4907
char const *faction_translation[FACTION_DBC_COLUMN_NUMS][2] =
{
    {"uint32",  "id"},          // ID
    {"int32",  "1"},            // factionFlag
    {"uint32",  "2"},
    {"uint32",  "3"},
    {"uint32",  "4"},
    {"uint32",  "5"},
    {"uint32",  "6"},
    {"uint32",  "7"},
    {"uint32",  "8"},
    {"uint32",  "9"},
    {"int32",  "10"},
    {"int32",  "11"},
    {"int32",  "12"},
    {"int32",  "13"},
    {"uint32",  "14"},
    {"uint32",  "15"},
    {"uint32",  "16"},
    {"uint32",  "17"},
    {"uint32",  "18"},
    {"float",  "19"},
    {"float",  "20"},
    {"uint32",  "21"},
    {"uint32",  "22"},
    {"char*",   "name"},
    {"char*",   "24"},
    {"char*",   "25"},
    {"char*",   "26"},
    {"char*",   "27"},
    {"char*",   "28"},
    {"char*",   "29"},
    {"char*",   "30"},
    {"char*",   "31"},
    {"char*",   "32"},
    {"char*",   "33"},
    {"char*",   "34"},
    {"char*",   "35"},
    {"char*",   "36"},
    {"char*",   "37"},
    {"char*",   "38"},
    {"uint32",  "39"},
    {"char*",   "40"},
    {"char*",   "41"},
    {"char*",   "42"},
    {"char*",   "43"},
    {"char*",   "44"},
    {"char*",   "45"},
    {"char*",   "46"},
    {"char*",   "47"},
    {"char*",   "48"},
    {"char*",   "49"},
    {"char*",   "50"},
    {"char*",   "51"},
    {"char*",   "52"},
    {"char*",   "53"},
    {"char*",   "54"},
    {"char*",   "55"},
    {"uint32",  "56"},
};

char const *FACTION_TABLE_INDEX = faction_translation[0][1];

#endif
