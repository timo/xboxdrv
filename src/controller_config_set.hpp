/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2011 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_XBOXDRV_CONTROLLER_CONFIG_SET_HPP
#define HEADER_XBOXDRV_CONTROLLER_CONFIG_SET_HPP

#include "controller_config.hpp"

class ControllerConfigSet
{
private:
  std::vector<ControllerConfigPtr> m_config;
  int m_current_config;

public:
  ControllerConfigSet();

  void add_config(ControllerConfigPtr config);

  void next_config();
  void prev_config();
  int  config_count() const;
  ControllerConfigPtr get_config(int i) const;
  ControllerConfigPtr get_config() const;

private:
  ControllerConfigSet(const ControllerConfigSet&);
  ControllerConfigSet& operator=(const ControllerConfigSet&);
};

#endif

/* EOF */
