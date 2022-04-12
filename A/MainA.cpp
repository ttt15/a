#include "Rechner.h";
#include "Hilfsrechner.h"


#include <iostream>
#include "gmock/gmock.h";
#include "gtest/gtest.h";

using ::testing::Return;
using ::testing::AtLeast;
using ::testing::Exactly;
using ::testing::_;

class MockHilfsrechner:public Hilfsrechner 
{
public:
	MOCK_METHOD(int, hilfsum, ());
};

TEST(MeinTest, TestMitZeiger)
{
	MockHilfsrechner h;
	Rechner r(&h);

	EXPECT_CALL(h, hilfsum()).Times(Exactly(1)).WillOnce(Return(100));
	int result = r.sum_zeiger(1, 2);
	ASSERT_EQ(103, result);

}

TEST(MeinTest, TestOhneZeiger)
{
	MockHilfsrechner h;
	Rechner r(h);

	EXPECT_CALL(h, hilfsum()).Times(Exactly(1)).WillOnce(Return(100));
	int result = r.sum(1, 2);
	ASSERT_EQ(103, result);

}


int main(int argc, char** argv) {
	
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}


