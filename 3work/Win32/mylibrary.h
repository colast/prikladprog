#ifndef MY_LIBRARY_H_INCLUDED
#define MY_LIBRARY_H_INCLUDED

struct complex
{
double x;
double y;
};

void read_complex(struct complex *a, int size);
#endif // MY_LIBRARY_H_INCLUDED