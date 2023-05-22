Rabota s binary file-ove

estestvenite failove v operacionnite sistemi, nai bazovi, navsqkude, 0/1
nqmame encoding koito da gi prevejda
razshirenie .bin

typedef struct{
	int day;
	int month;
	int year;
} Date;

int main(void)
{
	FILE * file;
	//w - wb
	//r - rb
	//a - ab
	//w+ - wb+
	//r+ - rb+
	//a+ - ab+
	//shte go chete za binary, ne kato text
	
	file = fopen("temperatures.bin", "wb");
	if(file == NULL)
	{
		printf("slabo lol\n");
		exit(CANNOT_OPEN_INPUT_FILE);
		//macro = 1, ot header file 
	}
	
	int numberofsamples = 5;
	double samples[5] = {35, 35, 42, 12, 43};
	Date startDate = {
		.day = 22,
		.month = 5,
		.year = 2023
	};
	//vuvejdame sturctura na ime startDate ot tip Date
	
	fwrite(&numberofsamples, sizeof(int), 1, file);
	fwrite(samples, sizeof(double), numberofsamples, file);
	fwrite(&startDate, sizeof(Date), 1, file);
	
	
	
	fclose(file);
	
	return 0;
}
