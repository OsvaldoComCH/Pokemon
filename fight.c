#include "moves.c"
int flinch;
int damagecalc(int player, int moven, int target, float typeeffect, float critical)
{
    int damage;
    if(m_cat[player][moven] == 0)
    {
        //Essa equação é tão grande que ocupa quatro linhas
        damage = ((2*p_lvl[player]*critical/5+2)*m_power[player][moven]
        *(p_atk[player]*statmod(p_atkmod[player]))/(p_def[target]*statmod(p_defmod[target]))/50+2)
        *t_stab(player, moven)
        *typeeffect*((rng2(38)+217)/255);
    }
    if(m_cat[player][moven] == 1)
    {
        damage = ((2*p_lvl[player]*critical/5+2)*m_power[player][moven]
        *(p_sp[player]*statmod(p_spmod[player]))/(p_sp[target]*statmod(p_spmod[target]))/50+2)
        *t_stab(player, moven)
        *typeeffect*((rng2(38)+217)/255);
    }
    return damage;
}
/*
0:atk-(t) 1:atk+(p) 2:def-(t) 3:def+(p)
4:spd-(t) 5:spd+(p) 6:sp-(t) 7:sp+(p)
8:abs(t) 9:acc-(t)
*/
void specialtext(int textid, int player)
{
    Sleep(2000);
    switch (textid)
    {
    case 0:
        printf("\nO ataque de %s caiu.", p_name[player]);
        break;
    case 1:
        printf("\nO ataque de %s subiu.", p_name[player]);
        break;
    case 2:
        printf("\nA defesa de %s caiu.", p_name[player]);
        break;
    case 3:
        printf("\nA defesa de %s subiu.", p_name[player]);
        break;
    case 4:
        printf("\nA velocidade de %s caiu.", p_name[player]);
        break;
    case 5:
        printf("\nA velocidade de %s subiu.", p_name[player]);
        break;
    case 6:
        printf("\nO special de %s caiu.", p_name[player]);
        break;
    case 7:
        printf("\nO special de %s subiu.", p_name[player]);
        break;
    case 8:
        printf("\n%s teve sua energia absorvida.", p_name[player]);
        showstats();
        printf("\n%s teve sua energia absorvida.", p_name[player]);
        break;
    case 9:
        printf("\nA precisao de %s caiu.", p_name[player]);
        break;
    default:
        break;
    }
}
void m_effects(int player, int moven, int target, int damage)
{
//Efeitos especiais dos ataques
    float typeeffect = t_effect(player, moven, target);
    switch (m_moveid[player][moven])
    {
    case 1:
    case 61:
    case 67:
        p_hp[player]+=damage/2;
        roundhp(player);
        specialtext(8, target);
        break;
    case 2:
        if(p_defmod[target]>-6 && rng1(1, 3)==1)
        {
            p_defmod[target]-=1;
            specialtext(2, target);
        }
        break;
    case 3:
    case 8:
        if(p_defmod[player]==6)
        {
            printf("\nO ataque falhou");
            return;
        }
        p_defmod[player]+=2;
        if(p_defmod[player]>6){p_defmod[player]=6;}
        specialtext(3, player);
        break;
    case 4:
        if(p_spdmod[player]==6)
        {
            printf("\nO ataque falhou");
            return;
        }
        p_spdmod[player]+=2;
        if(p_spdmod[player]>6){p_spdmod[player]=6;}
        specialtext(5, player);
        break;
    case 5:
        if(p_spmod[player]==6)
        {
            printf("\nO ataque falhou");
            return;
        }
        p_spmod[player]+=2;
        if(p_spmod[player]>6){p_spmod[player]=6;}
        specialtext(7, player);
        break;
    case 6:
        if(p_atkmod[target]>-6 && rng1(1, 3)==1)
        {
            p_atkmod[target]-=1;
            specialtext(0, target);
        }
        break;
    case 7:
    case 18:
    case 28:
    case 42:
    case 43:
    case 73:
    case 106:
        int y=0, z=rng2(4);
        damage = damagecalc(player, moven, target, typeeffect, 1);
        for(int x = 0; x<=z; x++)
        {
            y++;
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            if(p_hp[target]==0){break;}
        }
        Sleep(2000);
        printf("\nAcertou %i vezes.", y);
        if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
        if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
        break;
    case 9:
    case 17:
    case 38:
    case 133:
        Sleep(2000);
        printf("\n%s esta preso", p_name[target]);
        if(m_turns[player]==0)
        {
            m_turns[player]=4+rng1(1, 2);
            m_dealdamage[player][moven]=0;
            return;
        }
        m_turns[player]--;
        if(m_turns[player]==0){m_dealdamage[player][moven]=1;}
        p_hp[target]-=p_maxhp[target]/8;
        roundhp(target);
        showstats();
        printf("\n%s esta preso", p_name[target]);
        break;
    case 10:
    case 49:
    case 65:
    case 86:
    case 88:
    case 109:
        if(rng1(3, 10)==1){flinch=1;}
        break;
    case 11:
    case 56:
    case 57:
        if(rng1(1, 10)==1){s_frzstart(target);}
        break;
    case 12:
    case 63:
        if(rng1(3, 10)==1){s_parstart(target);}
        break;
    case 13:
    case 54:
        if(rng1(1, 10)==1){flinch=1;}
        break;
    case 14:
    case 27:
        p_hp[target]-=damage;
        roundhp(target);
        showstats();
        printf("\nAcertou 2 vezes.");
        break;
    case 15:
    case 16:
    case 21:
        if(p_spdmod[target]>-6 && rng1(1, 10)==1)
        {
            p_spdmod[target]-=1;
            specialtext(4, target);
        }
        break;
    case 19:
        if(rng1(1, 2)==1){s_constart(target);}
        break;
    case 20:
    case 78:
        if(rng1(1, 10)==1){s_constart(target);}
        break;
    case 24:
    case 48:
    case 132:
        if(p_defmod[player]==6)
        {
            printf("\nO ataque falhou");
            return;
        }
        p_defmod[player]+=1;
        specialtext(3, player);
        break;
    case 25:
        if(m_turns[player]==0)
        {
            m_turns[player]=2;
            p_elevation[player]=2;
            Sleep(2000);
            printf("\n%s se enterrou.", p_name[player]);
        }
        m_turns[player]--;
        if(m_turns[player]==0)
        {
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            float critical = crit(player, moven);
            damage = damagecalc(player, moven, target, typeeffect, critical);
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            if(critical==2)
            {
                Sleep(1500);
                printf("\nAcerto critico.");
            }
            if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
            if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
            p_elevation[player]=0;
        }
        break;
    case 29:
    case 113:
    case 121:
        p_hp[player]-=damage/4;
        roundhp(player);
        showstats();
        if(rng1(1, 50)==0)
        {
            printf("\n%s levou dano.", p_name[player]);
        }
        else
        {
            printf("\n%s entendeu a Terceira Lei de Newton.", p_name[player]);
        }
        break;
    case 30:
        p_hp[target]-=40;
        roundhp(target);
        showstats();
        break;
    case 31:
        if(p_statusslp[target]>0)
        {
            float critical = crit(player, moven);
            damage = damagecalc(player, moven, target, typeeffect, critical);
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            if(critical==2)
            {
                Sleep(1500);
                printf("\nAcerto critico.");
            }
            if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
            if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
            p_hp[player]+=damage/2;
            roundhp(player);
            specialtext(8, target);
        }
        else
        {
            printf("\nO ataque falhou.");
        }
        break;
    case 33:
        int mult = 1;
        if(p_elevation[target]==2)
        {
            mult = 2;
        }
        float critical = crit(player, moven);
        damage = damagecalc(player, moven, target, typeeffect, critical);
        p_hp[target]-=damage*mult;
        roundhp(target);
        showstats();
        printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
        if(critical==2)
        {
            Sleep(1500);
            printf("\nAcerto critico.");
        }
        if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
        if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
        break;
    case 35:
    case 36:
    case 37:
    case 39:
        if(rng1(1, 10)==1){s_brnstart(target);}
        break;
    case 40:
    case 60:
    case 89:
    case 102:
        if(p_accmod[target]==-6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_accmod[target]-=1;
        specialtext(9, target);
        break;
    case 41:
        if(m_turns[player]==0)
        {
            m_turns[player]=2;
            p_elevation[player]=1;
            Sleep(2000);
            printf("\n%s levantou voo.", p_name[player]);
        }
        m_turns[player]--;
        if(m_turns[player]==0)
        {
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            float critical = crit(player, moven);
            damage = damagecalc(player, moven, target, typeeffect, critical);
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            if(critical==2)
            {
                Sleep(1500);
                printf("\nAcerto critico.");
            }
            if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
            if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
            p_elevation[player]=0;
        }
        break;
    case 44:
    case 112:
    case 125:
        if(p_statuspar[target]==1)
        {
            printf("\nO ataque falhou.");
            return;
        }
        s_parstart(target);
        break;
    case 45:
        if(p_atkmod[target]==-6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_atkmod[target]-=1;
        specialtext(0, target);
        break;
    case 46:
        if(p_spmod[player]==6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_spmod[player]+=1;
        specialtext(7, player);
        break;
    case 47:
        int damagemult = 1;
        if(p_elevation[target]==1)
        {
            damagemult = 2;
        }
        float critmult = crit(player, moven);
        damage = damagecalc(player, moven, target, typeeffect, critmult);
        p_hp[target]-=damage*damagemult;
        roundhp(target);
        showstats();
        printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
        if(critmult==2)
        {
            Sleep(1500);
            printf("\nAcerto critico.");
        }
        if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
        if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
        break;
    case 53:
        if(m_turns[player]==0){m_turns[player]=2;}
        m_turns[player]--;
        printf("\n%s esta recarregando.", p_name[player]);
        break;
    case 55:
    case 64:
    case 94:
    case 99:
    case 108:
        s_slpstart(target);
        break;
    case 62:
    case 120:
        if(p_defmod[target]==-6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_defmod[target]-=1;
        specialtext(2, target);
        break;
    case 66:
    case 93:
        if(p_atkmod[player]==6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_atkmod[player]+=1;
        specialtext(1, player);
        break;
    case 70:
    case 92:
        p_hp[target]-=p_lvl[player];
        roundhp(target);
        showstats();
        break;
    case 74:
    case 75:
        s_psnstart(target);
        break;
    case 76:
    case 100:
    case 101:
        if(rng1(3, 10)==1)
        {
            s_psnstart(target);
        }
        break;
    case 79:
        if(p_spmod[target]>-6 && rng1(3, 10)==1)
        {
            p_spmod[target]-=1;
            specialtext(6, target);
        }
        break;
    case 80:
        p_hp[target]-=p_lvl[player]*(1+(rng2(50)/100));
        roundhp(target);
        showstats();
        break;
    case 96:
        if(m_turns[player]==1 && rng1(3, 10)==1){flinch=1;}
    case 83:
    case 95:
    case 104:
        if(m_turns[player]==0)
        {
            m_turns[player]=2;
            Sleep(2000);
            printf("\n%s esta carregando...", p_name[player]);
        }
        m_turns[player]--;
        if(m_turns[player]==0)
        {
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            float critical = crit(player, moven);
            damage = damagecalc(player, moven, target, typeeffect, critical);
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            if(critical==2)
            {
                Sleep(1500);
                printf("\nAcerto critico.");
            }
            if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
            if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
        }
        break;
    case 84:
    case 103:
        p_hp[player]+=p_maxhp[player]/2;
        roundhp(player);
        showstats();
        printf("\n%s se curou.", p_name[player]);
        break;
    case 85:
        p_hp[player]+=p_maxhp[player];
        roundhp(player);
        showstats();
        printf("\n%s se curou.", p_name[player]);
        p_statusslp[player] = 2;
        Sleep(2000);
        printf("\n%s dormiu.", p_name[player]);
        break;
    case 91:
        if(p_defmod[target]==-6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_defmod[target]-=2;
        if(p_defmod[target]>-6){p_defmod[target]=-6;}
        specialtext(2, target);
        break;
    case 105:
        p_hp[target]-=20;
        roundhp(target);
        showstats();
        break;
    case 111:
        if(p_spdmod[target]==-6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_spdmod[target]-=1;
        specialtext(4, target);
        break;
    case 114:
        p_hp[target]-=p_maxhp[target]/2;
        roundhp(target);
        showstats();
        break;
    case 115:
        s_constart(target);
        break;
    case 118:
        if(p_atkmod[player]==6)
        {
            printf("\nO ataque falhou.");
            return;
        }
        p_atkmod[player]+=2;
        if(p_atkmod[player]>6){p_atkmod[player]=6;}
        specialtext(1, player);
        break;
    case 122:
    case 123:
    case 124:
    case 126:
        if(rng1(1, 10)==1){s_parstart(target);}
        break;
    case 127:
        p_hp[target]-=damage;
        roundhp(target);
        showstats();
        printf("\nAcertou 2 vezes.");
        if(rng1(1, 5)==1){s_psnstart(target);}
        break;
    case 134:
        //InútEl!! a gente somos inútEl!!
        int x = rng2(15);
        if(x=1){s_brnstart(target);}
        if(x=2){s_parstart(target);}
        if(x=3){s_frzstart(target);}
        break;
    default:
        break;
    }
}
void m_fight(int player, int moven)
{
    showstats();
    if(flinch==1)
    {
        printf("\n%s hesitou.", p_name[player]);
        showstats();
        flinch=0;
        goto Status;
    }
    int target, damage=0;
    if(player==0){target=1;}else{target=0;}
    float critical = crit(player, moven), typeeffect = t_effect(player, moven, target);
    if(p_statusfrz[player]==1)
    {
        if(rng1(1, 10)==0)
        {
            printf("\n%s esta congelado.", p_name[player]);
            showstats();
            goto Status;
        }
        printf("\n%s se descongelou.", p_name[player]);
        Sleep(1500);
    }
    if(p_statusslp[player]>0)
    {
        if(s_slp(player)==1)
        {
            goto Status;
        }
    }
    if(p_statuscon[player]>0)
    {
        if(s_con(player)==1)
        {
            goto Status;
        }
    }
    if(p_statuspar[player]==1)
    {
        if(rng1(1, 4)==1)
        {
            printf("\n%s esta paralisado", p_name[player]);
            showstats();
            goto Status;
        }
    }
    if(m_turns[player]==0)
    {
        printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
        if(rng1(m_accuracy[player][moven]*statmod(p_accmod[player]), 100)==0)
        {
            Sleep(2000);
            printf("\nO ataque errou.");
            showstats();
            goto Status;
        }
        if(p_elevation[target]==2)
        {
            if(m_moveid[player][moven]!=33)
            {
                Sleep(2000);
                printf("\nO ataque errou.");
                showstats();
                goto Status;
            }
        }
        if(p_elevation[target]==1)
        {
            if(m_moveid[player][moven]!=47)
            {
                Sleep(2000);
                printf("\nO ataque errou.");
                showstats();
                goto Status;
            }
        }
        if(m_dealdamage[player][moven]==1)
        {
            if(typeeffect==0)
            {
                Sleep(2000);
                printf("\n%s resistiu ao ataque.", p_name[player]);
                showstats();
                goto Status;
            }
            damage = damagecalc(player, moven, target, typeeffect, critical);
            p_hp[target]-=damage;
            roundhp(target);
            showstats();
            printf("\n%s usou %s.", p_name[player], m_name[player][moven]);
            if(critical==2)
            {
                Sleep(1500);
                printf("\nAcerto critico.");
            }
            if(typeeffect<1){Sleep(1500); printf("\nFoi pouco efetivo.");}
            if(typeeffect>1){Sleep(1500); printf("\nFoi super-efetivo.");}
            if(m_type[player][moven]==3 && p_statusfrz[target]==1)
            {
                p_statusfrz[target]=0;
                Sleep(2000);
                printf("\n%s descongelou.", p_name[target]);
            }
        }
    }
    m_effects(player, moven, target, damage);
    p_lastmove[player] = moven;
Status:
    if(p_statusbrn[player]==1 && p_hp[player]>0)
    {
        Sleep(2000);
        printf("\n%s esta queimando.", p_name[player]);
        p_hp[player]-=p_maxhp[player]/16;
        roundhp(player);
        showstats();
        printf("\n%s esta queimando.", p_name[player]);
    }
    if(p_statuspsn[player]==1 && p_hp[player]>0)
    {
        Sleep(2000);
        printf("\n%s esta envenenado.", p_name[player]);
        p_hp[player]-=p_maxhp[player]/16;
        roundhp(player);
        showstats();
        printf("\n%s esta envenenado.", p_name[player]);
    }
    showstats();
}
void battle(int pmove)
{
    int emove = enemyai();
    flinch = 0;
    if(m_turns[0]!=0){pmove=p_lastmove[0];}
    if(m_turns[1]!=0){emove=p_lastmove[1];}
    if(m_moveid[0][pmove]==81 && m_moveid[1][emove]!=81)
    {
        m_fight(0, pmove);
        if(checkfaint()==0)
        {
            m_fight(1, emove);
            checkfaint();
        }
        return;
    }
    if(m_moveid[1][emove]==81 && m_moveid[0][pmove]!=81)
    {
        m_fight(0, pmove);
        if(checkfaint()==0)
        {
            m_fight(1, emove);
            checkfaint();
        }
        return;
    }
    if(p_spd[0]*statmod(p_spdmod[0])>=p_spd[1]*statmod(p_spdmod[1]))
    {
        m_fight(0, pmove);
        if(checkfaint()==0)
        {
            m_fight(1, emove);
            checkfaint();
        }
        return;
    }
    if(p_spd[1]*statmod(p_spdmod[1])>p_spd[0]*statmod(p_spdmod[0]))
    {
        m_fight(1, enemyai());
        if(checkfaint()==0)
        {
            m_fight(0, pmove);
            checkfaint();
        }
        return; 
    }
}