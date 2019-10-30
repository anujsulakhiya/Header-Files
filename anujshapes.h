/********************************************
This header file is created by "HeSmartHasmaker"
uploaded on https://github.com/HeSmartHasmaker
*********************************************/

/*
This Function is use to print Simple rectangle
format = rectangle(raws,coulums);
*/
int rectangle(int m,int n)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
/*
This Function is use to print Hollow rectangle
format = hollow_rectangle(raws,coulums);
*/
int hollow_rectangle(int m,int n)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==m||j==n)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}
/*
This Function is use to print Half pyramid
format = half_pyramid(m);
*/
int half_pyramid(int m)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
/*
This Function is use to print Inverted Half pyramid
format = inverted_half_pyramid(m);
*/
int inverted_half_pyramid(int m)
{
  int i,j;

  for(i=m;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      printf("*");
    }
    printf("\n");
  }
}
