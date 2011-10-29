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


#ifndef WEAPON_H
#define WEAPON_H

class weapon
{

public:
    weapon();
    
    virtual void set_handedness();
    virtual void set_handedness(int);
    
    virtual void set_handling();
    virtual void set_handling(int);
    
    virtual void set_damage();
    virtual void set_damage(int);
    
    virtual int get_handedness();
    virtual int get_handling();
    virtual int get_damage();
    
private:
  int handedness;
  int handling;
  int damage;  
};

#endif // WEAPON_H
