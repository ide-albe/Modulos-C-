#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "main.hpp"

File::File()
{

}

std::string replace(std::string file_line, std::string the_word, std::string new_word)
{
    size_t pos;
    while ((pos = file_line.find(the_word)) != std::string::npos)
	{
        file_line = file_line.substr(0, pos) + new_word + file_line.substr(pos + the_word.length(), file_line.length());
		pos = file_line.find(the_word, pos + new_word.length());
	}
	return (file_line);
}

void	execute(char **argv)
{
	int  i = 0;
	std::string 	phrase;
	std::string 	file_line;
	std::ifstream 	in_file(argv[1]);
	std::string		file_name = argv[1];
	std::vector<std::string> all_lines;

	if (in_file.is_open())
	{
		while (std::getline(in_file, file_line))
		{
			phrase = replace(file_line, argv[2], argv[3]);
			all_lines.push_back(phrase);
			i++;
		}
		int x = 0;
		std::ofstream 	out_file(file_name + ".replace");
		if (out_file.is_open())
		{
			while (x < i)
			{
				if ((x + 1) == i)
				{
					out_file << all_lines[x] << "";
					break ;
				}
				out_file << all_lines[x] << '\n';
				x++;
			}
			in_file.close();
			out_file.close();
		}
	}
	else
		std::cout << "File doesn't exist!" << std::endl;
}

int main(int args, char **argv)
{
	if (args == 4)
	{
		execute(argv);
	}
	else
    	std::cerr << "ARGS ERROR. Try: ./file 'file_name' 'word_to_find' 'new_word' " << std::endl;
}