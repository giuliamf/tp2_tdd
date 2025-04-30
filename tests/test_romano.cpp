#include <gtest/gtest.h>
#include "../romano.hpp"

TEST(RomanoTest, TesteNumeroValido) {
    EXPECT_EQ(romanoParaArabico("X"), 10);
}

TEST(RomanoTest, TesteNumeroInvalido) {
    EXPECT_EQ(romanoParaArabico("XXXX"), -1);
}
