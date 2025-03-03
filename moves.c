// Prefixo m_ para dados de movimentos
#include "status.c"
void m_getmove(int player, int move1, int move2, int move3, int move4)
{
    int moveid[4]={move1, move2, move3, move4};
    for (int x = 0; x < 4; x++)
    {
        m_moveid[player][x] = moveid[x];
        switch (moveid[x])
        {
        case 1:
            strcpy(m_name[player][x], "Absorb\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 2;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 2:
            strcpy(m_name[player][x], "Acid\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 6;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 3:
            strcpy(m_name[player][x], "Acid Armor\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 6;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 4:
            strcpy(m_name[player][x], "Agility\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 5:
            strcpy(m_name[player][x], "Amnesia\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 6:
            strcpy(m_name[player][x], "Aurora Beam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 13;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 7:
            strcpy(m_name[player][x], "Barrage\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 8:
            strcpy(m_name[player][x], "Barrier\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 9:
            strcpy(m_name[player][x], "Bind\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 10:
            strcpy(m_name[player][x], "Bite\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 60;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 11:
            strcpy(m_name[player][x], "Blizzard\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 13;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 12:
            strcpy(m_name[player][x], "Body Slam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 85;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 13:
            strcpy(m_name[player][x], "Bone Club\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 9;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 14:
            strcpy(m_name[player][x], "Bonemerang\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 9;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 15:
            strcpy(m_name[player][x], "Bubble\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 16:
            strcpy(m_name[player][x], "BubbleBeam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 17:
            strcpy(m_name[player][x], "Clamp\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 18:
            strcpy(m_name[player][x], "Comet Punch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 18;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 19:
            strcpy(m_name[player][x], "Confuse Ray\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 14;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 20:
            strcpy(m_name[player][x], "Confusion\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 12;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 21:
            strcpy(m_name[player][x], "Constrict\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 10;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 22:
            strcpy(m_name[player][x], "Crabhammer\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 90;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 1;
            break;
        case 23:
            strcpy(m_name[player][x], "Cut\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 24:
            strcpy(m_name[player][x], "Defense Curl\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 25:
            strcpy(m_name[player][x], "Dig\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 9;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 26:
            strcpy(m_name[player][x], "Dizzy Punch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 70;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 27:
            strcpy(m_name[player][x], "Double Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 70;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 28:
            strcpy(m_name[player][x], "Double Slap\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 29:
            strcpy(m_name[player][x], "Double-Edge\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 30:
            strcpy(m_name[player][x], "Dragon Rage\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 15;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 31:
            strcpy(m_name[player][x], "Dream Eater\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 12;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 32:
            strcpy(m_name[player][x], "Drill Peck\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 7;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 33:
            strcpy(m_name[player][x], "Earthquake\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 9;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 34:
            strcpy(m_name[player][x], "Egg Bomb\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 35:
            strcpy(m_name[player][x], "Ember\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 3;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 36:
            strcpy(m_name[player][x], "Fire Blast\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 3;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 37:
            strcpy(m_name[player][x], "Fire Punch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 75;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 3;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 38:
            strcpy(m_name[player][x], "Fire Spin\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 70;
            m_type[player][x] = 3;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 39:
            strcpy(m_name[player][x], "Flamethrower\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 95;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 3;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 40:
            strcpy(m_name[player][x], "Flash\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 41:
            strcpy(m_name[player][x], "Fly\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 90;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 7;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 42:
            strcpy(m_name[player][x], "Fury Attack\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 43:
            strcpy(m_name[player][x], "Fury Swipes\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 18;
            m_accuracy[player][x] = 80;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 44:
            strcpy(m_name[player][x], "Glare\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 45:
            strcpy(m_name[player][x], "Growl\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 46:
            strcpy(m_name[player][x], "Growth\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 47:
            strcpy(m_name[player][x], "Gust\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 48:
            strcpy(m_name[player][x], "Harden\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 49:
            strcpy(m_name[player][x], "Headbutt\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 70;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 50:
            strcpy(m_name[player][x], "Hi Jump Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 130;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 51:
            strcpy(m_name[player][x], "Horn Attack\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 52:
            strcpy(m_name[player][x], "Hydro Pump\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 80;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 53:
            strcpy(m_name[player][x], "Hyper Beam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 150;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 54:
            strcpy(m_name[player][x], "Hyper Fang\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 55:
            strcpy(m_name[player][x], "Hypnosis\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 60;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 56:
            strcpy(m_name[player][x], "Ice Beam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 95;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 13;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 57:
            strcpy(m_name[player][x], "Ice Punch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 75;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 13;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 58:
            strcpy(m_name[player][x], "Jump Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 59:
            strcpy(m_name[player][x], "Karate Chop\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 1;
            break;
        case 60:
            strcpy(m_name[player][x], "Kinesis\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 61:
            strcpy(m_name[player][x], "Leech Life\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 5;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 62:
            strcpy(m_name[player][x], "Leer\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 63:
            strcpy(m_name[player][x], "Lick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 14;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 64:
            strcpy(m_name[player][x], "Lovely Kiss\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 65:
            strcpy(m_name[player][x], "Low Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 66:
            strcpy(m_name[player][x], "Meditate\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 67:
            strcpy(m_name[player][x], "Mega Drain\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 2;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 68:
            strcpy(m_name[player][x], "Mega Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 69:
            strcpy(m_name[player][x], "Mega Punch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 70:
            strcpy(m_name[player][x], "Night Shade\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 14;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 71:
            strcpy(m_name[player][x], "Pay Day\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 72:
            strcpy(m_name[player][x], "Peck\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 35;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 7;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 73:
            strcpy(m_name[player][x], "Pin Missile\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 14;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 5;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 74:
            strcpy(m_name[player][x], "Poison Gas\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 55;
            m_type[player][x] = 6;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 75:
            strcpy(m_name[player][x], "Poison Powder\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 6;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 76:
            strcpy(m_name[player][x], "Poison Sting\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 6;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 77:
            strcpy(m_name[player][x], "Pound\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 78:
            strcpy(m_name[player][x], "Psybeam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 12;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 79:
            strcpy(m_name[player][x], "Psychic\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 90;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 12;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 80:
            strcpy(m_name[player][x], "Psywave\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 80;
            m_type[player][x] = 12;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 81:
            strcpy(m_name[player][x], "Quick Attack\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 82:
            strcpy(m_name[player][x], "Razor Leaf\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 55;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 2;
            m_cat[player][x] = 1;
            m_crit[player][x] = 1;
        case 83:
            strcpy(m_name[player][x], "Razor Wind\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 84:
            strcpy(m_name[player][x], "Recover\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 85:
            strcpy(m_name[player][x], "Rest\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 12;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 86:
            strcpy(m_name[player][x], "Rock Slide\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 75;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 10;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 87:
            strcpy(m_name[player][x], "Rock Throw\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 50;
            m_accuracy[player][x] = 65;
            m_type[player][x] = 10;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 88:
            strcpy(m_name[player][x], "Rolling Kick\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 60;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 89:
            strcpy(m_name[player][x], "Sand-Attack\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 90:
            strcpy(m_name[player][x], "Scratch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 91:
            strcpy(m_name[player][x], "Screech\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 92:
            strcpy(m_name[player][x], "Seismic Toss\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 93:
            strcpy(m_name[player][x], "Sharpen\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 94:
            strcpy(m_name[player][x], "Sing\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 55;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 95:
            strcpy(m_name[player][x], "Skull Bash\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 100;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 96:
            strcpy(m_name[player][x], "Sky Attack\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 140;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 7;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 97:
            strcpy(m_name[player][x], "Slam\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 98:
            strcpy(m_name[player][x], "Slash\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 70;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 1;
            break;
        case 99:
            strcpy(m_name[player][x], "Sleep Powder\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 2;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 100:
            strcpy(m_name[player][x], "Sludge\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 6;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 101:
            strcpy(m_name[player][x], "Smog\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 70;
            m_type[player][x] = 6;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 102:
            strcpy(m_name[player][x], "SmokeScreen\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 103:
            strcpy(m_name[player][x], "Softboiled\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 104:
            strcpy(m_name[player][x], "Solarbeam\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 2;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 105:
            strcpy(m_name[player][x], "SonicBoom\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 106:
            strcpy(m_name[player][x], "Spike Cannon\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 20;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 107:
            strcpy(m_name[player][x], "Splash\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 108:
            strcpy(m_name[player][x], "Spore\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 2;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 109:
            strcpy(m_name[player][x], "Stomp\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 65;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 110:
            strcpy(m_name[player][x], "Strength\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 111:
            strcpy(m_name[player][x], "String Shot\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 5;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 112:
            strcpy(m_name[player][x], "Stun Spore\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 75;
            m_type[player][x] = 2;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 113:
            strcpy(m_name[player][x], "Submission\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 80;
            m_type[player][x] = 11;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 114:
            strcpy(m_name[player][x], "Super Fang\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 90;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 115:
            strcpy(m_name[player][x], "Supersonic\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 55;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 116:
            strcpy(m_name[player][x], "Surf\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 95;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 117:
            strcpy(m_name[player][x], "Swift\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 60;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 118:
            strcpy(m_name[player][x], "Swords Dance\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 119:
            strcpy(m_name[player][x], "Tackle\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 35;
            m_accuracy[player][x] = 95;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 120:
            strcpy(m_name[player][x], "Tail Whip\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 121:
            strcpy(m_name[player][x], "Take Down\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 90;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 122:
            strcpy(m_name[player][x], "Thunder\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 120;
            m_accuracy[player][x] = 70;
            m_type[player][x] = 8;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 123:
            strcpy(m_name[player][x], "ThunderPunch\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 75;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 8;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 124:
            strcpy(m_name[player][x], "ThunderShock\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 8;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 125:
            strcpy(m_name[player][x], "Thunder Wave\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 8;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 126:
            strcpy(m_name[player][x], "Thunderbolt\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 95;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 8;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 127:
            strcpy(m_name[player][x], "Twineedle\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 25;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 5;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 128:
            strcpy(m_name[player][x], "Vine Whip\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 35;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 2;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 129:
            strcpy(m_name[player][x], "ViceGrip\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 55;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 130:
            strcpy(m_name[player][x], "Water Gun\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 40;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 4;
            m_cat[player][x] = 1;
            m_crit[player][x] = 0;
            break;
        case 131:
            strcpy(m_name[player][x], "Wing Attack\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 35;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 7;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        case 132:
            strcpy(m_name[player][x], "Withdraw\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 0;
            m_accuracy[player][x] = 900;
            m_type[player][x] = 4;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 133:
            strcpy(m_name[player][x], "Wrap\0");
            m_dealdamage[player][x] = 0;
            m_power[player][x] = 15;
            m_accuracy[player][x] = 85;
            m_type[player][x] = 4;
            m_cat[player][x] = 2;
            m_crit[player][x] = 0;
            break;
        case 134:
            strcpy(m_name[player][x], "Tri-Attack\0");
            m_dealdamage[player][x] = 1;
            m_power[player][x] = 80;
            m_accuracy[player][x] = 100;
            m_type[player][x] = 1;
            m_cat[player][x] = 0;
            m_crit[player][x] = 0;
            break;
        default:
            break;
        }
    }
}
int enemyai()
{
    int y = 0;
    for (int x = 0; x < 4; x++)
    {
        /*if(m_dealdamage[1][x]==1)
        {
            if(t_effect(1, x, 0)>1)
            {
                return x;
            }
        }*/
        if (m_moveid[1][x] != 0)
        {
            y++;
        }
    }
    return rng2(y) - 1;
}
void showmoves(int movequant)
{
    switch (movequant)
    {
    case 1:
        printf("\n1. %s\n", m_name[0][0]);
        break;
    case 2:
        printf("\n1. %s\n", m_name[0][0]);
        printf("2. %s\n", m_name[0][1]);
        break;
    case 3:
        printf("\n1. %s\n", m_name[0][0]);
        printf("2. %s\n", m_name[0][1]);
        printf("3. %s\n", m_name[0][2]);
        break;
    case 4:
        printf("\n1. %s\n", m_name[0][0]);
        printf("2. %s\n", m_name[0][1]);
        printf("3. %s\n", m_name[0][2]);
        printf("4. %s\n", m_name[0][3]);
        break;
    default:
        break;
    }
}