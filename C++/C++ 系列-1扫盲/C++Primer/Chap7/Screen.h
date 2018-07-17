#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    inline void clear(ScreenIndex);
private:
    std::vector<Screen> screens;
};

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);
	public:
		using posi = std::string::size_type;

		Screen() = default;
		Screen(posi ht, posi wd):height(ht), width(wd), contents(ht*wd, ' '){}
		Screen(posi ht, posi wd, char c): height(ht), width(wd), contents(ht * wd, c){}
		
		char get() const {return contents[cursor];}
		char get(posi r, posi c) const { return contents[r*width+c]; }
		inline Screen  move(posi r, posi c);
		inline Screen  set(char c);
		inline Screen  set(posi r, posi c, char ch);

		const Screen  display(std::ostream &os) const {do_display(os); return *this; }
		Screen  display(std::ostream &os) {do_display(os); return *this; }

	private:
		void do_display(std::ostream &os) const { os << contents; }
	private:
		posi cursor = 0;
		posi height = 0;
		posi width = 0;
		std::string contents;
};
inline void Window_mgr::clear(ScreenIndex i)
{ 
    if (i >= screens.size()) return;    // judge for out_of_range.
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
inline Screen Screen::move(posi r, posi c)
{
	posi row = r * width;
	cursor = r + c;
	return *this;
}

inline Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen Screen::set(posi r, posi c , char ch)
{
	contents[r*width+c] = ch;
	return *this;
}

#endif