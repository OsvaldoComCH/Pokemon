#include "fight.c"
void p_getstats(float lvl, int player, float bhp, float batk, float bdef, float bsp, float bspd)
{
    p_hp[player] = p_maxhp[player] = round(10 + lvl + bhp * (lvl/50));
    p_atk[player] = round(5 + batk * (lvl/50));
    p_def[player] = round(5 + bdef * (lvl/50));
    p_spd[player] = round(5 + bspd * (lvl/50));
    p_sp[player] = round(5 + bsp * (lvl/50));
}
void p_getpkmn(int pkdx, int player)
{
    if(p_lvl[player]>100) {p_lvl[player]=100;}
    if(p_lvl[player]<1) {p_lvl[player]=1;}
    switch (pkdx)
    {
    case 1:
        strcpy(p_name[player], "Bulbasaur\0");
        p_getstats(p_lvl[player], player, 45, 49, 49, 65, 45);
        m_getmove(player, 119, 45, 61, 128);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 2:
        strcpy(p_name[player], "Ivysaur\0");
        p_getstats(p_lvl[player], player, 60, 62, 63, 80, 60);
        m_getmove(player, 61, 128, 75, 83);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 3:
        strcpy(p_name[player], "Venusaur\0");
        p_getstats(p_lvl[player], player, 80, 82, 83, 100, 80);
        m_getmove(player, 83, 46, 99, 104);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 4:
        strcpy(p_name[player], "Charmander\0");
        p_getstats(p_lvl[player], player, 39, 52, 43, 50, 65);
        m_getmove(player, 90, 45, 35, 62);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 5:
        strcpy(p_name[player], "Charmeleon\0");
        p_getstats(p_lvl[player], player, 58, 64, 58, 65, 80);
        m_getmove(player, 35, 62, 98, 39);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 6:
        strcpy(p_name[player], "Charizard\0");
        p_getstats(p_lvl[player], player, 78, 84, 78, 85, 100);
        m_getmove(player, 32, 69, 39, 38);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 7:
        strcpy(p_name[player], "Squirtle\0");
        p_getstats(p_lvl[player], player, 44, 48, 65, 50, 43);
        m_getmove(player, 15, 119, 120, 130);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 8:
        strcpy(p_name[player], "Wartortle\0");
        p_getstats(p_lvl[player], player, 59, 63, 80, 65, 58);
        m_getmove(player, 15, 130, 132, 10);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 9:
        strcpy(p_name[player], "Blastoise\0");
        p_getstats(p_lvl[player], player, 79, 83, 100, 85, 78);
        m_getmove(player, 95, 132, 116, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 10:
        strcpy(p_name[player], "Caterpie\0");
        p_getstats(p_lvl[player], player, 45, 30, 35, 20, 45);
        m_getmove(player, 119, 111, 0, 0);
        p_type[player][0] = 5;
        p_type[player][1] = 0;
        break;
    case 11:
        strcpy(p_name[player], "Metapod\0");
        p_getstats(p_lvl[player], player, 50, 20, 55, 25, 30);
        m_getmove(player, 119, 111, 48, 0);
        p_type[player][0] = 5;
        p_type[player][1] = 0;
        break;
    case 12:
        strcpy(p_name[player], "Butterfree\0");
        p_getstats(p_lvl[player], player, 60, 45, 50, 80, 70);
        m_getmove(player, 48, 75, 99, 112);
        p_type[player][0] = 5;
        p_type[player][1] = 7;
        break;
    case 13:
        strcpy(p_name[player], "Weedle\0");
        p_getstats(p_lvl[player], player, 40, 35, 30, 20, 50);
        m_getmove(player, 76, 111, 0, 0);
        p_type[player][0] = 5;
        p_type[player][1] = 6;
        break;
    case 14:
        strcpy(p_name[player], "Kakuna\0");
        p_getstats(p_lvl[player], player, 45, 25, 50, 25, 35);
        m_getmove(player, 76, 111, 48, 0);
        p_type[player][0] = 5;
        p_type[player][1] = 6;
        break;
    case 15:
        strcpy(p_name[player], "Beedrill\0");
        p_getstats(p_lvl[player], player, 65, 80, 40, 45, 75);
        m_getmove(player, 127, 73, 23, 4);
        p_type[player][0] = 5;
        p_type[player][1] = 6;
        break;
    case 16:
        strcpy(p_name[player], "Pidgey\0");
        p_getstats(p_lvl[player], player, 40, 45, 40, 35, 56);
        m_getmove(player, 47, 89, 81, 131);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 17:
        strcpy(p_name[player], "Pidgeotto\0");
        p_getstats(p_lvl[player], player, 63, 60, 55, 50, 71);
        m_getmove(player, 81, 89, 131, 83);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 18:
        strcpy(p_name[player], "Pidgeot\0");
        p_getstats(p_lvl[player], player, 83, 80, 75, 70, 91);
        m_getmove(player, 89, 131, 83, 96);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 19:
        strcpy(p_name[player], "Rattata\0");
        p_getstats(p_lvl[player], player, 30, 56, 35, 25, 72);
        m_getmove(player, 119, 120, 81, 54);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 20:
        strcpy(p_name[player], "Raticate\0");
        p_getstats(p_lvl[player], player, 55, 81, 60, 50, 97);
        m_getmove(player, 81, 54, 114, 95);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 21:
        strcpy(p_name[player], "Spearow\0");
        p_getstats(p_lvl[player], player, 40, 60, 30, 31, 70);
        m_getmove(player, 72, 45, 62, 32);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 22:
        strcpy(p_name[player], "Fearow\0");
        p_getstats(p_lvl[player], player, 65, 90, 65, 61, 100);
        m_getmove(player, 72, 62, 32, 41);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 23:
        strcpy(p_name[player], "Ekans \0");//Snake
        p_getstats(p_lvl[player], player, 35, 60, 44, 40, 55);
        m_getmove(player, 133, 62, 76, 10);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 24:
        strcpy(p_name[player], "Arbok \0");//Kobra
        p_getstats(p_lvl[player], player, 60, 85, 69, 65, 80);
        m_getmove(player, 76, 10, 44, 2);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 25:
        strcpy(p_name[player], "Pikachu\0");
        p_getstats(p_lvl[player], player, 35, 55, 30, 50, 90);
        m_getmove(player, 124, 45, 125, 81);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 26:
        strcpy(p_name[player], "Raichu\0");
        p_getstats(p_lvl[player], player, 60, 90, 55, 90, 100);
        m_getmove(player, 124, 125, 122, 117);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 27:
        strcpy(p_name[player], "Sandshrew\0");
        p_getstats(p_lvl[player], player, 50, 75, 85, 30, 40);
        m_getmove(player, 90, 89, 98, 25);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 28:
        strcpy(p_name[player], "Sandslash\0");
        p_getstats(p_lvl[player], player, 75, 100, 110, 55, 65);
        m_getmove(player, 89, 98, 25, 33);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 29:
        strcpy(p_name[player], "Nidoran F\0");
        p_getstats(p_lvl[player], player, 55, 47, 52, 40, 41);
        m_getmove(player, 45, 119, 90, 76);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 30:
        strcpy(p_name[player], "Nidorina\0");
        p_getstats(p_lvl[player], player, 70, 62, 67, 55, 56);
        m_getmove(player, 76, 120, 10, 43);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 31:
        strcpy(p_name[player], "Nidoqueen\0");
        p_getstats(p_lvl[player], player, 90, 82, 87, 75, 76);
        m_getmove(player, 76, 12, 121, 110);
        p_type[player][0] = 6;
        p_type[player][1] = 9;
        break;
    case 32:
        strcpy(p_name[player], "Nidoran M\0");
        p_getstats(p_lvl[player], player, 46, 57, 40, 40, 50);
        m_getmove(player, 62, 119, 51, 76);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 33:
        strcpy(p_name[player], "Nidorino\0");
        p_getstats(p_lvl[player], player, 61, 72, 57, 55, 65);
        m_getmove(player, 51, 76, 12, 62);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 34:
        strcpy(p_name[player], "Nidoking\0");
        p_getstats(p_lvl[player], player, 81, 92, 77, 75, 85);
        m_getmove(player, 76, 51, 69, 95);
        p_type[player][0] = 6;
        p_type[player][1] = 9;
        break;
    case 35:
        strcpy(p_name[player], "Clefairy\0");
        p_getstats(p_lvl[player], player, 70, 45, 48, 60, 35);
        m_getmove(player, 77, 45, 94, 28);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 36:
        strcpy(p_name[player], "Clefable\0");
        p_getstats(p_lvl[player], player, 95, 70, 73, 85, 60);
        m_getmove(player, 94, 28, 53, 134);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 37:
        strcpy(p_name[player], "Vulpix\0");
        p_getstats(p_lvl[player], player, 38, 41, 40, 65, 65);
        m_getmove(player, 35, 120, 81, 19);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 38:
        strcpy(p_name[player], "Ninetales\0");
        p_getstats(p_lvl[player], player, 73, 76, 75, 100, 100);
        m_getmove(player, 19, 38, 36, 39);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 39:
        strcpy(p_name[player], "Jigglypuff\0");
        p_getstats(p_lvl[player], player, 115, 45, 20, 25, 20);
        m_getmove(player, 94, 77, 24, 85);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 40:
        strcpy(p_name[player], "Wigglytuff\0");
        p_getstats(p_lvl[player], player, 140, 70, 45, 50, 45);
        m_getmove(player, 94, 77, 28, 85);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 41:
        strcpy(p_name[player], "Zubat \0");
        p_getstats(p_lvl[player], player, 40, 45, 35, 40, 55);
        m_getmove(player, 61, 115, 10, 131);
        p_type[player][0] = 6;
        p_type[player][1] = 7;
        break;
    case 42:
        strcpy(p_name[player], "Golbat\0");
        p_getstats(p_lvl[player], player, 75, 80, 70, 75, 90);
        m_getmove(player, 61, 115, 91, 19);
        p_type[player][0] = 6;
        p_type[player][1] = 7;
        break;
    case 43:
        strcpy(p_name[player], "Oddish\0");
        p_getstats(p_lvl[player], player, 45, 50, 55, 75, 30);
        m_getmove(player, 1, 75, 112, 99);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 44:
        strcpy(p_name[player], "Gloom \0");
        p_getstats(p_lvl[player], player, 60, 65, 70, 85, 40);
        m_getmove(player, 1, 75, 99, 2);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 45:
        strcpy(p_name[player], "Vileplume\0");
        p_getstats(p_lvl[player], player, 75, 80, 85, 100, 50);
        m_getmove(player, 2, 75, 67, 104);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 46:
        strcpy(p_name[player], "Paras \0");
        p_getstats(p_lvl[player], player, 35, 70, 55, 55, 25);
        m_getmove(player, 90, 112, 61, 108);
        p_type[player][0] = 5;
        p_type[player][1] = 2;
        break;
    case 47:
        strcpy(p_name[player], "Parasect\0");
        p_getstats(p_lvl[player], player, 60, 95, 80, 80, 30);
        m_getmove(player, 61, 108, 96, 46);
        p_type[player][0] = 5;
        p_type[player][1] = 2;
        break;
    case 48:
        strcpy(p_name[player], "Venonat\0");
        p_getstats(p_lvl[player], player, 60, 55, 50, 40, 45);
        m_getmove(player, 119, 75, 112, 61);
        p_type[player][0] = 5;
        p_type[player][1] = 6;
        break;
    case 49:
        strcpy(p_name[player], "Venomoth\0");
        p_getstats(p_lvl[player], player, 70, 65, 60, 90, 90);
        m_getmove(player, 61, 75, 99, 78);
        p_type[player][0] = 5;
        p_type[player][1] = 6;
        break;
    case 50:
        strcpy(p_name[player], "Diglett\0");
        p_getstats(p_lvl[player], player, 10, 55, 25, 45, 95);
        m_getmove(player, 90, 45, 25, 89);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 51:
        strcpy(p_name[player], "Dugtrio\0");
        p_getstats(p_lvl[player], player, 35, 80, 50, 70, 120);
        m_getmove(player, 25, 89, 98, 33);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 52:
        strcpy(p_name[player], "Meowth\0");
        p_getstats(p_lvl[player], player, 40, 45, 35, 40, 90);
        m_getmove(player, 90, 45, 10, 71);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 53:
        strcpy(p_name[player], "Persian\0");
        p_getstats(p_lvl[player], player, 65, 70, 60, 65, 115);
        m_getmove(player, 71, 91, 98, 43);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 54:
        strcpy(p_name[player], "Psyduck\0");
        p_getstats(p_lvl[player], player, 50, 52, 48, 50, 55);
        m_getmove(player, 90, 120, 20, 43);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 55:
        strcpy(p_name[player], "Golduck\0");
        p_getstats(p_lvl[player], player, 80, 82, 78, 80, 85);
        m_getmove(player, 20, 43, 52, 116);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 56:
        strcpy(p_name[player], "Mankey\0");
        p_getstats(p_lvl[player], player, 40, 80, 35, 35, 70);
        m_getmove(player, 90, 62, 59, 43);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 57:
        strcpy(p_name[player], "Primeape\0");
        p_getstats(p_lvl[player], player, 65, 105, 60, 60, 95);
        m_getmove(player, 59, 43, 92, 113);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 58:
        strcpy(p_name[player], "Growlithe\0");
        p_getstats(p_lvl[player], player, 55, 70, 45, 50, 60);
        m_getmove(player, 10, 35, 62, 121);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 59:
        strcpy(p_name[player], "Arcanine\0");
        p_getstats(p_lvl[player], player, 90, 110, 80, 80, 95);
        m_getmove(player, 121, 4, 39, 36);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 60:
        strcpy(p_name[player], "Poliwag\0");
        p_getstats(p_lvl[player], player, 40, 50, 40, 40, 90);
        m_getmove(player, 15, 55, 130, 28);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 61:
        strcpy(p_name[player], "Poliwhirl\0");
        p_getstats(p_lvl[player], player, 65, 65, 65, 50, 90);
        m_getmove(player, 55, 130, 12, 16);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 62:
        strcpy(p_name[player], "Poliwrath\0");
        p_getstats(p_lvl[player], player, 90, 85, 95, 70, 70);
        m_getmove(player, 55, 130, 52, 16);
        p_type[player][0] = 4;
        p_type[player][1] = 11;
        break;
    case 63:
        strcpy(p_name[player], "Abra  \0");
        p_getstats(p_lvl[player], player, 25, 20, 15, 105, 90);
        m_getmove(player, 78, 0, 0, 0);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 64:
        strcpy(p_name[player], "Kadabra\0");
        p_getstats(p_lvl[player], player, 40, 35, 30, 120, 105);
        m_getmove(player, 20, 78, 79, 84);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 65:
        strcpy(p_name[player], "Alakazam\0");
        p_getstats(p_lvl[player], player, 55, 50, 45, 135, 120);
        m_getmove(player, 20, 80, 79, 60);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 66:
        strcpy(p_name[player], "Machop\0");
        p_getstats(p_lvl[player], player, 70, 80, 50, 35, 35);
        m_getmove(player, 59, 65, 62, 92);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 67:
        strcpy(p_name[player], "Machoke\0");
        p_getstats(p_lvl[player], player, 80, 100, 70, 50, 45);
        m_getmove(player, 59, 65, 92, 113);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 68:
        strcpy(p_name[player], "Machamp\0");
        p_getstats(p_lvl[player], player, 90, 130, 80, 65, 55);
        m_getmove(player, 69, 65, 92, 113);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 69:
        strcpy(p_name[player], "Bellsprout\0");
        p_getstats(p_lvl[player], player, 50, 75, 35, 70, 40);
        m_getmove(player, 128, 46, 75, 133);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 70:
        strcpy(p_name[player], "Weepinbell\0");
        p_getstats(p_lvl[player], player, 65, 90, 50, 85, 55);
        m_getmove(player, 133, 75, 99, 112);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 71:
        strcpy(p_name[player], "Victreebel\0");
        p_getstats(p_lvl[player], player, 80, 105, 65, 100, 70);
        m_getmove(player, 112, 2, 82, 97);
        p_type[player][0] = 2;
        p_type[player][1] = 6;
        break;
    case 72:
        strcpy(p_name[player], "Tentacool\0");
        p_getstats(p_lvl[player], player, 40, 40, 35, 100, 70);
        m_getmove(player, 2, 115, 133, 76);
        p_type[player][0] = 4;
        p_type[player][1] = 6;
        break;
    case 73:
        strcpy(p_name[player], "Tentacruel\0");
        p_getstats(p_lvl[player], player, 80, 70, 65, 120, 100);
        m_getmove(player, 2, 130, 21, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 6;
        break;
    case 74:
        strcpy(p_name[player], "Geodude\0");
        p_getstats(p_lvl[player], player, 40, 80, 100, 30, 20);
        m_getmove(player, 119, 24, 87, 0);
        p_type[player][0] = 10;
        p_type[player][1] = 9;
        break;
    case 75:
        strcpy(p_name[player], "Graveler\0");
        p_getstats(p_lvl[player], player, 55, 95, 115, 45, 35);
        m_getmove(player, 119, 87, 48, 86);
        p_type[player][0] = 10;
        p_type[player][1] = 9;
        break;
    case 76:
        strcpy(p_name[player], "Golem \0");
        p_getstats(p_lvl[player], player, 80, 110, 130, 55, 45);
        m_getmove(player, 87, 48, 86, 33);
        p_type[player][0] = 10;
        p_type[player][1] = 9;
        break;
    case 77:
        strcpy(p_name[player], "Ponyta\0");
        p_getstats(p_lvl[player], player, 50, 85, 55, 65, 90);
        m_getmove(player, 35, 120, 109, 45);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 78:
        strcpy(p_name[player], "Rapidash\0");
        p_getstats(p_lvl[player], player, 65, 100, 70, 80, 105);
        m_getmove(player, 109, 38, 121, 4);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 79:
        strcpy(p_name[player], "Slowpoke\0");
        p_getstats(p_lvl[player], player, 90, 65, 65, 40, 15);
        m_getmove(player, 20, 49, 45, 130);
        p_type[player][0] = 4;
        p_type[player][1] = 12;
        break;
    case 80:
        strcpy(p_name[player], "Slowbro\0");
        p_getstats(p_lvl[player], player, 95, 75, 110, 80, 30);
        m_getmove(player, 130, 132, 5, 79);
        p_type[player][0] = 4;
        p_type[player][1] = 12;
        break;
    case 81:
        strcpy(p_name[player], "Magnemite\0");
        p_getstats(p_lvl[player], player, 25, 35, 70, 95, 45);
        m_getmove(player, 119, 105, 124, 115);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 82:
        strcpy(p_name[player], "Magneton\0");
        p_getstats(p_lvl[player], player, 50, 60, 95, 120, 70);
        m_getmove(player, 124, 125, 98, 91);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 83:
        strcpy(p_name[player], "Farfetch'd\0");
        p_getstats(p_lvl[player], player, 52, 65, 55, 58, 60);
        m_getmove(player, 72, 89, 98, 118);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 84:
        strcpy(p_name[player], "Doduo \0");
        p_getstats(p_lvl[player], player, 35, 85, 45, 35, 75);
        m_getmove(player, 72, 32, 29, 45);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 85:
        strcpy(p_name[player], "Dodrio\0");
        p_getstats(p_lvl[player], player, 60, 110, 70, 60, 100);
        m_getmove(player, 32, 29, 134, 4);
        p_type[player][0] = 1;
        p_type[player][1] = 7;
        break;
    case 86:
        strcpy(p_name[player], "Seel  \0");//Seal. O nome menos criativo do jogo.
        p_getstats(p_lvl[player], player, 65, 45, 55, 70, 45);
        m_getmove(player, 49, 45, 6, 85);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 87:
        strcpy(p_name[player], "Dewgong\0");
        p_getstats(p_lvl[player], player, 90, 70, 80, 95, 70);
        m_getmove(player, 6, 85, 121, 56);
        p_type[player][0] = 4;
        p_type[player][1] = 13;
        break;
    case 88:
        strcpy(p_name[player], "Grimer\0");
        p_getstats(p_lvl[player], player, 80, 80, 50, 40, 25);
        m_getmove(player, 77, 74, 100, 12);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 89:
        strcpy(p_name[player], "Muk   \0");
        p_getstats(p_lvl[player], player, 105, 105, 75, 65, 50);
        m_getmove(player, 74, 100, 3, 12);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 90:
        strcpy(p_name[player], "Shellder\0");
        p_getstats(p_lvl[player], player, 30, 65, 100, 45, 40);
        m_getmove(player, 119, 132, 115, 17);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 91:
        strcpy(p_name[player], "Cloyster\0");
        p_getstats(p_lvl[player], player, 50, 95, 180, 85, 70);
        m_getmove(player, 132, 17, 6, 106);
        p_type[player][0] = 4;
        p_type[player][1] = 13;
        break;
    case 92:
        strcpy(p_name[player], "Gastly\0");
        p_getstats(p_lvl[player], player, 30, 35, 30, 100, 80);
        m_getmove(player, 63, 19, 70, 55);
        p_type[player][0] = 14;
        p_type[player][1] = 6;
        break;
    case 93:
        strcpy(p_name[player], "Haunter\0");
        p_getstats(p_lvl[player], player, 45, 50, 45, 115, 95);
        m_getmove(player, 63, 19, 55, 31);
        p_type[player][0] = 14;
        p_type[player][1] = 6;
        break;
    case 94:
        strcpy(p_name[player], "Gengar\0");
        p_getstats(p_lvl[player], player, 60, 65, 60, 130, 110);
        m_getmove(player, 19, 70, 55, 31);
        p_type[player][0] = 14;
        p_type[player][1] = 6;
        break;
    case 95:
        strcpy(p_name[player], "Onix  \0");
        p_getstats(p_lvl[player], player, 35, 45, 160, 30, 70);
        m_getmove(player, 119, 91, 87, 97);
        p_type[player][0] = 10;
        p_type[player][1] = 9;
        break;
    case 96:
        strcpy(p_name[player], "Drowzee\0");
        p_getstats(p_lvl[player], player, 60, 48, 45, 90, 42);
        m_getmove(player, 77, 55, 20, 49);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 97:
        strcpy(p_name[player], "Hypno \0");
        p_getstats(p_lvl[player], player, 85, 73, 70, 115, 67);
        m_getmove(player, 20, 74, 79, 66);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 98:
        strcpy(p_name[player], "Krabby\0");
        p_getstats(p_lvl[player], player, 30, 105, 90, 25, 50);
        m_getmove(player, 15, 62, 129, 109);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 99:
        strcpy(p_name[player], "Kingler\0");
        p_getstats(p_lvl[player], player, 55, 130, 115, 50, 75);
        m_getmove(player, 129, 109, 22, 48);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 100:
        strcpy(p_name[player], "Voltorb\0");
        p_getstats(p_lvl[player], player, 40, 30, 50, 55, 100);
        m_getmove(player, 119, 91, 105, 117);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 101:
        strcpy(p_name[player], "Electrode\0");
        p_getstats(p_lvl[player], player, 60, 50, 70, 80, 140);
        m_getmove(player, 122, 125, 126, 105);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 102:
        strcpy(p_name[player], "Exeggcute\0");
        p_getstats(p_lvl[player], player, 60, 40, 80, 60, 40);
        m_getmove(player, 7, 55, 112, 34);
        p_type[player][0] = 2;
        p_type[player][1] = 12;
        break;
    case 103:
        strcpy(p_name[player], "Exeggutor\0");
        p_getstats(p_lvl[player], player, 95, 95, 85, 125, 55);
        m_getmove(player, 7, 55, 109, 104);
        p_type[player][0] = 2;
        p_type[player][1] = 12;
        break;
    case 104:
        strcpy(p_name[player], "Cubone\0");
        p_getstats(p_lvl[player], player, 50, 50, 95, 40, 35);
        m_getmove(player, 45, 13, 49, 62);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 105:
        strcpy(p_name[player], "Marowak\0");
        p_getstats(p_lvl[player], player, 60, 80, 110, 50, 45);
        m_getmove(player, 13, 49, 62, 14);
        p_type[player][0] = 9;
        p_type[player][1] = 0;
        break;
    case 106:
        strcpy(p_name[player], "Hitmonlee\0");
        p_getstats(p_lvl[player], player, 50, 120, 53, 35, 87);
        m_getmove(player, 27, 50, 88, 68);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 107:
        strcpy(p_name[player], "Hitmonchan\0");
        p_getstats(p_lvl[player], player, 50, 105, 79, 35, 76);
        m_getmove(player, 18, 37, 57, 123);
        p_type[player][0] = 11;
        p_type[player][1] = 0;
        break;
    case 108:
        strcpy(p_name[player], "Lickitung\0");
        p_getstats(p_lvl[player], player, 90, 55, 75, 60, 30);
        m_getmove(player, 133, 109, 115, 24);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 109:
        strcpy(p_name[player], "Koffing\0");
        p_getstats(p_lvl[player], player, 40, 65, 95, 60, 55);
        m_getmove(player, 119, 101, 100, 102);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 110:
        strcpy(p_name[player], "Weezing\0");
        p_getstats(p_lvl[player], player, 65, 90, 120, 85, 60);
        m_getmove(player, 101, 100, 102, 74);
        p_type[player][0] = 6;
        p_type[player][1] = 0;
        break;
    case 111:
        strcpy(p_name[player], "Rhyhorn\0");
        p_getstats(p_lvl[player], player, 80, 85, 95, 30, 25);
        m_getmove(player, 51, 109, 120, 33);
        p_type[player][0] = 9;
        p_type[player][1] = 10;
        break;
    case 112:
        strcpy(p_name[player], "Rhydon\0");
        p_getstats(p_lvl[player], player, 105, 130, 120, 45, 40);
        m_getmove(player, 51, 86, 121, 33);
        p_type[player][0] = 9;
        p_type[player][1] = 10;
        break;
    case 113:
        strcpy(p_name[player], "Chansey\0");
        p_getstats(p_lvl[player], player, 250, 5, 5, 105, 50);
        m_getmove(player, 109, 28, 34, 103);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 114:
        strcpy(p_name[player], "Tangela\0");
        p_getstats(p_lvl[player], player, 65, 55, 115, 100, 60);
        m_getmove(player, 21, 1, 128, 75);
        p_type[player][0] = 2;
        p_type[player][1] = 0;
        break;
    case 115:
        strcpy(p_name[player], "Kangaskhan\0");
        p_getstats(p_lvl[player], player, 105, 95, 80, 60, 90);
        m_getmove(player, 18, 10, 120, 26);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 116:
        strcpy(p_name[player], "Horsea\0");
        p_getstats(p_lvl[player], player, 30, 40, 70, 70, 60);
        m_getmove(player, 15, 102, 62, 130);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 117:
        strcpy(p_name[player], "Seadra\0");
        p_getstats(p_lvl[player], player, 55, 65, 95, 95, 85);
        m_getmove(player, 102, 130, 4, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 118:
        strcpy(p_name[player], "Goldeen\0");
        p_getstats(p_lvl[player], player, 45, 67, 60, 50, 63);
        m_getmove(player, 72, 120, 115, 51);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 119:
        strcpy(p_name[player], "Seaking\0");
        p_getstats(p_lvl[player], player, 80, 92, 65, 80, 68);
        m_getmove(player, 51, 16, 116, 4);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 120:
        strcpy(p_name[player], "Staryu\0");
        p_getstats(p_lvl[player], player, 30, 45, 55, 70, 85);
        m_getmove(player, 119, 130, 48, 84);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 121:
        strcpy(p_name[player], "Starmie\0");
        p_getstats(p_lvl[player], player, 60, 75, 85, 100, 115);
        m_getmove(player, 98, 130, 84, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 12;
        break;
    case 122:
        strcpy(p_name[player], "Mr. Mime\0");
        p_getstats(p_lvl[player], player, 40, 45, 65, 100, 90);
        m_getmove(player, 20, 8, 28, 66);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 123:
        strcpy(p_name[player], "Scyther\0");
        p_getstats(p_lvl[player], player, 70, 110, 80, 55, 105);
        m_getmove(player, 81, 62, 118, 98);
        p_type[player][0] = 5;
        p_type[player][1] = 7;
        break;
    case 124:
        strcpy(p_name[player], "Jynx  \0");
        p_getstats(p_lvl[player], player, 65, 50, 35, 95, 95);
        m_getmove(player, 77, 64, 63, 28);
        p_type[player][0] = 13;
        p_type[player][1] = 12;
        break;
    case 125:
        strcpy(p_name[player], "Electabuzz\0");
        p_getstats(p_lvl[player], player, 65, 83, 57, 85, 105);
        m_getmove(player, 81, 124, 123, 122);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 126:
        strcpy(p_name[player], "Magmar\0");
        p_getstats(p_lvl[player], player, 65, 95, 57, 100, 93);
        m_getmove(player, 19, 37, 101, 39);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 127:
        strcpy(p_name[player], "Pinsir\0");
        p_getstats(p_lvl[player], player, 65, 120, 100, 55, 85);
        m_getmove(player, 129, 92, 98, 118);
        p_type[player][0] = 5;
        p_type[player][1] = 0;
        break;
    case 128:
        strcpy(p_name[player], "Tauros\0");
        p_getstats(p_lvl[player], player, 75, 100, 95, 70, 110);
        m_getmove(player, 119, 109, 120, 121);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 129:
        strcpy(p_name[player], "Magikarp\0");
        p_getstats(p_lvl[player], player, 20, 10, 55, 20, 80);
        m_getmove(player, 107, 119, 15, 0);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 130:
        strcpy(p_name[player], "Gyarados\0");
        p_getstats(p_lvl[player], player, 95, 125, 79, 100, 81);
        m_getmove(player, 10, 30, 53, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 7;
        break;
    case 131:
        strcpy(p_name[player], "Lapras\0");
        p_getstats(p_lvl[player], player, 130, 85, 80, 95, 60);
        m_getmove(player, 130, 12, 52, 56);
        p_type[player][0] = 4;
        p_type[player][1] = 13;
        break;
    case 132:
        strcpy(p_name[player], "Ditto \0");
        p_getstats(p_lvl[player], player, 48, 48, 48, 48, 48);
        m_getmove(player, 134, 53, 42, 0);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 133:
        strcpy(p_name[player], "Eevee \0");
        p_getstats(p_lvl[player], player, 55, 55, 50, 65, 55);
        m_getmove(player, 119, 81, 89, 120);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 134:
        strcpy(p_name[player], "Vaporeon\0");
        p_getstats(p_lvl[player], player, 130, 65, 60, 110, 65);
        m_getmove(player, 81, 6, 130, 52);
        p_type[player][0] = 4;
        p_type[player][1] = 0;
        break;
    case 135:
        strcpy(p_name[player], "Jolteon\0");
        p_getstats(p_lvl[player], player, 65, 65, 60, 110, 130);
        m_getmove(player, 81, 124, 125, 122);
        p_type[player][0] = 8;
        p_type[player][1] = 0;
        break;
    case 136:
        strcpy(p_name[player], "Flareon\0");
        p_getstats(p_lvl[player], player, 65, 130, 60, 110, 65);
        m_getmove(player, 81, 35, 38, 39);
        p_type[player][0] = 3;
        p_type[player][1] = 0;
        break;
    case 137:
        strcpy(p_name[player], "Porygon\0");
        p_getstats(p_lvl[player], player, 65, 60, 70, 75, 40);
        m_getmove(player, 119, 93, 78, 134);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 138:
        strcpy(p_name[player], "Omanyte\0");
        p_getstats(p_lvl[player], player, 35, 40, 100, 90, 35);
        m_getmove(player, 130, 132, 51, 62);
        p_type[player][0] = 10;
        p_type[player][1] = 4;
        break;
    case 139:
        strcpy(p_name[player], "Omastar\0");
        p_getstats(p_lvl[player], player, 70, 60, 125, 115, 55);
        m_getmove(player, 51, 16, 106, 52);
        p_type[player][0] = 10;
        p_type[player][1] = 4;
        break;
    case 140:
        strcpy(p_name[player], "Kabuto\0");
        p_getstats(p_lvl[player], player, 30, 80, 90, 45, 55);
        m_getmove(player, 90, 48, 1, 98);
        p_type[player][0] = 10;
        p_type[player][1] = 4;
        break;
    case 141:
        strcpy(p_name[player], "Kabutops\0");
        p_getstats(p_lvl[player], player, 60, 115, 105, 70, 80);
        m_getmove(player, 1, 98, 62, 52);
        p_type[player][0] = 10;
        p_type[player][1] = 4;
        break;
    case 142:
        strcpy(p_name[player], "Aerodactyl\0");
        p_getstats(p_lvl[player], player, 80, 105, 65, 60, 130);
        m_getmove(player, 131, 10, 121, 53);
        p_type[player][0] = 10;
        p_type[player][1] = 7;
        break;
    case 143:
        strcpy(p_name[player], "Snorlax\0");
        p_getstats(p_lvl[player], player, 160, 110, 65, 65, 30);
        m_getmove(player, 5, 12, 85, 53);
        p_type[player][0] = 1;
        p_type[player][1] = 0;
        break;
    case 144:
        strcpy(p_name[player], "Articuno\0");
        p_getstats(p_lvl[player], player, 90, 85, 100, 125, 85);
        m_getmove(player, 72, 56, 6, 11);
        p_type[player][0] = 13;
        p_type[player][1] = 7;
        break;
    case 145:
        strcpy(p_name[player], "Zapdos\0");
        p_getstats(p_lvl[player], player, 90, 90, 85, 125, 100);
        m_getmove(player, 124, 32, 122, 96);
        p_type[player][0] = 8;
        p_type[player][1] = 7;
        break;
    case 146:
        strcpy(p_name[player], "Moltres\0");
        p_getstats(p_lvl[player], player, 90, 100, 90, 125, 90);
        m_getmove(player, 72, 38, 36, 96);
        p_type[player][0] = 3;
        p_type[player][1] = 7;
        break;
    case 147:
        strcpy(p_name[player], "Dratini\0");
        p_getstats(p_lvl[player], player, 41, 64, 45, 50, 50);
        m_getmove(player, 133, 62, 125, 4);
        p_type[player][0] = 15;
        p_type[player][1] = 0;
        break;
    case 148:
        strcpy(p_name[player], "Dragonair\0");
        p_getstats(p_lvl[player], player, 61, 84, 65, 70, 70);
        m_getmove(player, 125, 4, 97, 30);
        p_type[player][0] = 15;
        p_type[player][1] = 0;
        break;
    case 149:
        strcpy(p_name[player], "Dragonite\0");
        p_getstats(p_lvl[player], player, 91, 134, 95, 100, 80);
        m_getmove(player, 97, 30, 53, 36);
        p_type[player][0] = 15;
        p_type[player][1] = 7;
        break;
    case 150:
        strcpy(p_name[player], "Mewtwo\0");
        p_getstats(p_lvl[player], player, 106, 110, 90, 154, 130);
        m_getmove(player, 20, 117, 79, 5);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    case 151:
        strcpy(p_name[player], "Mew   \0");
        p_getstats(p_lvl[player], player, 100, 100, 100, 100, 100);
        m_getmove(player, 77, 69, 79, 5);
        p_type[player][0] = 12;
        p_type[player][1] = 0;
        break;
    default:
        strcpy(p_name[player], "MissingNO.\0");
        p_lvl[player]=139;
        p_getstats(p_lvl[player], player, 33, 136, 0, 29, 6);
        m_getmove(player, 130, 130, 96, 41);
        p_type[player][0] = 0;
        p_type[player][1] = 1;
        break;
    }
}