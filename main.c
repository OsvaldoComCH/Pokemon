#include "pkmn.c"
void main()
{
    int pkdx;
    time_t t;
    srand((unsigned) time(&t));
    printf("Insira o # da pokedex do seu pokemon:");
    scanf("%i", &pkdx);
    printf("Insira o nivel do seu pokemon:");
    scanf("%f", &p_lvl[0]);
    p_lvl[1] = p_lvl[0] - 4 + rng2(6);
    p_getpkmn(pkdx, 0);
    p_getpkmn(rng2(151), 1);
    int movequant=0;
    for(int x=0; x<4; x++)
    {
        if(m_moveid[0][x]!=0){movequant++;}
    }
    showstats();
    while(p_hp[0]!=0 && p_hp[1]!=0)
    {
        int move;
        if(m_turns[0]==0)
        {
            showmoves(movequant);
            scanf("%i", &move);
        }
        if(move<1){move=1;}
        if(move>movequant){move=movequant;}
        battle(move-1);
    }
}