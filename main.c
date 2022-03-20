#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hpGoblin = 150,hpHero=200,menu,skill,items;

    do
    {
    system("cls");
    skill = 0;
    printf("\nA wild Goblin has appeared! what do you want to do?\n\n");
    printf("\nHERO HP: %d\tGOBLIN HP: %d\n",hpHero,hpGoblin);
    printf("\n1 - ATTACK\t2 - SKILL\t\n3 - ITEMS\t4 - RUN\n\n");
    scanf("%d",&menu);
    do
    {
    switch(menu)
    {
    case 1:
        printf("\nYou attack the Goblin with your axe! Dealing 25 dmg.\n");
        hpGoblin = hpGoblin-25;
        break;
    case 2:
        do
        {
        printf("\n\t----SKILL LIST----\n\n");
        printf("\n1 - Double Slash\t2 - BLOCK\n\n");
        scanf("%d",&skill);

        if(skill==1)
           {
            printf("\nYou use Double Slash! Dealing 50 dmg.\n");
            hpGoblin = hpGoblin-50;
           }
        else if (skill==2)
            printf("\nYou use Block! You are immune to dmg until your next turn.\n\n");
        else
            printf("\n No skill assigned to this number\n");
        }while(skill>2);
        break;
    case 3:
        do
        {
        printf("\n\t----ITEMS----\n\n");
        printf("1 - Potion\t 2 - Fire Grenade\n\n");
        scanf ("%d",&items);

        if(items==1)
            {
            if (hpHero==200)
                    printf("Your HP is already full.\n");
            else if (hpHero>=126)
               {
                printf("\nYou heal to max HP\n.");
                hpHero=200;
               }
            else
            {
                printf("\nYou heal 75 HP.\n");
                hpHero= hpHero+75;
            }
            }
        else if(items == 2)
            {
            printf("\nYou throw a Fire Grenade at the Goblin! Dealing 75 dmg.\n");
            hpGoblin= hpGoblin-75;
            }
        else
            printf("\nNo items assigned to this number.\n");
        }while(items>2);
        break;
    case 4:
        printf("\n");
        break;
    default:
        printf("\nNo actions assigned to this number\n");
        break;
    }

    }while(menu>456486486384);

    if(skill==2)
    printf("The Goblin attacks you with a Mace Swing! Dealing 0 dmg.\n\n");
    else if(menu==4)
    printf("You try to run.\n");
    else
    {
    printf("\nThe Goblin attacks you with a Mace Swing! Dealing 60 dmg.\n\n");
    hpHero=hpHero-60;
    }

    system("pause");

    }while(hpGoblin>0&&hpHero>0&&menu!=4);

    system("cls");
    if (hpGoblin<=0)
    printf("\nYou win!\nEXP + 35\nItem Dropped:""Mysterious Sausage""\n");
    else if (hpHero<=0)
        printf("\nYOU DIED\n");
    else
        printf("You were able to run away, but your honor has been shattered.\n");

    system("pause");
    return 0;
}
