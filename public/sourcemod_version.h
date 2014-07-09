/**
 * vim: set ts=4 :
 * =============================================================================
 * SourceMod
 * Copyright (C) 2004-2008 AlliedModders LLC.  All rights reserved.
 * =============================================================================
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */

#ifndef _INCLUDE_SOURCEMOD_VERSION_INFORMATION_H_
#define _INCLUDE_SOURCEMOD_VERSION_INFORMATION_H_

/**
 * @file Contains SourceMod version information.
 * @brief This file will redirect to an autogenerated version if being compiled via
 * the build scripts.
 */

#if defined SM_GENERATED_BUILD
# if defined RC_COMPILE
#  undef SM_USE_VERSIONLIB
# endif
# if defined SM_USE_VERSIONLIB
#  include <versionlib.h>
# else 
#  include <sourcemod_version_auto.h>
# endif
#else
#define SM_BUILD_TAG		"manual"
#define SM_BUILD_LOCAL_REV	"0"
#define SM_BUILD_CSET		"0"
#define SM_BUILD_MAJOR		"0"
#define SM_BUILD_MINOR		"0"
#define SM_BUILD_RELEASE	"0"

#define SM_BUILD_UNIQUEID SM_BUILD_LOCAL_REV ":" SM_BUILD_CSET

#define SM_VERSION_STRING	SM_BUILD_MAJOR "." SM_BUILD_MINOR "." SM_BUILD_RELEASE "-" SM_BUILD_TAG
#define SM_VERSION_FILE		1,7,0,0
#endif
#define SM_BUILD_TIMESTAMP	__DATE__ " " __TIME__

#if !defined(SM_GENERATED_BUILD) || !defined(SM_USE_VERSIONLIB)
# define SOURCEMOD_VERSION 		SM_VERSION_STRING
# define SOURCEMOD_BUILD_ID		SM_BUILD_UNIQUEID
# define SOURCEMOD_BUILD_TIME 	SM_BUILD_TIMESTAMP
#endif

#endif /* _INCLUDE_SOURCEMOD_VERSION_INFORMATION_H_ */

