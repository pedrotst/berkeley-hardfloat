#ifndef _common_H_
#define _common_H_

typedef unsigned __int128 uint128_t;

//assumes little endian
// addapted from https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
void printBits(int actualSize, size_t const size, void const * const ptr, const char* text)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    printf("%s", text);
    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            if (actualSize >= (i+1)*8 - (7 - j)) { 
                printf("%u", byte);
            }
        }
    }
    puts("");
}

uint64_t ones(int size) {
    return ((((uint64_t) 1)<<size) - 1);
}

#endif
