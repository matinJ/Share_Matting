#include "sharedmatting.h"
#include <time.h>

int main()
{
	double sum = 0;;
	int n = 15;
	
	//while(n--){
		SharedMatting sm;
		clock_t start, finish;
		start = clock();
		sm.loadImage("../input/GT24.png");
		sm.loadTrimap("../trimap/Trimap1/GT24.png");
		sm.solveAlpha();
		sm.save("../result/GT24.png");
		finish = clock();
		cout <<  double(finish - start) / CLOCKS_PER_SEC << endl;
		//sum += double(finish - start) / CLOCKS_PER_SEC;
	//}
	//cout << sum / 15 << endl;
	return 0;
}
