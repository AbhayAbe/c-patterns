#include <stdio.h>
#include <stdlib.h>

//Declaring global variables
int i=0,n;
char ch;


void patternCreator()
{
		int up=n,sides=n,down=n; //To count the characters placed in each side
		if(i==0) //For top side
		{
			for(;up!=0;up--)
			{
				printf("%c",ch);
			}
			i++;
      printf("\n");
		}
		if(i>0&&i<n-1) //For right and left sides
	{
		int sides=n-2;
			for(;sides>0;sides=sides-1)
		{
				printf("%c",ch);
				for(int j=0;j<n;j++)
			{
					if(j==n-2)
				{
					printf("%c\n",ch);
					break;
				}
				printf(" ");	
			}
      i++;
		}
	}

  if(i==n-1) //For bottom side
  {
    for(;down!=0;down--)
			{
				printf("%c",ch);
			}
  }
}
	


int main()
{
  printf("Enter the character to be drawn: ");
  scanf("%c",&ch);
	printf("\nEnter the rectangle size: ");
	scanf("%d",&n);
	patternCreator();
}

