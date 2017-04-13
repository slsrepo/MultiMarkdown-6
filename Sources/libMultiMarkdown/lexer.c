/* Generated by re2c 0.14.3 on Wed Mar 29 19:16:39 2017 */
/**

	MultiMarkdown 6 -- Lightweight markup processor to produce HTML, LaTeX, and more.

	@file lexer.re

	@brief Description of the regular expressions used to define tokens, 
	used by re2c to create a lexer/tokenizer.


	@author	Fletcher T. Penney
	@bug	

**/

/*

	Copyright © 2016 - 2017 Fletcher T. Penney.


	The `MultiMarkdown 6` project is released under the MIT License..
	
	GLibFacade.c and GLibFacade.h are from the MultiMarkdown v4 project:
	
		https://github.com/fletcher/MultiMarkdown-4/
	
	MMD 4 is released under both the MIT License and GPL.
	
	
	CuTest is released under the zlib/libpng license. See CuTest.c for the text
	of the license.
	
	
	## The MIT License ##
	
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.

*/

#include "lexer.h"
#include "libMultiMarkdown.h"
#include "parser.h"


// Basic scanner struct

#define YYCTYPE		unsigned char
#define YYCURSOR	s->cur
#define YYMARKER	s->ptr
#define YYCTXMARKER	s->ctx

int scan(Scanner * s, const char * stop) {

	scan:

	if (s->cur >= stop) {
		return 0;
	}

	s->start = s->cur;

	
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case 0x01:
	case 0x02:
	case 0x03:
	case 0x04:
	case 0x05:
	case 0x06:
	case 0x07:
	case 0x08:
	case '\v':
	case '\f':
	case 0x0E:
	case 0x0F:
	case 0x10:
	case 0x11:
	case 0x12:
	case 0x13:
	case 0x14:
	case 0x15:
	case 0x16:
	case 0x17:
	case 0x18:
	case 0x19:
	case 0x1A:
	case 0x1B:
	case 0x1C:
	case 0x1D:
	case 0x1E:
	case 0x1F:
	case ',':
	case ';':
	case '?':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case 0x7F:	goto yy66;
	case '\t':	goto yy46;
	case '\n':	goto yy55;
	case '\r':	goto yy57;
	case ' ':	goto yy48;
	case '!':	goto yy19;
	case '"':	goto yy29;
	case '#':	goto yy50;
	case '$':	goto yy42;
	case '%':	goto yy52;
	case '&':	goto yy36;
	case '\'':	goto yy31;
	case '(':	goto yy21;
	case ')':	goto yy23;
	case '*':	goto yy58;
	case '+':	goto yy5;
	case '-':	goto yy7;
	case '.':	goto yy33;
	case '/':	goto yy38;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy54;
	case ':':	goto yy34;
	case '<':	goto yy9;
	case '=':	goto yy13;
	case '>':	goto yy25;
	case '[':	goto yy15;
	case '\\':	goto yy40;
	case ']':	goto yy17;
	case '^':	goto yy44;
	case '_':	goto yy60;
	case '`':	goto yy62;
	case '{':	goto yy3;
	case '|':	goto yy64;
	case '}':	goto yy27;
	case '~':	goto yy11;
	case 0xC2:	goto yy49;
	case 0xC3:
	case 0xC4:
	case 0xC5:
	case 0xC6:
	case 0xC7:
	case 0xC8:
	case 0xC9:
	case 0xCA:
	case 0xCB:
	case 0xCC:
	case 0xCD:
	case 0xCE:
	case 0xCF:
	case 0xD0:
	case 0xD1:
	case 0xD2:
	case 0xD3:
	case 0xD4:
	case 0xD5:
	case 0xD6:
	case 0xD7:
	case 0xD8:
	case 0xD9:
	case 0xDA:
	case 0xDB:
	case 0xDC:
	case 0xDD:
	case 0xDE:
	case 0xDF:	goto yy67;
	case 0xE0:	goto yy68;
	case 0xE1:
	case 0xE2:
	case 0xE3:
	case 0xE4:
	case 0xE5:
	case 0xE6:
	case 0xE7:
	case 0xE8:
	case 0xE9:
	case 0xEA:
	case 0xEB:
	case 0xEC:
	case 0xED:
	case 0xEE:
	case 0xEF:	goto yy69;
	case 0xF0:	goto yy70;
	case 0xF1:
	case 0xF2:
	case 0xF3:	goto yy71;
	case 0xF4:	goto yy72;
	default:	goto yy2;
	}
yy2:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy4;
	case 1: 	goto yy6;
	case 2: 	goto yy10;
	case 3: 	goto yy12;
	case 4: 	goto yy14;
	case 5: 	goto yy20;
	case 6: 	goto yy37;
	case 7: 	goto yy51;
	case 8: 	goto yy81;
	case 9: 	goto yy89;
	case 10: 	goto yy96;
	case 11: 	goto yy105;
	case 12: 	goto yy112;
	case 13: 	goto yy121;
	case 14: 	goto yy128;
	case 15: 	goto yy135;
	case 16: 	goto yy145;
	default:	goto yy280;
	}
yy3:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '+':	goto yy285;
	case '-':	goto yy284;
	case '=':	goto yy281;
	case '>':	goto yy283;
	case '{':	goto yy279;
	case '~':	goto yy282;
	default:	goto yy4;
	}
yy4:
	{ return TEXT_BRACE_LEFT; }
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '+':	goto yy276;
	default:	goto yy6;
	}
yy6:
	{ return PLUS; }
yy7:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy270;
	default:	goto yy8;
	}
yy8:
	{ return DASH_N; }
yy9:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '<':	goto yy267;
	default:	goto yy10;
	}
yy10:
	{ return ANGLE_LEFT; }
yy11:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '>':	goto yy263;
	case '~':	goto yy262;
	default:	goto yy12;
	}
yy12:
	{ return SUBSCRIPT; }
yy13:
	yyaccept = 4;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '=':	goto yy259;
	default:	goto yy14;
	}
yy14:
	{ return EQUAL; }
yy15:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '#':	goto yy255;
	case '%':	goto yy249;
	case '>':	goto yy257;
	case '?':	goto yy251;
	case '^':	goto yy253;
	default:	goto yy16;
	}
yy16:
	{ return BRACKET_LEFT; }
yy17:
	++YYCURSOR;
	{ return BRACKET_RIGHT; }
yy19:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '[':	goto yy247;
	default:	goto yy20;
	}
yy20:
	{ goto scan; }
yy21:
	++YYCURSOR;
	{ return PAREN_LEFT; }
yy23:
	++YYCURSOR;
	{ return PAREN_RIGHT; }
yy25:
	++YYCURSOR;
	{ return ANGLE_RIGHT; }
yy27:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '}':	goto yy245;
	default:	goto yy28;
	}
yy28:
	{ return TEXT_BRACE_RIGHT; }
yy29:
	++YYCURSOR;
	{ return QUOTE_DOUBLE; }
yy31:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':	goto yy243;
	default:	goto yy32;
	}
yy32:
	{ return QUOTE_SINGLE; }
yy33:
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ' ':	goto yy235;
	case '.':	goto yy236;
	default:	goto yy20;
	}
yy34:
	++YYCURSOR;
	{ return COLON; }
yy36:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'A':
	case 'a':	goto yy230;
	default:	goto yy37;
	}
yy37:
	{ return AMPERSAND; }
yy38:
	++YYCURSOR;
	{ return SLASH; }
yy40:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\n':	goto yy153;
	case '\r':	goto yy155;
	case ' ':	goto yy158;
	case '!':	goto yy218;
	case '"':	goto yy208;
	case '#':	goto yy188;
	case '$':	goto yy186;
	case '%':	goto yy184;
	case '&':	goto yy172;
	case '\'':	goto yy206;
	case '(':	goto yy200;
	case ')':	goto yy198;
	case '*':	goto yy164;
	case '+':	goto yy182;
	case ',':	goto yy214;
	case '-':	goto yy180;
	case '.':	goto yy220;
	case '/':	goto yy168;
	case ':':	goto yy210;
	case ';':	goto yy212;
	case '<':	goto yy176;
	case '=':	goto yy178;
	case '>':	goto yy174;
	case '?':	goto yy216;
	case '@':	goto yy170;
	case '[':	goto yy192;
	case '\\':	goto yy156;
	case ']':	goto yy190;
	case '^':	goto yy166;
	case '_':	goto yy162;
	case '`':	goto yy204;
	case '{':	goto yy196;
	case '|':	goto yy160;
	case '}':	goto yy194;
	case '~':	goto yy202;
	default:	goto yy41;
	}
yy41:
	{ return TEXT_BACKSLASH; }
yy42:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '$':	goto yy151;
	default:	goto yy43;
	}
yy43:
	{ return MATH_DOLLAR_SINGLE; }
yy44:
	++YYCURSOR;
	{ return SUPERSCRIPT; }
yy46:
	++YYCURSOR;
	{ return INDENT_TAB; }
yy48:
	YYCTXMARKER = YYCURSOR + 1;
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\t':	goto yy137;
	case '\n':	goto yy55;
	case '\r':	goto yy150;
	case ' ':	goto yy134;
	case 0xC2:	goto yy136;
	default:	goto yy20;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy66;
	case 0xA0:	goto yy133;
	default:	goto yy2;
	}
yy50:
	YYCTXMARKER = YYCURSOR + 1;
	yyaccept = 7;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy88;
	case '#':	goto yy86;
	default:	goto yy51;
	}
yy51:
	{ return TEXT_HASH; }
yy52:
	++YYCURSOR;
	{ return TEXT_PERCENT; }
yy54:
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':	goto yy77;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy78;
	default:	goto yy20;
	}
yy55:
	++YYCURSOR;
yy56:
	{ return TEXT_NL; }
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy55;
	default:	goto yy56;
	}
yy58:
	++YYCURSOR;
	{ return STAR; }
yy60:
	++YYCURSOR;
	{ return UL; }
yy62:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy76;
yy63:
	{ return BACKTICK; }
yy64:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy74;
yy65:
	{ return PIPE; }
yy66:
	yych = *++YYCURSOR;
	goto yy20;
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy66;
	default:	goto yy2;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy67;
	default:	goto yy2;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy67;
	default:	goto yy2;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy69;
	default:	goto yy2;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy69;
	default:	goto yy2;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:	goto yy69;
	default:	goto yy2;
	}
yy73:
	++YYCURSOR;
	yych = *YYCURSOR;
yy74:
	switch (yych) {
	case '|':	goto yy73;
	default:	goto yy65;
	}
yy75:
	++YYCURSOR;
	yych = *YYCURSOR;
yy76:
	switch (yych) {
	case '`':	goto yy75;
	default:	goto yy63;
	}
yy77:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy83;
	case '\n':	goto yy80;
	case '\r':	goto yy82;
	case 0xC2:	goto yy85;
	default:	goto yy2;
	}
yy78:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '.':	goto yy77;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy78;
	default:	goto yy2;
	}
yy80:
	++YYCURSOR;
yy81:
	YYCURSOR = YYCTXMARKER;
	{ return TEXT_NUMBER_POSS_LIST; }
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy80;
	default:	goto yy81;
	}
yy83:
	yyaccept = 8;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy83;
	case 0xC2:	goto yy85;
	default:	goto yy81;
	}
yy85:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy83;
	default:	goto yy2;
	}
yy86:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy95;
	case '#':	goto yy101;
	default:	goto yy2;
	}
yy87:
	yyaccept = 9;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy88:
	switch (yych) {
	case '\t':
	case ' ':	goto yy87;
	case '\n':	goto yy91;
	case '\r':	goto yy93;
	case 0xC2:	goto yy90;
	default:	goto yy89;
	}
yy89:
	{ return HASH1; }
yy90:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy87;
	default:	goto yy2;
	}
yy91:
	++YYCURSOR;
yy92:
	YYCURSOR = YYCTXMARKER;
	{ return HASH1; }
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy91;
	default:	goto yy92;
	}
yy94:
	yyaccept = 10;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy95:
	switch (yych) {
	case '\t':
	case ' ':	goto yy94;
	case '\n':	goto yy98;
	case '\r':	goto yy100;
	case 0xC2:	goto yy97;
	default:	goto yy96;
	}
yy96:
	{ return HASH2; }
yy97:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy94;
	default:	goto yy2;
	}
yy98:
	++YYCURSOR;
yy99:
	YYCURSOR = YYCTXMARKER;
	{ return HASH2; }
yy100:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy98;
	default:	goto yy99;
	}
yy101:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy104;
	case '#':	goto yy102;
	default:	goto yy2;
	}
yy102:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy111;
	case '#':	goto yy117;
	default:	goto yy2;
	}
yy103:
	yyaccept = 11;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy104:
	switch (yych) {
	case '\t':
	case ' ':	goto yy103;
	case '\n':	goto yy107;
	case '\r':	goto yy109;
	case 0xC2:	goto yy106;
	default:	goto yy105;
	}
yy105:
	{ return HASH3; }
yy106:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy103;
	default:	goto yy2;
	}
yy107:
	++YYCURSOR;
yy108:
	YYCURSOR = YYCTXMARKER;
	{ return HASH3; }
yy109:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy107;
	default:	goto yy108;
	}
yy110:
	yyaccept = 12;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy111:
	switch (yych) {
	case '\t':
	case ' ':	goto yy110;
	case '\n':	goto yy114;
	case '\r':	goto yy116;
	case 0xC2:	goto yy113;
	default:	goto yy112;
	}
yy112:
	{ return HASH4; }
yy113:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy110;
	default:	goto yy2;
	}
yy114:
	++YYCURSOR;
yy115:
	YYCURSOR = YYCTXMARKER;
	{ return HASH4; }
yy116:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy114;
	default:	goto yy115;
	}
yy117:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy120;
	case '#':	goto yy118;
	default:	goto yy2;
	}
yy118:
	YYCTXMARKER = YYCURSOR + 1;
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy127;
	default:	goto yy2;
	}
yy119:
	yyaccept = 13;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy120:
	switch (yych) {
	case '\t':
	case ' ':	goto yy119;
	case '\n':	goto yy123;
	case '\r':	goto yy125;
	case 0xC2:	goto yy122;
	default:	goto yy121;
	}
yy121:
	{ return HASH5; }
yy122:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy119;
	default:	goto yy2;
	}
yy123:
	++YYCURSOR;
yy124:
	YYCURSOR = YYCTXMARKER;
	{ return HASH5; }
yy125:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy123;
	default:	goto yy124;
	}
yy126:
	yyaccept = 14;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy127:
	switch (yych) {
	case '\t':
	case ' ':	goto yy126;
	case '\n':	goto yy130;
	case '\r':	goto yy132;
	case 0xC2:	goto yy129;
	default:	goto yy128;
	}
yy128:
	{ return HASH6; }
yy129:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy126;
	default:	goto yy2;
	}
yy130:
	++YYCURSOR;
yy131:
	YYCURSOR = YYCTXMARKER;
	{ return HASH6; }
yy132:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy130;
	default:	goto yy131;
	}
yy133:
	YYCTXMARKER = YYCURSOR + 1;
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\t':	goto yy137;
	case ' ':	goto yy134;
	case 0xC2:	goto yy136;
	default:	goto yy20;
	}
yy134:
	yyaccept = 15;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy141;
	case '\r':	goto yy143;
	case ' ':	goto yy139;
	case 0xC2:	goto yy140;
	default:	goto yy135;
	}
yy135:
	{ return NON_INDENT_SPACE; }
yy136:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy134;
	default:	goto yy2;
	}
yy137:
	++YYCURSOR;
	YYCURSOR = YYCTXMARKER;
	{ return NON_INDENT_SPACE; }
yy139:
	yyaccept = 15;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy141;
	case '\r':	goto yy143;
	case ' ':	goto yy144;
	case 0xC2:	goto yy146;
	default:	goto yy135;
	}
yy140:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy139;
	default:	goto yy2;
	}
yy141:
	++YYCURSOR;
yy142:
	{ return TEXT_LINEBREAK; }
yy143:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy141;
	default:	goto yy142;
	}
yy144:
	yyaccept = 16;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy141;
	case '\r':	goto yy143;
	case ' ':	goto yy147;
	case 0xC2:	goto yy149;
	default:	goto yy145;
	}
yy145:
	{ return INDENT_SPACE; }
yy146:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy144;
	default:	goto yy2;
	}
yy147:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy141;
	case '\r':	goto yy143;
	case ' ':	goto yy147;
	case 0xC2:	goto yy149;
	default:	goto yy2;
	}
yy149:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy147;
	default:	goto yy2;
	}
yy150:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy55;
	default:	goto yy56;
	}
yy151:
	++YYCURSOR;
	{ return MATH_DOLLAR_DOUBLE; }
yy153:
	++YYCURSOR;
yy154:
	{ return TEXT_LINEBREAK; }
yy155:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy153;
	default:	goto yy154;
	}
yy156:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '(':	goto yy222;
	case ')':	goto yy224;
	case '[':	goto yy226;
	case ']':	goto yy228;
	default:	goto yy157;
	}
yy157:
	{ return ESCAPED_CHARACTER; }
yy158:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy160:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy162:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy164:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy166:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy168:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy170:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy172:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy174:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy176:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy178:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy180:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy182:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy184:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy186:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy188:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy190:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy192:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy194:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy196:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy198:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy200:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy202:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy204:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy206:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy208:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy210:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy212:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy214:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy216:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy218:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy220:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy222:
	++YYCURSOR;
	{ return MATH_PAREN_OPEN; }
yy224:
	++YYCURSOR;
	{ return MATH_PAREN_CLOSE; }
yy226:
	++YYCURSOR;
	{ return MATH_BRACKET_OPEN; }
yy228:
	++YYCURSOR;
	{ return MATH_BRACKET_CLOSE; }
yy230:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'M':
	case 'm':	goto yy231;
	default:	goto yy2;
	}
yy231:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'P':
	case 'p':	goto yy232;
	default:	goto yy2;
	}
yy232:
	yych = *++YYCURSOR;
	switch (yych) {
	case ';':	goto yy233;
	default:	goto yy2;
	}
yy233:
	++YYCURSOR;
	{ return AMPERSAND_LONG; }
yy235:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy239;
	default:	goto yy2;
	}
yy236:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy237;
	default:	goto yy2;
	}
yy237:
	++YYCURSOR;
	{ return ELLIPSIS; }
yy239:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy240;
	default:	goto yy2;
	}
yy240:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy241;
	default:	goto yy2;
	}
yy241:
	++YYCURSOR;
	{ return ELLIPSIS; }
yy243:
	++YYCURSOR;
	{ return QUOTE_RIGHT_ALT; }
yy245:
	++YYCURSOR;
	{ return BRACE_DOUBLE_RIGHT; }
yy247:
	++YYCURSOR;
	{ return BRACKET_IMAGE_LEFT; }
yy249:
	++YYCURSOR;
	{ return BRACKET_VARIABLE_LEFT; }
yy251:
	++YYCURSOR;
	{ return BRACKET_GLOSSARY_LEFT; }
yy253:
	++YYCURSOR;
	{ return BRACKET_FOOTNOTE_LEFT; }
yy255:
	++YYCURSOR;
	{ return BRACKET_CITATION_LEFT; }
yy257:
	++YYCURSOR;
	{ return BRACKET_ABBREVIATION_LEFT; }
yy259:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy260;
	default:	goto yy2;
	}
yy260:
	++YYCURSOR;
	{ return CRITIC_HI_CLOSE; }
yy262:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy265;
	default:	goto yy2;
	}
yy263:
	++YYCURSOR;
	{ return CRITIC_SUB_DIV; }
yy265:
	++YYCURSOR;
	{ return CRITIC_SUB_CLOSE; }
yy267:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy268;
	default:	goto yy2;
	}
yy268:
	++YYCURSOR;
	{ return CRITIC_COM_CLOSE; }
yy270:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy274;
	case '}':	goto yy272;
	default:	goto yy271;
	}
yy271:
	{ return DASH_N; }
yy272:
	++YYCURSOR;
	{ return CRITIC_DEL_CLOSE; }
yy274:
	++YYCURSOR;
	{ return DASH_M; }
yy276:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy277;
	default:	goto yy2;
	}
yy277:
	++YYCURSOR;
	{ return CRITIC_ADD_CLOSE; }
yy279:
	yyaccept = 17;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'T':	goto yy296;
	default:	goto yy280;
	}
yy280:
	{ return BRACE_DOUBLE_LEFT; }
yy281:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy294;
	default:	goto yy2;
	}
yy282:
	yych = *++YYCURSOR;
	switch (yych) {
	case '~':	goto yy292;
	default:	goto yy2;
	}
yy283:
	yych = *++YYCURSOR;
	switch (yych) {
	case '>':	goto yy290;
	default:	goto yy2;
	}
yy284:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy288;
	default:	goto yy2;
	}
yy285:
	yych = *++YYCURSOR;
	switch (yych) {
	case '+':	goto yy286;
	default:	goto yy2;
	}
yy286:
	++YYCURSOR;
	{ return CRITIC_ADD_OPEN; }
yy288:
	++YYCURSOR;
	{ return CRITIC_DEL_OPEN; }
yy290:
	++YYCURSOR;
	{ return CRITIC_COM_OPEN; }
yy292:
	++YYCURSOR;
	{ return CRITIC_SUB_OPEN; }
yy294:
	++YYCURSOR;
	{ return CRITIC_HI_OPEN; }
yy296:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':	goto yy297;
	default:	goto yy2;
	}
yy297:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':	goto yy298;
	default:	goto yy2;
	}
yy298:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy299;
	default:	goto yy2;
	}
yy299:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy300;
	default:	goto yy2;
	}
yy300:
	++YYCURSOR;
	{ return TOC; }
}

}