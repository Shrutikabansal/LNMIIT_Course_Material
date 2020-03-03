#include <stdio.h>
#include <stdlib.h>
int asciiToBinary(int input) ;



int main()
{
	FILE *fp1;
	FILE *fp2;
	char c;
	
	fp1 = fopen("cameraman1.bmp", "r");
	fp2 = fopen("reconstruct.bmp","w");
	int count = 1;
	int decimal;
	int z;
	
	//	printf("%d", sizeof(fp1));
		//	printf("%d", sizeof(fp2));
	while(!feof(fp1))
	{
		c = fgetc(fp1);
		fputc(c, fp2);
		
	//	printf("char value =%c, ascii value = %d\n ", c,c);         // print the integer values of fp1 file
	//count++;						//increment to know size of fp1
		
		decimal = c+128;		//to convert into ascii
		
	//	printf("char value =%c, ascii value = %d,ascii value = %d\n ", c,c, decimal);
		
		z = asciiToBinary(decimal);
		
	//printf("%d ",z);
	//printf("\n");
		

	}
	//	printf("%d", count);			// print size of fp1
	

			fclose(fp1);
			fclose(fp2);
			
			
}


int asciiToBinary(int input) 
{
        int result = 0, i = 1, remainder;

        /* convert decimal to binary format */
        while (input > 0) 
		{
                remainder = input % 2;
                result = result + (i * remainder);
                input = input / 2;
                i = i * 10;
        }

        /* print the resultant binary value */
        return(result);

}

 
