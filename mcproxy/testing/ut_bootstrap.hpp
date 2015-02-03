/*
 * This file is part of mcproxy.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * written by Sebastian Woelke, in cooperation with:
 * INET group, Hamburg University of Applied Sciences,
 * Website: http://mcproxy.realmv6.org/
 */

#ifndef  UT_BOOTSTRAP_HPP
#define  UT_BOOTSTRAP_HPP

#ifdef UNIT_TESTS

#include "testing/ut_suite.hpp"
#include "testing/test_my_data.hpp"

void ut_bootstrap(){
    ut_suite test_suite;
    
    test_suite.add_test_fun(test_my_data_1,4);

    test_suite.run_test_suite();
}

#endif //UNIT_TESTS

#endif //UT_BOOTSTRAP_HPP
