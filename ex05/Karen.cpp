#include "Karen.hpp"
#include <iostream>

const Karen::LevelFunctionEntry Karen::functionsDic[] = {
	{"debug"  , &Karen::debug  },
	{"info"   , &Karen::info   },
	{"warning", &Karen::warning},
	{"error"  , &Karen::error  },
	{"none"   , &Karen::none   },
};

void Karen::complain(std::string level) const
{
	size_t i = 0;

	while (i < sizeof(functionsDic) / sizeof(functionsDic[0]) - 1
	       && level != functionsDic[i].level)
		i++;
	(this->*functionsDic[i].function)();
}
void Karen::debug(void) const
{
	std::cout << "0_DBG. I love to get extra bacon for my "
	          << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		      << "I just love it!"
		      << std::endl;
}
void Karen::info(void) const
{
	std::cout << "1_INF. I cannot believe adding extra bacon cost more money. "
	          << "You don’t put enough! "
		      << "If you did I would not have to ask for it!"
		      << std::endl;
}
void Karen::warning(void) const
{
	std::cout << "2_WRN. I think I deserve to have some extra bacon for free. "
	          << "I’ve been coming here for years "
		      << "and you just started working here last month."
		      << std::endl;
}
void Karen::error(void) const
{
	std::cout << "3_ERR. This is unacceptable, I want to speak to the manager now."
		      << std::endl;
}
void Karen::none(void) const
{}
