#include <stdio.h>

extern "C" {

int learning()
{
	// valtozok
	char	// valtozo tipusa
		x		// valtozo neve
		= '2';	//valtozo erteke

	char character = 'a'; // karakter
	bool boolean = true; // true or false eldontendo 
	int integer = 5; // egesz szam
	float floatingNumber = 5.2f; // lebegopontos szam
	double doublepointfloationg = 23.532; // ketszer olyan pontos szam

	//char <= int <= float <= double
	char c = 'a';
	printf("%d", c);
	unsigned int i = 1;

	//one if
	if (i == 0) {
		i = 1;
	}

	// two side if
	if (i == 1) {
		i = 1;
	} else {
		i = i + 1;
	}

	// i == 1
	//for ciklus
	for (
		int x = 0;	// ciklusvaltozo letrehozasa es inicializacioja
		x < 5;		// ciklus felsoertek meghatarozasa
		x = x + 1	// ciklusvaltozo leptetese
	) {
		i = i + 1;	// ciklus magja / belseje
	}
	
	
	//// x == 0, i == 1
	//i = i + 1;
	//
	//// x == 1, i == 2
	//i = i + 1;

	//// x == 2, i == 3
	//i = i + 1;

	//// x == 3, i == 4
	//i = i + 1;

	//// x == 4, i == 5
	//i = i + 1; 

	// i == 6

	unsigned int calc = 5;
	if (calc < 10) {
		calc = 2 * calc;
	}

	if (calc < 10) {
		calc = 2 * calc;
	}
	else {
		calc = calc / 2;
	}

	printf("%d", calc);

	unsigned int y = 0;
	for (int x = 0; x < 101; x = x + 1) {
		y = y + x;
	}

	printf("Sum from 0 to 100:\t%d\n", i);


	unsigned int k = 0;
	for (int x = 0; x < 51; x = x + 2) {
		k = k + x;
	}
	for (int x = 51; x < 101; x = x + 2) {
		k = k + x;
	}
	printf("Sum even number from 0 to 50 plus odd numbers from 51 to 100:\t%d\n", k);

	unsigned int m = 0;
	for (int x = 0; x < 101; x = x + 2) {
		m = m + x;
	}
	for (int x = 1; x < 101; x = x + 2) {
		m = m - x;
	}

	printf("Sum of every even number from 0 to 100 and minus the sum of every odd number from 0 to 100:\t%d\n", m);

	// 5 / 2 == 2;
	// modulo (%) 5 % 2 == 1

	unsigned int sum = 0;
	for (int x = 0; x < 101; x = x + 1) {
		if (x % 2 == 0) {
			sum = sum + x;
		}
		else {
			sum = sum - x;
		}
	}

	// m = m + x; -> m += x;
	int sum2 = 0;
	for (int x = 0; x < 101; x += 1) {
		sum2 += (x % 2 == 0) ? x : -x;
	}

	printf("Sum of every even number from 0 to 100 and minus the sum of every odd number from 0 to 100:\t%d\n", sum2);

	// how to handle array
	int vector[3];
	vector[0] = 1; //x
	vector[1] = 1; //y
	vector[2] = 1; //z

	int row1[1];
	row1[0] = -1;

	int row2[2];
	row2[0] = -1;
	row2[1] = -1;

	int row3[4];
	for (int i = 0; i < 4; i = i + 1) {
		row3[i] = -1;
	}

	int row4[16];
	for (int i = 0; i < 16; i = i + 1) {
		row4[i] = -1;
	}


	return calc;
}


void prime()
{
	int z = 11;
	int help = 0;
	for (int x = 2; x < z; x = x + 1) {
		if (z % x == 0) {
			help = help + 1;
		}
	}
	if (help == 0) {
		printf("prime");
	}
	else {
		printf("not prime");
	}
}







int main()
{
	// magic -> felh megadja a 2 szamot
	const int MAGIC = 4;
	int user[MAGIC];
	user[0] = 1;
	user[1] = 2;
	user[2] = 0;
	user[3] = 4;
	// magic ends

	int root = -1;
	int left = -1;
	int right = -1;
	
	for (int i = 0; i < MAGIC; i = i + 1) {
		int currentuser = user[i];
		if (root == -1) {
			root = currentuser;
		}
		else {
			if (currentuser < root) {
				if (left == -1) {
					left = currentuser;
				}
				else {
					//...			
				}
			}
			else {
				if (right == -1) {
					right = currentuser;
				}
				else {
					//...
				}
			}
		}
	}

	printf("root: %d\n", root);
	printf("left: %d\n", left);
	printf("right: %d\n", right);

	char a[256];
	scanf_s("%s", a, 256);
	return 0;
}


}
