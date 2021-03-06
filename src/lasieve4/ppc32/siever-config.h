/* Configuration file for GNFS lattice siever.

Copyright (C) 2002 Jens Franke, T. Kleinjung.
This file is part of gnfs4linux, distributed under the terms of the 
GNU General Public Licence and WITHOUT ANY WARRANTY.

You should have received a copy of the GNU General Public License along
with this program; see the file COPYING.  If not, write to the Free
Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */

#ifndef __PPC32__SIEVER_CONFIG_H__
#define __PPC32__SIEVER_CONFIG_H__

#include <stdlib.h>
#include <stdarg.h>
#include <gmp.h>

#include "ggnfs.h"

#define L1_BITS 15
/* L1_BITS 15 for Intel Core2 (32Kb L1 data cache) */
/* L1_BITS 16 for Phenom/Opteron... AMD K7 and up  */
/* L1_BITS 14 was here before. Pentium3-4 had 16Kb */

#define ULONG_RI
#define asm_modinv32 modinv32

#define PREINVERT
#define NEED_GETLINE
#define N_PRIMEBOUNDS 7

#include "32bit.h"

static inline void siever_init() { };

u32_t *medsched(u32_t*,u32_t*,u32_t*,u32_t**,u32_t,u32_t);
u32_t *lasched(u32_t*,u32_t*,u32_t*,u32_t,u32_t**,u32_t,u32_t);

#endif
