#include <iostream>
#include <map>

#include "functions.h"


int main()
{
	std::cout << "\tTASK 2\n";
	std::cout << "\tREGISTRY\n";

	std::map<std::string, int64_t> registry;
	std::string result;

	while (result != "exit")
	{
		std::cout << "\nEnter a last name to add a person to the registry\n";
		std::cout << "or enter \"Next\" to call the next human in alphabetical order\n";
		std::cout << "or enter \"exit\" to exit programm\n";

		result = myCin<decltype(result)>();

		if (result == "exit")
		{
			break;
		}
		else if (result == "Next")
		{
			if (registry.empty())
			{
				std::cout << "The queue is empty.\n";
			}
			else
			{
				auto it = registry.begin();
				std::cout << it->first << "\n";

				if (it->second == 1)
				{
					registry.erase(it->first);
				}
				else
				{
					--(it->second);
				}

			}
		}
		else if (!result.empty())
		{
			auto it = registry.find(result);

			if (it == registry.end())
			{
				registry.emplace(result, 1);
			}
			else
			{
				registry[result] = it->second + 1;
			}
		}
	}

	

	return 0;
}
