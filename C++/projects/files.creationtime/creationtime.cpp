#include <iostream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
#include <cstring>

int main(int argc, char** argv )
{

   struct stat fileInfo;

   // Se ha enviado el nombre de un fichero como parametro.
   if (argc < 2) {
      std::cout << "Usage: fileinfo <file name>\n";
      return(EXIT_FAILURE);
   }

   // Se extrae la informacion del archivo en la estructura.
   if (stat(argv[1], &fileInfo) != 0) {  // Use stat() to get the info
      std::cerr << "Error: " << strerror(errno) << '\n';
      return(EXIT_FAILURE);
   }

   // Se lee el tipo de archivo.
   std::cout << "Type:         : ";
   if ((fileInfo.st_mode & S_IFMT) == S_IFDIR) { // From sys/types.h
      std::cout << "Directory\n";
   } else {
      std::cout << "File\n";
   }

   std::cout << "Size          : " << (unsigned long)fileInfo.st_size << '\n';// Size in bytes
   std::cout << "Device        : " << (char)(fileInfo.st_dev + 'A') << '\n';  // Device number
   std::cout << "Created       : " << std::ctime(&fileInfo.st_ctime);         // Creation time
   std::cout << "Modified      : " << std::ctime(&fileInfo.st_mtime);         // Last mod time
}
