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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int* find_tags(const int size, const char* arguments[]) {
	int* tags = calloc(size, sizeof(int));
	if (tags == NULL) {
		printf("memory allocation failed");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < size; i++) {
		if (strcmp(arguments[i], "-is") == 0) {
			tags[i] = 1;
			
		}
		else if (strcmp(arguments[i], "-ih") == 0) {
			tags[i] = 2;
			
		}
		else if (strcmp(arguments[i], "-o") == 0) {
			tags[i] = 3;
			
		}
		else if (**(arguments + i) == '-') {
			printf("invalid flag\ntype \"synad --help\" for valid flag types");
			exit(0);
		}
		else {
			tags[i] = tags[i - 1];
		}
	}
	return tags;
}
void find_file(const int target, const char* argument) {
	if (target == 1) {
		if (strstr(argument, ".synad") == NULL) {
			printf("%s cannot be processed because it is not a .synad file\ntype \"synad --help\" for more info", argument);
			exit(1);
		}
		FILE* file = fopen(argument, "r");
		if (file == NULL) {
			printf("file %s was not found", argument);
			exit(1);
		}
		fclose(file);
	}
	else if (target == 2) {
		if (strstr(argument, ".hynad") == NULL) {
			printf("%s cannot be processed because it is not a .hynad file\ntype \"synad --help\" for more info", argument);
			exit(1);
		}
		FILE* file = fopen(argument, "r");
		if (file == NULL) {
			printf("file %s was not found", argument);
			exit(1);
		}
		fclose(file);
	}
	else {
		if (strstr(argument, ".exe") == NULL) {
			printf ("%s cannot be written to because it is not a .exe file\ntype \"synad --help\" for more info", argument);
			exit(1);
		}
		FILE* file = fopen(argument, "w");
		if (file == NULL) {
			printf("file %s was not found", argument);
			exit(1);
		}
		fclose(file);
	}
}
void start_service(const int size, const char* arguments[]) {
	int* tags_locations = find_tags(size, arguments);
	auto file_locations = (int*)(calloc(size, sizeof(int)));
	if (file_locations == NULL) {
		printf("memory allocation failed");
		exit(EXIT_FAILURE);
	}
	if (*arguments[1] != '-') {
		printf("an argument type must be declared before naming files\ntype \"synad --help\" for more info on how to format arguments");
	}
	bool found_target = false;
	bool found_source = false;
	for (int i = 2; i < size; i++) {
		while (*arguments[i] == '-') {
			i++;
			if (i == size) {
				break;
			}
		}
		find_file(tags_locations[i], arguments[i]);
		file_locations[i] = tags_locations[i];
		if (tags_locations[i] == 1 && !found_source) {
			found_source = true;
		}
		else if (tags_locations[i] == 3 && !found_target) {
			found_target = true;
		}
	}
	for (auto i = 0; i < size; i++) {
		printf("%d\n",file_locations[i]);
	}
	if (!(found_target && found_source)) {
		printf("must have a target and a source file to compile\ntype \"synad --help\" for more info");
	}
	free(tags_locations);
}