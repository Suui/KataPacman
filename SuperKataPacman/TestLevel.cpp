#include "catch.hpp"
#include "Level.h"

TEST_CASE("Create Level")
{
	SECTION("Empty")
	{
		Level TestLevel = Level("--- --- ---");
		REQUIRE(TestLevel.GetState().GetRows() == 3);
	}
}