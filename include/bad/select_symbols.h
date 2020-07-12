/* -*- c++ -*- */
/*
 * Copyright 2020 Lukasz Wiecaszek <lukasz.wiecaszek@gmail.com>.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_BAD_SELECT_SYMBOLS_H
#define INCLUDED_BAD_SELECT_SYMBOLS_H

#include <bad/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace bad {

    /*!
     * \brief <+description of block+>
     * \ingroup bad
     *
     */
    class BAD_API select_symbols : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<select_symbols> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of bad::select_symbols.
       *
       * To avoid accidental use of raw pointers, bad::select_symbols's
       * constructor is in a private implementation
       * class. bad::select_symbols::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace bad
} // namespace gr

#endif /* INCLUDED_BAD_SELECT_SYMBOLS_H */

