#pragma once

#include <string>

class Karen
{
public:
	void complain(std::string level);
	struct LevelFunctionEntry {
		std::string 	level;
		void (Karen::	*function)(void);
	};
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void none(void);
};
