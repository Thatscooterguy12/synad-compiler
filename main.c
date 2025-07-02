/*   Copyright 2025 contributors of synad(see contributors.txt)

Licensed under the Apache License, Version 2.0 (the "License");
	 you may not use this file except in compliance with the License.
	 You may obtain a copy of the License at

			 http://www.apache.org/licenses/LICENSE-2.0

	 Unless required by applicable law or agreed to in writing, software
	 distributed under the License is distributed on an "AS IS" BASIS,
	 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	 See the License for the specific language governing permissions and
	 limitations under the License.*/

#include "find_files.h"
#include <stdio.h>
#include <string.h>

int main(const int argc, const char* argv[]) { //NOLINT
	if (argc == 1) {
		printf("no arguments provided\nprovide arguments to get compiled\ntype \"synad --help\" for more info"); //NOLINT
		return 0;
	}
	if (strcmp(argv[1], "--help") == 0) {
		printf("formating arguments goes along this format\n-o for specifying files to output aka the executable\n-is for source files this is where your all of the defi");
		printf("nitions for your functions go\n-ih for header files to avoid race conditions in compiling this contains the declarations for functions\na "); //NOLINT
		printf("correctly formated command would look like this:\nsynad -o example.exe -is main.synad math.synad -ih vector.hynad\nthe '-o'  section must ");//NOLINT
		printf("only have .exe files\nthe '-is' section must only have .synad files\nthe '-ih' section must only have .hynad files"); //NOLINT
		return 0;
	}
	start_service(argc, argv);
	return 0;
}
