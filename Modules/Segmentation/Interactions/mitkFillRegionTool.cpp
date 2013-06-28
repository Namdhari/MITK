/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "mitkFillRegionTool.h"

#include "mitkFillRegionTool.xpm"

namespace mitk {
  MITK_TOOL_MACRO(Segmentation_EXPORT, FillRegionTool, "Fill tool");
}

mitk::FillRegionTool::FillRegionTool()
:SetRegionTool(1)
{
}

mitk::FillRegionTool::~FillRegionTool()
{
}

const char** mitk::FillRegionTool::GetXPM() const
{
  return mitkFillRegionTool_xpm;
}

std::string mitk::FillRegionTool::GetIconPath() const
{
  return ":/Segmentation/Fill_48x48.png";
}

std::string mitk::FillRegionTool::GetCursorIconPath() const
{
  return ":/Segmentation/Fill_Cursor_48x48.png";
}

const char* mitk::FillRegionTool::GetName() const
{
  return "Fill";
}

