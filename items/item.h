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


#ifndef ITEM_H
#define ITEM_H

class item
{

public:
    item();
    virtual void set_value();
    virtual void set_value(int);
    
    virtual void set_enchanted();
    virtual void set_enchanted(bool);
    
    virtual void set_fire_enchant();
    virtual void set_fire_enchant(int);
    
    virtual void set_earth_enchant();
    virtual void set_earth_enchant(int);
    
    virtual void set_air_enchant();
    virtual void set_air_enchant(int);
    
    virtual void set_water_enchant();
    virtual void set_water_enchant(int);
    
    virtual void set_heal_enchant();
    virtual void set_heal_enchant(int);
    
    virtual void set_agility_enchant();
    virtual void set_agility_enchant(int);
    
    virtual void set_strength_enchant();
    virtual void set_strength_enchant(int);
    
    virtual void set_intelligence_enchant();
    virtual void set_intelligence_enchant(int);
    
    virtual void set_wisdom_enchant();
    virtual void set_wisdom_enchant(int);
    
    virtual int get_value();
    virtual bool get_enchanted();
    virtual int get_fire_enchant();
    virtual int get_earth_enchant();
    virtual int get_air_enchant();
    virtual int get_water_enchant();
    virtual int get_heal_enchant();
    virtual int get_agility_enchant();
    virtual int get_strength_enchant();
    virtual int get_intelligence_enchant();
    virtual int get_wisdom_enchant();
    
private:
  int value;
  struct enchanted
  {
    bool enchanted;
    int fire;
    int water;
    int earth;
    int air;
    int healing;
    int agility;
    int strength;
    int intelligence;
    int wisdom;
  };
    
};

#endif // ITEM_H
