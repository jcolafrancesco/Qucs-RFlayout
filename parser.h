/***************************************************************************
                               parser.h
                             ------------------
    begin                : Thu Oct 25 2018
    copyright            : (C) 2018 by Thomas Lepoix
    email                : thomas.lepoix@protonmail.ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <regex>
#include <vector>
#include <memory>

#include "logger.h"
#include "microstrip/microstrip.h"

int parser(std::vector<std::shared_ptr<Element>>& tab_all, std::string const& n_sch);
long double suffix(std::string const s_sci, std::string const s_eng);
std::string check_void(std::string match, std::string label);
std::string mstub_shift(bool const xy, std::string const str, std::string const r);

#endif // PARSER_H
