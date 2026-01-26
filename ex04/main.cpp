#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Arg count wrong, use filename s1 s2" << std::endl;
        return 1;
    }
    std::string path(argv[1]);
    std::string to_replace(argv[2]);
    std::string replace_with(argv[3]);
    std::ifstream stream(path);
    std::string fullstring;
    std::string line;

    if (to_replace.length() < 1)
    {
        std::cout << "String to replace can not be empty" << std::endl;
        return 1;
    }
    if (!stream.is_open())
    {
        std::cout << "Failed to open file" << std::endl;
        return 1;
    }
    while (getline(stream, line))
        fullstring.append(line + "\n");
    stream.close();
    if (fullstring.length() == 0)
    {
        std::cout << "File is empty" << std::endl;
        return 1;
    }
    fullstring.pop_back();
    size_t index = 0;
    while (index != std::string::npos)
    {
        index = fullstring.find(to_replace, index);
        if (index == std::string::npos)
            break;
        fullstring.erase(index, to_replace.length());
        fullstring.insert(index, replace_with);
        index += replace_with.length();
    }
    std::ofstream output(path + ".replace");
    if (!output.is_open())
    {
        std::cout << "Failed to open output file" << std::endl;
        return 1;
    }
    output << fullstring;
    output.close();
    return 0;
}