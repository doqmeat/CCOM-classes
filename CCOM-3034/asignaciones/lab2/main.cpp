// Desteny Hernandez
// 401-23-3159
// CCOM 303 - Lab 02

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "Rectangle.h"

TEST_CASE("Rectangle Class functionality")
{
	CHECK_NOTHROW(Rectangle r);
	CHECK_THROWS(Rectangle(5, 5, 2, 2));
	CHECK_NOTHROW(Rectangle(1, 3, 5, 8));
}

TEST_CASE("Checking Rectangle area() and perimeter()")
{
	Rectangle r(1, 3, 5, 8);
	CHECK(r.area() == 20);
	CHECK(r.perimeter() == 18);
}

TEST_CASE("Checking Rectangle1 < Rectangle2")
{
	Rectangle r1(1, 2, 5, 6);
	Rectangle r2(3, 1, 6, 4);
	CHECK((r2 < r1) == true);
}

TEST_CASE("checking bounding box rectangles")
{
	Rectangle r1(1, 2, 5, 6);
	Rectangle r2(3, 1, 6, 4);
	Rectangle b(3, 2, 5, 4);
	CHECK(r1 + r2 == b);
	CHECK(r2 + r1 == b);
	Rectangle r3(2, 2, 4, 4);
	Rectangle r4(1, 1, 3, 3);
	Rectangle b2(2, 2, 3, 3);
	CHECK(r4 + r3 == b2);
	CHECK(r3 + r4 == b2);
	Rectangle r5(2, 2, 7, 7);
	Rectangle r6(4, 2, 7, 5);
	Rectangle b3(4, 2, 7, 5);
	CHECK(r5 + r6 == b3);
	CHECK(r6 + r5 == b3);
	Rectangle r7(2, 2, 13, 10);
	Rectangle r8(2, 2, 9, 9);
	Rectangle b4(2, 2, 9, 9);
	CHECK(r7 + r8 == b4);
	CHECK(r8 + r7 == b4);
	Rectangle r9(2, 2, 7, 6);
	Rectangle r10(3, 1, 5, 8);
	Rectangle b5(3, 2, 5, 6);
	CHECK(r9 + r10 == b5);
	CHECK(r10 + r9 == b5);
}

TEST_CASE("scaling rectangle")
{
	Rectangle r(2, 2, 4, 5);
	Rectangle r1(2, 2, 7, 8);
	r.scale(3);
	CHECK(r == r1);
	CHECK_THROWS(r.scale(-3));
}

TEST_CASE("Rectangle to string")
{
	Rectangle r(2, 2, 4, 5);
	CHECK(r.toString() == "\"(2,2),(4,5)\"");
}