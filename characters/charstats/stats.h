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


#ifndef STATS_H
#define STATS_H

class stats
{
public:
    stats();
    
    virtual void set_agility();
    virtual void set_agility(int);
    
    virtual void set_intelligence();
    virtual void set_intelligence(int);
    
    virtual void set_luck();
    virtual void set_luck(int);
    
    virtual void set_strength();
    virtual void set_strength(int);
    
    virtual void set_wisdom();
    virtual void set_wisdom(int);
    
    virtual void set_manapool();
    virtual void set_manapool(int);
    
    virtual void set_stamina();
    virtual void set_stamina(int);
    
    virtual void set_health();
    virtual void set_health(int);
    
    virtual void set_defense();
    virtual void set_defense(int);
    
    virtual void set_magic_resistance();
    virtual void set_magic_resistance(int);
    
    virtual void set_level();
    virtual void set_level(int);
    
    virtual int get_agility();
    virtual int get_intelligence();
    virtual int get_luck();
    virtual int get_strength();
    virtual int get_wisdom();
    
    virtual int get_manapool();
    virtual int get_stamina();
    virtual int get_health();
    
    
    
    virtual int get_magic_resistance();
    virtual int get_fire_resistance();
    virtual int get_water_reistance();
    virtual int get_earth_resistance();
    virtual int get_air_resistance();
    
    virtual int get_slashing_resistance();
    virtual int get_bashing_resistance();
    virtual int get_piercing_resistance();
    
    virtual bool get_magic_immunity();
    virtual bool get_fire_immunity();
    virtual bool get_water_immunity();
    virtual bool get_earth_immunity();
    virtual bool get_air_immunity();
    
    virtual bool get_slashing_immunity();
    virtual bool get_bashing_immunity();
    virtual bool get_piercing_immunity();
    
    virtual int get_level();
    
private:
  int agility;
  int intelligence;
  int luck;
  int strength;
  int wisdom;
  
  int manapool;
  int stamina;
  int health;
  
  struct defense
  {
    int armor;
    
    int magic_resistance;
    int fire_resistance;
    int water_resistance;
    int earth_resistance;
    int air_resistance;
    
    int slashing_resistance;
    int bashing_resistance;
    int piercing_resistance;
    
    bool magic_immunity;
    bool fire_immunity;
    bool water_immunity;
    bool earth_immunity;
    bool air_immunity;
    
    bool slashing_immunity;
    bool bashing_immunity;
    bool piercing_immunity;
    
    
  };  
  int level;
};

#endif // STATS_H
