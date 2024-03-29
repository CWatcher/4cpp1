#pragma once

#include <string>

class Karen
{
public:
	void complain(std::string level) const;
private:
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
	void none(void) const;
	struct LevelFunctionEntry {
		std::string 	level;
		void (Karen::*	function)(void) const;
	};
	static const Karen::LevelFunctionEntry functionsDic[];
};
