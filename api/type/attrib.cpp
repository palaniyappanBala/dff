/*
 * DFF -- An Open Source Digital Forensics Framework
 * Copyright (C) 2009-2010 ArxSys
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 *  
 * See http: *www.digital-forensic.org for more information about this
 * project. Please do not directly contact any of the maintainers of
 * DFF for assistance; the project provides a web site, mailing lists
 * and IRC channels for your use.
 * 
 * Author(s):
 *  Frederic Baguelin <fba@digital-forensic.org>
 *  Solal Jacob <sja@digital-forensic.org>
 */


#include "attrib.hpp"

Handle::Handle()
{
};

Handle::Handle(dff_ui64 did)
{
  id = did;
};

Handle::Handle(string nname)
{
  name = nname;
};

Handle::Handle(dff_ui64 did, string nname)
{
  id = did;
  name = nname;
};


attrib::attrib() 
{
  size = 0;
  handle = 0;
};

attrib::~attrib() 
{
};
