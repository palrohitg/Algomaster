/*
 1. When an algo is more efficients means that is asysmptoic performs better for the large inputs. 
 2. X will always perform better for the large inputs 
 3. find the complexity of the of the another programs 




*/






int a = 0; 
for (i = 0; i < N; i++) { 
	for (j = N; j > i; j--) { 
		a = a + i + j; 
	} 
} 

// 
int i, j, k = 0; 
for (i = n / 2; i <= n; i++) { 
    for (j = 2; j <= n; j = j * 2) { 
        k = k + n / 2; 
    } 
} 
