#pragma once

#include <string>

class Karen
{
public:
	void complain(std::string level);
private:
	struct LevelFunctionEntry {
		std::string 	level;
		void (Karen::	*function)(void);
	};
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void none(void);
};
