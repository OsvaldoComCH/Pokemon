#include "functions.c"
/*==================Tipos===================
0 - Não existe(segundo tipo de pokémon puro)
1 - Normal      2 - Grass       3 - Fire
4 - Water       5 - Bug         6 - Poison
7 - Flying      8 - Electric    9 - Ground
10 - Rock       11 - Fighting   12 - Psychic
13 - Ice        14 - Ghost      15 - Dragon
============================================*/
float t_effect(int player, int moven, int target)
{
    // Calcula se o movimento será forte ou fraco contra o alvo
    float mult = 1;
    for (int x = 0; x <= 1; x++)
    {
        int y = p_type[target][x];
        switch (m_type[player][moven])
        {
        case 1:
            if (y==14){mult = 0;}
            if (y==10){mult /= 2;}
            break;
        case 2:
            if (y==2||y==3||y==5||y==6||y==7||y==15){mult /= 2;}
            if (y==4||y==9||y==10){mult *= 2;}
            break;
        case 3:
            if (y==3||y==4||y==10||y==15){mult /= 2;}
            if (y==2||y==5||y==15){mult *= 2;}
            break;
        case 4:
            if (y==2||y==4||y==15){mult /= 2;}
            if (y==3||y==9||y==10){mult *= 2;}
            break;
        case 5:
            if (y==3||y==6||y==7||y==11||y==14){mult /= 2;}
            if (y==2||y==12){mult *= 2;}
            break;
        case 6:
            if (y==6||y==9||y==10||y==14){mult /= 2;}
            if (y==2){mult *= 2;}
            break;
        case 7:
            if (y==8||y==10){mult /= 2;}
            if (y==2||y==5||y==11){mult *= 2;}
            break;
        case 8:
            if (y==10){mult = 0;}
            if (y==2||y==8||y==15){mult /= 2;}
            if (y==4||y==7){mult *= 2;}
            break;
        case 9:
            if (y==7){mult = 0;}
            if (y==2||y==5){mult /= 2;}
            if (y==3||y==6||y==8||y==10){mult *= 2;}
            break;
        case 10:
            if (y==9||y==11){mult /= 2;}
            if (y==3||y==5||y==7||y==13){mult *= 2;}
            break;
        case 11:
            if (y==14){mult = 0;}
            if (y==5||y==6||y==7||y==12){mult /= 2;}
            if (y==1||y==10||y==13){mult *= 2;}
            break;
        case 12:
            if (y==12){mult /= 2;}
            if (y==6||y==11){mult *= 2;}
            break;
        case 13:
            if (y==3||y==4||y==13){mult /= 2;}
            if (y==2||y==7||y==9||y==15){mult *= 2;}
            break;
        case 14:
            if (y==1){mult = 0;}
            if (y==12||y==14){mult *= 2;}
            break;
        case 15:
            if (y==15){mult *= 2;}
            break;
        default:
            break;
        }
    }
    return mult;
}
float t_stab(int player, int moven)
{
    // Bonus de ataque aplicado se o tipo do movimento for igual a um dos do pokémon
    if (p_type[player][0] || p_type[player][1] == m_type[player][moven])
    {
        return 1.5;
    }
    return 1;
}