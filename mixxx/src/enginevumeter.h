/***************************************************************************
                          enginevumeter.h  -  description
                             -------------------
    copyright            : (C) 2002 by Tue and Ken Haste Andersen
    email                :
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ENGINEVUMETER_H
#define ENGINEVUMETER_H

#include "engineobject.h"

class DlgVUmeter;
class ControlEngine;

class EngineVUmeter : public EngineObject {
public:
    EngineVUmeter(DlgVUmeter *, const char *);
    ~EngineVUmeter();
    void notify(double) {};
    CSAMPLE *process(const CSAMPLE*, const int);

private:
    ControlEngine *leds;
};

#endif
