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

#ifndef __SKILL_H__
#define __SKILL_H__

char const *SKILL_DBC     = "SkillLine.dbc";
char const *SKILL_SQL     = "skill_dbc.sql";
char const *SKILL_TABLE   = "dbc_skill_line";

#define SKILL_DBC_CLIENT_BUILD    12340 // 3.3.5a

#define SKILL_DBC_COLUMN_NUMS     56
#define SKILL_DBC_ROWS_NUMS       150

// Achievement.dbc struct: TrinityCore2 r4907
char const *skill_translation[SKILL_DBC_COLUMN_NUMS][2] =
{
    {"uint32",  "id"},          // ID
    {"int32",  "1"},            // factionFlag
    {"uint32",  "2"},
    {"char*",   "name"},
    {"char*",   "4"},
    {"char*",   "5"},
    {"char*",   "6"},
    {"char*",   "7"},
    {"char*",   "8"},
    {"char*",   "9"},
    {"char*",   "10"},
    {"char*",   "11"},
    {"char*",   "12"},
    {"char*",   "13"},
    {"char*",   "14"},
    {"char*",   "15"},
    {"char*",   "16"},
    {"char*",   "17"},
    {"char*",   "18"},
    {"uint32",  "19"},

    {"char*",   "20"},
    {"char*",   "21"},
    {"char*",   "22"},
    {"char*",   "23"},
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
    {"uint32",  "36"},

    {"uint32",  "37"},

    {"char*",   "38"},
    {"char*",   "39"},
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
    {"uint32",  "54"},
    {"uint32",  "55"},
};

char const *SKILL_TABLE_INDEX = skill_translation[0][1];

#endif
