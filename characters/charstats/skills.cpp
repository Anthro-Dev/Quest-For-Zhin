/*
    <one line to give the library's name and an idea of what it does.>
    Copyright (C) 2011  Luke Wolf <Lukewolf101010@gmail.com>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "skills.h"

skills::skills()
{

}

/*
 * Combat Skills
 */

void skills::set_blade(int blades)
{combat.blade = blades;}
void skills::set_blade(int blades, int increase)
{combat.blade=blades+increase;}
void skills::set_blunt(int bash)
{combat.blunt = bash;}
void skills::set_blunt(int bash, int up)
{combat.block=bash+up;}
void skills::set_archery(int arch)
{combat.archery=arch;}
void skills::set_archery(int arch, int up)
{combat.archery=arch+up;}
void skills::set_throwing(int throws)
{combat.throwing=throws;}
void skills::set_throwing(int throws, int up)
{combat.throwing=throws+up;}
void skills::set_block(int blocks)
{combat.block =blocks;}
void skills::set_block(int blocks, int up)
{combat.block = blocks+up;}
void skills::set_dualwield(int wield)
{combat.dualwield = wield;}
void skills::set_dualwield(int wield, int up)
{combat.dualwield = wield + up;}
void skills::set_dodge(int dodging)
{combat.dodge = dodging;}
void skills::set_dodge(int dodging, int up)
{combat.dodge = dodging+up;}

/*
 * Magic Skills
 */

void skills::set_fire(int burn)
{magic.fire = burn;}
void skills::set_fire(int burn, int up)
{magic.fire = burn + up;}
void skills::set_air(int gale)
{magic.air = gale;}
void skills::set_air(int gale, int up)
{magic.air = gale+up;}
void skills::set_earth(int quake)
{magic.earth = quake;}
void skills::set_earth(int quake, int up)
{magic.earth = quake + up;}
void skills::set_water(int drown)
{magic.water = drown;}
void skills::set_water(int drown, int up)
{magic.water = drown+up;}
void skills::set_restoration(int heal)
{magic.restoration = heal;}
void skills::set_restoration(int heal, int up)
{magic.restoration = heal + up;}
void skills::set_enchanting(int enchant)
{magic.enchanting=enchant;}
void skills::set_enchanting(int enchant, int up)
{magic.enchanting=enchant+up;}
void skills::set_curses(int curse)
{magic.curses=curse;}
void skills::set_curses(int curse, int up)
{magic.curses=curse+up;}
void skills::set_summoning(int summon)
{magic.summoning=summon;}
void skills::set_summoning(int summon, int up)
{magic.summoning=summon+up;}

/*
 * Crafting Skills
 */

void skills::set_healing(int heal)
{craft.healing=heal;}
void skills::set_healing(int heal, int up)
{craft.healing=heal+up;}
void skills::set_alchemy(int alchem)
{craft.alchemy=alchem;}
void skills::set_alchemy(int alchem, int up)
{craft.alchemy=alchem+up;}
void skills::set_fletching(int fletch)
{craft.fletching=fletch;}
void skills::set_fletching(int fletch, int up)
{craft.fletching=fletch+up;}
void skills::set_blacksmithy(int smith)
{craft.blacksmithy=smith;}
void skills::set_blacksmithy(int smith, int up)
{craft.blacksmithy=smith+up;}
void skills::set_botany(int plant)
{craft.botany=plant;}
void skills::set_botany(int plant, int up)
{craft.botany=plant+up;}
void skills::set_cooking(int cook)
{craft.cooking=cook;}
void skills::set_cooking(int cook, int up)
{craft.cooking=cook+up;}

/*
 * Stealth Skills
 */

void skills::set_sneak(int snk)
{stealth.sneak=snk;}
void skills::set_sneak(int snk, int up)
{stealth.sneak=snk+up;}
void skills::set_steal(int stl)
{stealth.steal=stl;}
void skills::set_steal(int stl, int up)
{stealth.steal=stl+up;}
void skills::set_assasinate(int kill)
{stealth.assasinate=kill;}
void skills::set_assasinate(int kill, int up)
{stealth.assasinate=kill+up;}
void skills::set_espionage(int spy)
{stealth.espionage=spy;}
void skills::set_espionage(int spy, int up)
{stealth.espionage=spy+up;}
void skills::set_disguise(int hide)
{stealth.disguise=hide;}
void skills::set_disguise(int hide, int up)
{stealth.disguise=hide+up;}
void skills::set_diplomacy(int diplomat)
{stealth.diplomacy=diplomat;}
void skills::set_diplomacy(int diplomat, int up)
{stealth.diplomacy=diplomat+up;}
void skills::set_kidnapping(int kidnap)
{stealth.kidnapping=kidnap;}
void skills::set_kidnapping(int kidnap, int up)
{stealth.kidnapping=kidnap+up;}

/*
 * Combat Skills
 */

int skills::get_blade()
{return combat.blade;}
int skills::get_blunt()
{return combat.blunt;}
int skills::get_archery()
{return combat.archery;}
int skills::get_throwing()
{return combat.throwing;}
int skills::get_block()
{return combat.block;}
int skills::get_dualwield()
{return combat.dualwield;}
int skills::get_dodge()
{return combat.dodge;}

/*
 * Magic Skills
 */

int skills::get_fire()
{return magic.fire;}
int skills::get_air()
{return magic.air;}
int skills::get_earth()
{return magic.earth;}
int skills::get_water()
{return magic.water;}
int skills::get_restoration()
{return magic.restoration;}
int skills::get_enchanting()
{return magic.enchanting;}
int skills::get_curses()
{return magic.curses;}
int skills::get_summoning()
{return magic.summoning;}

/*
 * Crafting Skills
 */

int skills::get_healing()
{return craft.healing;}
int skills::get_alchemy()
{return craft.alchemy;}
int skills::get_fletching()
{return craft.fletching;}
int skills::get_blacksmithy()
{return craft.blacksmithy;}
int skills::get_botany()
{return craft.botany;}
int skills::get_cooking()
{return craft.cooking;}

/*
 * Stealth Skills
 */

int skills::get_sneak()
{return stealth.sneak;}
int skills::get_steal()
{return stealth.steal;}
int skills::get_assasinate()
{return stealth.assasinate;}
int skills::get_espionage()
{return stealth.espionage;}
int skills::get_disguise()
{return stealth.disguise;}
int skills::get_diplomacy()
{return stealth.diplomacy;}
int skills::get_kidnapping()
{return stealth.kidnapping;}

