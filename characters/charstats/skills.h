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


#ifndef SKILLS_H
#define SKILLS_H

class skills
{

public:
    skills();
    //combat
    virtual void set_blade(int);
    virtual void set_blade(int,int);
    virtual void set_blunt(int);
    virtual void set_blunt(int,int);
    virtual void set_archery(int);
    virtual void set_archery(int,int);
    virtual void set_throwing(int);
    virtual void set_throwing(int,int);
    virtual void set_block(int);
    virtual void set_block(int,int);
    virtual void set_dualwield(int);
    virtual void set_dualwield(int,int);
    virtual void set_dodge(int);
    virtual void set_dodge(int,int);
    
    //magic
    virtual void set_fire(int);
    virtual void set_fire(int,int);
    virtual void set_air(int);
    virtual void set_air(int,int);
    virtual void set_earth(int);
    virtual void set_earth(int,int);
    virtual void set_water(int);
    virtual void set_water(int,int);
    virtual void set_restoration(int);
    virtual void set_restoration(int,int);
    virtual void set_enchanting(int);
    virtual void set_enchanting(int,int);
    virtual void set_curses(int);
    virtual void set_curses(int,int);
    virtual void set_summoning(int);
    virtual void set_summoning(int,int);
    
    //craft
    virtual void set_healing(int);
    virtual void set_healing(int,int);
    virtual void set_alchemy(int);
    virtual void set_alchemy(int,int);
    virtual void set_fletching(int);
    virtual void set_fletching(int,int);
    virtual void set_blacksmithy(int);
    virtual void set_blacksmithy(int,int);
    virtual void set_botany(int);
    virtual void set_botany(int,int);
    virtual void set_cooking(int);
    virtual void set_cooking(int,int);
    
    //stealth
    virtual void set_sneak(int);
    virtual void set_sneak(int,int);
    virtual void set_steal(int);
    virtual void set_steal(int,int);
    virtual void set_assasinate(int);
    virtual void set_assasinate(int,int);
    virtual void set_espionage(int);
    virtual void set_espionage(int,int);
    virtual void set_disguise(int);
    virtual void set_disguise(int,int);
    virtual void set_diplomacy(int);
    virtual void set_diplomacy(int,int);
    virtual void set_kidnapping(int);
    virtual void set_kidnapping(int,int);
    
    //combat
    virtual int get_blade();
    virtual int get_blunt();
    virtual int get_archery();
    virtual int get_throwing();
    virtual int get_block();
    virtual int get_dualwield();
    virtual int get_dodge();
    
    //magic
    virtual int get_fire();
    virtual int get_air();
    virtual int get_earth();
    virtual int get_water();
    virtual int get_restoration();
    virtual int get_enchanting();
    virtual int get_curses();
    virtual int get_summoning();
    
    //craft
    virtual int get_healing();
    virtual int get_alchemy();
    virtual int get_fletching();
    virtual int get_blacksmithy();
    virtual int get_botany();
    virtual int get_cooking();
    
    //stealth
    virtual int get_sneak();
    virtual int get_steal();
    virtual int get_assasinate();
    virtual int get_espionage();
    virtual int get_disguise();
    virtual int get_diplomacy();
    virtual int get_kidnapping();
    
private:
  struct combat
  {
    int blade;
    int blunt;
    int archery;
    int throwing;
    int block;
    int dualwield;
    int dodge;
  };
  struct magic
  {
    int fire;
    int air;
    int earth;
    int water;
    int restoration;
    int enchanting;
    int curses;
    int summoning;
  };
  struct craft
  {
    int healing;
    int alchemy;
    int fletching;
    int blacksmithy;
    int traps;
    int botany;
    int cooking;
  };
  struct stealth
  {
    int sneak;
    int steal;
    int assasinate;
    int espionage;
    int disguise;
    int diplomacy;
    int kidnapping;
  };
};

#endif // SKILLS_H
