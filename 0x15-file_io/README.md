This directory explores the concepts of file input and output in c programming in order to make my c programs more useful and increase the versatility of my programming skills.


The first file 0-read_textfile.c is a simple function to read input from a file and output the read data to the standard output. It required using a buffer of variable size in order to reduce calls to write and recording number of characters read to be used as input bytes to write in order to avoid writing an excess of characters.

The second file 1-create_file.c, is a function that creates a new file and writes some data into it. This file handles the specification of the permissions to be allowed on the file. Also, if the file in question already existed, it should be truncated. Use was made of oflags such as O_CREAT and O_TRUNC.

The third file 2-append_text_to_file.c was similar to the second one except that if the file in question already existed, it was appended to instead of being truncated. Use was made of oflag O_APPEND in the open function.

The fourth file 3-cp.c, contains a program which works very similar to the linux cp command. The executable takes command line arguments just like cp but it doesn't take any flags as this is only a rudimentary version of the cp command.
It uses a buffer of 1024 characters to reduce calls to write and quicken the code execution. It gives an interesting outlook on the uses of buffers for those not very familiar with it. By declaring a buffer of 1024 and an integer bytes, a while loop is with the size of bytes being used as the condition. Take a look.
