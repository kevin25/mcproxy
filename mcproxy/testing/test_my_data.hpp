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

#ifndef  TEST_MY_DATA 
#define  TEST_MY_DATA

#ifdef UNIT_TESTS

#include "testing/ut_bootstrap.hpp"

test_status test_my_data_1()
{
    UT_INITIALISATION;

    //UT_CHECK(d.get_number() == 1);
    //UT_REQUIRE(d.get_number() == 2);
    //UT_ERROR("ups failed, sorry");
    //UT_FAIL("ups, I have to force quit");

    UT_SUMMARY;
}
#endif //UNIT_TESTS

#endif //TEST_MY_DATA
