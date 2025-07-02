#include <stdlib.h>
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
typedef struct {
	const char **content;
	const char **name;
} file_contents;
void lexi_parse(const char* arguments[], int* file_locations) {
	file_contents contents;
	int arguments_length = sizeof(arguments) / sizeof(arguments[0]); //NOLINT
	const char* empty_array[arguments_length];
	contents.name = arguments;
	contents.content = empty_array;

	free(arguments);
}