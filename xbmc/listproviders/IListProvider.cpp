/*
 *  Copyright (C) 2013-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "IListProvider.h"
#include "utils/XBMCTinyXML.h"
#include "StaticProvider.h"
#include "DirectoryProvider.h"
#include "MultiProvider.h"

IListProvider *IListProvider::Create(const TiXmlNode *node, int parentID)
{
  const TiXmlNode *root = node->FirstChild("content");
  if (root)
  {
    const TiXmlNode *next = root->NextSibling("content");
    if (next)
      return new CMultiProvider(root, parentID);

    return CreateSingle(root, parentID);
  }
  return NULL;
}

IListProvider *IListProvider::CreateSingle(const TiXmlNode *content, int parentID)
{
  const TiXmlElement *item = content->FirstChildElement("item");
  if (item)
    return new CStaticListProvider(content->ToElement(), parentID);

  if (!content->NoChildren())
    return new CDirectoryProvider(content->ToElement(), parentID);

  return NULL;
}
