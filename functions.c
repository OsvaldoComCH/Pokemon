#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
char p_name[2][11];//Nome do Pokémon[player][name]
float p_lvl[2]; //Nível do Pokémon
float p_maxhp[2];//HP máximo do Pokémon
float p_hp[2];//HP atual do Pokémon
float p_atk[2];//Ataque do Pokémon
float p_def[2];//Defesa do Pokémon
float p_spd[2];//Velocidade do Pokémon
float p_sp[2];//Special do Pokémon
int p_type[2][2];//Tipos do pokémon
int p_lastmove[2]={0,0};//Ultimo movimento usado
int p_elevation[2]={0,0};//0-Chão, 1-Ar, 2-Enterrado
//Modificadores são multiplicadores extras aplicados a stats (ex: 0.1 = +10%)
int p_atkmod[2]={0,0};//Modificador de Ataque
int p_defmod[2]={0,0};//Modificador de Defesa
int p_spdmod[2]={0,0};//Modificador de Velocidade
int p_spmod[2]={0,0};//Modificador de Special
int p_accmod[2]={0,0};//Modificador de Precisão
//Efeitos de Status binários(0-não/1-sim)
int p_statusbrn[2]={0,0};//Burn
int p_statusfrz[2]={0,0};//Freeze
int p_statuspar[2]={0,0};//Paralysis
int p_statuspsn[2]={0,0};//Poison
//Efeitos de Status com limite de tempo
int p_statusslp[2]={0,0};//Sleep
int p_statuscon[2]={0,0};//Confusion
//Matrizes [player][moven]
int m_moveid[2][4]={0,0,0,0,0,0,0,0};//Movimentos
char m_name[2][4][15];//Nome do movimento [player][moven][name]
int m_dealdamage[2][4]={0,0,0,0,0,0,0,0};//Usar o calculo de dano (0-Não, 1-Sim)
int m_turns[2]={0,0};//Turnos de ataque
float m_power[2][4]={0,0,0,0,0,0,0,0};//Força do movimento
float m_accuracy[2][4]={0,0,0,0,0,0,0,0};//Precisão do movimento
int m_type[2][4]={0,0,0,0,0,0,0,0};//Tipo do movimento
int m_cat[2][4]={0,0,0,0,0,0,0,0};//Categoria do movimento(0-Physical, 1-Special, 2-Status)
int m_crit[2][4]={0,0,0,0,0,0,0,0};//Indica se o movimento tem chance alta de crítico
int rng1(int num, int den)
{
    if(rand()%den < num)
    {
        return 1;
    }
    return 0;
}
float rng2(int den)
{
    return (rand() % den) + 1;
}
void showstats()
{
    Sleep(2500);
    system("cls");
    printf("Usuario:\t\t\t\t\tMaquina:");
    printf("\n%s lv%.0f      \t\t\t\t%s lv%.0f", p_name[0], p_lvl[0], p_name[1], p_lvl[1]);
    printf("\nHealth: %.0f/%.0f\t\t\t\t\tHealth: %.0f/%.0f", p_hp[0], p_maxhp[0], p_hp[1], p_maxhp[1]);
}
float crit(int player, int moven)
{
    return 1 + rng1((p_spd[player]/2)*(1+m_crit[player][moven]*7), 256);
}
void roundhp(int player)
{
    if(p_hp[player]<0){p_hp[player]=0;}
    if(p_hp[player]>p_maxhp[player]){p_hp[player]=p_maxhp[player];}
}
float statmod(int mod)
{
    if(mod>=0)
    {
        return (2+mod)/2;
    }
    return 2/(2+mod);
}
int checkfaint()
{
    if(p_hp[0]>0 && p_hp[1]>0)
    {
        return 0;
    }
    if(p_hp[0]==0)
    {
        printf("\n%s desmaiou.", p_name[0]);
    }
    if(p_hp[1]==0)
    {
        printf("\n%s desmaiou.", p_name[1]);
    }
    return 1;
}