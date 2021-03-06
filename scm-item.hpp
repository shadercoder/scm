// Copyright (C) 2011-2012 Robert Kooima
//
// LIBSCM is free software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITH-
// OUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
// more details.

#ifndef SCM_ITEM_HPP
#define SCM_ITEM_HPP

//------------------------------------------------------------------------------

struct scm_item
{
    scm_item()                   : f(-1), i(-1) { }
    scm_item(int f, long long i) : f( f), i( i) { }

    int       f;
    long long i;

    bool is_valid() const { return (f >= 0 && i >= 0); }

    bool operator<(const scm_item& that) const {
        if     (i < that.i) return true;
        if     (i > that.i) return false;
        return (f < that.f);
    }
};

//------------------------------------------------------------------------------

#endif
