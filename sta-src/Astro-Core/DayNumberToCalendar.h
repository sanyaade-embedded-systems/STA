/*

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later
 version.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 details.

 You should have received a copy of the GNU General Public License along with
 this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 Place - Suite 330, Boston, MA 02111-1307, USA.
 Further information about the GNU General Public License can also be found on
 the world wide web at http://www.gnu.org.
 */


/*
 --- Copyright (C) 2009 STA Steering Board (space.trajectory.analysis AT gmail.com) ---
*/

//  Converts Day Numbers into Gregorian Calendar dates
//
//
//
//
//------------------ Author:       Guillermo Ortega               -------------------
//------------------ Affiliation:  European Space Agency (ESA)    -------------------
//-----------------------------------------------------------------------------------
// Created May 23rd 2009



#ifndef DAYNUMBERTOCALENDAR_H
#define DAYNUMBERTOCALENDAR_H

void DayNumberToCalendar(double,
                         double,
                         int&,
                         int&,
                         int&,
                         int&,
                         int&,
                         double&);



#endif // DAYNUMBERTOCALENDAR_H