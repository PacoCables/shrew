// A Bison parser, made by GNU Bison 3.5.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.



// First part of user prologue.
#line 46 "conf.parse.yy"


#include <string>
#include "iked.h"
#include "conf.parse.hpp"


#line 48 "conf.parse.cpp"


#include "conf.parse.hpp"

// Second part of user prologue.
#line 68 "conf.parse.yy"


#define YY_DECL                                     \
    yy::conf_parser::token_type                     \
    yylex( yy::conf_parser::semantic_type * yylval, \
    yy::conf_parser::location_type * yylloc,        \
    IKED & iked )

YY_DECL;

IDB_PEER *		peer;
IKE_PROPOSAL		proposal;
IDB_LIST_PH2ID *	idlist;
BDATA			fpass;


#line 71 "conf.parse.cpp"



#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 163 "conf.parse.cpp"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  conf_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  conf_parser::conf_parser (IKED & iked_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      iked (iked_yyarg)
  {}

  conf_parser::~conf_parser ()
  {}

  conf_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value (std::move (that.value))
    , location (std::move (that.location))
  {}
#endif

  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  bool
  conf_parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  conf_parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_type.
  conf_parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  conf_parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  conf_parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  conf_parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  conf_parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  conf_parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  conf_parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  conf_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  conf_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  conf_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  conf_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  conf_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  conf_parser::symbol_number_type
  conf_parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  conf_parser::stack_symbol_type::stack_symbol_type ()
  {}

  conf_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  conf_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  conf_parser::stack_symbol_type&
  conf_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }

  conf_parser::stack_symbol_type&
  conf_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  conf_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
      case 129: // "quoted value"
#line 232 "conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 407 "conf.parse.cpp"
        break;

      case 130: // "label value"
#line 233 "conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 413 "conf.parse.cpp"
        break;

      case 131: // "address value"
#line 234 "conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 419 "conf.parse.cpp"
        break;

      case 132: // "network value"
#line 235 "conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 425 "conf.parse.cpp"
        break;

      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
  conf_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  conf_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  conf_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  conf_parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  conf_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  conf_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  conf_parser::debug_level_type
  conf_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  conf_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  conf_parser::state_type
  conf_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  conf_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  conf_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  conf_parser::operator() ()
  {
    return parse ();
  }

  int
  conf_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, iked));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 12:
#line 270 "conf.parse.yy"
        {
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		saddr.saddr4.sin_family = AF_INET;
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) ); 
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, false ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed\n" ) );
	}
#line 696 "conf.parse.cpp"
    break;

  case 14:
#line 282 "conf.parse.yy"
        {
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, false ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );

		delete (yystack_[1].value.bval);
	}
#line 714 "conf.parse.cpp"
    break;

  case 16:
#line 297 "conf.parse.yy"
        {
#ifdef OPT_NATT
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, true ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 733 "conf.parse.cpp"
    break;

  case 18:
#line 313 "conf.parse.yy"
        {
#ifdef OPT_NATT
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, true ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );

		delete (yystack_[1].value.bval);
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 755 "conf.parse.cpp"
    break;

  case 20:
#line 332 "conf.parse.yy"
        {
		if( iked.path_log[ 0 ] == 0 )
		{
			snprintf( iked.path_log, MAX_PATH, "iked" );
			iked.logflags |= LOGFLAG_SYSTEM;
		}
	}
#line 767 "conf.parse.cpp"
    break;

  case 22:
#line 341 "conf.parse.yy"
        {
		if( iked.path_log[ 0 ] == 0 )
			snprintf( iked.path_log, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 777 "conf.parse.cpp"
    break;

  case 24:
#line 348 "conf.parse.yy"
        {
		snprintf( iked.path_dhcp, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 786 "conf.parse.cpp"
    break;

  case 26:
#line 354 "conf.parse.yy"
        {
		iked.level = LLOG_NONE;
	}
#line 794 "conf.parse.cpp"
    break;

  case 28:
#line 359 "conf.parse.yy"
        {
		iked.level = LLOG_ERROR;
	}
#line 802 "conf.parse.cpp"
    break;

  case 30:
#line 364 "conf.parse.yy"
        {
		iked.level = LLOG_INFO;
	}
#line 810 "conf.parse.cpp"
    break;

  case 32:
#line 369 "conf.parse.yy"
        {
		iked.level = LLOG_DEBUG;
	}
#line 818 "conf.parse.cpp"
    break;

  case 34:
#line 374 "conf.parse.yy"
        {
		iked.level = LLOG_LOUD;
	}
#line 826 "conf.parse.cpp"
    break;

  case 36:
#line 379 "conf.parse.yy"
        {
		iked.level = LLOG_DECODE;
	}
#line 834 "conf.parse.cpp"
    break;

  case 38:
#line 384 "conf.parse.yy"
        {
		snprintf( iked.path_decrypt, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		iked.dump_decrypt = true;
		delete (yystack_[0].value.bval);
	}
#line 844 "conf.parse.cpp"
    break;

  case 40:
#line 391 "conf.parse.yy"
        {
		snprintf( iked.path_encrypt, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		iked.dump_encrypt = true;
		delete (yystack_[0].value.bval);
	}
#line 854 "conf.parse.cpp"
    break;

  case 42:
#line 398 "conf.parse.yy"
        {
		iked.retry_delay = (yystack_[0].value.ival);
	}
#line 862 "conf.parse.cpp"
    break;

  case 44:
#line 403 "conf.parse.yy"
        {
		iked.retry_count = (yystack_[0].value.ival);
	}
#line 870 "conf.parse.cpp"
    break;

  case 46:
#line 416 "conf.parse.yy"
        {
		idlist = new IDB_LIST_PH2ID;
		if( idlist == NULL )
			error( yylhs.location, std::string( "unable to allocate idlist for netgroup" ) + (yystack_[0].value.bval)->text() );

		idlist->name.set( *(yystack_[0].value.bval) );
		iked.idb_list_netgrp.add_entry( idlist );
		delete (yystack_[0].value.bval);
	}
#line 884 "conf.parse.cpp"
    break;

  case 50:
#line 433 "conf.parse.yy"
        {
		char * pos = strchr( (yystack_[0].value.bval)->text(), '/' );
		*pos = '\0';

		IKE_PH2ID ph2id;
		memset( &ph2id, 0, sizeof( ph2id ) );
		ph2id.type = ISAKMP_ID_IPV4_ADDR_SUBNET;
		ph2id.addr1.s_addr = inet_addr( (yystack_[0].value.bval)->text() );
		ph2id.addr2.s_addr = 0;

		long bits = strtol( pos + 1, NULL, 10 );
		for( long i = 0; i < bits; i++ )
		{
			ph2id.addr2.s_addr >>= 1;
			ph2id.addr2.s_addr |= 0x80000000;
		}

		ph2id.addr2.s_addr = htonl( ph2id.addr2.s_addr );

		idlist->add( ph2id );
		delete (yystack_[0].value.bval);
	}
#line 911 "conf.parse.cpp"
    break;

  case 52:
#line 465 "conf.parse.yy"
        {
#ifndef OPT_LDAP
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 921 "conf.parse.cpp"
    break;

  case 56:
#line 478 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( ( (yystack_[0].value.ival) < 2 ) && ( (yystack_[0].value.ival) > 3 ) )
			error( yylhs.location, std::string( "ldap version must be 2 or 3" ) );

		iked.xauth_ldap.version = (yystack_[0].value.ival);
#endif
	}
#line 934 "conf.parse.cpp"
    break;

  case 58:
#line 488 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.url.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 945 "conf.parse.cpp"
    break;

  case 60:
#line 496 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.base.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 956 "conf.parse.cpp"
    break;

  case 62:
#line 504 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.subtree = true;
#endif
	}
#line 966 "conf.parse.cpp"
    break;

  case 64:
#line 511 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.subtree = false;
#endif
	}
#line 976 "conf.parse.cpp"
    break;

  case 66:
#line 518 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.bind_dn.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 987 "conf.parse.cpp"
    break;

  case 68:
#line 526 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.bind_pw.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 998 "conf.parse.cpp"
    break;

  case 70:
#line 534 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_user.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 1009 "conf.parse.cpp"
    break;

  case 72:
#line 542 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 1020 "conf.parse.cpp"
    break;

  case 74:
#line 550 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_member.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 1031 "conf.parse.cpp"
    break;

  case 79:
#line 573 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= ( IPSEC_OPTS_ADDR | IPSEC_OPTS_MASK );

		char * pos = strchr( (yystack_[0].value.bval)->text(), '/' );
		*pos = '\0';

		in_addr base;
		base.s_addr = inet_addr( (yystack_[0].value.bval)->text() );
		long bits = strtol( pos + 1, NULL, 10 );

		iked.xconf_local.pool4_set( base, bits, 0 );
		delete (yystack_[0].value.bval);
	}
#line 1049 "conf.parse.cpp"
    break;

  case 81:
#line 588 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= ( IPSEC_OPTS_ADDR | IPSEC_OPTS_MASK );

		char * pos = strchr( (yystack_[1].value.bval)->text(), '/' );
		*pos = '\0';

		in_addr base;
		base.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		long bits = strtol( pos + 1, NULL, 10 );

		iked.xconf_local.pool4_set( base, bits, (yystack_[0].value.ival) );
		delete (yystack_[1].value.bval);
	}
#line 1067 "conf.parse.cpp"
    break;

  case 83:
#line 603 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_DNSS;
	}
#line 1075 "conf.parse.cpp"
    break;

  case 85:
#line 608 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_NBNS;
	}
#line 1083 "conf.parse.cpp"
    break;

  case 87:
#line 613 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_DOMAIN;

		long len = (yystack_[0].value.bval)->size();
		if( len >= CONF_STRLEN )
			len = CONF_STRLEN - 1;

		memcpy( iked.xconf_local.config.nscfg.dnss_suffix, (yystack_[0].value.bval)->text(), len );
		iked.xconf_local.config.nscfg.dnss_suffix[ len ] = 0;
		delete (yystack_[0].value.bval);
	}
#line 1099 "conf.parse.cpp"
    break;

  case 89:
#line 626 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_SPLITDNS;
	}
#line 1107 "conf.parse.cpp"
    break;

  case 91:
#line 631 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_BANNER;

		FILE * fp = fopen( (yystack_[0].value.bval)->text(), "r" );
		if( fp == NULL )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		long size;
		char buff[ CONF_STRLEN ];
		while( ( size = fread( buff, 1, CONF_STRLEN, fp ) ) > 0 )
			iked.xconf_local.banner.add( buff, size );
		delete (yystack_[0].value.bval);
	}
#line 1125 "conf.parse.cpp"
    break;

  case 93:
#line 646 "conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_PFS;
		iked.xconf_local.config.dhgr = (yystack_[0].value.ival);
	}
#line 1134 "conf.parse.cpp"
    break;

  case 97:
#line 659 "conf.parse.yy"
        {
		int count = iked.xconf_local.config.nscfg.dnss_count;
		if( count <= IPSEC_DNSS_MAX )
		{
			iked.xconf_local.config.nscfg.dnss_list[ count ].s_addr =
				inet_addr( (yystack_[0].value.bval)->text() );
			iked.xconf_local.config.nscfg.dnss_count++;
		}
		delete (yystack_[0].value.bval);
	}
#line 1149 "conf.parse.cpp"
    break;

  case 100:
#line 677 "conf.parse.yy"
        {
		int count = iked.xconf_local.config.nscfg.nbns_count;
		if( count <= IPSEC_NBNS_MAX )
		{
			iked.xconf_local.config.nscfg.nbns_list[ count ].s_addr =
				inet_addr( (yystack_[0].value.bval)->text() );
			iked.xconf_local.config.nscfg.nbns_count++;
		}
		delete (yystack_[0].value.bval);
	}
#line 1164 "conf.parse.cpp"
    break;

  case 103:
#line 695 "conf.parse.yy"
        {
		iked.xconf_local.domains.add( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1173 "conf.parse.cpp"
    break;

  case 104:
#line 709 "conf.parse.yy"
        {
		//
		// new peer object
		//

		peer = new IDB_PEER( NULL );

		//
		// set peer default values
		//

		peer->contact = IPSEC_CONTACT_BOTH;
		peer->natt_rate = 30;
		peer->dpd_delay = 15;
		peer->dpd_retry = 5;
		peer->frag_ike_size = 520;
		peer->frag_esp_size = 520;
		peer->life_check = LTIME_CLAIM;
		SET_SALEN( &peer->saddr.saddr4, sizeof( sockaddr_in ) );
		peer->saddr.saddr4.sin_family = AF_INET;
		peer->saddr.saddr4.sin_port = htons( LIBIKE_IKE_PORT );
		peer->saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[0].value.bval)->text() );

		peer->xauth_source = &iked.xauth_local;
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;

		delete (yystack_[0].value.bval);
	}
#line 1207 "conf.parse.cpp"
    break;

  case 105:
#line 739 "conf.parse.yy"
        {
		peer->add( true );
		peer->dec( true );
	}
#line 1216 "conf.parse.cpp"
    break;

  case 106:
#line 744 "conf.parse.yy"
        {
		//
		// new peer object
		//

		peer = new IDB_PEER( NULL );

		//
		// set peer default values
		//

		peer->contact = IPSEC_CONTACT_BOTH;
		peer->natt_rate = 30;
		peer->dpd_delay = 15;
		peer->dpd_retry = 5;
		peer->frag_ike_size = 520;
		peer->frag_esp_size = 520;
		peer->life_check = LTIME_CLAIM;
		SET_SALEN( &peer->saddr.saddr4, sizeof( sockaddr_in ) );
		peer->saddr.saddr4.sin_family = AF_INET;
		peer->saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );
		peer->saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );

		peer->xauth_source = &iked.xauth_local;
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;

		delete (yystack_[1].value.bval);
	}
#line 1250 "conf.parse.cpp"
    break;

  case 107:
#line 774 "conf.parse.yy"
        {
		peer->add( true );
		peer->dec( true );
	}
#line 1259 "conf.parse.cpp"
    break;

  case 110:
#line 785 "conf.parse.yy"
        {
		peer->contact = IPSEC_CONTACT_INIT;
	}
#line 1267 "conf.parse.cpp"
    break;

  case 112:
#line 790 "conf.parse.yy"
        {
		peer->contact = IPSEC_CONTACT_RESP;
	}
#line 1275 "conf.parse.cpp"
    break;

  case 114:
#line 795 "conf.parse.yy"
        {
		peer->exchange = ISAKMP_EXCH_IDENT_PROTECT;
	}
#line 1283 "conf.parse.cpp"
    break;

  case 116:
#line 800 "conf.parse.yy"
        {
		peer->exchange = ISAKMP_EXCH_AGGRESSIVE;
	}
#line 1291 "conf.parse.cpp"
    break;

  case 118:
#line 805 "conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_ENABLE;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1303 "conf.parse.cpp"
    break;

  case 120:
#line 814 "conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_DISABLE;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1315 "conf.parse.cpp"
    break;

  case 122:
#line 823 "conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_FORCE_RFC;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1327 "conf.parse.cpp"
    break;

  case 124:
#line 832 "conf.parse.yy"
        {
#if defined( OPT_NATT ) && !defined( __APPLE )
		peer->natt_mode = IPSEC_NATT_FORCE_DRAFT;
#else
# ifndef __APPLE__
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
# else
		error( yylhs.location, std::string( "your platform does not support NAT v00/01" ) );
# endif
#endif
	}
#line 1343 "conf.parse.cpp"
    break;

  case 126:
#line 845 "conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_FORCE_RFC;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1355 "conf.parse.cpp"
    break;

  case 128:
#line 854 "conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_rate = (yystack_[0].value.ival);
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1367 "conf.parse.cpp"
    break;

  case 130:
#line 863 "conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_ENABLE;
	}
#line 1375 "conf.parse.cpp"
    break;

  case 132:
#line 868 "conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_DISABLE;
	}
#line 1383 "conf.parse.cpp"
    break;

  case 134:
#line 873 "conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_FORCE;
	}
#line 1391 "conf.parse.cpp"
    break;

  case 136:
#line 878 "conf.parse.yy"
        {
		peer->dpd_delay = (yystack_[0].value.ival);
	}
#line 1399 "conf.parse.cpp"
    break;

  case 138:
#line 883 "conf.parse.yy"
        {
		peer->dpd_retry = (yystack_[0].value.ival);
	}
#line 1407 "conf.parse.cpp"
    break;

  case 140:
#line 888 "conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_ENABLE;
	}
#line 1415 "conf.parse.cpp"
    break;

  case 142:
#line 893 "conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_DISABLE;
	}
#line 1423 "conf.parse.cpp"
    break;

  case 144:
#line 898 "conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_FORCE;
	}
#line 1431 "conf.parse.cpp"
    break;

  case 146:
#line 903 "conf.parse.yy"
        {
		peer->frag_ike_size = (yystack_[0].value.ival);
	}
#line 1439 "conf.parse.cpp"
    break;

  case 148:
#line 908 "conf.parse.yy"
        {
		peer->frag_esp_mode = IPSEC_FRAG_ENABLE;
	}
#line 1447 "conf.parse.cpp"
    break;

  case 150:
#line 913 "conf.parse.yy"
        {
		peer->frag_esp_mode = IPSEC_FRAG_DISABLE;
	}
#line 1455 "conf.parse.cpp"
    break;

  case 152:
#line 918 "conf.parse.yy"
        {
		peer->frag_esp_size = (yystack_[0].value.ival);
	}
#line 1463 "conf.parse.cpp"
    break;

  case 154:
#line 923 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_IPV4_ADDR;
	}
#line 1471 "conf.parse.cpp"
    break;

  case 156:
#line 928 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_IPV4_ADDR;
		peer->iddata_l.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1481 "conf.parse.cpp"
    break;

  case 158:
#line 935 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_FQDN;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1491 "conf.parse.cpp"
    break;

  case 160:
#line 942 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_USER_FQDN;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1501 "conf.parse.cpp"
    break;

  case 162:
#line 949 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_KEY_ID;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1511 "conf.parse.cpp"
    break;

  case 164:
#line 956 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_ASN1_DN;
	}
#line 1519 "conf.parse.cpp"
    break;

  case 166:
#line 961 "conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_ASN1_DN;
		peer->iddata_l.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1529 "conf.parse.cpp"
    break;

  case 168:
#line 968 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_IPV4_ADDR;
	}
#line 1537 "conf.parse.cpp"
    break;

  case 170:
#line 973 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_IPV4_ADDR;
		peer->iddata_r.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1547 "conf.parse.cpp"
    break;

  case 172:
#line 980 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_FQDN;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1557 "conf.parse.cpp"
    break;

  case 174:
#line 987 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_USER_FQDN;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1567 "conf.parse.cpp"
    break;

  case 176:
#line 994 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_KEY_ID;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1577 "conf.parse.cpp"
    break;

  case 178:
#line 1001 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_ASN1_DN;
	}
#line 1585 "conf.parse.cpp"
    break;

  case 180:
#line 1006 "conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_ASN1_DN;
		peer->iddata_r.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1595 "conf.parse.cpp"
    break;

  case 182:
#line 1013 "conf.parse.yy"
        {
		peer->psk.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1604 "conf.parse.cpp"
    break;

  case 184:
#line 1019 "conf.parse.yy"
        {
		fpass.del();

		if( iked.cert_load(
			peer->cert_r,
			(yystack_[0].value.bval)->text(),
			true,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 1620 "conf.parse.cpp"
    break;

  case 186:
#line 1032 "conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);

		if( iked.cert_load(
			peer->cert_r,
			(yystack_[1].value.bval)->text(),
			true,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1638 "conf.parse.cpp"
    break;

  case 188:
#line 1047 "conf.parse.yy"
        {
		fpass.del();
		
		if( iked.cert_load(
			peer->cert_l,
			(yystack_[0].value.bval)->text(),
			false,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		delete (yystack_[0].value.bval);
	}
#line 1655 "conf.parse.cpp"
    break;

  case 190:
#line 1061 "conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);
		
		if( iked.cert_load(
			peer->cert_l,
			(yystack_[1].value.bval)->text(),
			false,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1673 "conf.parse.cpp"
    break;

  case 192:
#line 1076 "conf.parse.yy"
        {
		fpass.del();
		
		if( iked.prvkey_rsa_load(
			peer->cert_k,
			(yystack_[0].value.bval)->text(),
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		delete (yystack_[0].value.bval);
	}
#line 1689 "conf.parse.cpp"
    break;

  case 194:
#line 1089 "conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);
		
		if( iked.prvkey_rsa_load(
			peer->cert_k,
			(yystack_[1].value.bval)->text(),
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1706 "conf.parse.cpp"
    break;

  case 196:
#line 1103 "conf.parse.yy"
        {
		peer->life_check = LTIME_OBEY;
	}
#line 1714 "conf.parse.cpp"
    break;

  case 198:
#line 1108 "conf.parse.yy"
        {
		peer->life_check = LTIME_CLAIM;
	}
#line 1722 "conf.parse.cpp"
    break;

  case 200:
#line 1113 "conf.parse.yy"
        {
		peer->life_check = LTIME_STRICT;
	}
#line 1730 "conf.parse.cpp"
    break;

  case 202:
#line 1118 "conf.parse.yy"
        {
		peer->life_check = LTIME_EXACT;
	}
#line 1738 "conf.parse.cpp"
    break;

  case 204:
#line 1123 "conf.parse.yy"
        {
		peer->xauth_source = &iked.xauth_local;
	}
#line 1746 "conf.parse.cpp"
    break;

  case 206:
#line 1128 "conf.parse.yy"
        {
		peer->xauth_source = &iked.xauth_local;
		peer->xauth_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1756 "conf.parse.cpp"
    break;

  case 208:
#line 1135 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( !iked.xauth_ldap.url.size() )
			error( yylhs.location, std::string( "conf source is ldap but no url is defined" ) );

		peer->xauth_source = &iked.xauth_ldap;
#else
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 1771 "conf.parse.cpp"
    break;

  case 210:
#line 1147 "conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( !iked.xauth_ldap.url.size() )
			error( yylhs.location, std::string( "conf source is ldap but no url is defined" ) );

		peer->xauth_source = &iked.xauth_ldap;
		peer->xauth_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#else
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 1788 "conf.parse.cpp"
    break;

  case 212:
#line 1161 "conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;
	}
#line 1797 "conf.parse.cpp"
    break;

  case 214:
#line 1167 "conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;
	}
#line 1806 "conf.parse.cpp"
    break;

  case 216:
#line 1173 "conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PUSH;
	}
#line 1815 "conf.parse.cpp"
    break;

  case 218:
#line 1179 "conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_DISABLE;
	}
#line 1823 "conf.parse.cpp"
    break;

  case 220:
#line 1184 "conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_COMPAT;
	}
#line 1831 "conf.parse.cpp"
    break;

  case 222:
#line 1189 "conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_CONFIG;
	}
#line 1839 "conf.parse.cpp"
    break;

  case 225:
#line 1195 "conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_ISAKMP;
		proposal.xform = ISAKMP_KEY_IKE;
		proposal.dhgr_id = IKE_GRP_GROUP2;
	}
#line 1850 "conf.parse.cpp"
    break;

  case 226:
#line 1202 "conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1858 "conf.parse.cpp"
    break;

  case 227:
#line 1206 "conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPSEC_AH;
	}
#line 1867 "conf.parse.cpp"
    break;

  case 228:
#line 1211 "conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1875 "conf.parse.cpp"
    break;

  case 229:
#line 1215 "conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPSEC_ESP;
	}
#line 1884 "conf.parse.cpp"
    break;

  case 230:
#line 1220 "conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1892 "conf.parse.cpp"
    break;

  case 231:
#line 1224 "conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPCOMP;
	}
#line 1901 "conf.parse.cpp"
    break;

  case 232:
#line 1229 "conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1909 "conf.parse.cpp"
    break;

  case 235:
#line 1240 "conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[0].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[0].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_INCLUDE, NULL );

		delete (yystack_[0].value.bval);
	}
#line 1933 "conf.parse.cpp"
    break;

  case 237:
#line 1261 "conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[1].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[1].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_INCLUDE, (yystack_[0].value.bval) );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1958 "conf.parse.cpp"
    break;

  case 239:
#line 1283 "conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[0].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[0].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_EXCLUDE, NULL );

		delete (yystack_[0].value.bval);
	}
#line 1982 "conf.parse.cpp"
    break;

  case 241:
#line 1304 "conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[1].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[1].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_EXCLUDE, (yystack_[0].value.bval) );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 2007 "conf.parse.cpp"
    break;

  case 245:
#line 1333 "conf.parse.yy"
        {
		proposal.auth_id = HYBRID_AUTH_INIT_RSA;
	}
#line 2015 "conf.parse.cpp"
    break;

  case 247:
#line 1338 "conf.parse.yy"
        {
		proposal.auth_id = XAUTH_AUTH_INIT_RSA;
	}
#line 2023 "conf.parse.cpp"
    break;

  case 249:
#line 1343 "conf.parse.yy"
        {
		proposal.auth_id = XAUTH_AUTH_INIT_PSK;
	}
#line 2031 "conf.parse.cpp"
    break;

  case 251:
#line 1348 "conf.parse.yy"
        {
		proposal.auth_id = IKE_AUTH_SIG_RSA;
	}
#line 2039 "conf.parse.cpp"
    break;

  case 253:
#line 1353 "conf.parse.yy"
        {
		proposal.auth_id = IKE_AUTH_PRESHARED_KEY;
	}
#line 2047 "conf.parse.cpp"
    break;

  case 255:
#line 1358 "conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_AES;
	}
#line 2055 "conf.parse.cpp"
    break;

  case 257:
#line 1363 "conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_BLOWFISH;
	}
#line 2063 "conf.parse.cpp"
    break;

  case 259:
#line 1368 "conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_3DES;
	}
#line 2071 "conf.parse.cpp"
    break;

  case 261:
#line 1373 "conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_CAST;
	}
#line 2079 "conf.parse.cpp"
    break;

  case 263:
#line 1378 "conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_DES;
	}
#line 2087 "conf.parse.cpp"
    break;

  case 265:
#line 1383 "conf.parse.yy"
        {
		proposal.ciph_kl = (yystack_[0].value.ival);
	}
#line 2095 "conf.parse.cpp"
    break;

  case 267:
#line 1388 "conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_MD5;
	}
#line 2103 "conf.parse.cpp"
    break;

  case 269:
#line 1393 "conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA1;
	}
#line 2111 "conf.parse.cpp"
    break;

  case 271:
#line 1398 "conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_256;
	}
#line 2119 "conf.parse.cpp"
    break;

  case 273:
#line 1403 "conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_384;
	}
#line 2127 "conf.parse.cpp"
    break;

  case 275:
#line 1408 "conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_512;
	}
#line 2135 "conf.parse.cpp"
    break;

  case 277:
#line 1413 "conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2180 "conf.parse.cpp"
    break;

  case 279:
#line 1455 "conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2188 "conf.parse.cpp"
    break;

  case 281:
#line 1460 "conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2196 "conf.parse.cpp"
    break;

  case 285:
#line 1472 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_MD5;
		proposal.hash_id = ISAKMP_AUTH_HMAC_MD5;
	}
#line 2205 "conf.parse.cpp"
    break;

  case 287:
#line 1478 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA1;
	}
#line 2214 "conf.parse.cpp"
    break;

  case 289:
#line 1484 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA256;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_256;
	}
#line 2223 "conf.parse.cpp"
    break;

  case 291:
#line 1490 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA384;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_384;
	}
#line 2232 "conf.parse.cpp"
    break;

  case 293:
#line 1496 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA512;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_512;
	}
#line 2241 "conf.parse.cpp"
    break;

  case 295:
#line 1502 "conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2286 "conf.parse.cpp"
    break;

  case 297:
#line 1544 "conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2294 "conf.parse.cpp"
    break;

  case 299:
#line 1549 "conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2302 "conf.parse.cpp"
    break;

  case 303:
#line 1561 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_AES;
	}
#line 2310 "conf.parse.cpp"
    break;

  case 305:
#line 1566 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_BLOWFISH;
	}
#line 2318 "conf.parse.cpp"
    break;

  case 307:
#line 1571 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_3DES;
	}
#line 2326 "conf.parse.cpp"
    break;

  case 309:
#line 1576 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_CAST;
	}
#line 2334 "conf.parse.cpp"
    break;

  case 311:
#line 1581 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_DES;
	}
#line 2342 "conf.parse.cpp"
    break;

  case 313:
#line 1586 "conf.parse.yy"
        {
		proposal.ciph_kl = (yystack_[0].value.ival);
	}
#line 2350 "conf.parse.cpp"
    break;

  case 315:
#line 1591 "conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_MD5;
	}
#line 2358 "conf.parse.cpp"
    break;

  case 317:
#line 1596 "conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA1;
	}
#line 2366 "conf.parse.cpp"
    break;

  case 319:
#line 1601 "conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_256;
	}
#line 2374 "conf.parse.cpp"
    break;

  case 321:
#line 1606 "conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_384;
	}
#line 2382 "conf.parse.cpp"
    break;

  case 323:
#line 1611 "conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_512;
	}
#line 2390 "conf.parse.cpp"
    break;

  case 325:
#line 1616 "conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2435 "conf.parse.cpp"
    break;

  case 327:
#line 1658 "conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2443 "conf.parse.cpp"
    break;

  case 329:
#line 1663 "conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2451 "conf.parse.cpp"
    break;

  case 333:
#line 1675 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_IPCOMP_DEFLATE;
	}
#line 2459 "conf.parse.cpp"
    break;

  case 335:
#line 1680 "conf.parse.yy"
        {
		proposal.xform = ISAKMP_IPCOMP_LZS;
	}
#line 2467 "conf.parse.cpp"
    break;

  case 337:
#line 1685 "conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2475 "conf.parse.cpp"
    break;

  case 339:
#line 1690 "conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2483 "conf.parse.cpp"
    break;


#line 2487 "conf.parse.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  conf_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  conf_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    std::ptrdiff_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */
    if (!yyla.empty ())
      {
        symbol_number_type yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];

        int yyn = yypact_[+yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yy_error_token_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char conf_parser::yypact_ninf_ = -121;

  const signed char conf_parser::yytable_ninf_ = -1;

  const short
  conf_parser::yypact_[] =
  {
    -121,    38,  -121,    11,  -114,  -121,    46,   -92,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,    48,  -121,   -56,     2,
      87,  -121,   134,  -121,   108,  -121,    63,    98,   -15,   -47,
     -32,    39,     9,    44,  -121,  -121,     6,  -121,    41,  -121,
    -121,    47,  -121,    66,    73,  -121,   122,  -121,  -120,  -116,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,    -4,  -121,    90,    91,    93,    45,    96,
      97,    99,   100,   101,  -121,   103,    88,   102,  -121,   105,
    -121,  -121,  -121,    -2,  -121,   104,  -121,   107,   168,   205,
     214,   216,   217,   220,   229,   230,   231,   232,   233,   234,
     235,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   236,  -121,   237,  -121,  -121,
     238,  -121,   239,  -121,   240,  -121,   241,   242,    81,  -121,
      33,    36,    15,   123,    26,   124,   126,    92,   127,   125,
     128,    86,   -10,    -7,   -55,   182,     8,   250,    60,  -121,
     251,  -121,   252,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   150,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   -51,    79,   143,
     144,   145,   146,  -121,  -121,  -121,  -121,   147,   148,    82,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   271,
    -121,   272,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,   273,   274,   275,   276,   277,   278,
    -121,  -121,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   169,   172,   173,   174,
     175,   176,   177,   179,   180,   181,  -121,   183,   184,   185,
     298,   304,   308,   309,  -121,   310,  -121,   311,  -121,  -121,
     312,   313,   314,   315,     1,   320,   321,   322,   323,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   324,   325,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,   326,  -121,  -121,  -121,   327,  -121,
    -121,   328,  -121,  -121,  -121,   329,  -121,   330,  -121,   331,
    -121,   332,  -121,   333,  -121,  -121,  -121,  -121,   334,  -121,
     335,  -121,   336,   337,  -121,  -121,  -121,  -121,  -121,   197,
     198,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   338,  -121,
     339,   340,   341,  -121,   342,   343,  -121,   344,   345,   346,
    -121,   347,  -121,   348,  -121,   349,  -121,   350,  -121,  -121,
    -121,  -121,  -121,   200,   201,    -3,     3,     0,     5,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   351,  -121,   352,  -121,    83,    77,   129,
      78,   243,   244,   245,  -121,  -121,    84,   246,   247,   248,
    -121,  -121,    94,   249,    95,   265,   266,   267,  -121,  -121,
      40,   268,   269,  -121,   353,  -121,   354,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121
  };

  const short
  conf_parser::yydefact_[] =
  {
       2,     0,     1,     0,     0,    52,     0,     0,     3,     4,
       5,     6,     7,     8,    10,    46,     0,    77,   104,     0,
       0,    54,     0,   106,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    48,     0,    76,     0,    95,
      98,     0,   101,     0,     0,    78,     0,   108,     0,     0,
      26,    28,    30,    32,    34,    36,    20,    22,    24,    40,
      38,    44,    42,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    79,    83,    85,    87,    89,
      91,    93,   108,     0,    12,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    50,    49,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    81,     0,    97,     0,    96,   100,
       0,    99,     0,   103,     0,   102,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
       0,    14,     0,    18,    27,    29,    31,    33,    35,    37,
      21,    23,    25,    41,    39,    45,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      84,    86,    88,    90,    92,    94,   107,   110,   112,   114,
     116,   118,   120,   122,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,     0,     0,     0,
       0,     0,     0,   196,   198,   200,   202,   204,   208,   212,
     218,   222,   220,   233,   225,   227,   229,   231,    13,     0,
      17,     0,    51,    57,    59,    61,    63,    65,    67,    69,
      71,    73,    75,    82,     0,     0,     0,     0,     0,     0,
     124,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,   164,
       0,   168,     0,     0,   178,     0,   182,   184,   188,   192,
       0,     0,     0,     0,   206,     0,   210,     0,   214,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      19,   111,   113,   115,   117,   119,   121,     0,     0,   123,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   156,     0,   158,   160,   166,     0,   162,
     170,     0,   172,   174,   180,     0,   176,     0,   186,     0,
     190,     0,   194,     0,   197,   199,   201,   203,     0,   205,
       0,   209,     0,     0,   213,   219,   223,   221,   224,     0,
       0,   234,   243,   283,   301,   331,   125,   127,     0,   155,
       0,     0,     0,   165,     0,     0,   169,     0,     0,     0,
     179,     0,   183,     0,   185,     0,   189,     0,   193,   207,
     211,   215,   217,   235,   239,     0,     0,     0,     0,   157,
     159,   161,   167,   163,   171,   173,   175,   181,   177,   187,
     191,   195,   237,     0,   241,     0,   226,     0,     0,     0,
       0,     0,     0,     0,   244,   228,     0,     0,     0,     0,
     284,   230,     0,     0,     0,     0,     0,     0,   302,   232,
       0,     0,     0,   332,     0,   236,     0,   240,   245,   247,
     249,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   285,   287,   289,
     291,   293,   295,   297,   299,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   333,
     335,   337,   339,   238,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   286,
     288,   290,   292,   294,   296,   298,   300,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   334,   336,   338,   340
  };

  const short
  conf_parser::yypgoto_[] =
  {
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,   364,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121
  };

  const short
  conf_parser::yydefgoto_[] =
  {
      -1,     1,     8,     9,    19,    34,   150,   229,   152,   231,
      94,    95,    96,    88,    89,    90,    91,    92,    93,    98,
      97,   100,    99,    10,    20,    63,   103,   167,    11,    16,
      36,    74,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,    12,    22,    45,   115,   178,   117,   120,   122,
     124,   126,   127,    76,   118,    77,   121,    79,   125,    13,
      24,    46,    83,   149,   244,   245,   246,   247,   248,   249,
     252,   307,   308,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   324,   368,   370,   371,
     374,   328,   372,   331,   375,   377,   378,   381,   335,   379,
     337,   339,   383,   341,   385,   343,   387,   280,   281,   282,
     283,   285,   348,   287,   350,   290,   352,   353,   291,   293,
     292,   295,   296,   297,   298,   294,   361,   413,   444,   415,
     446,   395,   424,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   396,   430,   514,   515,   516,   517,   518,   519,
     520,   521,   397,   438,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   398,   443,
     536,   537,   538,   539
  };

  const short
  conf_parser::yytable_[] =
  {
     101,   416,   129,    56,   431,   358,    25,   425,    84,   439,
      64,    85,    86,   217,    14,    87,    15,    26,   220,   266,
     267,   268,   269,   270,   191,   192,   193,    27,    28,    29,
      30,    31,    32,    33,   218,   195,   196,   197,     2,    18,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    17,
     130,    21,     3,   131,   107,   108,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   209,   210,   211,   212,
       4,     5,    23,   142,   213,   214,   215,   216,   143,    48,
      49,     6,    58,   144,   145,   186,   187,   188,   146,     7,
      35,   147,   189,   190,   148,   359,   360,    59,   417,   221,
     222,   200,   201,   202,   418,   419,   420,   432,   433,   421,
     434,    47,   435,   426,    57,   427,   440,    50,    51,    52,
      53,    54,    55,   422,   423,    82,   436,   437,   102,   428,
     429,   441,   442,   130,   204,   205,   131,    61,    37,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   271,
     272,   273,   274,   275,   207,   208,   142,   224,   225,   226,
     227,   143,   250,   251,   489,   490,   144,   145,    60,   288,
     289,   146,    62,    75,   147,   154,    78,   148,    38,    39,
      40,    41,    42,    43,    44,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,    80,   459,   460,   461,   462,
     463,    81,   467,   468,   469,   470,   471,   475,   476,   477,
     478,   479,   155,   481,   482,   483,   484,   485,   104,   116,
     105,   156,   106,   157,   158,   109,   110,   159,   111,   112,
     113,   114,   151,   119,   123,   153,   160,   161,   162,   163,
     164,   165,   166,   179,   180,   181,   182,   183,   184,   185,
     219,   194,   198,   223,   199,   203,   206,   458,   228,   230,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   276,   277,   278,   279,   284,   286,   299,   300,
     301,   302,   303,   304,   305,   306,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   325,   326,   327,   329,   344,   332,   330,   333,   334,
     336,   345,   338,   340,   342,   346,   347,   349,   351,   354,
     355,   356,   357,   362,   363,   364,   365,   393,   394,   412,
     414,   366,   367,   369,   373,   376,   380,   382,   384,   386,
     388,   389,   390,   391,   392,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   445,   447,
     493,   494,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   464,   465,   466,   472,   473,   474,   480,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   486,   487,   488,   491,   492,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128
  };

  const short
  conf_parser::yycheck_[] =
  {
       4,     4,     4,    18,     4,     4,     4,     4,   128,     4,
       4,   131,   128,    68,     3,   131,   130,    15,    10,    70,
      71,    72,    73,    74,     9,    10,    11,    25,    26,    27,
      28,    29,    30,    31,    89,     9,    10,    11,     0,   131,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
      52,     3,    14,    55,     9,    10,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    76,    77,    78,    79,
      32,    33,   128,    75,    81,    82,    83,    84,    80,    16,
      17,    43,   129,    85,    86,     4,    53,    54,    90,    51,
       3,    93,    56,    57,    96,    94,    95,   129,   101,    91,
      92,     9,    10,    11,   107,   108,   109,   107,   108,   112,
     110,     3,   112,   110,   129,   112,   111,    19,    20,    21,
      22,    23,    24,   126,   127,     3,   126,   127,   132,   126,
     127,   126,   127,    52,     9,    10,    55,   128,     4,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    70,
      71,    72,    73,    74,    68,    69,    75,    97,    98,    99,
     100,    80,    12,    13,   124,   125,    85,    86,   129,    87,
      88,    90,   128,   132,    93,     7,   129,    96,    44,    45,
      46,    47,    48,    49,    50,   102,   103,   104,   105,   106,
     113,   114,   115,   116,   117,   129,   118,   119,   120,   121,
     122,   128,   118,   119,   120,   121,   122,   113,   114,   115,
     116,   117,     7,   118,   119,   120,   121,   122,   128,   131,
     129,     7,   129,     7,     7,   129,   129,     7,   129,   129,
     129,   128,   128,   131,   129,   128,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
      68,   128,   128,     3,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,   129,   129,   129,   129,   129,   129,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     131,   129,   129,   129,   129,     7,   129,   131,   129,   129,
     129,     7,   129,   129,   129,     7,     7,     7,     7,     7,
       7,     7,     7,     3,     3,     3,     3,   130,   130,   129,
     129,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   128,   128,   128,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   128,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82
  };

  const short
  conf_parser::yystos_[] =
  {
       0,   138,     0,    14,    32,    33,    43,    51,   139,   140,
     160,   165,   179,   196,     3,   130,   166,     3,   131,   141,
     161,     3,   180,   128,   197,     4,    15,    25,    26,    27,
      28,    29,    30,    31,   142,     3,   167,     4,    44,    45,
      46,    47,    48,    49,    50,   181,   198,     3,    16,    17,
      19,    20,    21,    22,    23,    24,    18,   129,   129,   129,
     129,   128,   128,   162,     4,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   168,   132,   190,   192,   129,   194,
     129,   128,     3,   199,   128,   131,   128,   131,   150,   151,
     152,   153,   154,   155,   147,   148,   149,   157,   156,   159,
     158,     4,   132,   163,   128,   129,   129,     9,    10,   129,
     129,   129,   129,   129,   128,   182,   131,   184,   191,   131,
     185,   193,   186,   129,   187,   195,   188,   189,   199,     4,
      52,    55,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    75,    80,    85,    86,    90,    93,    96,   200,
     143,   128,   145,   128,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   164,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   183,     7,
       7,     7,     7,     7,     7,     7,     4,    53,    54,    56,
      57,     9,    10,    11,   128,     9,    10,    11,   128,   128,
       9,    10,    11,   128,     9,    10,   128,    68,    69,    76,
      77,    78,    79,    81,    82,    83,    84,    68,    89,    68,
      10,    91,    92,     3,    97,    98,    99,   100,     7,   144,
       7,   146,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   201,   202,   203,   204,   205,   206,
      12,    13,   207,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,    70,    71,    72,    73,
      74,    70,    71,    72,    73,    74,   129,   129,   129,   129,
     244,   245,   246,   247,   129,   248,   129,   250,    87,    88,
     252,   255,   257,   256,   262,   258,   259,   260,   261,     7,
       7,     7,     7,     7,     7,     7,     7,   208,   209,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   131,   223,   129,   129,   129,   228,   129,
     131,   230,   129,   129,   129,   235,   129,   237,   129,   238,
     129,   240,   129,   242,     7,     7,     7,     7,   249,     7,
     251,     7,   253,   254,     7,     7,     7,     7,     4,    94,
      95,   263,     3,     3,     3,     3,     7,     7,   224,     7,
     225,   226,   229,     7,   227,   231,     7,   232,   233,   236,
       7,   234,     7,   239,     7,   241,     7,   243,     7,     7,
       7,     7,     7,   130,   130,   268,   289,   299,   315,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,   129,   264,   129,   266,     4,   101,   107,   108,
     109,   112,   126,   127,   269,     4,   110,   112,   126,   127,
     290,     4,   107,   108,   110,   112,   126,   127,   300,     4,
     111,   126,   127,   316,   265,     7,   267,     7,   102,   103,
     104,   105,   106,   113,   114,   115,   116,   117,   128,   118,
     119,   120,   121,   122,   128,   128,   128,   118,   119,   120,
     121,   122,   128,   128,   128,   113,   114,   115,   116,   117,
     128,   118,   119,   120,   121,   122,   128,   128,   128,   124,
     125,   128,   128,     7,     7,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   291,   292,   293,   294,   295,   296,
     297,   298,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   317,   318,   319,   320,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7
  };

  const short
  conf_parser::yyr1_[] =
  {
       0,   137,   138,   138,   139,   139,   139,   139,   139,   140,
     141,   141,   143,   142,   144,   142,   145,   142,   146,   142,
     147,   142,   148,   142,   149,   142,   150,   142,   151,   142,
     152,   142,   153,   142,   154,   142,   155,   142,   156,   142,
     157,   142,   158,   142,   159,   142,   161,   160,   162,   162,
     164,   163,   166,   165,   167,   167,   169,   168,   170,   168,
     171,   168,   172,   168,   173,   168,   174,   168,   175,   168,
     176,   168,   177,   168,   178,   168,   179,   180,   180,   182,
     181,   183,   181,   184,   181,   185,   181,   186,   181,   187,
     181,   188,   181,   189,   181,   190,   190,   191,   192,   192,
     193,   194,   194,   195,   197,   196,   198,   196,   199,   199,
     201,   200,   202,   200,   203,   200,   204,   200,   205,   200,
     206,   200,   207,   200,   208,   200,   209,   200,   210,   200,
     211,   200,   212,   200,   213,   200,   214,   200,   215,   200,
     216,   200,   217,   200,   218,   200,   219,   200,   220,   200,
     221,   200,   222,   200,   223,   200,   224,   200,   225,   200,
     226,   200,   227,   200,   228,   200,   229,   200,   230,   200,
     231,   200,   232,   200,   233,   200,   234,   200,   235,   200,
     236,   200,   237,   200,   238,   200,   239,   200,   240,   200,
     241,   200,   242,   200,   243,   200,   244,   200,   245,   200,
     246,   200,   247,   200,   248,   200,   249,   200,   250,   200,
     251,   200,   252,   200,   253,   200,   254,   200,   255,   200,
     256,   200,   257,   200,   200,   258,   200,   259,   200,   260,
     200,   261,   200,   262,   262,   264,   263,   265,   263,   266,
     263,   267,   263,   268,   268,   270,   269,   271,   269,   272,
     269,   273,   269,   274,   269,   275,   269,   276,   269,   277,
     269,   278,   269,   279,   269,   280,   269,   281,   269,   282,
     269,   283,   269,   284,   269,   285,   269,   286,   269,   287,
     269,   288,   269,   289,   289,   291,   290,   292,   290,   293,
     290,   294,   290,   295,   290,   296,   290,   297,   290,   298,
     290,   299,   299,   301,   300,   302,   300,   303,   300,   304,
     300,   305,   300,   306,   300,   307,   300,   308,   300,   309,
     300,   310,   300,   311,   300,   312,   300,   313,   300,   314,
     300,   315,   315,   317,   316,   318,   316,   319,   316,   320,
     316
  };

  const signed char
  conf_parser::yyr2_[] =
  {
       0,     2,     0,     2,     1,     1,     1,     1,     1,     4,
       0,     2,     0,     5,     0,     6,     0,     5,     0,     6,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     6,     0,     2,
       0,     3,     0,     5,     0,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     4,     0,     2,     0,
       4,     0,     5,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     1,     0,     2,
       1,     0,     2,     1,     0,     6,     0,     7,     0,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     5,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     5,     0,     6,     0,     6,
       0,     6,     0,     6,     0,     5,     0,     6,     0,     5,
       0,     6,     0,     6,     0,     6,     0,     6,     0,     5,
       0,     6,     0,     5,     0,     5,     0,     6,     0,     5,
       0,     6,     0,     5,     0,     6,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     5,     0,     4,
       0,     5,     0,     4,     0,     5,     0,     5,     0,     4,
       0,     4,     0,     4,     4,     0,     6,     0,     6,     0,
       6,     0,     6,     0,     2,     0,     4,     0,     5,     0,
       4,     0,     5,     0,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const conf_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"begin section\"",
  "\"end section\"", "\"begin grouping\"", "\"end grouping\"",
  "\"end of statement\"", "\"sequence\"", "\"enable\"", "\"disable\"",
  "\"force\"", "\"draft\"", "\"rfc\"", "\"deamon section\"", "\"socket\"",
  "\"ike\"", "\"natt\"", "\"syslog\"", "\"none\"", "\"error\"", "\"info\"",
  "\"debug\"", "\"loud\"", "\"decode\"", "\"log level\"", "\"log file\"",
  "\"dhcp file\"", "\"decrypted ike pcap dump file\"",
  "\"encrypted ike pcap dump file\"", "\"retry count\"", "\"retry delay\"",
  "\"netgroup section\"", "\"xauth ldap section\"", "\"version\"",
  "\"url\"", "\"base\"", "\"subtree\"", "\"bind dn\"", "\"bind pw\"",
  "\"user attribute\"", "\"group attribute\"", "\"member attribute\"",
  "\"xconfig local section\"", "\"network4\"", "\"domain name server\"",
  "\"nerbios name server\"", "\"dns suffix\"", "\"dns list\"",
  "\"banner\"", "\"pfs group\"", "\"peer section\"", "\"contact type\"",
  "\"initiator\"", "\"responder\"", "\"exchange type\"", "\"main\"",
  "\"aggressive\"", "\"natt mode\"", "\"natt keepalive rate\"",
  "\"dpd mode\"", "\"dpd notifiy delay\"", "\"dpd notifiy retries\"",
  "\"frag ike mode\"", "\"frag ike size\"", "\"frag esp mode\"",
  "\"frag esp size\"", "\"peer id\"", "\"local\"", "\"remote\"",
  "\"address\"", "\"fqdn\"", "\"ufqdn\"", "\"asn1dn\"", "\"keyid\"",
  "\"authdata\"", "\"psk\"", "\"ca\"", "\"cert\"", "\"pkey\"",
  "\"lifetime check\"", "\"obey\"", "\"claim\"", "\"strict\"", "\"exact\"",
  "\"xauth source\"", "\"xconf source\"", "\"pull\"", "\"push\"",
  "\"ldap\"", "\"policy mode\"", "\"config\"", "\"compat\"",
  "\"policy list section\"", "\"include\"", "\"exclude\"",
  "\"proposal section\"", "\"isakmp\"", "\"ah\"", "\"esp\"", "\"ipcomp\"",
  "\"auth\"", "\"hybrid xauth rsa\"", "\"mutual xauth rsa\"",
  "\"mutual xauth psk\"", "\"mutual rsa\"", "\"mutual psk\"", "\"cipher\"",
  "\"klen\"", "\"hash\"", "\"hmac\"", "\"compress\"", "\"dh group\"",
  "\"aes\"", "\"blowfish\"", "\"3des\"", "\"cast\"", "\"des\"", "\"md5\"",
  "\"sha1\"", "\"sha2-256\"", "\"sha2-384\"", "\"sha2-512\"", "\"dhgr\"",
  "\"deflate\"", "\"lzs\"", "\"life sec\"", "\"life kbs\"",
  "\"number value\"", "\"quoted value\"", "\"label value\"",
  "\"address value\"", "\"network value\"", "\"number\"", "\"quoted\"",
  "\"label\"", "\"network\"", "$accept", "sections", "section",
  "daemon_section", "daemon_lines", "daemon_line", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "netgroup_section", "$@18",
  "netgroup_lines", "netgroup_line", "$@19", "xauth_ldap_section", "$@20",
  "xauth_ldap_lines", "xauth_ldap_line", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "xconf_local_section",
  "xconf_local_lines", "xconf_local_line", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "$@37", "$@38", "xconf_local_dns_servers",
  "xconf_local_dns_server", "xconf_local_nbn_servers",
  "xconf_local_nbn_server", "xconf_local_dns_names",
  "xconf_local_dns_name", "peer_section", "$@39", "$@40", "peer_lines",
  "peer_line", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "$@82", "$@83",
  "$@84", "$@85", "$@86", "$@87", "$@88", "$@89", "$@90", "$@91", "$@92",
  "$@93", "$@94", "$@95", "$@96", "$@97", "$@98", "$@99", "$@100", "$@101",
  "plcy_list_lines", "plcy_list_line", "$@102", "$@103", "$@104", "$@105",
  "proposal_lines_isakmp", "proposal_line_isakmp", "$@106", "$@107",
  "$@108", "$@109", "$@110", "$@111", "$@112", "$@113", "$@114", "$@115",
  "$@116", "$@117", "$@118", "$@119", "$@120", "$@121", "$@122", "$@123",
  "$@124", "proposal_lines_ah", "proposal_line_ah", "$@125", "$@126",
  "$@127", "$@128", "$@129", "$@130", "$@131", "$@132",
  "proposal_lines_esp", "proposal_line_esp", "$@133", "$@134", "$@135",
  "$@136", "$@137", "$@138", "$@139", "$@140", "$@141", "$@142", "$@143",
  "$@144", "$@145", "$@146", "proposal_lines_ipcomp",
  "proposal_line_ipcomp", "$@147", "$@148", "$@149", "$@150", YY_NULLPTR
  };

#if YYDEBUG
  const short
  conf_parser::yyrline_[] =
  {
       0,   245,   245,   246,   249,   250,   251,   252,   253,   262,
     265,   266,   270,   269,   282,   281,   297,   296,   313,   312,
     332,   331,   341,   340,   348,   347,   354,   353,   359,   358,
     364,   363,   369,   368,   374,   373,   379,   378,   384,   383,
     391,   390,   398,   397,   403,   402,   416,   415,   428,   429,
     433,   432,   465,   464,   473,   474,   478,   477,   488,   487,
     496,   495,   504,   503,   511,   510,   518,   517,   526,   525,
     534,   533,   542,   541,   550,   549,   565,   568,   569,   573,
     572,   588,   587,   603,   602,   608,   607,   613,   612,   626,
     625,   631,   630,   646,   645,   654,   655,   658,   672,   673,
     676,   690,   691,   694,   709,   708,   744,   743,   780,   781,
     785,   784,   790,   789,   795,   794,   800,   799,   805,   804,
     814,   813,   823,   822,   832,   831,   845,   844,   854,   853,
     863,   862,   868,   867,   873,   872,   878,   877,   883,   882,
     888,   887,   893,   892,   898,   897,   903,   902,   908,   907,
     913,   912,   918,   917,   923,   922,   928,   927,   935,   934,
     942,   941,   949,   948,   956,   955,   961,   960,   968,   967,
     973,   972,   980,   979,   987,   986,   994,   993,  1001,  1000,
    1006,  1005,  1013,  1012,  1019,  1018,  1032,  1031,  1047,  1046,
    1061,  1060,  1076,  1075,  1089,  1088,  1103,  1102,  1108,  1107,
    1113,  1112,  1118,  1117,  1123,  1122,  1128,  1127,  1135,  1134,
    1147,  1146,  1161,  1160,  1167,  1166,  1173,  1172,  1179,  1178,
    1184,  1183,  1189,  1188,  1193,  1195,  1194,  1206,  1205,  1215,
    1214,  1224,  1223,  1235,  1236,  1240,  1239,  1261,  1260,  1283,
    1282,  1304,  1303,  1328,  1329,  1333,  1332,  1338,  1337,  1343,
    1342,  1348,  1347,  1353,  1352,  1358,  1357,  1363,  1362,  1368,
    1367,  1373,  1372,  1378,  1377,  1383,  1382,  1388,  1387,  1393,
    1392,  1398,  1397,  1403,  1402,  1408,  1407,  1413,  1412,  1455,
    1454,  1460,  1459,  1467,  1468,  1472,  1471,  1478,  1477,  1484,
    1483,  1490,  1489,  1496,  1495,  1502,  1501,  1544,  1543,  1549,
    1548,  1556,  1557,  1561,  1560,  1566,  1565,  1571,  1570,  1576,
    1575,  1581,  1580,  1586,  1585,  1591,  1590,  1596,  1595,  1601,
    1600,  1606,  1605,  1611,  1610,  1616,  1615,  1658,  1657,  1663,
    1662,  1670,  1671,  1675,  1674,  1680,  1679,  1685,  1684,  1690,
    1689
  };

  // Print the state stack on the debug stream.
  void
  conf_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  conf_parser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  conf_parser::token_number_type
  conf_parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136
    };
    const int user_token_number_max_ = 391;

    if (t <= 0)
      return yyeof_;
    else if (t <= user_token_number_max_)
      return translate_table[t];
    else
      return yy_undef_token_;
  }

} // yy
#line 3385 "conf.parse.cpp"

#line 1696 "conf.parse.yy"


void yy::conf_parser::error(
	const yy::conf_parser::location_type & l,
        const std::string & m )
{
	iked.log.txt( LLOG_ERROR,
		"%s ( line %i, col %i )\n",
		m.c_str(),
		l.end.line,
		l.end.column );

	exit( -1 );

	iked.conf_fail = true;
}
