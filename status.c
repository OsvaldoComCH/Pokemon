#include "types.c"
void s_brnstart(int player)
{
    if(p_type[player][0] && p_type[player][1]!=3)
    {
        p_statusbrn[player]=1;
        p_atkmod[player]-=2;
        if(p_atkmod[player]<-6){p_atkmod[player]=-6;}
        Sleep(2000);
        printf("\n%s pegou fogo.", p_name[player]);
    }
}
void s_parstart(int player)
{
    if(p_type[player][0] && p_type[player][1]!=8)
    {
        p_statuspar[player] = 1;
        p_spdmod[player]-=6;
        if(p_spdmod[player]<-6){p_spdmod[player]=-6;}
        Sleep(2000);
        printf("\n%s foi paralisado.", p_name[player]);
    }
}
void s_constart(int player)
{
    p_statuscon[player] = rng2(4)+1;
    Sleep(2000);
    printf("\n%s ficou confuso.", p_name[player]);
}
int s_con(int player)
{
    p_statuscon[player]--;
    if(p_statuscon[player]==0)
    {
        printf("\n%s nao esta mais confuso.", p_name[player]);
        Sleep(2000);
        return 0;
    }
    printf("\n%s esta confuso.", p_name[player]);
    if(rng1(1, 2)==1)
    {
        int damage;
        damage = (2*p_lvl[player]/5+2)*40
        *(p_atk[player]*statmod(p_atkmod[player]))/(p_def[player]*statmod(p_defmod[player]))/50+2;
        p_hp[player]-=damage;
        roundhp(player);
        Sleep(2000);
        showstats();
        printf("\n%s se acertou na confusao.", p_name[player]);
        return 1;
    }
    Sleep(2000);
    return 0;
}
void s_slpstart(int player)
{
    p_statusslp[player] = rng2(2)+1;
    Sleep(2000);
    printf("\n%s dormiu.", p_name[player]);
}
int s_slp(int player)
{
    p_statusslp[player]--;
    if(p_statusslp[player]==0)
    {
        printf("\n%s acordou.", p_name[player]);
        Sleep(2000);
        return 0;
    }
    printf("\n%s esta dormindo.", p_name[player]);
    Sleep(2000);
    return 1;
}
void s_frzstart(int player)
{
    if(p_type[player][0] && p_type[player][1]!=13)
    {
        p_statusfrz[player] = 1;
        Sleep(2000);
        printf("\n%s foi congelado.", p_name[player]);
    }
}
void s_psnstart(int player)
{
    if(p_type[player][0] && p_type[player][1]!=6)
    {
        p_statuspsn[player]=1;
        Sleep(2000);
        printf("\n%s foi envenenado.", p_name[player]);
    }
}