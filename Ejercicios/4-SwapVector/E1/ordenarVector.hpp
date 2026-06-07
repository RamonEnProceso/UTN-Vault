#ifndef BURBUJA_BASICA_HPP
#define BURBUJA_BASICA_HPP

void burbujaBasica(int v[], int n, int &p) {

	for (int i = 0; i < n - 1; i++) {

		for (int j = 0; j < n - 1 - i; j++) {
			if (v[j] > v[j+1]){
				int temp = v[j];
				v[j]=v[j+1];
				v[j+1] = temp;
			}
			p++;
		};

	};

};

#endif
