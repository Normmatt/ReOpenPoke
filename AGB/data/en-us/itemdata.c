//======================================================================
//
//  Item data for OpenPok�.
//
//  Time-stamp: 2008-07-21, 22:16:03
//  Exported by Kawa's OP converter suite
//  (comments, kudos, flames to "foo@helmetedrodent.kickassgamers.com")
//
//======================================================================
#include "../../openpoke.h"

const anItem items[] =
{
	{ "????????", 0, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Master Ball", 1, 0, 0, 0,
		"The best BALL with the ultimate\n"
		"performance. It will catch any wild\n"
		""POKEMON" without fail.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 0,
	},
	{ "Ultra Ball", 2, 1200, 0, 0,
		"A very high-grade BALL that offers\n"
		"a higher "POKEMON" catch rate than\n"
		"a GREAT BALL.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 1,
	},
	{ "Great Ball", 3, 600, 0, 0,
		"A good, quality BALL that offers\n"
		"a higher "POKEMON" catch rate than\n"
		"a standard "POKE" BALL.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 2,
	},
	{ "Pok� Ball", 4, 200, 0, 0,
		"A BALL thrown to catch a wild\n"
		""POKEMON". It is designed in a\n"
		"capsule style.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 3,
	},
	{ "Safari Ball", 5, 0, 0, 0,
		"A special BALL that is used only in\n"
		"the SAFARI ZONE. It is finished in\n"
		"a camouflage pattern.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 4,
	},
	{ "Net Ball", 6, 1000, 0, 0,
		"A somewhat different BALL that\n"
		"works especially well on WATER- and\n"
		"BUG-type "POKEMON".",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 5,
	},
	{ "Dive Ball", 7, 1000, 0, 0,
		"A somewhat different BALL that\n"
		"works especially well on "POKEMON"\n"
		"deep in the sea.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 6,
	},
	{ "Nest Ball", 8, 1000, 0, 0,
		"A somewhat different BALL that\n"
		"works especially well on weaker\n"
		""POKEMON".",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 7,
	},
	{ "Repeat Ball", 9, 1000, 0, 0,
		"A somewhat different BALL that\n"
		"works especially well on "POKEMON"\n"
		"caught before.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 8,
	},
	{ "Timer Ball", 10, 1000, 0, 0,
		"A somewhat different BALL that\n"
		"becomes progressively better the\n"
		"more turns there are in a battle.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 9,
	},
	{ "Luxury Ball", 11, 1000, 0, 0,
		"A comfortable BALL that makes a\n"
		"captured wild "POKEMON" quickly grow\n"
		"friendly.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 10,
	},
	{ "Premier Ball", 12, 200, 0, 0,
		"A rare BALL that has been\n"
		"specially made to commemorate an\n"
		"event of some sort.",
		0, POCKET_BALLS,
		0, 2,
		item_PokeBall, 11,
	},
	{ "Potion", 13, 300, 0, 20,
		"A spray-type wound medicine.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 20 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Antidote", 14, 100, 0, 0,
		"A spray-type medicine.\n"
		"It heals one "POKEMON" from a\n"
		"poisoning.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Burn Heal", 15, 250, 0, 0,
		"A spray-type medicine.\n"
		"It heals one "POKEMON" of a burn.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Ice Heal", 16, 250, 0, 0,
		"A spray-type medicine.\n"
		"It defrosts a frozen "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Awakening", 17, 250, 0, 0,
		"A spray-type medicine.\n"
		"It awakens a sleeping "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Parlyz Heal", 18, 200, 0, 0,
		"A spray-type medicine.\n"
		"It heals one "POKEMON" from\n"
		"paralysis.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Full Restore", 19, 3000, 0, 255,
		"A medicine that fully restores the\n"
		"HP and heals any status problems\n"
		"of one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Max Potion", 20, 2500, 0, 255,
		"A spray-type wound medicine.\n"
		"It fully restores the HP of one\n"
		""POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Hyper Potion", 21, 1200, 0, 200,
		"A spray-type wound medicine.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 200 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Super Potion", 22, 700, 0, 50,
		"A spray-type wound medicine.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 50 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Full Heal", 23, 600, 0, 0,
		"A spray-type medicine.\n"
		"It heals all the status problems of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Revive", 24, 1500, 0, 0,
		"A medicine that revives a fainted\n"
		""POKEMON", restoring HP by half the\n"
		"maximum amount.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Max Revive", 25, 4000, 0, 0,
		"A medicine that revives a fainted\n"
		""POKEMON", restoring HP fully.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Fresh Water", 26, 200, 0, 50,
		"Water with a high mineral content.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 50 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Soda Pop", 27, 300, 0, 60,
		"A fizzy soda drink.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 60 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Lemonade", 28, 350, 0, 80,
		"A very sweet drink.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 80 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Moomoo Milk", 29, 500, 0, 100,
		"Highly nutritious milk.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 100 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Energypowder", 30, 500, 0, 0,
		"A very bitter medicine powder.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 50 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Energy Root", 31, 800, 0, 0,
		"A very bitter root.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 200 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Heal Powder", 32, 450, 0, 0,
		"A very bitter medicine powder.\n"
		"It heals all the status problems of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Revival Herb", 33, 2800, 0, 0,
		"A very bitter medicinal herb.\n"
		"It revives a fainted "POKEMON",\n"
		"restoring HP fully.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Ether", 34, 1200, 0, 10,
		"Restores a selected move's PP by\n"
		"10 points for one "POKEMON".",
		0, POCKET_ITEMS,
		item_Ether, 1,
		item_BtlEther, 0,
	},
	{ "Max Ether", 35, 2000, 0, 255,
		"Fully restores a selected move's PP\n"
		"for one "POKEMON".",
		0, POCKET_ITEMS,
		item_Ether, 1,
		item_BtlEther, 0,
	},
	{ "Elixir", 36, 3000, 0, 10,
		"Restores the PP of all moves for\n"
		"one "POKEMON" by 10 points each.",
		0, POCKET_ITEMS,
		item_Ether, 1,
		item_BtlEther, 0,
	},
	{ "Max Elixir", 37, 4500, 0, 255,
		"Fully restores the PP of all moves\n"
		"for one "POKEMON".",
		0, POCKET_ITEMS,
		item_Ether, 1,
		item_BtlEther, 0,
	},
	{ "Lava Cookie", 38, 200, 0, 0,
		"LAVARIDGE TOWN's local specialty.\n"
		"It heals all the status problems of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Blue Flute", 39, 100, 0, 0,
		"A blue glass flute that awakens\n"
		"a sleeping "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Yellow Flute", 40, 200, 0, 0,
		"A yellow glass flute that snaps one\n"
		""POKEMON" out of confusion.",
		0, POCKET_ITEMS,
		item_NoUse, 1,
		item_BtlHeal, 0,
	},
	{ "Red Flute", 41, 300, 0, 0,
		"A red glass flute that snaps one\n"
		""POKEMON" out of infatuation.",
		0, POCKET_ITEMS,
		item_NoUse, 1,
		item_BtlHeal, 0,
	},
	{ "Black Flute", 42, 400, 0, 50,
		"A black glass flute.\n"
		"When blown, it makes wild "POKEMON"\n"
		"less likely to appear.",
		0, POCKET_ITEMS,
		item_Flute, 0,
		0, 0,
	},
	{ "White Flute", 43, 500, 0, 150,
		"A white glass flute.\n"
		"When blown, it makes wild "POKEMON"\n"
		"more likely to appear.",
		0, POCKET_ITEMS,
		item_Flute, 0,
		0, 0,
	},
	{ "Berry Juice", 44, 100, 1, 20,
		"A 100% pure juice.\n"
		"It restores the HP of one "POKEMON"\n"
		"by 20 points.",
		0, POCKET_ITEMS,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Sacred Ash", 45, 200, 0, 0,
		"Revives all fainted "POKEMON",\n"
		"restoring HP fully.",
		0, POCKET_ITEMS,
		item_SacrAsh, 0,
		0, 0,
	},
	{ "Shoal Salt", 46, 20, 0, 0,
		"Pure salt obtained from deep inside\n"
		"the SHOAL CAVE. It is extremely\n"
		"salty.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Shoal Shell", 47, 20, 0, 0,
		"A pretty seashell found deep inside\n"
		"the SHOAL CAVE. It is striped in\n"
		"blue and white.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Red Shard", 48, 200, 0, 0,
		"A small red shard.\n"
		"It appears to be from some sort of\n"
		"a tool made long ago.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Blue Shard", 49, 200, 0, 0,
		"A small blue shard.\n"
		"It appears to be from some sort of\n"
		"a tool made long ago.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Yellow Shard", 50, 200, 0, 0,
		"A small yellow shard.\n"
		"It appears to be from some sort of\n"
		"a tool made long ago.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Green Shard", 51, 200, 0, 0,
		"A small green shard.\n"
		"It appears to be from some sort of\n"
		"a tool made long ago.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 52, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 53, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 54, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 55, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 56, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 57, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 58, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 59, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 60, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 61, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 62, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "HP Up", 63, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base HP of one\n"
		""POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "Protein", 64, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base ATTACK stat of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "Iron", 65, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base DEFENSE stat of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "Carbos", 66, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base SPEED stat of\n"
		"one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "Calcium", 67, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base SP. ATK stat\n"
		"of one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "Rare Candy", 68, 4800, 0, 0,
		"A candy that is packed with energy.\n"
		"It raises the level of a "POKEMON"\n"
		"by one.",
		0, POCKET_ITEMS,
		item_Candy, 0,
		0, 0,
	},
	{ "PP Up", 69, 9800, 0, 0,
		"Slightly raises the maximum PP of\n"
		"a selected move for one "POKEMON".",
		0, POCKET_ITEMS,
		item_PPUp, 0,
		0, 0,
	},
	{ "Zinc", 70, 9800, 0, 0,
		"A nutritious drink for "POKEMON".\n"
		"It raises the base SP. DEF stat\n"
		"of one "POKEMON".",
		0, POCKET_ITEMS,
		item_Heal, 0,
		0, 0,
	},
	{ "PP Max", 71, 9800, 0, 0,
		"Raises the PP of a selected move\n"
		"to its maximum level for one\n"
		""POKEMON".",
		0, POCKET_ITEMS,
		item_PPUp, 0,
		0, 0,
	},
	{ "????????", 72, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Guard Spec.", 73, 700, 0, 0,
		"An item that prevents stat reduction\n"
		"among party "POKEMON" for five turns\n"
		"after use.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "Dire Hit", 74, 650, 0, 0,
		"Raises the critical-hit ratio of\n"
		""POKEMON" in battle. Wears off if the\n"
		""POKEMON" is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "X Attack", 75, 500, 0, 0,
		"Raises the ATTACK stat of "POKEMON"\n"
		"in battle. Wears off if the "POKEMON"\n"
		"is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "X Defend", 76, 550, 0, 0,
		"Raises the DEFENSE stat of "POKEMON"\n"
		"in battle. Wears off if the "POKEMON"\n"
		"is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "X Speed", 77, 350, 0, 0,
		"Raises the SPEED stat of "POKEMON"\n"
		"in battle. Wears off if the "POKEMON"\n"
		"is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "X Accuracy", 78, 950, 0, 0,
		"Raises the accuracy stat of\n"
		""POKEMON" in battle. Wears off if the\n"
		""POKEMON" is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "X Special", 79, 350, 0, 0,
		"Raises the SP. ATK stat of\n"
		""POKEMON" in battle. Wears off if the\n"
		""POKEMON" is withdrawn.",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_StatMod, 0,
	},
	{ "Pok� Doll", 80, 1000, 0, 0,
		"An attractive doll.\n"
		"Use it to flee from any battle with\n"
		"a wild "POKEMON".",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_Decoy, 0,
	},
	{ "Fluffy Tail", 81, 1000, 0, 0,
		"An attractive item.\n"
		"Use it to flee from any battle with\n"
		"a wild "POKEMON".",
		0, POCKET_ITEMS,
		item_NoUse, 2,
		item_Decoy, 0,
	},
	{ "????????", 82, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Super Repel", 83, 500, 0, 200,
		"Prevents weak wild "POKEMON" from\n"
		"appearing for 200 steps.",
		0, POCKET_ITEMS,
		item_Repel, 0,
		0, 0,
	},
	{ "Max Repel", 84, 700, 0, 250,
		"Prevents weak wild "POKEMON" from\n"
		"appearing for 250 steps.",
		0, POCKET_ITEMS,
		item_Repel, 0,
		0, 0,
	},
	{ "Escape Rope", 85, 550, 0, 0,
		"A long, durable rope.\n"
		"Use it to escape instantly from a\n"
		"cave or a dungeon.",
		0, POCKET_ITEMS,
		item_Escape, 0,
		0, 0,
	},
	{ "Repel", 86, 350, 0, 100,
		"Prevents weak wild "POKEMON" from\n"
		"appearing for 100 steps.",
		0, POCKET_ITEMS,
		item_Repel, 0,
		0, 0,
	},
	{ "????????", 87, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 88, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 89, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 90, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 91, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 92, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Sun Stone", 93, 2100, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It is as red as the sun.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "Moon Stone", 94, 0, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It is as black as the night sky.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "Fire Stone", 95, 2100, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It is colored orange.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "Thunderstone", 96, 2100, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It has a thunderbolt pattern.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "Water Stone", 97, 2100, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It is a clear light blue.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "Leaf Stone", 98, 2100, 0, 0,
		"A peculiar stone that makes certain\n"
		"species of "POKEMON" evolve.\n"
		"It has a leaf pattern.",
		0, POCKET_ITEMS,
		item_EvStone, 0,
		0, 0,
	},
	{ "????????", 99, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 100, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 101, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 102, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Tinymushroom", 103, 500, 0, 0,
		"A small and rare mushroom.\n"
		"It is quite popular among certain\n"
		"people.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Big Mushroom", 104, 5000, 0, 0,
		"A large and rare mushroom.\n"
		"It is very popular among certain\n"
		"people.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 105, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pearl", 106, 1400, 0, 0,
		"A relatively small pearl that\n"
		"sparkles in a pretty silver color.\n"
		"It can be sold cheaply.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Big Pearl", 107, 7500, 0, 0,
		"A quite-large pearl that sparkles\n"
		"in a pretty silver color.\n"
		"It can be sold at a high price.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Stardust", 108, 2000, 0, 0,
		"A pretty red sand with a loose,\n"
		"silky feel.\n"
		"It can be sold at a high price.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Star Piece", 109, 9800, 0, 0,
		"A shard of a pretty gem that\n"
		"sparkles in a red color.\n"
		"It can be sold at a high price.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Nugget", 110, 10000, 0, 0,
		"A nugget of pure gold that gives\n"
		"off a lustrous gleam.\n"
		"It can be sold at a high price.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Heart Scale", 111, 100, 0, 0,
		"A pretty, heart-shaped scale that\n"
		"is extremely rare. It glows faintly\n"
		"in the colors of a rainbow.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 112, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 113, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 114, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 115, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 116, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 117, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 118, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 119, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 120, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Orange Mail", 121, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"ZIGZAGOON print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 0,
	},
	{ "Harbor Mail", 122, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"WINGULL print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 1,
	},
	{ "Glitter Mail", 123, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"PIKACHU print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 2,
	},
	{ "Mech Mail", 124, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"MAGNEMITE print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 3,
	},
	{ "Wood Mail", 125, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"SLAKOTH print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 4,
	},
	{ "Wave Mail", 126, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"WAILMER print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 5,
	},
	{ "Bead Mail", 127, 50, 0, 0,
		"A piece of MAIL to be held by a\n"
		""POKEMON". It will bear the print of\n"
		"the "POKEMON" holding it.",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 6,
	},
	{ "Shadow Mail", 128, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"DUSKULL print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 7,
	},
	{ "Tropic Mail", 129, 50, 0, 0,
		"A piece of MAIL featuring a cute\n"
		"BELLOSSOM print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 8,
	},
	{ "Dream Mail", 130, 50, 0, 0,
		"A piece of MAIL to be held by a\n"
		""POKEMON". It will bear the print of\n"
		"the "POKEMON" holding it.",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 9,
	},
	{ "Fab Mail", 131, 50, 0, 0,
		"A piece of MAIL featuring a\n"
		"gorgeous, extravagant print.\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 10,
	},
	{ "Retro Mail", 132, 50, 0, 0,
		"A piece of MAIL featuring a print\n"
		"of three cute "POKEMON".\n"
		"It is to be held by a "POKEMON".",
		0, POCKET_ITEMS,
		item_Mail, 0,
		0, 11,
	},
	{ "Cheri Berry", 133, 20, 2, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to heal paralysis.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Chesto Berry", 134, 20, 3, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to wake up.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Pecha Berry", 135, 20, 4, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to cure poison.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Rawst Berry", 136, 20, 5, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to heal a burn.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Aspear Berry", 137, 20, 6, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle for defrosting.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Leppa Berry", 138, 20, 7, 10,
		"When held by a "POKEMON", it will be\n"
		"used in battle to restore 10 PP.",
		0, POCKET_BERRIES,
		item_Ether, 1,
		item_BtlEther, 0,
	},
	{ "Oran Berry", 139, 20, 1, 10,
		"When held by a "POKEMON", it will be\n"
		"used in battle to restore 10 HP.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Persim Berry", 140, 20, 8, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to lift confusion.",
		0, POCKET_BERRIES,
		item_NoUse, 1,
		item_BtlHeal, 0,
	},
	{ "Lum Berry", 141, 20, 9, 0,
		"When held by a "POKEMON", it will be\n"
		"used in battle to heal any problem.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Sitrus Berry", 142, 20, 1, 30,
		"When held by a "POKEMON", it will be\n"
		"used in battle to restore 30 HP.",
		0, POCKET_BERRIES,
		item_Heal, 1,
		item_BtlHeal, 0,
	},
	{ "Figy Berry", 143, 20, 10, 8,
		"A hold item that restores HP but\n"
		"may cause confusion when used.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Wiki Berry", 144, 20, 11, 8,
		"A hold item that restores HP but\n"
		"may cause confusion when used.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Mago Berry", 145, 20, 12, 8,
		"A hold item that restores HP but\n"
		"may cause confusion when used.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Aguav Berry", 146, 20, 13, 8,
		"A hold item that restores HP but\n"
		"may cause confusion when used.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Iapapa Berry", 147, 20, 14, 8,
		"A hold item that restores HP but\n"
		"may cause confusion when used.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Razz Berry", 148, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Bluk Berry", 149, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Nanab Berry", 150, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Wepear Berry", 151, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pinap Berry", 152, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pomeg Berry", 153, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Kelpsy Berry", 154, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Qualot Berry", 155, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Hondew Berry", 156, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Grepa Berry", 157, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Tamato Berry", 158, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Cornn Berry", 159, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Magost Berry", 160, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rabuta Berry", 161, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Nomel Berry", 162, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Spelon Berry", 163, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pamtre Berry", 164, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Watmel Berry", 165, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Durin Berry", 166, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Belue Berry", 167, 20, 0, 0,
		"Can be ground up into a powder as\n"
		"an ingredient for medicine.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Liechi Berry", 168, 20, 15, 4,
		"When held by a "POKEMON", it raises\n"
		"the ATTACK stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Ganlon Berry", 169, 20, 16, 4,
		"When held by a "POKEMON", it raises\n"
		"the DEFENSE stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Salac Berry", 170, 20, 17, 4,
		"When held by a "POKEMON", it raises\n"
		"the SPEED stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Petaya Berry", 171, 20, 18, 4,
		"When held by a "POKEMON", it raises\n"
		"the SP. ATK stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Apicot Berry", 172, 20, 19, 4,
		"When held by a "POKEMON", it raises\n"
		"the SP. DEF stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Lansat Berry", 173, 20, 20, 4,
		"When held by a "POKEMON", it raises\n"
		"the critical-hit ratio in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Starf Berry", 174, 20, 21, 4,
		"When held by a "POKEMON", it sharply\n"
		"raises one stat in a pinch.",
		0, POCKET_BERRIES,
		item_NoUse, 0,
		0, 0,
	},
	{ "Enigma Berry", 175, 20, 0, 0,
		"It is a mystery to everyone."
		"",
		0, POCKET_BERRIES,
		item_Enigma, 1,
		item_BtlEnigma, 0,
	},
	{ "????????", 176, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 177, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 178, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Brightpowder", 179, 10, 22, 10,
		"An item to be held by a "POKEMON".\n"
		"It casts a tricky glare that lowers\n"
		"the opponent's accuracy.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "White Herb", 180, 100, 23, 0,
		"An item to be held by a "POKEMON".\n"
		"It restores any lowered stat in\n"
		"battle. It can be used only once.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Macho Brace", 181, 3000, 24, 0,
		"An item to be held by a "POKEMON".\n"
		"It promotes strong growth but\n"
		"lowers SPEED while it is held.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Exp. Share", 182, 3000, 25, 0,
		"An item to be held by a "POKEMON".\n"
		"The holder gets a share of EXP.\n"
		"points without having to battle.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Quick Claw", 183, 100, 26, 20,
		"An item to be held by a "POKEMON".\n"
		"A light and sharp claw. The holder\n"
		"may be able to strike first.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Soothe Bell", 184, 100, 27, 0,
		"An item to be held by a "POKEMON".\n"
		"A bell with a comforting chime that\n"
		"makes the holder calm and friendly.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Mental Herb", 185, 100, 28, 0,
		"An item to be held by a "POKEMON".\n"
		"It snaps the holder out of\n"
		"infatuation. It can be used once.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Choice Band", 186, 100, 29, 0,
		"An item to be held by a "POKEMON".\n"
		"It powers up one move, which\n"
		"becomes the only usable one.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "King's Rock", 187, 100, 30, 10,
		"An item to be held by a "POKEMON".\n"
		"It may cause the foe to flinch\n"
		"upon taking damage.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Silverpowder", 188, 100, 31, 10,
		"An item to be held by a "POKEMON".\n"
		"A shiny silver powder that boosts\n"
		"the power of BUG-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Amulet Coin", 189, 100, 32, 10,
		"An item to be held by a "POKEMON".\n"
		"It doubles the battle money if the\n"
		"holding "POKEMON" takes part.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Cleanse Tag", 190, 200, 33, 0,
		"An item to be held by a "POKEMON".\n"
		"It repels wild "POKEMON" if the\n"
		"holder is first in the party.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Soul Dew", 191, 200, 34, 0,
		"An orb to be held by a LATIOS or\n"
		"LATIAS. It raises the SP. ATK\n"
		"and SP. DEF stats.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Deepseatooth", 192, 200, 35, 0,
		"An item to be held by a "POKEMON".\n"
		"A fang that gleams a sharp silver.\n"
		"It raises the SP. ATK stat.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Deepseascale", 193, 200, 36, 0,
		"An item to be held by a "POKEMON".\n"
		"A scale that shines a faint pink.\n"
		"It raises the SP. DEF stat.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Smoke Ball", 194, 200, 37, 0,
		"An item to be held by a "POKEMON".\n"
		"The holding "POKEMON" can flee from\n"
		"any wild "POKEMON" for sure.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Everstone", 195, 200, 38, 0,
		"An item to be held by a "POKEMON".\n"
		"The holding "POKEMON" is prevented\n"
		"from evolving.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Focus Band", 196, 200, 39, 10,
		"An item to be held by a "POKEMON".\n"
		"The holding "POKEMON" may endure an\n"
		"attack, leaving just 1 HP.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Lucky Egg", 197, 200, 40, 0,
		"An item to be held by a "POKEMON".\n"
		"An egg filled with happiness that\n"
		"earns extra EXP. points in battle.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Scope Lens", 198, 200, 41, 0,
		"An item to be held by a "POKEMON".\n"
		"A lens that boosts the critical-hit\n"
		"ratio of the holding "POKEMON".",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Metal Coat", 199, 100, 42, 10,
		"An item to be held by a "POKEMON".\n"
		"A special metallic film that boosts\n"
		"the power of STEEL-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Leftovers", 200, 200, 43, 10,
		"An item to be held by a "POKEMON".\n"
		"The holding "POKEMON" gradually\n"
		"regains HP during battle.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Dragon Scale", 201, 2100, 44, 10,
		"A thick and tough scale.\n"
		"A DRAGON-type "POKEMON" may be\n"
		"holding it.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Light Ball", 202, 100, 45, 0,
		"An orb to be held by a PIKACHU\n"
		"that raises the SP. ATK stat.\n"
		"Touching it may cause a shock.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Soft Sand", 203, 100, 46, 10,
		"An item to be held by a "POKEMON".\n"
		"A loose, silky sand that boosts the\n"
		"power of GROUND-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Hard Stone", 204, 100, 47, 10,
		"An item to be held by a "POKEMON".\n"
		"An unbreakable stone that boosts\n"
		"the power of ROCK-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Miracle Seed", 205, 100, 48, 10,
		"An item to be held by a "POKEMON".\n"
		"A seed imbued with life that boosts\n"
		"the power of GRASS-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Blackglasses", 206, 100, 49, 10,
		"An item to be held by a "POKEMON".\n"
		"A shady-looking pair of glasses\n"
		"that boosts DARK-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Black Belt", 207, 100, 50, 10,
		"An item to be held by a "POKEMON".\n"
		"A belt that boosts determination\n"
		"and FIGHTING-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Magnet", 208, 100, 51, 10,
		"An item to be held by a "POKEMON".\n"
		"A powerful magnet that boosts the\n"
		"power of ELECTRIC-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Mystic Water", 209, 100, 52, 10,
		"An item to be held by a "POKEMON".\n"
		"A teardrop-shaped gem that boosts\n"
		"the power of WATER-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Sharp Beak", 210, 100, 53, 10,
		"An item to be held by a "POKEMON".\n"
		"A long, sharp beak that boosts the\n"
		"power of FLYING-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Poison Barb", 211, 100, 54, 10,
		"An item to be held by a "POKEMON".\n"
		"A small, poisonous barb that boosts\n"
		"the power of POISON-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Nevermeltice", 212, 100, 55, 10,
		"An item to be held by a "POKEMON".\n"
		"A piece of ice that repels heat\n"
		"and boosts ICE-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Spell Tag", 213, 100, 56, 10,
		"An item to be held by a "POKEMON".\n"
		"A sinister, eerie tag that boosts\n"
		"GHOST-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Twistedspoon", 214, 100, 57, 10,
		"An item to be held by a "POKEMON".\n"
		"A spoon imbued with telekinetic\n"
		"power boosts PSYCHIC-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Charcoal", 215, 9800, 58, 10,
		"An item to be held by a "POKEMON".\n"
		"A combustible fuel that boosts the\n"
		"power of FIRE-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Dragon Fang", 216, 100, 59, 10,
		"An item to be held by a "POKEMON".\n"
		"A hard and sharp fang that boosts\n"
		"the power of DRAGON-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Silk Scarf", 217, 100, 60, 10,
		"An item to be held by a "POKEMON".\n"
		"A sumptuous scarf that boosts the\n"
		"power of NORMAL-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Up-grade", 218, 2100, 61, 0,
		"A transparent device filled with all\n"
		"sorts of data.\n"
		"It is made by SILPH CO.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Shell Bell", 219, 200, 62, 8,
		"An item to be held by a "POKEMON".\n"
		"The holding "POKEMON" regains some\n"
		"HP upon striking the foe.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Sea Incense", 220, 9600, 52, 5,
		"An item to be held by a "POKEMON".\n"
		"It slightly boosts the power of\n"
		"WATER-type moves.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Lax Incense", 221, 9600, 22, 5,
		"An item to be held by a "POKEMON".\n"
		"Its tricky aroma slightly reduces\n"
		"the foe's accuracy.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Lucky Punch", 222, 10, 63, 0,
		"A glove to be held by a CHANSEY.\n"
		"It raises CHANSEY's critical-hit\n"
		"ratio.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Metal Powder", 223, 10, 64, 0,
		"A fine, hard powder to be held by\n"
		"a DITTO.\n"
		"It raises DITTO's DEFENSE stat.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Thick Club", 224, 500, 65, 0,
		"A hard bone of some sort to be\n"
		"held by a CUBONE or MAROWAK.\n"
		"It raises the ATTACK stat.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Stick", 225, 200, 66, 0,
		"A stick of leek to be held by a\n"
		"FARFETCH'D. It raises FARFETCH'D's\n"
		"critical-hit ratio.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 226, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 227, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 228, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 229, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 230, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 231, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 232, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 233, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 234, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 235, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 236, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 237, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 238, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 239, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 240, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 241, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 242, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 243, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 244, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 245, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 246, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 247, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 248, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 249, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 250, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 251, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 252, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 253, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Red Scarf", 254, 100, 0, 0,
		"An item to be held by a "POKEMON".\n"
		"It boosts the holding "POKEMON"'s\n"
		"COOL condition in CONTESTS.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Blue Scarf", 255, 100, 0, 0,
		"An item to be held by a "POKEMON".\n"
		"It boosts the holding "POKEMON"'s\n"
		"BEAUTY condition in CONTESTS.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pink Scarf", 256, 100, 0, 0,
		"An item to be held by a "POKEMON".\n"
		"It boosts the holding "POKEMON"'s\n"
		"CUTE condition in CONTESTS.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Green Scarf", 257, 100, 0, 0,
		"An item to be held by a "POKEMON".\n"
		"It boosts the holding "POKEMON"'s\n"
		"SMART condition in CONTESTS.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Yellow Scarf", 258, 100, 0, 0,
		"An item to be held by a "POKEMON".\n"
		"It boosts the holding "POKEMON"'s\n"
		"TOUGH condition in CONTESTS.",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Mach Bike", 259, 0, 0, 0,
		"A folding bicycle that is at least\n"
		"twice as fast as walking.",
		0, POCKET_KEYITEMS,
		item_Bike, 0,
		0, 0,
	},
	{ "Coin Case", 260, 0, 0, 0,
		"A case for holding COINS obtained\n"
		"at the GAME CORNER.\n"
		"It holds up to 9,999 COINS.",
		0, POCKET_KEYITEMS,
		item_CoinCase, 0,
		0, 0,
	},
	{ "Itemfinder", 261, 0, 0, 0,
		"A device used for finding items.\n"
		"If there is a hidden item nearby\n"
		"when it is used, it emits a signal.",
		0, POCKET_KEYITEMS,
		item_ItemFinder, 0,
		0, 0,
	},
	{ "Old Rod", 262, 0, 0, 0,
		"An old and beat-up fishing rod.\n"
		"Use it by any body of water to \n"
		"fish for wild "POKEMON".",
		0, POCKET_KEYITEMS,
		item_FishRod, 0,
		0, 0,
	},
	{ "Good Rod", 263, 0, 0, 0,
		"A new, good-quality fishing rod.\n"
		"Use it by any body of water to \n"
		"fish for wild "POKEMON".",
		0, POCKET_KEYITEMS,
		item_FishRod, 0,
		0, 1,
	},
	{ "Super Rod", 264, 0, 0, 0,
		"An awesome, high-tech fishing rod.\n"
		"Use it by any body of water to fish\n"
		"for wild "POKEMON".",
		0, POCKET_KEYITEMS,
		item_FishRod, 0,
		0, 2,
	},
	{ "S.S. Ticket", 265, 0, 0, 0,
		"The ticket required for sailing on\n"
		"the ferry S.S. ANNE.\n"
		"It has a drawing of a ship on it.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Contest Pass", 266, 0, 0, 0,
		"The pass required for entering\n"
		""POKEMON" CONTESTS. It has a\n"
		"drawing of an award ribbon on it.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 267, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Wailmer Pail", 268, 0, 0, 0,
		"A nifty watering pail.\n"
		"Use it to promote strong growth in\n"
		"BERRIES planted in soft soil.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Devon Goods", 269, 0, 0, 0,
		"A package that contains mechanical\n"
		"parts of some sort made by the\n"
		"DEVON CORPORATION.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Soot Sack", 270, 0, 0, 0,
		"A sack used to collect volcanic\n"
		"ash automatically during walks\n"
		"over deep ash.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Basement Key", 271, 0, 0, 0,
		"The key to NEW MAUVILLE, which\n"
		"was constructed beneath MAUVILLE\n"
		"CITY.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Acro Bike", 272, 0, 0, 0,
		"A folding bicycle that is capable\n"
		"of stunts like jumps and wheelies.",
		0, POCKET_KEYITEMS,
		item_Bike, 0,
		0, 1,
	},
	{ "Kibble Box", 273, 0, 0, 0,
		"A case for holding [PO][Ke][BL][OC][K]S made\n"
		"with a BERRY BLENDER. It releases\n"
		"one [PO][Ke][BL][OC][K] when shaken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Letter", 274, 0, 0, 0,
		"An extremely important letter to\n"
		"STEVEN from the PRESIDENT of the\n"
		"DEVON CORPORATION.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Eon Ticket", 275, 0, 0, 0,
		"The ticket required for sailing on a\n"
		"ferry to a distant southern island.\n"
		"It features a drawing of an island.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 1,
	},
	{ "Red Orb", 276, 0, 0, 0,
		"An orb that glows red.\n"
		"It is said to contain an incredible\n"
		"power from ancient times.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Blue Orb", 277, 0, 0, 0,
		"An orb that glows blue.\n"
		"It is said to contain an incredible\n"
		"power from ancient times.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Scanner", 278, 0, 0, 0,
		"A device used to search for\n"
		"life-forms in water.\n"
		"It looks too difficult to use.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Go-goggles", 279, 0, 0, 0,
		"A pair of protective goggles.\n"
		"They enable a TRAINER to travel\n"
		"through even desert sandstorms.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Meteorite", 280, 0, 0, 0,
		"A meteorite that fell from space\n"
		"onto MT. MOON long ago.\n"
		"It is very lumpy and hard.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rm. 1 Key", 281, 0, 0, 0,
		"A key that opens the door to Room\n"
		"1 inside the ABANDONED SHIP.\n"
		"It is old and looks easily broken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rm. 2 Key", 282, 0, 0, 0,
		"A key that opens the door to Room\n"
		"2 inside the ABANDONED SHIP.\n"
		"It is old and looks easily broken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rm. 4 Key", 283, 0, 0, 0,
		"A key that opens the door to Room\n"
		"4 inside the ABANDONED SHIP.\n"
		"It is old and looks easily broken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rm. 6 Key", 284, 0, 0, 0,
		"A key that opens the door to Room\n"
		"6 inside the ABANDONED SHIP.\n"
		"It is old and looks easily broken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Storage Key", 285, 0, 0, 0,
		"A key that opens the storage hold\n"
		"inside the ABANDONED SHIP.\n"
		"It is old and looks easily broken.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Root Fossil", 286, 0, 0, 0,
		"A fossil of an ancient, seafloor-\n"
		"dwelling "POKEMON". It appears to be\n"
		"part of a plant root.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Claw Fossil", 287, 0, 0, 0,
		"A fossil of an ancient, seafloor-\n"
		"dwelling "POKEMON". It appears to be\n"
		"part of a claw.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Devon Scope", 288, 0, 0, 0,
		"A scope that signals the presence\n"
		"of any unseeable "POKEMON".\n"
		"It is made by the DEVON CORP.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "TM01", 289, 3000, 0, 0,
		"An attack that is\n"
		"executed last.\n"
		"The user flinches\n"
		"if hit beforehand.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM02", 290, 3000, 0, 0,
		"Sharp, huge claws\n"
		"hook and slash the\n"
		"foe quickly and\n"
		"with great power.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM03", 291, 3000, 0, 0,
		"An attack with a\n"
		"pulsing blast of\n"
		"water. It may also\n"
		"confuse the foe.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM04", 292, 3000, 0, 0,
		"The user focuses\n"
		"its mind to raise\n"
		"the SP. ATK and\n"
		"SP. DEF stats.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM05", 293, 1000, 0, 0,
		"The foe is made to\n"
		"switch out with an\n"
		"ally. In the wild,\n"
		"the battle ends.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM06", 294, 3000, 0, 0,
		"A move that badly\n"
		"poisons the foe.\n"
		"Its poison damage\n"
		"worsens every turn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM07", 295, 3000, 0, 0,
		"A hailstorm lasting\n"
		"five turns damages\n"
		"all "POKEMON" except\n"
		"the ICE-type.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM08", 296, 3000, 0, 0,
		"The user bulks up\n"
		"its body to boost\n"
		"both its ATTACK and\n"
		"DEFENSE stats.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM09", 297, 3000, 0, 0,
		"The user shoots\n"
		"seeds at the foe.\n"
		"Two to five seeds\n"
		"are shot at once.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM10", 298, 3000, 0, 0,
		"An attack that\n"
		"varies in type and\n"
		"intensity depending\n"
		"on the user.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM11", 299, 2000, 0, 0,
		"The sun blazes for\n"
		"five turns, powering\n"
		"up FIRE-type\n"
		"moves.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM12", 300, 3000, 0, 0,
		"The foe is taunted\n"
		"into a rage that\n"
		"allows it to use\n"
		"only attack moves.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM13", 301, 3000, 0, 0,
		"The foe is struck\n"
		"with an icy beam.\n"
		"It may freeze the\n"
		"foe solid.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM14", 302, 5500, 0, 0,
		"The foe is blasted\n"
		"with a blizzard.\n"
		"It may freeze the\n"
		"foe solid.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM15", 303, 7500, 0, 0,
		"A severely damaging\n"
		"attack that makes\n"
		"the user rest on\n"
		"the next turn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM16", 304, 3000, 0, 0,
		"A wall of light\n"
		"cuts damage from\n"
		"SP. ATK attacks\n"
		"for five turns.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM17", 305, 3000, 0, 0,
		"Enables the user to\n"
		"evade all attacks.\n"
		"It may fail if used\n"
		"in succession.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM18", 306, 2000, 0, 0,
		"A heavy rain falls\n"
		"for five turns,\n"
		"powering up WATER-\n"
		"type moves.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM19", 307, 3000, 0, 0,
		"A harsh attack that\n"
		"absorbs half the\n"
		"damage it inflicted\n"
		"to restore HP.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM20", 308, 3000, 0, 0,
		"It protects the\n"
		"user's party from\n"
		"all status problems\n"
		"for five turns.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM21", 309, 1000, 0, 0,
		"This attack move\n"
		"grows more powerful\n"
		"the less the user\n"
		"likes its TRAINER.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM22", 310, 3000, 0, 0,
		"A 2-turn move that\n"
		"blasts the foe with\n"
		"absorbed energy in\n"
		"the 2nd turn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM23", 311, 3000, 0, 0,
		"An attack with a\n"
		"steel-hard tail.\n"
		"It may lower the\n"
		"foe's DEFENSE stat.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM24", 312, 3000, 0, 0,
		"A strong electrical\n"
		"attack that may\n"
		"also leave the foe\n"
		"paralyzed.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM25", 313, 5500, 0, 0,
		"A brutal lightning\n"
		"attack that may\n"
		"also leave the foe\n"
		"paralyzed.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM26", 314, 3000, 0, 0,
		"An earthquake that\n"
		"strikes all "POKEMON"\n"
		"in battle excluding\n"
		"the user.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM27", 315, 1000, 0, 0,
		"This attack move\n"
		"grows more powerful\n"
		"the more the user\n"
		"likes its TRAINER.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM28", 316, 2000, 0, 0,
		"An attack that hits\n"
		"on the 2nd turn.\n"
		"Can also be used\n"
		"to exit dungeons.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM29", 317, 2000, 0, 0,
		"A strong telekinetic\n"
		"attack. It may also\n"
		"lower the foe's\n"
		"SP. DEF stat.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM30", 318, 3000, 0, 0,
		"A shadowy blob is\n"
		"hurled at the foe.\n"
		"May also lower the\n"
		"foe's SP. DEF.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM31", 319, 3000, 0, 0,
		"An attack that also\n"
		"breaks any barrier\n"
		"like LIGHT SCREEN\n"
		"and REFLECT.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM32", 320, 2000, 0, 0,
		"The user creates\n"
		"illusory copies of\n"
		"itself to raise its\n"
		"evasiveness.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM33", 321, 3000, 0, 0,
		"A wall of light\n"
		"cuts damage from\n"
		"physical attacks\n"
		"for five turns.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM34", 322, 3000, 0, 0,
		"A rapid jolt of\n"
		"electricity strikes\n"
		"the foe. It can't\n"
		"be evaded.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM35", 323, 3000, 0, 0,
		"The foe is scorched\n"
		"with intense flames.\n"
		"The foe may suffer\n"
		"a burn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM36", 324, 1000, 0, 0,
		"Filthy sludge is\n"
		"hurled at the foe.\n"
		"It may poison the\n"
		"target.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM37", 325, 2000, 0, 0,
		"A 5-turn sandstorm\n"
		"that damages all\n"
		"types except ROCK,\n"
		"GROUND, and STEEL.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM38", 326, 5500, 0, 0,
		"The foe is hit with\n"
		"an intense flame.\n"
		"It may leave the\n"
		"target with a burn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM39", 327, 3000, 0, 0,
		"Boulders are hurled\n"
		"at the foe. It also\n"
		"lowers the foe's\n"
		"SPEED if it hits.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM40", 328, 3000, 0, 0,
		"An extremely fast\n"
		"attack against one\n"
		"target. It can't be\n"
		"evaded.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM41", 329, 3000, 0, 0,
		"It enrages the foe,\n"
		"making it incapable\n"
		"of using the same\n"
		"move successively.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM42", 330, 3000, 0, 0,
		"An attack that is\n"
		"boosted if user is\n"
		"burned, poisoned,\n"
		"or paralyzed.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM43", 331, 3000, 0, 0,
		"An attack that may\n"
		"have an additional\n"
		"effect that varies\n"
		"with the terrain.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM44", 332, 3000, 0, 0,
		"The user sleeps for\n"
		"two turns to fully\n"
		"restore HP and heal\n"
		"any status problem.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM45", 333, 3000, 0, 0,
		"If it is the other\n"
		"gender, the foe is\n"
		"made infatuated and\n"
		"unlikely to attack.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM46", 334, 3000, 0, 0,
		"An attack that may\n"
		"take the foe's held\n"
		"item if the user\n"
		"isn't holding one.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM47", 335, 3000, 0, 0,
		"The foe is hit with\n"
		"wings of steel.\n"
		"It may also raise\n"
		"the user's DEFENSE.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM48", 336, 3000, 0, 0,
		"The user employs\n"
		"its psychic power\n"
		"to swap abilities\n"
		"with the foe.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM49", 337, 3000, 0, 0,
		"Steals the effects\n"
		"of the foe's\n"
		"healing or status-\n"
		"changing move.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "TM50", 338, 3000, 0, 0,
		"An intense attack\n"
		"that also sharply\n"
		"reduces the user's\n"
		"SP. ATK stat.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM01", 339, 0, 0, 0,
		"A basic attack.\n"
		"It can be used to\n"
		"cut down thin trees\n"
		"and grass.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM02", 340, 0, 0, 0,
		"A 2-turn move that\n"
		"hits on the 2nd\n"
		"turn. Use it to fly\n"
		"to any known town.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM03", 341, 0, 0, 0,
		"A big wave crashes\n"
		"down on the foe.\n"
		"Can also be used\n"
		"for crossing water.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM04", 342, 0, 0, 0,
		"The foe is slugged\n"
		"at maximum power.\n"
		"Can also be used\n"
		"to move boulders.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM05", 343, 0, 0, 0,
		"A blast of light\n"
		"that cuts the foe's\n"
		"accuracy. It also\n"
		"illuminates caves.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM06", 344, 0, 0, 0,
		"An attack that may\n"
		"also cut DEFENSE.\n"
		"It can also smash\n"
		"cracked boulders.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM07", 345, 0, 0, 0,
		"A powerful charge\n"
		"attack. It can also\n"
		"be used to climb\n"
		"a waterfall.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "HM08", 346, 0, 0, 0,
		"The user dives\n"
		"underwater on the\n"
		"first turn and\n"
		"strikes next turn.",
		0, POCKET_TMHM,
		0, 0,
		0, 0,
	},
	{ "????????", 347, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "????????", 348, 0, 0, 0,
		"?????",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Oak's Parcel", 349, 0, 0, 0,
		"A parcel to be delivered to PROF.\n"
		"OAK from VIRIDIAN CITY's "POKEMON"\n"
		"MART.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Pok� Flute", 350, 0, 0, 0,
		"A flute that is said to instantly\n"
		"awaken any "POKEMON". It has a\n"
		"lovely tone.",
		0, POCKET_KEYITEMS,
		item_NoUse, 2,
		item_BtlFlute, 0,
	},
	{ "Secret Key", 351, 0, 0, 0,
		"The key to CINNABAR ISLAND GYM's\n"
		"front door. It is colored red and\n"
		"decorated.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Bike Voucher", 352, 0, 0, 0,
		"Take this voucher to the BIKE SHOP\n"
		"in CERULEAN CITY and exchange it\n"
		"for a bicycle.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Gold Teeth", 353, 0, 0, 0,
		"A set of false teeth lost by the\n"
		"SAFARI ZONE'S WARDEN. It makes his\n"
		"smile sparkle.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Old Amber", 354, 0, 0, 0,
		"A piece of amber that contains\n"
		"the genes of an ancient "POKEMON".\n"
		"It is clear with a reddish tint.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Card Key", 355, 0, 0, 0,
		"A card-type key that unlocks doors\n"
		"in SILPH CO.'s HEAD OFFICE in\n"
		"SAFFRON CITY.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Lift Key", 356, 0, 0, 0,
		"A key that operates the elevator\n"
		"in TEAM ROCKET's HIDEOUT.\n"
		"It bears the TEAM ROCKET logo.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Helix Fossil", 357, 0, 0, 0,
		"A fossil of an ancient, seafloor-\n"
		"dwelling "POKEMON". It appears to be\n"
		"part of a seashell.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Dome Fossil", 358, 0, 0, 0,
		"A fossil of an ancient, seafloor-\n"
		"dwelling "POKEMON". It appears to be\n"
		"part of a shell.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Silph Scope", 359, 0, 0, 0,
		"A scope that makes unseeable\n"
		""POKEMON" visible.\n"
		"It is made by SILPH CO.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Bicycle", 360, 0, 0, 0,
		"A folding bicycle that allows\n"
		"faster movement than the RUNNING\n"
		"SHOES.",
		0, POCKET_KEYITEMS,
		item_Bike, 0,
		0, 0,
	},
	{ "Town Map", 361, 0, 0, 0,
		"A very convenient map that can be\n"
		"viewed anytime. It even shows your \n"
		"present location.",
		0, POCKET_KEYITEMS,
		item_TownMap, 0,
		0, 0,
	},
	{ "Vs Seeker", 362, 0, 0, 0,
		"A device that indicates TRAINERS\n"
		"who want to battle. The battery\n"
		"charges while traveling.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Fame Checker", 363, 0, 0, 0,
		"A device that enables you to\n"
		"recall what you've heard and seen\n"
		"about famous people.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Tm Case", 364, 0, 0, 0,
		"A case that holds TMs and HMs.\n"
		"It is attached to the BAG's\n"
		"compartment for important items.",
		0, POCKET_KEYITEMS,
		item_TMCase, 0,
		0, 0,
	},
	{ "Berry Pouch", 365, 0, 0, 0,
		"A pouch for carrying BERRIES.\n"
		"It is attached to the BAG's\n"
		"compartment for important items.",
		0, POCKET_KEYITEMS,
		item_BerryPouch, 3,
		item_NoUse, 0,
	},
	{ "Teachy Tv", 366, 0, 0, 0,
		"A television set that is tuned to\n"
		"a program with useful tips for\n"
		"novice TRAINERS.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Tri-pass", 367, 0, 0, 0,
		"A pass for ferries between ONE,\n"
		"TWO, and THREE ISLAND.\n"
		"It has a drawing of three islands.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Rainbow Pass", 368, 0, 0, 0,
		"A pass for ferries between\n"
		"VERMILION and the SEVII ISLANDS.\n"
		"It features a drawing of a rainbow.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Tea", 369, 0, 0, 0,
		"An aromatic tea prepared by an old\n"
		"lady. It will slake even the worst\n"
		"thirst.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Mysticticket", 370, 0, 0, 0,
		"A ticket required to board the ship\n"
		"to NAVEL ROCK.\n"
		"It glows with a mystic light.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Auroraticket", 371, 0, 0, 0,
		"A ticket required to board the ship\n"
		"to BIRTH ISLAND.\n"
		"It glows beautifully.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Powder Jar", 372, 0, 0, 0,
		"A jar for storing BERRY POWDER\n"
		"made using a BERRY CRUSHER.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Ruby", 373, 0, 0, 0,
		"An exquisitely beautiful gem that\n"
		"has a red glow.\n"
		"It symbolizes passion.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},
	{ "Sapphire", 374, 0, 0, 0,
		"An exquisitely beautiful gem that\n"
		"has a blue glow.\n"
		"It symbolizes honesty.",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0,
	},


	//Add your own stuff here.
	{ OAKNAME" Parcel", 375, 0, 0, 0,
		"A parcel to be delivered to\n"
		""BILLNAME" from "PROFOAK".",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0
	},
	{ "Pack of Balls", 376, 0, 0, 0,
		"An egg-tray like box of "POKE" Balls\n"
		"to bring back to "PROFOAK".",
		0, POCKET_KEYITEMS,
		item_NoUse, 0,
		0, 0
	},
	{ "Cool Shades", 377, 500, 49, 10,
		"An item to be held by a "POKEMON".\n"
		"Epic shades that boost coolness.\n"
		"",
		0, POCKET_ITEMS,
		item_NoUse, 0,
		0, 0,
	},
};
