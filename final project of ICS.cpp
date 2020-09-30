#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
long dec_bin(int);
long dec_oct(int);
char dec_hexa(int);
long bin_dec(int);
long oct_dec(int);
long hexa_deci(char);
long rem=0,num=0,decimal=0,d=0,octal=0,binary=0,i=0,j=0;
char numb[30],hexa[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char choice,no;
char arr[1000];
int main()
{
	
	printf("\n******NUMBER CONVERSION SYSTEM******\n");


	do
	{
	
		printf("\n\n 1. press 'a' for converting decimal to binary.\n 2. press 'b' for converting decimal to octal.\n 3. press 'c' for converting decimal to hexadecimal.");
		printf("\n\n 4. press 'd' for converting binary to decimal.\n 5. press 'e' for converting binary to octal.\n 6. press 'f' for converting binary to hexadecimal.");
		printf("\n\n 7. press 'g' for converting octal to decimal.\n 8. press 'h' for converting octal to binary.\n 9. press 'i' for converting octal to hexadecimal.");
		printf("\n\n10. press 'j' for converting hexadecimal into decimal.\n11. press 'k' for converting hexadecimal into binary.\n12. press 'l' for converting hexadecimal into octal.");
		
	
	    no=getche();
		switch(no)
		{
			case 'a': //decimal to binary conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			dec_bin(num);
			printf("\nBinary number is: %d",binary);
			break;
		
			case 'b': //decimal to octal conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			dec_oct(num);
			printf("\nOctal number is: %d",octal);
			break;
		
			case 'c': //decimal to hexadecimal conversion
			printf("\n\n ENTER NUMBER: ");	
	    	scanf("%d",&num);
		    dec_hexa(num);
			break;
		
			case 'd': //binary to decimal conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			bin_dec(num);
			printf("\nDecimal number is: %d",decimal);
			break;
		
			case 'e': //binary to octal conversion
			printf("\n\n ENTER NUMBER: ");	
	    	scanf("%d",&num);
			bin_dec(num);
			num=decimal;
			dec_oct(num);
			printf("\nOctal number is: %d",octal);
			break;
		
			case 'f': //binary to hexa decimal conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			bin_dec(num);
			num=decimal;
			dec_hexa(num);
			break;
		
			case 'g': //octal to decimal conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			oct_dec(num);
			printf("\nDecimal number is: %d",decimal);
			break;
		
			case 'h': //octal to binary conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			oct_dec(num);
			num=decimal;
			dec_bin(num);
			printf("\nBinary number is: %d",binary);
			break;
		
			case 'i': //octal to hexadecimal conversion
			printf("\n\n ENTER NUMBER: ");	
		    scanf("%d",&num);
			oct_dec(num);
			num=decimal;
			dec_hexa(num);
			break;
			
			case 'j': //hexadecimal to decimal conversion
			d=0;
			hexa_deci(arr[j]);
			printf("Decimal no is: %d",d);
			break;
			
			case 'k': //hexadecimal to binary conversion
			d=0;
			hexa_deci(arr[j]);
			num=d;
			dec_bin(num);
			printf("\nBinary number is: %d",binary);
			break;
			
			case 'l': //hexadecimal to octal conversion
			d=0;
			hexa_deci(arr[j]);
			num=d;
			dec_oct(num);
			printf("\nOctal number is: %d",octal);
			break;
			
			default:
			printf("\n\nInvalid Number Input");
							
		}
		
		
		printf("\n\n...............................");
	
		printf("\nDo you want to continue(Y/N)\n...............................\n");
		choice=getche();
	}
	while(choice=='y'||choice=='Y');
}

//Funtion Definitons

long dec_bin(int num)
{
	rem=0, binary=0, i=1;
	while(num>0)
	{
		rem=num%2;
		binary=binary+(rem*i);
		num=num/2;
		i*=10;
	}
	return binary;
}


long dec_oct(int num)
{
	rem=0, octal=0, i=1;
	while(num>0)
	{
		rem=num%8;
		octal=octal+(rem*i);
		num=num/8;
		i*=10;
	}
	return octal;
}


char dec_hexa(int num)
{
	rem=0;
	int i,j=0;
	while(num>0)
	{
		rem=num%16;
		if(rem<10)
		arr[j++]=48+rem;
		else
		arr[j++]=55+rem;
		num=num/16;
	}
		//display integer into character:
            	printf("\n\nHexadecimal number is: ");
	            for(i=j; i>=0; i--)
               	printf("%c",arr[i]);
	return 0;
}


long bin_dec(int num)
{
	rem=0, decimal=0, i=1;
	while(num>0)
	{
		rem=num%10;
		decimal=decimal+(rem*i);
		num=num/10;
		i*=2;
	}
	return decimal;
}


long oct_dec(int num)
{
	rem=0, decimal=0, i=1;
	while(num>0)
	{
		rem=num%10;
		decimal=decimal+(rem*i);
		num=num/10;
		i*=8;
	}
	return octal;
}


long hexa_deci(char arr)
    {
    	long p=0, j=0;
    	printf("\n\nENTER NUMBER: ");
    	scanf("%s",numb);
	  	int l= strlen(numb);

	while(--l>=0)
	{
		for(j=0;j<16;j++)
		{
			if(numb[l] == hexa[j])
			d += j*pow(16,p);
		}
		p++;
	}
	
return 0;
	}
