/*
Copyright (c) 2005-2010 Lode Vandevenne
All rights reserved.

This file is part of Lode's Programming Interface.

Lode's Programming Interface is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Lode's Programming Interface is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Lode's Programming Interface.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>

#include "lpi_gui_drawer_gl.h"

#include "lpi_draw2dgl.h"
#include "lpi_draw2d.h"
#include "lpi_file.h"
#include "lpi_xml.h"
#include "lpi_texture_gl.h"

#include "lpi_input_sdl.h"

namespace lpi
{
namespace gui
{

////////////////////////////////////////////////////////////////////////////////

GUIDrawerGL::GUIDrawerGL(ScreenGL* screen)
: drawer(screen)
, textdrawer(TextureFactoryGL(screen->getGLContext()), &drawer)
, guidrawer(TextureFactoryGL(screen->getGLContext()), &drawer, &textdrawer)
{
}

IInput& GUIDrawerGL::getInput()
{
  return input;
}

void GUIDrawerGL::loadGUITextures(const std::vector<unsigned char>& png)
{
  guidrawer.initBuiltInGuiTextures(TextureFactoryGL(getScreen()->getGLContext()), png);
}

} //namespace gui
} //namespace lpi


