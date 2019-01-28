#include<stdio.h>

int main()
{
  float Open,High,Low,Close;
	scanf("%f %f %f %f",&Open,&High,&Low,&Close);

	if(Close>Open)
	{
  	if(Open>Low)
		{
    if(High>Close)
		  printf("R-Hollow with Lower Shadow and Upper Shadow");
	  else
		  printf("R-Hollow with Lower Shadow");
		}
		else
			{
				if(High>Close)
				printf("R-Hollow with Upper Shadow");
			else
				printf("R-Hollow");
		        }

		}
else

	if(Close<Open)
	  {
		 if(Low<Close)
		 {
            if(High>Open)
			  printf("BW-Solid with Lower Shadow and Upper Shadow");
			else
			  printf("BW-Solid with Lower Shadow");
	      }
		 else
			{
				if(High>Open)
                   printf("BW-Solid with Upper Shadow");
				else
					printf("BW-Solid");
	         }
	   }
	else{
		   if(Close<High)
			   {
                             if(Close>Low)
			   printf("R-Cross with Lower Shadow and Upper Shadow");
			   else
				  printf("R-Cross with Upper Shadow");
		           }
		   else
			     {
				   if(Close>Low) printf("R-Cross with Lower Shadow");
			   else
			   printf("R-Cross");
		             }
	    }

}
