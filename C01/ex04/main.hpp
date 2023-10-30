#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

class File{
	private:

	public:
		File();
		std::string replace(std::string file_line, std::string the_word, std::string new_word);
};

#endif