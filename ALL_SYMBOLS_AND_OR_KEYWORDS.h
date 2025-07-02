/*  Copyright 2025 contributors of synad(see contributors.txt)

Licensed under the Apache License, Version 2.0 (the "License");
	 you may not use this file except in compliance with the License.
	 You may obtain a copy of the License at

			 http://www.apache.org/licenses/LICENSE-2.0

	 Unless required by applicable law or agreed to in writing, software
	 distributed under the License is distributed on an "AS IS" BASIS,
	 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	 See the License for the specific language governing permissions and
	 limitations under the License.*/

// WARNING: This file is for copying (reference) only.
// DO NOT INCLUDE this header file in any source code!
// Its purpose is to provide a clear, readable list of items for manual inclusion.
// If you decide to use the file I Will Strike you with lighting.

#ifndef ALL_SYMBOLS_AND_OR_KEYWORDS_H
#define ALL_SYMBOLS_AND_OR_KEYWORDS_H
const char* keywords[36] = {"if", "this", "pass", "else", "else-if", "give", "sudo","class", "new", "delete",
	"static", "namespace", "using", "include","friend", "private", "public", "return", "const", "set", "switch",
	"default", "for", "while", "break", "break_all", "continue", "try", "catch", "throw", "exception","operator",
	"lambda", "sizeof", "go-to","func"};
const char* default_types[13] = {"int", "double", "float", "bool", "printer", "pnt" /*pointer*/, "unsigned_int",
	"unsigned_double","unsigned_float","char","auto", "void", "exception"};
const char* multi_char_terminators[3] = {"//", "/*", "*/"};
const char* multi_char_assignment_operators[7] = {"*=", "/=", "+=", "-=", "%=", "++", "--"};
const char* multi_char_comparator[12] = {"==", ">=", "<=", "!=", "|<", "|>", "&<", "&>", "|=", "&=","&&", "||",};
const char* command_line_arguments[3] = {"-o"/*target file to compile into*/, "-is" /*target source files*/, "-ih"/*target header files*/};
const char* all_multi_char[100] = {"==", ">=", "<=", "!=", "|<", "|>", "&<", "&>", "|=", "&=","&&", "||","*=",
	"/=", "+=", "-=", "%=", "++", "--","//", "/*", "*/"};
constexpr char single_char_comparator[3] = {'<', '>','!'};
constexpr char single_char_assignment_operators[6] = {'=', '/', '*', '+', '-', '%'};
constexpr char delimiters[9] = {'(', ')', '[', ']', '{', '}', '\'', '"', '`'};
constexpr char single_char_terminators[3] = {';', ',', '\n'};\
constexpr char all_single_char[21] = {';', ',', '\n','(', ')', '[', ']', '{', '}', '\'', '"', '`','=', '/', '*', '+', '-', '%','<', '>','!'};
#endif
