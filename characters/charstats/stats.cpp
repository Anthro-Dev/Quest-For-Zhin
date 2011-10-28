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


#include "stats.h"

stats::stats()
{
  agility = 0;
  intelligence = 0;
  strength = 0;
  luck = 0;
  wisdom = 0;
  manapool = 0;
  stamina = 0;
  health = 0;
}

void stats::set_agility()
{

}

void stats::set_agility(int agile)
{agility=agile;}

void stats::set_intelligence()
{

}

void stats::set_intelligence(int intel)
{intelligence = intel;}

void stats::set_luck()
{

}
void stats::set_luck(int lucky)
{luck = lucky;}

void stats::set_strength()
{

}
void stats::set_strength(int strong)
{strength = strong;}

void stats::set_wisdom()
{

}
void stats::set_wisdom(int wise)
{wisdom = wise;}

void stats::set_manapool()
{

}
void stats::set_manapool(int mana)
{manapool=mana;}

void stats::set_stamina()
{

}
void stats::set_stamina(int endure)
{stamina = endure;}
void stats::set_health()
{

}
void stats::set_health(int heal)
{health = heal;}

void stats::set_defense()
{

}
void stats::set_defense(int defend)
{defense=defend;}

void stats::set_magic_resistance()
{

}

void stats::set_magic_resistance(int mage_resist)
{defense.magic_resistance = mage_resist;}

void stats::set_level()
{

}
void stats::set_level ( int levels)
{level = levels;}


int stats::get_agility()
{return agility;}

int stats::get_intelligence()
{return intelligence;}

int stats::get_luck()
{return luck;}

int stats::get_strength()
{return strength;}

int stats::get_wisdom()
{return wisdom;}

int stats::get_manapool()
{return manapool;}

int stats::get_stamina()
{return stamina;}


int stats::get_health()
{return health;}


int stats::get_magic_resistance()
{return defense.magic_resistance;}
int stats::get_fire_resistance()
{return defense.fire_resistance;}
int stats::get_earth_resistance()
{return defense.earth_resistance;}
int stats::get_air_resistance()
{return defense.air_resistance;}
int stats::get_water_reistance()
{return defense.water_resistance;}

int stats::get_slashing_resistance()
{return defense.slashing_resistance;}
int stats::get_bashing_resistance()
{return defense.bashing_resistance;}
int stats::get_piercing_resistance()
{return defense.piercing_resistance;}

bool stats::get_magic_immunity()
{return defense.magic_immunity;}
bool stats::get_fire_immunity()
{return defense.fire_immunity;}
bool stats::get_earth_immunity()
{return defense.earth_immunity;}
bool stats::get_air_immunity()
{return defense.air_immunity;}
bool stats::get_water_immunity()
{return defense.water_immunity;}

bool stats::get_slashing_immunity()
{return defense.slashing_immunity;}
bool stats::get_bashing_immunity()
{return defense.bashing_immunity;}
bool stats::get_piercing_immunity()
{return defense.piercing_immunity;}


int stats::get_level()
{return level;}
