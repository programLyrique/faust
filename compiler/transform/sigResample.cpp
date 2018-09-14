/************************************************************************
 ************************************************************************
    FAUST compiler
    Copyright (C) 2003-2018 GRAME, Centre National de Creation Musicale
    ---------------------------------------------------------------------
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ************************************************************************
 ************************************************************************/


 #include "sigResample.hh"

 #include <stdlib.h>
 #include <cstdlib>
 #include <map>
 #include "Text.hh"
 #include "ppsig.hh"
 #include "property.hh"
 #include "signals.hh"
 #include "sigtyperules.hh"
 #include "tlib.hh"
 #include "tree.hh"
 #include "treeTransform.hh"
 #include "exception.hh"

 //-------------------------SignalResample-------------------------------
 // A resampling transformation on signals.
 // Find subpaths in the graph to downsample.
 //----------------------------------------------------------------------

 void SignalResample::traceEnter(Tree t)
 {
     tab(fIndent, cerr);
     cerr << "Enter. Depth= " << fDepth << " " << fMessage << ": " << ppsig(t) << endl;
 }

 void SignalResample::traceExit(Tree t, Tree r)
 {
     tab(fIndent, cerr);
     cerr << "Exit. Depth= " << fDepth << " " << fMessage << ": " << ppsig(t) << " => " << ppsig(r) << endl;
 }

 Tree SignalResample::transformation(Tree sig)
 {

   if(fDepth == fIndent )
   {
     //tab(fIndent, cerr);
     //cerr << fMessage << ": depth=" << fDepth << endl;

     return sigUpSample(self(sig), sigInt(2));
   }
   else
   {
      return SignalIdentity::transformation(sig);
   }
 }
