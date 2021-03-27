// Strings questions list
/*
1. 1221 : Split a String in Balanced Strings (Easy) Greedy

RL RRLL RL RL = 4
RL LLLRRR LR

Approach :
1. Just counts and decrements cancel out each elements
*/

int balancedStringSplit(string s) {
	int res = 0;
	int cnt = 0;

	for (auto c : s) {
		if (c == 'L') {
			cnt += 1;
		}
		else {
			cnt += -1;
		}

		if (cnt == 0) {
			res++;
		}
	}

	return res;
}

