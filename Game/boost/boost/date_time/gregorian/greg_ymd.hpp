#ifndef DATE_TIME_GREG_YMD_HPP__
#define DATE_TIME_GREG_YMD_HPP__

/* Copyright (c) 2002,2003 CrystalClear Software, Inc.
 * Use, modification and distribution is subject to the 
 * Boost Software License, Version 1.0. (See accompanying
 * file LICENSE-1.0 or http://www.boost.org/LICENSE-1.0)
 * Author: Jeff Garland 
 * $Date: 2007/10/29 07:32:39 $
 */

#include "boost/date_time/year_month_day.hpp"
#include "boost/date_time/special_defs.hpp"
#include "boost/date_time/gregorian/greg_day.hpp"
#include "boost/date_time/gregorian/greg_year.hpp"
#include "boost/date_time/gregorian/greg_month.hpp"

namespace boost {
namespace gregorian {
  
  typedef date_time::year_month_day_base<greg_year, 
                                         greg_month, 
                                         greg_day> greg_year_month_day;
  
  
  
} } //namespace gregorian




#endif
  
