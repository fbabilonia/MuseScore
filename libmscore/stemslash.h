//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2013 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENCE.GPL
//=============================================================================

#ifndef __STEMSLASH_H__
#define __STEMSLASH_H__

#include "element.h"
#include "stem.h"

//---------------------------------------------------------
//   @@ StemSlash
///   used for grace notes of type acciaccatura
//---------------------------------------------------------

class StemSlash : public Element {
      Q_OBJECT

      QLineF line;

   public:
      StemSlash(Score* s) : Element(s) {}
//      StemSlash& operator=(const Stem&);

      void setLine(const QLineF& l);

      virtual StemSlash* clone() const { return new StemSlash(*this); }
      virtual ElementType type() const { return STEM_SLASH; }
      virtual void draw(QPainter*) const;
      virtual void layout();
      Chord* chord() const { return (Chord*)parent(); }
      };

#endif

