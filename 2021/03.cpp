#include <iostream>
#include <array>
#include <bitset>

int main()
{
  constexpr auto INPUT_SIZE = 12;
  constexpr std::array<std::bitset<INPUT_SIZE>, 1000> report = {
    0b101010000100,
    0b100001010100,
    0b111100000101,
    0b010000000010,
    0b001101100010,
    0b100110110101,
    0b110100101101,
    0b101010000001,
    0b110011110000,
    0b110000011011,
    0b010111010100,
    0b000101101001,
    0b110001101100,
    0b110100111101,
    0b000101101100,
    0b011111101000,
    0b001011101100,
    0b001011000110,
    0b000011110110,
    0b101110010111,
    0b010011101001,
    0b011111100101,
    0b000001110101,
    0b100001010010,
    0b001110010101,
    0b111010000110,
    0b100111001111,
    0b110010000101,
    0b001111100001,
    0b000110010101,
    0b111001111011,
    0b110000111111,
    0b011101110001,
    0b111001000011,
    0b100110101011,
    0b101101100010,
    0b110100100101,
    0b101011111000,
    0b001101110011,
    0b011000010011,
    0b101010011111,
    0b101011000110,
    0b011111101001,
    0b000011100000,
    0b101111000101,
    0b010000010111,
    0b010110111000,
    0b101110111100,
    0b000001010011,
    0b011011000001,
    0b110101101011,
    0b011110101100,
    0b010001011100,
    0b110111000011,
    0b010101101001,
    0b110011011111,
    0b111101111101,
    0b110011010111,
    0b100100100110,
    0b011100101111,
    0b100111010000,
    0b110000110111,
    0b111000010111,
    0b100001010001,
    0b101010001111,
    0b010101100111,
    0b001010101111,
    0b000001011011,
    0b111100011110,
    0b101110100010,
    0b011111011110,
    0b111110111011,
    0b001110110111,
    0b010011010000,
    0b111011011101,
    0b101110110100,
    0b111010011111,
    0b011011011101,
    0b110001110100,
    0b000010011010,
    0b011101010101,
    0b100000001000,
    0b000100100001,
    0b011110000000,
    0b111100101010,
    0b001100100010,
    0b101001101110,
    0b111010001110,
    0b101011111101,
    0b010011100101,
    0b110111110101,
    0b111000111010,
    0b010000000111,
    0b001101111111,
    0b101101001100,
    0b111001000100,
    0b001100000000,
    0b011011100100,
    0b010011110000,
    0b000001111110,
    0b110011001010,
    0b001001000110,
    0b011011001101,
    0b001111111111,
    0b001010101010,
    0b011110110100,
    0b110101111111,
    0b001111011101,
    0b001101001111,
    0b000000111100,
    0b001101101010,
    0b011000001001,
    0b100100101101,
    0b000000111011,
    0b011101110011,
    0b101011110010,
    0b010110000010,
    0b000101000000,
    0b010100111011,
    0b000111010011,
    0b111011111000,
    0b011110010000,
    0b000011101001,
    0b101001110000,
    0b011101111101,
    0b100010010100,
    0b011100001011,
    0b110011011000,
    0b100010001110,
    0b100101010111,
    0b100101101110,
    0b010010000011,
    0b101011000111,
    0b100100100111,
    0b001000001000,
    0b110010100011,
    0b111100001011,
    0b011010001000,
    0b000011010000,
    0b000111111011,
    0b110100101110,
    0b011110000011,
    0b100101000011,
    0b001100100001,
    0b000010100011,
    0b111101111011,
    0b001010101101,
    0b101110110010,
    0b101011011010,
    0b111010101011,
    0b001110010001,
    0b111110101011,
    0b111111001011,
    0b011100011101,
    0b111100111001,
    0b101011000000,
    0b100000010111,
    0b000101111101,
    0b001011001110,
    0b111101101010,
    0b110001000000,
    0b101111110100,
    0b010111010110,
    0b111011100001,
    0b111100010100,
    0b000100011100,
    0b000011011011,
    0b010000001001,
    0b100100011001,
    0b001010011110,
    0b110001110011,
    0b100010000110,
    0b001110001101,
    0b111001111111,
    0b100100000011,
    0b001001101011,
    0b100101010011,
    0b010111100010,
    0b001110101100,
    0b000110111111,
    0b010011101101,
    0b011101011011,
    0b101000111100,
    0b101100001011,
    0b000011100011,
    0b111110110011,
    0b100011001101,
    0b000100100011,
    0b110011111010,
    0b011001100111,
    0b000011100110,
    0b011001001110,
    0b000111011110,
    0b010101111101,
    0b101100101011,
    0b111110101111,
    0b101101011010,
    0b000101110111,
    0b101011010010,
    0b101100101010,
    0b111101100100,
    0b011100101000,
    0b100111100010,
    0b000110110011,
    0b000000100001,
    0b011110001110,
    0b000111110010,
    0b001100011001,
    0b000001111001,
    0b001111011111,
    0b110011001111,
    0b101010110101,
    0b011010110100,
    0b100010110011,
    0b111111111101,
    0b010001110011,
    0b001101110000,
    0b001110100011,
    0b110010101011,
    0b001010001000,
    0b101010010000,
    0b000101011111,
    0b111000111101,
    0b011101010110,
    0b100111010011,
    0b010010010000,
    0b111000101101,
    0b110000110010,
    0b010110010001,
    0b011101001110,
    0b001010011111,
    0b110011010001,
    0b100000100001,
    0b110110001100,
    0b111110101101,
    0b101110011011,
    0b100101011011,
    0b001010011010,
    0b111101000110,
    0b100010011000,
    0b001101101001,
    0b010001010100,
    0b011100110010,
    0b011010100110,
    0b101111011110,
    0b100011010111,
    0b000011111110,
    0b000110101011,
    0b000011111000,
    0b101110101100,
    0b101100011110,
    0b011010101011,
    0b010001110111,
    0b101010100001,
    0b011011011001,
    0b110011101011,
    0b110001011111,
    0b000010101100,
    0b100000011101,
    0b010000101000,
    0b001111101100,
    0b111100011100,
    0b101110101101,
    0b110111110100,
    0b010101000001,
    0b011110000001,
    0b111100010101,
    0b011110010001,
    0b001101001100,
    0b001011011100,
    0b010110101111,
    0b000100101011,
    0b001100001010,
    0b000101101111,
    0b010111110110,
    0b100010111011,
    0b000110001011,
    0b010111010011,
    0b101001000101,
    0b011000111101,
    0b001001101001,
    0b010100010000,
    0b111111001000,
    0b011110100011,
    0b011000101100,
    0b111101110100,
    0b101010010110,
    0b111101010111,
    0b011001100100,
    0b001110001110,
    0b111110110000,
    0b110100011111,
    0b000101101110,
    0b011000110011,
    0b111001111110,
    0b011110101110,
    0b010011001101,
    0b000011011111,
    0b111001010111,
    0b000000111101,
    0b100101100100,
    0b100001110101,
    0b111100100101,
    0b001110000110,
    0b011100001101,
    0b100100110011,
    0b001100000100,
    0b010011001110,
    0b111111110011,
    0b101110111111,
    0b100111011000,
    0b111110101110,
    0b100010101100,
    0b010101010000,
    0b011101100001,
    0b010010011101,
    0b001111010111,
    0b011100010101,
    0b111101110101,
    0b010100001110,
    0b011000111000,
    0b100110100101,
    0b110101001111,
    0b000011011010,
    0b110101011010,
    0b110010111100,
    0b110111000101,
    0b100111000100,
    0b110101011111,
    0b110110011101,
    0b010111101010,
    0b111001010011,
    0b001001100100,
    0b001101101101,
    0b011100001100,
    0b000110010011,
    0b010101010110,
    0b000011001101,
    0b101001001100,
    0b111011100011,
    0b011011110100,
    0b001110100001,
    0b001000101001,
    0b001100010111,
    0b110000001101,
    0b100010111101,
    0b000110111101,
    0b111001101101,
    0b101110100000,
    0b101001100101,
    0b101100011001,
    0b111010101101,
    0b010101011100,
    0b111100011000,
    0b101111110101,
    0b110111110011,
    0b000000101100,
    0b010110101011,
    0b100111011011,
    0b010111011000,
    0b000101110100,
    0b001010110101,
    0b000010111011,
    0b001110000001,
    0b010000010000,
    0b101110010101,
    0b000000111110,
    0b110100011000,
    0b110110111100,
    0b100010110100,
    0b001000101110,
    0b011001010101,
    0b000100010001,
    0b100011100010,
    0b100011100000,
    0b100010101001,
    0b100101111000,
    0b110000011110,
    0b011000011101,
    0b101101101101,
    0b100110010110,
    0b111110001000,
    0b111001011010,
    0b001110110001,
    0b100000010101,
    0b111101001111,
    0b000010010100,
    0b101100110001,
    0b100101011000,
    0b010101001010,
    0b000111100000,
    0b100010101000,
    0b011101110100,
    0b110110001110,
    0b010001000110,
    0b100101001100,
    0b110000010111,
    0b011000101111,
    0b001111001000,
    0b001110010010,
    0b000010101101,
    0b011000010000,
    0b011011101010,
    0b001010000101,
    0b001010110010,
    0b100001100000,
    0b110111010000,
    0b100010001101,
    0b010011001011,
    0b110011001110,
    0b110111000110,
    0b000001110010,
    0b110010001001,
    0b111100100100,
    0b000101110110,
    0b000100011001,
    0b111111010101,
    0b011010100000,
    0b110111000100,
    0b011101011010,
    0b100011111110,
    0b100001001101,
    0b100111000001,
    0b100001011111,
    0b010010000010,
    0b010111101011,
    0b000001111100,
    0b001100110111,
    0b100111011100,
    0b101000101100,
    0b100111111111,
    0b101101000110,
    0b101111001111,
    0b011010110101,
    0b111000110000,
    0b100010101101,
    0b011110100100,
    0b001101110101,
    0b011101011000,
    0b010101011000,
    0b010110110011,
    0b110101011110,
    0b111010101100,
    0b110111000000,
    0b101011110110,
    0b100111101010,
    0b110001111110,
    0b001000111001,
    0b110001111011,
    0b011010000100,
    0b000101001010,
    0b010111000001,
    0b100000101000,
    0b011010111001,
    0b010011101110,
    0b011011010101,
    0b010110101100,
    0b000010100110,
    0b011111101011,
    0b101111100110,
    0b110010001100,
    0b100000110100,
    0b100111100011,
    0b110111101010,
    0b110010010000,
    0b000011010010,
    0b111000000111,
    0b100101100101,
    0b100011101110,
    0b111110110110,
    0b111001011000,
    0b010100111101,
    0b111110001100,
    0b000110011101,
    0b000010110010,
    0b101000111011,
    0b101000010100,
    0b001001110001,
    0b111010101111,
    0b100011000101,
    0b111011001100,
    0b000000011100,
    0b101010111001,
    0b110111101000,
    0b011000110001,
    0b100100110010,
    0b011101011101,
    0b001011111111,
    0b101011100110,
    0b101011010111,
    0b100001011010,
    0b100100010100,
    0b000010000010,
    0b101101010111,
    0b001011001101,
    0b101100111010,
    0b110101000001,
    0b101101110100,
    0b100100110111,
    0b110001101001,
    0b010101010001,
    0b110110001111,
    0b000011011101,
    0b111111110001,
    0b011110110101,
    0b111100110101,
    0b011111011011,
    0b101001111110,
    0b110101101010,
    0b111001000001,
    0b010100110001,
    0b111011100101,
    0b101011101101,
    0b010010010001,
    0b111110001001,
    0b100100111000,
    0b111110111100,
    0b001000000000,
    0b111110111101,
    0b110010101101,
    0b100110111110,
    0b001010100010,
    0b101011001001,
    0b111101010100,
    0b110011100000,
    0b100111000111,
    0b000011000110,
    0b101010100000,
    0b101011011000,
    0b000010110110,
    0b111100000011,
    0b000000010010,
    0b101010110111,
    0b001111111000,
    0b100011110101,
    0b001001000010,
    0b111011101110,
    0b001111011100,
    0b111011101010,
    0b011011000101,
    0b000001000010,
    0b001000100100,
    0b001110110011,
    0b010101011011,
    0b100011011010,
    0b111000001110,
    0b110010000000,
    0b100101100010,
    0b100111110011,
    0b010011100001,
    0b010001111010,
    0b110101010101,
    0b101111000001,
    0b001001011100,
    0b011110000110,
    0b111001011110,
    0b111001111010,
    0b110100010011,
    0b001000010010,
    0b111110000010,
    0b001000011001,
    0b010100011101,
    0b101111101011,
    0b010111001111,
    0b111011011010,
    0b111101111010,
    0b001111001111,
    0b111110100000,
    0b100000011000,
    0b110100111100,
    0b001011101000,
    0b010011011001,
    0b010000010011,
    0b100010011010,
    0b110001111111,
    0b011010111011,
    0b101001111100,
    0b111110111000,
    0b110000001100,
    0b010000100101,
    0b110101100111,
    0b110011100010,
    0b110001001101,
    0b011101111011,
    0b011010101101,
    0b011000011111,
    0b101011101001,
    0b010100000010,
    0b110100100010,
    0b101010101101,
    0b010000111101,
    0b110100110110,
    0b101100001100,
    0b001011100011,
    0b011110011001,
    0b000000001010,
    0b000010111001,
    0b001000001010,
    0b100101001010,
    0b010000000011,
    0b101011101100,
    0b011101010111,
    0b100100101001,
    0b110100100100,
    0b110101001101,
    0b010100010111,
    0b011001001100,
    0b101100111001,
    0b100001001011,
    0b101100011111,
    0b001111101101,
    0b010011110101,
    0b011100010011,
    0b000010011101,
    0b011110001101,
    0b010001010011,
    0b001001111001,
    0b100111110100,
    0b111011000111,
    0b101010110000,
    0b010010111011,
    0b100010110111,
    0b110011111110,
    0b101111000111,
    0b111011000000,
    0b110001110001,
    0b001100100011,
    0b001011100111,
    0b101001110010,
    0b111001001101,
    0b000010000011,
    0b001011010010,
    0b110111101110,
    0b001000010110,
    0b000111000111,
    0b010001101010,
    0b011001110101,
    0b011000110000,
    0b000111100100,
    0b101010111101,
    0b010010010010,
    0b101111001001,
    0b001100100111,
    0b100111111000,
    0b100000010011,
    0b101101111001,
    0b000110011110,
    0b100001111101,
    0b110000100001,
    0b101110110110,
    0b111010000010,
    0b101010001010,
    0b000001010000,
    0b101011110100,
    0b001101010110,
    0b100011010011,
    0b101011101110,
    0b011101101101,
    0b100101010110,
    0b101011100111,
    0b100010010000,
    0b000101011101,
    0b011000001000,
    0b111011111110,
    0b101001101111,
    0b101000111001,
    0b100010100111,
    0b011111000101,
    0b100010001111,
    0b110011011101,
    0b111101100111,
    0b111101100000,
    0b010111000100,
    0b111010010010,
    0b001011100100,
    0b001000110100,
    0b100110010111,
    0b111010011100,
    0b100101001101,
    0b101001110110,
    0b011001110010,
    0b000111010110,
    0b010000011101,
    0b101100100001,
    0b101001001000,
    0b000111100011,
    0b100110110000,
    0b110011001001,
    0b001011001001,
    0b110101011100,
    0b010001100101,
    0b000000101010,
    0b001001100001,
    0b101001100011,
    0b110001110101,
    0b111001010010,
    0b111011011000,
    0b101101011000,
    0b101001000010,
    0b010110101110,
    0b001000101101,
    0b111001100111,
    0b011110110000,
    0b100100101100,
    0b010100011111,
    0b111000000000,
    0b001000010111,
    0b000000111010,
    0b111011111001,
    0b000110100011,
    0b011110100110,
    0b011011101100,
    0b000000001101,
    0b100101111011,
    0b101110111001,
    0b100111001110,
    0b101110000101,
    0b001110001111,
    0b001000110010,
    0b111101000011,
    0b000100011011,
    0b010111010101,
    0b001100100000,
    0b100101101011,
    0b010111000011,
    0b010101111010,
    0b011000000111,
    0b011011000110,
    0b101001011100,
    0b101101100000,
    0b101110101001,
    0b111000111110,
    0b110010000010,
    0b110111111001,
    0b100100111011,
    0b111011010011,
    0b100001101000,
    0b111110001110,
    0b110100011010,
    0b010101000111,
    0b000110100111,
    0b001111000101,
    0b000111000011,
    0b110001001001,
    0b011000100010,
    0b101001111011,
    0b110001000101,
    0b110111010011,
    0b011100011011,
    0b011011001011,
    0b100101011111,
    0b000000101000,
    0b100001100110,
    0b000100110101,
    0b110100100000,
    0b000101000001,
    0b101111001100,
    0b111101011100,
    0b010001110110,
    0b000001001100,
    0b100100001110,
    0b000100100111,
    0b001101000001,
    0b100011100110,
    0b110110110010,
    0b110001011001,
    0b110001001000,
    0b001011100010,
    0b111011001011,
    0b100101111110,
    0b001001111011,
    0b110101111010,
    0b101100111100,
    0b101111101000,
    0b111110100101,
    0b011110111101,
    0b010110111101,
    0b111010100010,
    0b111100001100,
    0b000001000111,
    0b111011000100,
    0b101000111000,
    0b011101100100,
    0b011000100000,
    0b110001111101,
    0b111010100011,
    0b110010001010,
    0b000101001111,
    0b010110001001,
    0b101101101010,
    0b101100110010,
    0b010010000111,
    0b111110100010,
    0b011011000011,
    0b111111011011,
    0b001011001000,
    0b010001011101,
    0b101101110010,
    0b010001001101,
    0b101000110101,
    0b100100010011,
    0b101010010001,
    0b101010110011,
    0b101110011110,
    0b001010000110,
    0b000011000000,
    0b101111011000,
    0b100001010110,
    0b010111101101,
    0b001110011011,
    0b100100011110,
    0b100001011001,
    0b010100111111,
    0b011101000110,
    0b111010111011,
    0b000010100100,
    0b010011100111,
    0b110001000011,
    0b000100111010,
    0b100111001000,
    0b010110011000,
    0b101101110101,
    0b110101001011,
    0b000101101010,
    0b011110101111,
    0b110111100111,
    0b111100111011,
    0b001000101011,
    0b000010000101,
    0b110101101101,
    0b010000100111,
    0b100110001011,
    0b011001000110,
    0b111101001000,
    0b000010011000,
    0b110101100001,
    0b100100101111,
    0b110111001010,
    0b111011111011,
    0b010111001000,
    0b011011110011,
    0b111011110010,
    0b100011000111,
    0b011001100011,
    0b001111000000,
    0b101001101010,
    0b111111011101,
    0b000100110001,
    0b111010010000,
    0b011111100000,
    0b101110100101,
    0b100011011110,
    0b001000010001,
    0b110110100000,
    0b100011111011,
    0b100011000001,
    0b000011010100,
    0b110101110110,
    0b001100010010,
    0b111011011001,
    0b010101101111,
    0b110111100100,
    0b101000110100,
    0b110001010100,
    0b100010010111,
    0b000111110111,
    0b101101101100,
    0b110100110001,
    0b011011100000,
    0b010011000000,
    0b110101101000,
    0b100011110001,
    0b001011111101,
    0b011000110110,
    0b011101101010,
    0b000011111100,
    0b010110110111,
    0b111101111001,
    0b110111011101,
    0b010001011000,
    0b100110000101,
    0b011101100101,
    0b111101011000,
    0b011110001000,
    0b001011001100,
    0b110110011111,
    0b010111011100,
    0b001111001110,
    0b110010110110,
    0b111011110110,
    0b100000101100,
    0b111100101011,
    0b000100011110,
    0b010111110000,
    0b110011010101,
    0b110000111110,
    0b011100100011,
    0b000101011000,
    0b101110011100,
    0b010111111000,
    0b110010111101,
    0b000001011010,
    0b100010101011,
    0b110001011100,
    0b100100001100,
    0b010101101010,
    0b001101011110,
    0b011011101111,
    0b011100110011,
    0b100011110000,
    0b011110011111,
    0b001011011101,
    0b011010110010,
    0b101000110111,
    0b001001100111,
    0b010111101111,
    0b110110010001,
    0b110001100000,
    0b011001100101,
    0b000110110111,
    0b010010001100,
    0b101100001010,
    0b101010011110,
    0b001010010110,
    0b101001001001,
    0b100110000010,
    0b011101101111,
    0b011010011001,
    0b010111000010,
    0b101001111111,
    0b000010001001,
    0b101000100011,
    0b001110100100,
    0b011011010000,
    0b100111110101,
    0b100110100000,
    0b000101011001,
    0b001100010110,
    0b110011110010,
    0b011000100001,
    0b001100010101,
    0b110010001101,
    0b100011101001,
    0b001100011110,
    0b110101111101,
    0b111111101000,
    0b000011110001,
    0b010000010100,
    0b001101011001,
    0b100111000000,
    0b011100000101,
    0b110110000000,
    0b110011011001,
    0b001100010011,
    0b110011110110,
    0b010010011111,
    0b100001101001,
    0b011100111100,
    0b001011110001,
    0b001010010011,
    0b010000000101,
    0b000100010011,
    0b111101011001,
    0b111100110110,
    0b111000011100,
    0b111101101110,
    0b000101111011,
    0b010101110101,
    0b011110111111,
    0b100000000011,
    0b111000000011,
    0b000010100000,
    0b001110100010,
    0b011001000010,
    0b100001011110,
    0b010100100111,
    0b000111110011,
    0b110100110101,
    0b011001111100,
    0b111101110110,
    0b001101010101,
    0b110110000010,
    0b010101001101,
    0b110100110000,
    0b000100010101,
    0b111011101001,
    0b110111111111,
    0b000000110010,
    0b100111110110,
    0b001000011111,
    0b100100000101,
    0b011001110110,
    0b010010100110,
    0b000101010111,
    0b101001100000,
    0b110011101110,
    0b010001100001,
    0b011100000100,
    0b010100100000,
    0b100000100100,//*/
  };

  std::array<int, INPUT_SIZE> onesCount{};
  for (auto const& data: report)
  {
    for (auto i = 0; i < data.size(); ++i)
    {
      onesCount[i] += data.test(i) ? 1 : -1;
    }
  }

  std::bitset<INPUT_SIZE> gammaRate;
  for (auto i = 0; i < onesCount.size(); ++i)
  {
    if (onesCount[i] > 0)
    {
      gammaRate.set(i);
    }
  }
  auto epsilonRate = gammaRate;
  epsilonRate.flip();
  std::cout << gammaRate.to_ulong() * epsilonRate.to_ulong() << '\n';
}