#include <cstdio>

int main() {
		int buffer[5];
		for (int i = 0; i<10; ++i) {
				buffer[i] = i;
				std::printf("%d\n", buffer[i]);
		}
		return 0;
}
