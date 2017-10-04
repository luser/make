/* Event tracing macros and interface.
Copyright (C) 1999-2017 Free Software Foundation, Inc.
This file is part of GNU Make.

GNU Make is free software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation; either version 3 of the License, or (at your option) any later
version.

GNU Make is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <errno.h>

extern FILE *event_file;
extern void event_log(const char* what, const char* name, unsigned int id, const char* which);

#define EVENT_BEGIN "b"
#define EVENT_END   "e"
#define EVENTF(what, name, id, which) do{ if(event_file != NULL) { event_log(what, name, id, which); } } while(0)
