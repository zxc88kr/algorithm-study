#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N, M;
	std::cin >> N >> M;

	std::unordered_map<std::string, int> pocket_to_num;
	std::string num_to_pocket[N + 1];

	for (int i = 0; i < N; i++)
	{
		std::string str;
		std::cin >> str;
		pocket_to_num[str] = i + 1;
		num_to_pocket[i + 1] = str;
	}
	for (int i = 0; i < M; i++)
	{
		std::string str;
		std::cin >> str;
		if (str[0] >= 'A' && str[0] <= 'Z')
			std::cout << pocket_to_num[str] << '\n';
		else if (str[0] >= '1' && str[0] <= '9')
			std::cout << num_to_pocket[std::stoi(str)] << '\n';
	}
}