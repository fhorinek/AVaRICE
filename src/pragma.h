/*
 *	avarice - The "avarice" program.
 *	Copyright (C) 2011 Joerg Wunsch
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License Version 2
 *	as published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 * Pragma abstractions for various compilers/compiler versions.
 *
 * $Id: pragma.h 232 2011-08-30 13:40:32Z joerg_wunsch $
 */

#ifndef PRAGMA_H
#define PRAGMA_H

/*
 * Evaluate which diagnostic pragmas can be used.
 */

#  define PRAGMA_DIAG_PUSH
#  define PRAGMA_DIAG_POP
#  define PRAGMA_DIAG_IGNORED(x)

#endif
