#include <gtest/gtest.h>
#include "../romano.hpp"

TEST(RomanoTest, TesteNumeroValido) {
    EXPECT_EQ(romanoParaArabico("X"), 10);
}

TEST(RomanoTest, TesteNumeroInvalido) {
    EXPECT_EQ(romanoParaArabico("XXXX"), -1);
}

TEST(RomanoTest, TestesValidosComuns) {
    EXPECT_EQ(romanoParaArabico("IV"), 4);
    EXPECT_EQ(romanoParaArabico("IX"), 9);
    EXPECT_EQ(romanoParaArabico("XL"), 40);
    EXPECT_EQ(romanoParaArabico("XC"), 90);
    EXPECT_EQ(romanoParaArabico("CD"), 400);
    EXPECT_EQ(romanoParaArabico("CM"), 900);
    EXPECT_EQ(romanoParaArabico("MCMXCIV"), 1994);
    EXPECT_EQ(romanoParaArabico("MMXXV"), 2025);
}

TEST(RomanoTest, TestesInvalidos) {
    EXPECT_EQ(romanoParaArabico("IIII"), -1);
    EXPECT_EQ(romanoParaArabico("VV"), -1);
    EXPECT_EQ(romanoParaArabico("IC"), -1);
    EXPECT_EQ(romanoParaArabico("XM"), -1);
    EXPECT_EQ(romanoParaArabico("IM"), -1);
    EXPECT_EQ(romanoParaArabico("MMMM"), -1); // maior que 3000
    EXPECT_EQ(romanoParaArabico("ABCD"), -1); // letras inválidas
}
