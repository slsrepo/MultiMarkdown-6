/**

	MultiMarkdown -- Lightweight markup processor to produce HTML, LaTeX, and more.

	@file itmz-parser.c

	@brief 


	@author	Fletcher T. Penney
	@bug	

**/

/*

	Copyright © 2016 - 2019 Fletcher T. Penney.


	The `MultiMarkdown 6` project is released under the MIT License..
	
	GLibFacade.c and GLibFacade.h are from the MultiMarkdown v4 project:
	
		https://github.com/fletcher/MultiMarkdown-4/
	
	MMD 4 is released under both the MIT License and GPL.
	
	
	CuTest is released under the zlib/libpng license. See CuTest.c for the
	text of the license.
	
	uthash library:
		Copyright (c) 2005-2016, Troy D. Hanson
	
		Licensed under Revised BSD license
	
	miniz library:
		Copyright 2013-2014 RAD Game Tools and Valve Software
		Copyright 2010-2014 Rich Geldreich and Tenacious Software LLC
	
		Licensed under the MIT license
	
	argtable3 library:
		Copyright (C) 1998-2001,2003-2011,2013 Stewart Heitmann
		<sheitmann@users.sourceforge.net>
		All rights reserved.
	
		Licensed under the Revised BSD License
	
	
	## The MIT License ##
	
	Permission is hereby granted, free of charge, to any person obtaining
	a copy of this software and associated documentation files (the
	"Software"), to deal in the Software without restriction, including
	without limitation the rights to use, copy, modify, merge, publish,
	distribute, sublicense, and/or sell copies of the Software, and to
	permit persons to whom the Software is furnished to do so, subject to
	the following conditions:
	
	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
	IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
	CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
	TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
	
	
	## Revised BSD License ##
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are
	met:
	    * Redistributions of source code must retain the above copyright
	      notice, this list of conditions and the following disclaimer.
	    * Redistributions in binary form must reproduce the above
	      copyright notice, this list of conditions and the following
	      disclaimer in the documentation and/or other materials provided
	      with the distribution.
	    * Neither the name of the <organization> nor the
	      names of its contributors may be used to endorse or promote
	      products derived from this software without specific prior
	      written permission.
	
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
	A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT
	HOLDER> BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
	PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR
	PROFITS OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
	LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
	NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
	

*/


//
// Language grammar here
//

%token_type { token * }

%extra_argument { mmd_engine * engine }

%name ITMZ


// Start symbol
doc					::=  doc_ithoughts(B).											{ engine->root = B; }

doc_ithoughts		::= ITMZ_ITHOUGHTS_OPEN itmz_topics_section itmz_relationships ITMZ_ITHOUGHTS_CLOSE.
doc_ithoughts		::= ITMZ_ITHOUGHTS_OPEN itmz_relationships ITMZ_ITHOUGHTS_CLOSE.

itmz_topics_section	::= ITMZ_TOPICS_OPEN itmz_topics ITMZ_TOPICS_CLOSE.
itmz_topics_section	::= ITMZ_TOPICS_OPEN ITMZ_TOPICS_CLOSE.
itmz_topics_section	::= itmz_topics.

itmz_topics			::= itmz_topics itmz_topic.
itmz_topics			::= itmz_topic.

itmz_topic			::= ITMZ_TOPIC_OPEN ITMZ_TOPIC_CLOSE.
itmz_topic			::= ITMZ_TOPIC_PREAMBLE ITMZ_TOPIC_CLOSE.

itmz_topic			::= ITMZ_TOPIC_OPEN itmz_topics ITMZ_TOPIC_CLOSE.
itmz_topic			::= ITMZ_TOPIC_METADATA itmz_topics ITMZ_TOPIC_CLOSE.
itmz_topic			::= ITMZ_TOPIC_METADATA ITMZ_TOPIC_CLOSE.

itmz_topic 			::= ITMZ_TOPIC_SELF_CLOSE.

itmz_relationships 	::= ITMZ_RELATIONSHIPS_OPEN ITMZ_RELATIONSHIPS_CLOSE.
itmz_relationships 	::= .


//
// Additional Configuration
//

%include {
	#include <assert.h>
	#include <stdio.h>
	#include <stdlib.h>

	#include "libMultiMarkdown.h"
	#include "mmd.h"
	#include "parser.h"
	#include "token.h"
}


// Improved error messages for debugging:
//	http://stackoverflow.com/questions/11705737/expected-token-using-lemon-parser-generator

%syntax_error {
	fprintf(stderr,"Parser syntax error.\n");
#ifndef NDEBUG
	fprintf(stderr,"Parser syntax error.\n");
	int n = sizeof(yyTokenName) / sizeof(yyTokenName[0]);
	for (int i = 0; i < n; ++i) {
		int a = yy_find_shift_action(yypParser, (YYCODETYPE)i);
		if (a < YYNSTATE + YYNRULE) {
			fprintf(stderr,"expected token: %s\n", yyTokenName[i]);
		}
	}
#endif
}

%parse_accept {
//	printf("parsing completed successfully!\n");
}

%parse_failure {
	fprintf(stderr, "Parser failed to successfully parse.\n");
}
