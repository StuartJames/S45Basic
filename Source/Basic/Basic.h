/*
 *        Copyright (c) 2020-2023 HydraSystems.
 *
 *  This program is free software; you can redistribute it and/or   
 *  modify it under the terms of the GNU General Public License as  
 *  published by the Free Software Foundation; either version 2 of  
 *  the License, or (at your option) any later version.             
 *                                                                  
 *  This program is distributed in the hope that it will be useful, 
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of  
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the   
 *  GNU General Public License for more details.                    
 *                                                                  
 *
 *  Based on a design by Michael Haardt
 *
 * Edit Date/Ver   Edit Description
 * ==============  ===================================================
 * SJ   19/08/2020  Original
 *
 */

#pragma once

#include "BasicTypes.h"

void      BasicInit();
void      BasicNew(void);
void      BasicExit(void);
void      ExecuteRun(const char *pCommand);
void      ExecuteCommand(const char *pCommand);
int       FindCommand(char *pCommand);
BOOL      GetFilename(char *pIn, char **pOut);
void			MyTrace(const char *szFormat, ...);
void			ProcessOnKey(int Key);
void			SetContext(eCntxType CntxType);
void			SetMainTitle(LPCSTR pStr);


