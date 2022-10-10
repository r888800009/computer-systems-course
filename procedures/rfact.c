// Computer Systems: A Programmer's Perspective 3/e
// 3.7.6
// gcc ./rfact.c -g -o rfact

long rfact(long n)
{
  long result;
  if (n <= 1)
    result = 1;
  else
    result = n * rfact(n - 1);
  return result;
}

int main()
{
  rfact(4);
}

