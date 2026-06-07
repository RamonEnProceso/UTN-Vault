#ifndef BURBUJA_OPTIMIZADA_HPP
#define BURBUJA_OPTIMIZADA_HPP

void burbujaOptimizada(int v[], int n, int &p) {

	for (int i = 0; i < n - 1; i++) {
		bool huboCambios = true;
		for (int j = 0; j < n - 1 - i && huboCambios; j++) {
			huboCambios = false;
			if (v[j] > v[j+1]){
				int temp = v[j];
				v[j]=v[j+1];
				v[j+1] = temp;
				huboCambios = true;
			};
			p++;
		};
	};

};

#endif
