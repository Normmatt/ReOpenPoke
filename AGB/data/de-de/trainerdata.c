#include "../../openpoke.h"

#define DEF(x) \
	extern const unsigned short trn ## x ## Pal[16]; \
	extern const unsigned short trn ## x ## Tiles[1024];
#include "../trainerdata.txt"
#undef DEF
#define DEF(x) \
	trn ## x ## Tiles, trn ## x ## Pal,
const unsigned short * const TrainerPics[] =
{
	0, 0,
	#include "../trainerdata.txt"
};
#undef DEF

#ifdef DEBUG
const char * const tpicnames[] =
{
	"???",
	"Adam Savage",
	"Aqua Admin \x8A",
	"Aqua Admin \x8B",
	"Aqua Grunt \x8A",
	"Aqua Grunt \x8B",
	"Aroma Lady",
	"Battle Girl",
	"Beauty",
	"Biker",
	"Bikini Girl",
	"Bird Keeper",
	"Black Belt",
	"Breeder \x8A",
	"Breeder \x8B",
	"Bug Catcher",
	"Bug Maniac",
	"Burglar",
	"Cameraman",
	"Camper",
	"Channeler",
	"Collector",
	"Cool Couple",
	"Cool Trainer \x8A",
	"Cool Trainer \x8B",
	"Crush Girl",
	"Crush Kin",
	"Cueball",
	"Dani",
	"Danny",
	"Engineer",
	"Expert \x8A",
	"Expert \x8B",
	"Fisherman",
	"Gambler",
	"Gentleman",
	"Guitarist",
	"Hex Maniac",
	"Hiker",
	"Interviewer",
	"Interviewers",
	"Jamie Hyneman",
	"Juggler",
	"Kindler",
	"Lady",
	"Lass",
	"Magma Admin \x8A",
	"Magma Admin \x8B",
	"Magma Grunt \x8A",
	"Magma Grunt \x8B",
	"Maple",
	"Ninja Boy",
	"Old Couple",
	"PI",
	"Painter",
	"Parasol Lady",
	"Picnicker",
	""POKE" Fan",
	""POKE" Maniac",
	"Psychic \x8A",
	"Psychic \x8B",
	"Ranger \x8A",
	"Ranger \x8B",
	"Rich Boy",
	"Rick Astley",
	"Rocker",
	"Rocket Grunt \x8A",
	"Rocket Grunt \x8B",
	"Ruin Maniac",
	"Sailor",
	"School Kid \x8A",
	"School Kid \x8B",
	"Scientist",
	"Sis and Bro",
	"Skier \x8A",
	"Skier \x8B",
	"Super Nerd",
	"Swimmer",
	"Tamer",
	"Teacher",
	"Team Rocket",
	"Tuber \x8A",
	"Tuber \x8B",
	"Twins",
	"Waitress",
	"Young Couple",
	"Youngster",
};
#endif

