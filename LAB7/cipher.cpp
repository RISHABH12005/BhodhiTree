#include <simplecpp>
char shiftUppercase(char c, int shift) {
    shift = shift % 26;
    int pos = c - 'A';
    pos = (pos - shift + 26) % 26;
    return char(pos + 'A');
}
char decodeChar(char c, int shift) {
    if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z')) {
        return c;
    }
    if (c >= 'A' && c <= 'Z') {
        return shiftUppercase(c, shift);
    }
    char upper = c - 'a' + 'A';
    char shifted = shiftUppercase(upper, shift);
    return shifted - 'A' + 'a';
}
