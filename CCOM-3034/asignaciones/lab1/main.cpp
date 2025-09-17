// Desteny Hernandez De Juan
// 401-23-3159
// lab 1

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "Date.h"
#include <stdexcept>

TEST_CASE("Test constructor...")
{
    CHECK_NOTHROW(Date());
    CHECK_THROWS(Date(1900, 1, 1));
    CHECK_NOTHROW(Date(2000, 6, 2));
    CHECK_THROWS(Date(1901, 1, 42));
    CHECK_THROWS(Date(1903, 2, 29));
    CHECK_NOTHROW(Date(1904, 2, 29));
}

TEST_CASE("Testing same")
{
    CHECK(Date(1902, 1, 1).same(Date(1902, 1, 1)));
    CHECK(Date(1902, 12, 5).same(Date(1902, 5, 12)) == false);
    Date d;
    Date e;
    CHECK(d.same(e));
}

TEST_CASE("Testing advance")
{
    Date d(1902, 1, 1);
    d.advance(1);
    CHECK(d.same(Date(1902, 1, 2)));
    d.advance(30);
    CHECK(d.same(Date(1902, 2, 1)));
    d.advance(30);
    CHECK(d.same(Date(1902, 3, 3)));
    d.advance(365);
    CHECK(d.same(Date(1903, 3, 3)));

    Date d02(1904, 2, 1);
    d02.advance(28);
    // Being a leap year, February 1904 has 29 days
    CHECK(d02.same(Date(1904, 2, 29)));

    d02.advance(1);
    CHECK(d02.same(Date(1904, 3, 1)));

    // 2000 is also a leap years. If we add 365 days to Jan 1,2000, then we should be
    // at Dec 31, 2000
    Date d03(2000, 1, 1);
    d03.advance(365);
    CHECK(d03.same(Date(2000, 12, 31)));
    d03.advance(1);
    CHECK(d03.same(Date(2001, 1, 1)));
    d03.advance(365);
    CHECK(d03.same(Date(2002, 1, 1)));
}

TEST_CASE("Testing dayOfWeek")
{
    CHECK(Date(1901, 1, 1).getDayOfWeek() == "Tuesday");
    CHECK(Date(2000, 6, 2).getDayOfWeek() == "Friday");
    CHECK(Date(2025, 8, 18).getDayOfWeek() == "Monday");
    CHECK(Date(1999, 12, 31).getDayOfWeek() == "Friday");
}

TEST_CASE("Testing before")
{
    CHECK(Date(2000, 6, 2).before(Date(2001, 6, 2)) == true);
    CHECK(Date(2010, 5, 20).before(Date(2010, 5, 20)) == false);
    CHECK(Date(2020, 6, 2).before(Date(2001, 6, 2)) == false);
    CHECK(Date(2025, 1, 10).before(Date(2025, 5, 12)) == true);
}

TEST_CASE("Testing toString")
{
    CHECK(Date(1901, 1, 1).toString() == "Jan 1, 1901");
    CHECK(Date(2003, 2, 27).toString() == "Feb 27, 2003");
    CHECK(Date(2025, 8, 18).toString() == "Aug 18, 2025");
    CHECK(Date(1999, 12, 31).toString() == "Dec 31, 1999");
}
