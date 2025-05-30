/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "windows/GUIWindowStartup.h"
#include "settings/Settings.h"
#include "Util.h"

CGUIWindowStartup::CGUIWindowStartup(void)
    : CGUIWindow(WINDOW_STARTUP_ANIM, "Startup.xml") 
{
	int boool = 0;
	if (!CUtil::CheckForKernelPatchable(boool)) 
		g_guiSettings.SetBool("myprograms.gameautoregion", false);
}

CGUIWindowStartup::~CGUIWindowStartup(void)
{
}

bool CGUIWindowStartup::OnAction(const CAction &action)
{
  if (!action.IsMouse())
    return true;
  return CGUIWindow::OnAction(action);
}
