void add_item()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;
	

	do
	{
		system("cls");
		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Enter Item Details \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("NextFile.dat","a+");//opening file and creating a staff.txt file to append or write
		
		if((fp = fopen("NextFile.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nItem Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}
		
	//add product name
		do
		{
		
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nItem Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			
				
			}
		}while(!valid);	//while end here
		

		//Product Company
			do
		{
			char productcomp[40];
			fflush(stdin);
			printf("\nItem Brand\t :");
			gets(st.productcomp); // get input string
			st.productcomp[0]=toupper(st.productcomp[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productcomp); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productcomp[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			
				
			}
		}while(!valid);
		
		//productid
		do
			{
				printf("\nPrice [10-5000]Rupees:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);
			
				do
			{
				printf("\nQuantity [1-500]\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);
	
	//	printf("\nProduct Price\t :");
	//	scanf("%i", &st.price);
		//printf("\nProduct ID\t :");
		//scanf("%i", &st.productid);
	//	printf("\nProduct Quantity :");
	//	scanf("%i",&st.Qnt);
		
		fp=fopen("NextFile.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");
		
	}
	while((c = getch()) =='\r');
	menu();
}