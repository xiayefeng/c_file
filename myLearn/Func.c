int max(int x, int y, int z)
{
  if(x<y) x=y;
  if(x<z) x=z;
  return x;
}

int min(int x, int y, int z)
{
	if(x>y) x=y;
	if(x>z) x=z;
	return x;
}