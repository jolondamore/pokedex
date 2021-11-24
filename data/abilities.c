#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define GENERATIONS 8

#define GEN3 (uint32_t)(1 << 3)
#define GEN4 (uint32_t)(1 << 4)
#define GEN5 (uint32_t)(1 << 5)
#define GEN6 (uint32_t)(1 << 6)
#define GEN7 (uint32_t)(1 << 7)
#define GEN8 (uint32_t)(1 << 8)

struct ability {
    char *name;
    char *desc;
    char *desc2;
    uint32_t gens;
};

const struct ability Air_Lock = {
    .name = "Air Lock",
    .desc = "Eliminates the effects of weather.",
    .desc2 = NULL,
    .gens = GEN3 | GEN4 | GEN5 | GEN6 | GEN7 | GEN8
};

const struct ability Arena_Trap = {
    .name = "Arena Trap",
    .desc = "Prevents non-flying-type opposing Pokémon from fleeing.",
    .desc2 =
    .gens = GEN3 | GEN4 | GEN5 | GEN6 | GEN7 | GEN8
};

const struct ability Battle_Armor = {
    .name = "Battle Armor",
    .desc = "Protects the Pokémon from critical hits.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Blaze = {
    .name = "Blaze",
    .desc = "Powers up fire-type moves when the Pokémon's HP is low.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Cacophony = {
    .name = "Cacophony",
    .desc = "The Pokémon is immune from sound-based moves.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Chlorophyll = {
    .name = "Chlorophyll",
    .desc = "Boosts the Pokémon's Speed stat in harsh sunlight.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Clear_Body = {
    .name = "Clear Body",
    .desc = "Prevents other Pokémon's moves or Abilities from lowering the
                    Pokémon's stats.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Cloud_Nine = {
    .name = "Cloud Nine",
    .desc = "Eliminates the effects of weather.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Color_Change = {
    .name = "Color Change",
    .desc = "The Pokémon's type becomes the type of the move used on it.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Compound_Eyes = {
    .name = "Compound Eyes",
    .desc = "Boosts the Pokémon's Accuracy stat.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Cute_Charm = {
    .name = "Cute Charm",
    .desc = "Contact with the Pokémon may cause infatuation.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Damp = {
    .name = "Damp",
    .desc = "Prevents the use of Explosion and Self-Destruct.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Drizzle = {
    .name = "Drizzle",
    .desc = "Activates rain when the Pokémon enters battle.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Drought = {
    .name = "Drought",
    .desc = "Activates harsh sunlight when the Pokémon enters battle.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Early_Bird = {
    .name = "Early Bird",
    .desc = "The Pokémon awakens twice as fast from sleep.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Early_Bird = {
    .name = "Early Bird",
    .desc = "The Pokémon awakens twice as fast from sleep.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Effect_Spore = {
    .name = "Effect Spore",
    .desc = "Contact with the Pokémon may inflict poison, sleep, or paralysis
                    on its attacker.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Flame_Body = {
    .name = "Flame Body",
    .desc = "Contact with the Pokémon may burn the attacker.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Flash_Fire = {
    .name = "Flash Fire",
    .desc = "Powers up the Pokémon's Fire-type moves if hit by a Fire-type
                    move.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Forecast = {
    .name = "Forecast",
    .desc = "The Pokémon transforms with the weather to change its type to
                    Water, Fire, or Ice.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Guts = {
    .name = "Guts",
    .desc = "Boosts the Pokémon's Attack stat when it has a status condition.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Huge_Power = {
    .name = "Huge Power",
    .desc = "Doubles the Pokémon's Attack stat.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Hustle = {
    .name = "Hustle",
    .desc = "Boosts the Pokémon's Attack stat but lowers the Pokémon's
                    Accuracy stat.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Hyper_Cutter = {
    .name = "Hyper Cutter",
    .desc = "The Pokémon's Attack stat cannot be lowered by other Pokémon.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Illuminate = {
    .name = "Illuminate",
    .desc = "Raises the likelihood of meeting wild Pokémon outside of battle.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Illuminate = {
    .name = "Illuminate",
    .desc = "Raises the likelihood of meeting wild Pokémon outside of battle.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Immunity = {
    .name = "Immunity",
    .desc = "The Pokémon cannot be poisoned.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Inner_Focus = {
    .name = "Inner Focus",
    .desc = "The Pokémon cannot flinch.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Insomnia = {
    .name = "Insomnia",
    .desc = "The Pokémon cannot sleep.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Intimidate = {
    .name = "Intimidate",
    .desc = "When the Pokémon enters battle, it lowers opposing Pokémon's
                    Attack stats.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Keen_Eye = {
    .name = "Keen Eye",
    .desc = "The Pokémon's Accuracy stat cannot be lowered by other Pokémon.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Levitate = {
    .name = "Levitate",
    .desc = "The Pokémon is immune to Ground-type moves and Abilities.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

const struct ability Lightning_Rod = {
    .name = "Lightning Rod",
    .desc = "The Pokémon draws in all Electric-type moves. Instead of receiving
                    damage by Electric-type moves, it boosts the Pokémon's
                    Sp. Atk.",
    .avail = {0, 0, 1, 1, 1, 1, 1, 1}
};

int main()
{
    printf("Avail gen 3: %d\n", Blaze.avail[2]);
    return 0;
}

