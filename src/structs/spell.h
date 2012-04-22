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

#ifndef __SPEL_H__
#define __SPEL_H__

char const *SPELL_DBC   = "Spell.dbc";
char const *SPELL_SQL   = "spell_dbc.sql";
char const *SPELL_TABLE = "dbc_spell";

#define SPELL_DBC_CLIENT_BUILD  12340 // 3.3.5a

#define SPELL_DBC_COLUMN_NUMS   234
#define SPELL_DBC_ROWS_NUMS     49839

// Spell.dbc struct: TrinityCore2 r4907
char const *spell_translation[SPELL_DBC_COLUMN_NUMS][2] =
{
    {"uint32",  "id"},                          // Id
    {"uint32",  "1_Category"},                           // Category
    {"uint32",  "2_Dispel"},                           // Dispel
    {"uint32",  "3_Mechanic"},                           // Mechanic
    {"uint32",  "4_Attributes"},                           // Attributes
    {"uint32",  "5_AttributesEx"},                           // AttributesEx
    {"uint32",  "6_AttributesEx2"},                           // AttributesEx2
    {"uint32",  "7_AttributesEx3"},                           // AttributesEx3
    {"uint32",  "8_AttributesEx4"},                           // AttributesEx4
    {"uint32",  "9_AttributesEx5"},                           // AttributesEx5
    {"uint32",  "10_AttributesEx6"},                          // AttributesEx6
    {"uint32",  "11_unk320_1"},                          // Stances
    {"uint32",  "12_Stances"},                          // StancesNot
    {"uint32",  "13_unk320_2"},
    {"uint32",  "14_StancesNot"},                          // Targets
    {"uint32",  "15_unk320_3"},
    {"uint32",  "16_Targets"},
    {"uint32",  "17_TargetCreatureType"},
    {"uint32",  "18_RequiresSpellFocus"},
    {"uint32",  "19_FacingCasterFlags"},
    {"uint32",  "20_CasterAuraState"},
    {"uint32",  "21_TargetAuraState"},
    {"uint32",  "22_CasterAuraStateNot"},
    {"uint32",  "23_TargetAuraStateNot"},
    {"uint32",  "24_casterAuraSpell"},
    {"uint32",  "25_targetAuraSpell"},
    {"uint32",  "26_excludeCasterAuraSpell"},
    {"uint32",  "27_excludeTargetAuraSpell"},
    {"uint32",  "28"},
    {"uint32",  "29"},
    {"uint32",  "30"},
    {"uint32",  "31"},
    {"uint32",  "32"},
    {"uint32",  "33"},
    {"uint32",  "34"},
    {"uint32",  "35"},
    {"uint32",  "36"},
    {"uint32",  "37"},
    {"uint32",  "38"},
    {"uint32",  "39"},
    {"uint32",  "40"},
    {"uint32",  "41"},
    {"uint32",  "42"},
    {"uint32",  "43"},
    {"uint32",  "44"},
    {"uint32",  "45"},
    {"uint32",  "46"},
    {"float",  "47"},
    {"uint32",  "48"},
    {"uint32",  "49"},
    {"uint32",  "50"},
    {"uint32",  "51"},
    {"int32",  "52"},
    {"int32",  "53"},
    {"int32",  "54"},
    {"int32",  "55"},
    {"int32",  "56"},
    {"int32",  "57"},
    {"int32",  "58"},
    {"int32",  "59"},
    {"uint32",  "60"},
    {"uint32",  "61"},
    {"uint32",  "62"},
    {"uint32",  "63"},
    {"uint32",  "64"},
    {"uint32",  "65"},
    {"uint32",  "66"},
    {"uint32",  "67"},
    {"int32",  "68"},
    {"int32",  "69"},
    {"int32",  "70"},
    {"uint32",  "71"},
    {"uint32",  "72"},
    {"uint32",  "73"},
    {"int32",  "74"},
    {"int32",  "75"},
    {"int32",  "76"},
    {"float",  "77"},
    {"float",  "78"},
    {"float",  "79"},
    {"int32",  "80"},
    {"int32",  "81"},
    {"int32",  "82"},
    {"uint32",  "83"},
    {"uint32",  "84"},
    {"uint32",  "85"},
    {"uint32",  "86"},
    {"uint32",  "87"},
    {"uint32",  "88"},
    {"uint32",  "89"},
    {"uint32",  "90"},
    {"uint32",  "91"},
    {"uint32",  "92"},
    {"uint32",  "93"},
    {"uint32",  "94"},
    {"uint32",  "95"},
    {"uint32",  "96"},
    {"uint32",  "97"},
    {"uint32",  "98"},
    {"uint32",  "99"},
    {"uint32",  "100"},
    {"float",  "101"},
    {"float",  "102"},
    {"float",  "103"},
    {"uint32",  "104"},
    {"uint32",  "105"},
    {"uint32",  "106"},
    {"uint32",  "107"},
    {"uint32",  "108"},
    {"uint32",  "109"},
    {"int32",  "110"},
    {"int32",  "111"},
    {"int32",  "112"},
    {"int32",  "113"},
    {"int32",  "114"},
    {"int32",  "115"},
    {"uint32",  "116"},
    {"uint32",  "117"},
    {"uint32",  "118"},
    {"float",  "119"},
    {"float",  "120"},
    {"float",  "121"},
    {"flag96",  "122"},
    {"flag96",  "123"},
    {"flag96",  "124"},
    {"flag96",  "125"},
    {"flag96",  "126"},
    {"flag96",  "127"},
    {"flag96",  "128"},
    {"flag96",  "129"},
    {"flag96",  "130"},
    {"uint32",  "131"},
    {"uint32",  "132"},
    {"uint32",  "133"},
    {"uint32",  "134"},
    {"uint32",  "135"},

    {"char*",  "136"},
    {"char*",  "137"},
    {"char*",  "138"},
    {"char*",  "139"},
    {"char*",  "140"},
    {"char*",  "141"},
    {"char*",  "142"},
    {"char*",  "143"},
    {"char*",  "144"},
    {"char*",  "145"},
    {"char*",  "146"},
    {"char*",  "147"},
    {"char*",  "148"},
    {"char*",  "149"},
    {"char*",  "150"},
    {"char*",  "151"},
    {"uint32",  "152"},

    {"char*",  "153"},
    {"char*",  "154"},
    {"char*",  "155"},
    {"char*",  "156"},
    {"char*",  "157"},
    {"char*",  "158"},
    {"char*",  "159"},
    {"char*",  "160"},
    {"char*",  "161"},
    {"char*",  "162"},
    {"char*",  "163"},
    {"char*",  "164"},
    {"char*",  "165"},
    {"char*",  "166"},
    {"char*",  "167"},
    {"char*",  "168"},
    {"uint32",  "169"},

    {"char*",  "170"},
    {"char*",  "171"},
    {"char*",  "172"},
    {"char*",  "173"},
    {"char*",  "174"},
    {"char*",  "175"},
    {"char*",  "176"},
    {"char*",  "177"},
    {"char*",  "178"},
    {"char*",  "179"},
    {"char*",  "180"},
    {"char*",  "181"},
    {"char*",  "182"},
    {"char*",  "183"},
    {"char*",  "184"},
    {"char*",  "185"},
    {"uint32",  "186"},

    {"char*",  "187"},
    {"char*",  "188"},
    {"char*",  "189"},
    {"char*",  "190"},
    {"char*",  "191"},
    {"char*",  "192"},
    {"char*",  "193"},
    {"char*",  "194"},
    {"char*",  "195"},
    {"char*",  "196"},
    {"char*",  "197"},
    {"char*",  "198"},
    {"char*",  "199"},
    {"char*",  "200"},
    {"char*",  "201"},
    {"char*",  "202"},
    {"uint32",  "203"},

    {"uint32",  "204"},
    {"uint32",  "205"},
    {"uint32",  "206"},
    {"uint32",  "207"},
    {"uint32",  "208"},
    {"flag96",  "209"},
    {"flag96",  "210"},
    {"flag96",  "211"},
    {"uint32",  "212"},
    {"uint32",  "213"},
    {"uint32",  "214"},
    {"uint32",  "215"},
    {"float",  "216"},
    {"float",  "217"},
    {"float",  "218"},
    {"uint32",  "219"},
    {"uint32",  "220"},
    {"uint32",  "221"},
    {"uint32",  "222"},
    {"uint32",  "223"},
    {"int32",  "224"},
    {"uint32",  "225"},
    {"uint32",  "226"},
    {"uint32",  "227"},
    {"uint32",  "228"},
    {"float",  "229"},
    {"float",  "230"},
    {"float",  "231"},
    {"uint32",  "232"},
    {"uint32",  "233"},
};

char const *SPELL_TABLE_INDEX = spell_translation[0][1];

#endif
