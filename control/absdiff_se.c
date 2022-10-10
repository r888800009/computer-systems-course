// Computer Systems: A Programmer's Perspective 3/e
// 3.6.5
// gcc ./absdiff_se.c -g -o absdiff_se

long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y)
{
  long result;
  if (x < y) {
    lt_cnt++;
    result = y - x;
  }
  else {
    ge_cnt++;
    result = x - y;
  }

  return result;
}

int main()
{
  absdiff_se(10, 20);
  absdiff_se(30, 20);
  absdiff_se(10, 30);
}

