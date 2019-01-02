#include<cstdio>
int PowerMod(int a,int b,int c)//caculate (a^b)%c
{
  int res = 1;
  a %= c;
  while(b)
  {
    if(b%2==1)  res = (res*a)%c;
    b/=2;
    a = (a*a)%c;
  }
  return res;
}
int main()
{
  printf("%d\n",PowerMod(2011,501,10000));
  return 0;
}
