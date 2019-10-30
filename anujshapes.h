/********************************************
This header file is created by "HeSmartHasmaker"
uploaded on https://github.com/HeSmartHasmaker
On Date (31/10/2019)
*********************************************/

/*
This Function is use to print Simple rectangle
format = rectangle(raws,coulums);
Uploaded On Date (31/10/2019)
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
Uploaded On Date (31/10/2019)
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
Uploaded On Date (31/10/2019)
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
Uploaded On Date (31/10/2019)
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
/*
This Function is use to print Hollow Inverted Half pyramid
format = hollow_inverted_half_pyramid(m);
Uploaded On Date (31/10/2019)
*/
int hollow_inverted_half_pyramid(int m)
{
  int i,j;

  for(i=m;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      if(i==1||i==m||j==1||j==i)
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
