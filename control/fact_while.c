// Computer Systems: A Programmer's Perspective 3/e
// 3.6.7
// gcc ./fact_while.c -g -o fact_while

long fact_while(long n)
{
  long result = 1;
  while (n > 1) {
      result *= n;
      n = n - 1;
  }

  return result;
}

int main()
{
  fact_while(4);
}

