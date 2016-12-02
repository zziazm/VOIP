/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FORWARD = 258,
     FORWARD_TCP = 259,
     FORWARD_TLS = 260,
     FORWARD_SCTP = 261,
     FORWARD_UDP = 262,
     EXIT = 263,
     DROP = 264,
     RETURN = 265,
     BREAK = 266,
     LOG_TOK = 267,
     ERROR = 268,
     ROUTE = 269,
     ROUTE_REQUEST = 270,
     ROUTE_FAILURE = 271,
     ROUTE_ONREPLY = 272,
     ROUTE_REPLY = 273,
     ROUTE_BRANCH = 274,
     ROUTE_SEND = 275,
     ROUTE_EVENT = 276,
     EXEC = 277,
     SET_HOST = 278,
     SET_HOSTPORT = 279,
     SET_HOSTPORTTRANS = 280,
     PREFIX = 281,
     STRIP = 282,
     STRIP_TAIL = 283,
     SET_USERPHONE = 284,
     APPEND_BRANCH = 285,
     REMOVE_BRANCH = 286,
     CLEAR_BRANCHES = 287,
     SET_USER = 288,
     SET_USERPASS = 289,
     SET_PORT = 290,
     SET_URI = 291,
     REVERT_URI = 292,
     FORCE_RPORT = 293,
     ADD_LOCAL_RPORT = 294,
     FORCE_TCP_ALIAS = 295,
     UDP_MTU = 296,
     UDP_MTU_TRY_PROTO = 297,
     UDP4_RAW = 298,
     UDP4_RAW_MTU = 299,
     UDP4_RAW_TTL = 300,
     IF = 301,
     ELSE = 302,
     SET_ADV_ADDRESS = 303,
     SET_ADV_PORT = 304,
     FORCE_SEND_SOCKET = 305,
     SET_FWD_NO_CONNECT = 306,
     SET_RPL_NO_CONNECT = 307,
     SET_FWD_CLOSE = 308,
     SET_RPL_CLOSE = 309,
     SWITCH = 310,
     CASE = 311,
     DEFAULT = 312,
     WHILE = 313,
     CFG_SELECT = 314,
     CFG_RESET = 315,
     URIHOST = 316,
     URIPORT = 317,
     MAX_LEN = 318,
     SETFLAG = 319,
     RESETFLAG = 320,
     ISFLAGSET = 321,
     SETAVPFLAG = 322,
     RESETAVPFLAG = 323,
     ISAVPFLAGSET = 324,
     METHOD = 325,
     URI = 326,
     FROM_URI = 327,
     TO_URI = 328,
     SRCIP = 329,
     SRCPORT = 330,
     DSTIP = 331,
     DSTPORT = 332,
     TOIP = 333,
     TOPORT = 334,
     SNDIP = 335,
     SNDPORT = 336,
     SNDPROTO = 337,
     SNDAF = 338,
     PROTO = 339,
     AF = 340,
     MYSELF = 341,
     MSGLEN = 342,
     UDP = 343,
     TCP = 344,
     TLS = 345,
     SCTP = 346,
     WS = 347,
     WSS = 348,
     DEBUG_V = 349,
     FORK = 350,
     FORK_DELAY = 351,
     MODINIT_DELAY = 352,
     LOGSTDERROR = 353,
     LOGFACILITY = 354,
     LOGNAME = 355,
     LOGCOLOR = 356,
     LOGPREFIX = 357,
     LOGENGINETYPE = 358,
     LOGENGINEDATA = 359,
     LISTEN = 360,
     ADVERTISE = 361,
     ALIAS = 362,
     SR_AUTO_ALIASES = 363,
     DNS = 364,
     REV_DNS = 365,
     DNS_TRY_IPV6 = 366,
     DNS_TRY_NAPTR = 367,
     DNS_SRV_LB = 368,
     DNS_UDP_PREF = 369,
     DNS_TCP_PREF = 370,
     DNS_TLS_PREF = 371,
     DNS_SCTP_PREF = 372,
     DNS_RETR_TIME = 373,
     DNS_RETR_NO = 374,
     DNS_SERVERS_NO = 375,
     DNS_USE_SEARCH = 376,
     DNS_SEARCH_FMATCH = 377,
     DNS_NAPTR_IGNORE_RFC = 378,
     DNS_CACHE_INIT = 379,
     DNS_USE_CACHE = 380,
     DNS_USE_FAILOVER = 381,
     DNS_CACHE_FLAGS = 382,
     DNS_CACHE_NEG_TTL = 383,
     DNS_CACHE_MIN_TTL = 384,
     DNS_CACHE_MAX_TTL = 385,
     DNS_CACHE_MEM = 386,
     DNS_CACHE_GC_INT = 387,
     DNS_CACHE_DEL_NONEXP = 388,
     DNS_CACHE_REC_PREF = 389,
     AUTO_BIND_IPV6 = 390,
     DST_BLST_INIT = 391,
     USE_DST_BLST = 392,
     DST_BLST_MEM = 393,
     DST_BLST_TTL = 394,
     DST_BLST_GC_INT = 395,
     DST_BLST_UDP_IMASK = 396,
     DST_BLST_TCP_IMASK = 397,
     DST_BLST_TLS_IMASK = 398,
     DST_BLST_SCTP_IMASK = 399,
     PORT = 400,
     STAT = 401,
     CHILDREN = 402,
     SOCKET_WORKERS = 403,
     ASYNC_WORKERS = 404,
     ASYNC_USLEEP = 405,
     CHECK_VIA = 406,
     PHONE2TEL = 407,
     MEMLOG = 408,
     MEMDBG = 409,
     MEMSUM = 410,
     MEMSAFETY = 411,
     MEMJOIN = 412,
     MEMSTATUSMODE = 413,
     CORELOG = 414,
     SIP_WARNING = 415,
     SERVER_SIGNATURE = 416,
     SERVER_HEADER = 417,
     USER_AGENT_HEADER = 418,
     REPLY_TO_VIA = 419,
     LOADMODULE = 420,
     LOADPATH = 421,
     MODPARAM = 422,
     MAXBUFFER = 423,
     SQL_BUFFER_SIZE = 424,
     USER = 425,
     GROUP = 426,
     CHROOT = 427,
     WDIR = 428,
     RUNDIR = 429,
     MHOMED = 430,
     DISABLE_TCP = 431,
     TCP_ACCEPT_ALIASES = 432,
     TCP_CHILDREN = 433,
     TCP_CONNECT_TIMEOUT = 434,
     TCP_SEND_TIMEOUT = 435,
     TCP_CON_LIFETIME = 436,
     TCP_POLL_METHOD = 437,
     TCP_MAX_CONNECTIONS = 438,
     TLS_MAX_CONNECTIONS = 439,
     TCP_NO_CONNECT = 440,
     TCP_SOURCE_IPV4 = 441,
     TCP_SOURCE_IPV6 = 442,
     TCP_OPT_FD_CACHE = 443,
     TCP_OPT_BUF_WRITE = 444,
     TCP_OPT_CONN_WQ_MAX = 445,
     TCP_OPT_WQ_MAX = 446,
     TCP_OPT_RD_BUF = 447,
     TCP_OPT_WQ_BLK = 448,
     TCP_OPT_DEFER_ACCEPT = 449,
     TCP_OPT_DELAYED_ACK = 450,
     TCP_OPT_SYNCNT = 451,
     TCP_OPT_LINGER2 = 452,
     TCP_OPT_KEEPALIVE = 453,
     TCP_OPT_KEEPIDLE = 454,
     TCP_OPT_KEEPINTVL = 455,
     TCP_OPT_KEEPCNT = 456,
     TCP_OPT_CRLF_PING = 457,
     TCP_OPT_ACCEPT_NO_CL = 458,
     TCP_CLONE_RCVBUF = 459,
     DISABLE_TLS = 460,
     ENABLE_TLS = 461,
     TLSLOG = 462,
     TLS_PORT_NO = 463,
     TLS_METHOD = 464,
     TLS_HANDSHAKE_TIMEOUT = 465,
     TLS_SEND_TIMEOUT = 466,
     SSLv23 = 467,
     SSLv2 = 468,
     SSLv3 = 469,
     TLSv1 = 470,
     TLS_VERIFY = 471,
     TLS_REQUIRE_CERTIFICATE = 472,
     TLS_CERTIFICATE = 473,
     TLS_PRIVATE_KEY = 474,
     TLS_CA_LIST = 475,
     DISABLE_SCTP = 476,
     ENABLE_SCTP = 477,
     SCTP_CHILDREN = 478,
     ADVERTISED_ADDRESS = 479,
     ADVERTISED_PORT = 480,
     DISABLE_CORE = 481,
     OPEN_FD_LIMIT = 482,
     SHM_MEM_SZ = 483,
     SHM_FORCE_ALLOC = 484,
     MLOCK_PAGES = 485,
     REAL_TIME = 486,
     RT_PRIO = 487,
     RT_POLICY = 488,
     RT_TIMER1_PRIO = 489,
     RT_TIMER1_POLICY = 490,
     RT_TIMER2_PRIO = 491,
     RT_TIMER2_POLICY = 492,
     MCAST_LOOPBACK = 493,
     MCAST_TTL = 494,
     TOS = 495,
     PMTU_DISCOVERY = 496,
     KILL_TIMEOUT = 497,
     MAX_WLOOPS = 498,
     PVBUFSIZE = 499,
     PVBUFSLOTS = 500,
     HTTP_REPLY_PARSE = 501,
     VERSION_TABLE_CFG = 502,
     CFG_DESCRIPTION = 503,
     SERVER_ID = 504,
     MAX_RECURSIVE_LEVEL = 505,
     MAX_BRANCHES_PARAM = 506,
     LATENCY_LOG = 507,
     LATENCY_LIMIT_DB = 508,
     LATENCY_LIMIT_ACTION = 509,
     MSG_TIME = 510,
     ONSEND_RT_REPLY = 511,
     FLAGS_DECL = 512,
     AVPFLAGS_DECL = 513,
     ATTR_MARK = 514,
     SELECT_MARK = 515,
     ATTR_FROM = 516,
     ATTR_TO = 517,
     ATTR_FROMURI = 518,
     ATTR_TOURI = 519,
     ATTR_FROMUSER = 520,
     ATTR_TOUSER = 521,
     ATTR_FROMDOMAIN = 522,
     ATTR_TODOMAIN = 523,
     ATTR_GLOBAL = 524,
     ADDEQ = 525,
     SUBST = 526,
     SUBSTDEF = 527,
     SUBSTDEFS = 528,
     EQUAL = 529,
     LOG_OR = 530,
     LOG_AND = 531,
     BIN_OR = 532,
     BIN_AND = 533,
     BIN_XOR = 534,
     BIN_LSHIFT = 535,
     BIN_RSHIFT = 536,
     STRDIFF = 537,
     STREQ = 538,
     INTDIFF = 539,
     INTEQ = 540,
     MATCH = 541,
     DIFF = 542,
     EQUAL_T = 543,
     LTE = 544,
     GTE = 545,
     LT = 546,
     GT = 547,
     MINUS = 548,
     PLUS = 549,
     MODULO = 550,
     SLASH = 551,
     STAR = 552,
     BIN_NOT = 553,
     UNARY = 554,
     NOT = 555,
     DEFINED = 556,
     STRCAST = 557,
     INTCAST = 558,
     DOT = 559,
     STRLEN = 560,
     STREMPTY = 561,
     NUMBER = 562,
     ID = 563,
     NUM_ID = 564,
     STRING = 565,
     IPV6ADDR = 566,
     PVAR = 567,
     AVP_OR_PVAR = 568,
     EVENT_RT_NAME = 569,
     COMMA = 570,
     SEMICOLON = 571,
     RPAREN = 572,
     LPAREN = 573,
     LBRACE = 574,
     RBRACE = 575,
     LBRACK = 576,
     RBRACK = 577,
     CR = 578,
     COLON = 579
   };
#endif
/* Tokens.  */
#define FORWARD 258
#define FORWARD_TCP 259
#define FORWARD_TLS 260
#define FORWARD_SCTP 261
#define FORWARD_UDP 262
#define EXIT 263
#define DROP 264
#define RETURN 265
#define BREAK 266
#define LOG_TOK 267
#define ERROR 268
#define ROUTE 269
#define ROUTE_REQUEST 270
#define ROUTE_FAILURE 271
#define ROUTE_ONREPLY 272
#define ROUTE_REPLY 273
#define ROUTE_BRANCH 274
#define ROUTE_SEND 275
#define ROUTE_EVENT 276
#define EXEC 277
#define SET_HOST 278
#define SET_HOSTPORT 279
#define SET_HOSTPORTTRANS 280
#define PREFIX 281
#define STRIP 282
#define STRIP_TAIL 283
#define SET_USERPHONE 284
#define APPEND_BRANCH 285
#define REMOVE_BRANCH 286
#define CLEAR_BRANCHES 287
#define SET_USER 288
#define SET_USERPASS 289
#define SET_PORT 290
#define SET_URI 291
#define REVERT_URI 292
#define FORCE_RPORT 293
#define ADD_LOCAL_RPORT 294
#define FORCE_TCP_ALIAS 295
#define UDP_MTU 296
#define UDP_MTU_TRY_PROTO 297
#define UDP4_RAW 298
#define UDP4_RAW_MTU 299
#define UDP4_RAW_TTL 300
#define IF 301
#define ELSE 302
#define SET_ADV_ADDRESS 303
#define SET_ADV_PORT 304
#define FORCE_SEND_SOCKET 305
#define SET_FWD_NO_CONNECT 306
#define SET_RPL_NO_CONNECT 307
#define SET_FWD_CLOSE 308
#define SET_RPL_CLOSE 309
#define SWITCH 310
#define CASE 311
#define DEFAULT 312
#define WHILE 313
#define CFG_SELECT 314
#define CFG_RESET 315
#define URIHOST 316
#define URIPORT 317
#define MAX_LEN 318
#define SETFLAG 319
#define RESETFLAG 320
#define ISFLAGSET 321
#define SETAVPFLAG 322
#define RESETAVPFLAG 323
#define ISAVPFLAGSET 324
#define METHOD 325
#define URI 326
#define FROM_URI 327
#define TO_URI 328
#define SRCIP 329
#define SRCPORT 330
#define DSTIP 331
#define DSTPORT 332
#define TOIP 333
#define TOPORT 334
#define SNDIP 335
#define SNDPORT 336
#define SNDPROTO 337
#define SNDAF 338
#define PROTO 339
#define AF 340
#define MYSELF 341
#define MSGLEN 342
#define UDP 343
#define TCP 344
#define TLS 345
#define SCTP 346
#define WS 347
#define WSS 348
#define DEBUG_V 349
#define FORK 350
#define FORK_DELAY 351
#define MODINIT_DELAY 352
#define LOGSTDERROR 353
#define LOGFACILITY 354
#define LOGNAME 355
#define LOGCOLOR 356
#define LOGPREFIX 357
#define LOGENGINETYPE 358
#define LOGENGINEDATA 359
#define LISTEN 360
#define ADVERTISE 361
#define ALIAS 362
#define SR_AUTO_ALIASES 363
#define DNS 364
#define REV_DNS 365
#define DNS_TRY_IPV6 366
#define DNS_TRY_NAPTR 367
#define DNS_SRV_LB 368
#define DNS_UDP_PREF 369
#define DNS_TCP_PREF 370
#define DNS_TLS_PREF 371
#define DNS_SCTP_PREF 372
#define DNS_RETR_TIME 373
#define DNS_RETR_NO 374
#define DNS_SERVERS_NO 375
#define DNS_USE_SEARCH 376
#define DNS_SEARCH_FMATCH 377
#define DNS_NAPTR_IGNORE_RFC 378
#define DNS_CACHE_INIT 379
#define DNS_USE_CACHE 380
#define DNS_USE_FAILOVER 381
#define DNS_CACHE_FLAGS 382
#define DNS_CACHE_NEG_TTL 383
#define DNS_CACHE_MIN_TTL 384
#define DNS_CACHE_MAX_TTL 385
#define DNS_CACHE_MEM 386
#define DNS_CACHE_GC_INT 387
#define DNS_CACHE_DEL_NONEXP 388
#define DNS_CACHE_REC_PREF 389
#define AUTO_BIND_IPV6 390
#define DST_BLST_INIT 391
#define USE_DST_BLST 392
#define DST_BLST_MEM 393
#define DST_BLST_TTL 394
#define DST_BLST_GC_INT 395
#define DST_BLST_UDP_IMASK 396
#define DST_BLST_TCP_IMASK 397
#define DST_BLST_TLS_IMASK 398
#define DST_BLST_SCTP_IMASK 399
#define PORT 400
#define STAT 401
#define CHILDREN 402
#define SOCKET_WORKERS 403
#define ASYNC_WORKERS 404
#define ASYNC_USLEEP 405
#define CHECK_VIA 406
#define PHONE2TEL 407
#define MEMLOG 408
#define MEMDBG 409
#define MEMSUM 410
#define MEMSAFETY 411
#define MEMJOIN 412
#define MEMSTATUSMODE 413
#define CORELOG 414
#define SIP_WARNING 415
#define SERVER_SIGNATURE 416
#define SERVER_HEADER 417
#define USER_AGENT_HEADER 418
#define REPLY_TO_VIA 419
#define LOADMODULE 420
#define LOADPATH 421
#define MODPARAM 422
#define MAXBUFFER 423
#define SQL_BUFFER_SIZE 424
#define USER 425
#define GROUP 426
#define CHROOT 427
#define WDIR 428
#define RUNDIR 429
#define MHOMED 430
#define DISABLE_TCP 431
#define TCP_ACCEPT_ALIASES 432
#define TCP_CHILDREN 433
#define TCP_CONNECT_TIMEOUT 434
#define TCP_SEND_TIMEOUT 435
#define TCP_CON_LIFETIME 436
#define TCP_POLL_METHOD 437
#define TCP_MAX_CONNECTIONS 438
#define TLS_MAX_CONNECTIONS 439
#define TCP_NO_CONNECT 440
#define TCP_SOURCE_IPV4 441
#define TCP_SOURCE_IPV6 442
#define TCP_OPT_FD_CACHE 443
#define TCP_OPT_BUF_WRITE 444
#define TCP_OPT_CONN_WQ_MAX 445
#define TCP_OPT_WQ_MAX 446
#define TCP_OPT_RD_BUF 447
#define TCP_OPT_WQ_BLK 448
#define TCP_OPT_DEFER_ACCEPT 449
#define TCP_OPT_DELAYED_ACK 450
#define TCP_OPT_SYNCNT 451
#define TCP_OPT_LINGER2 452
#define TCP_OPT_KEEPALIVE 453
#define TCP_OPT_KEEPIDLE 454
#define TCP_OPT_KEEPINTVL 455
#define TCP_OPT_KEEPCNT 456
#define TCP_OPT_CRLF_PING 457
#define TCP_OPT_ACCEPT_NO_CL 458
#define TCP_CLONE_RCVBUF 459
#define DISABLE_TLS 460
#define ENABLE_TLS 461
#define TLSLOG 462
#define TLS_PORT_NO 463
#define TLS_METHOD 464
#define TLS_HANDSHAKE_TIMEOUT 465
#define TLS_SEND_TIMEOUT 466
#define SSLv23 467
#define SSLv2 468
#define SSLv3 469
#define TLSv1 470
#define TLS_VERIFY 471
#define TLS_REQUIRE_CERTIFICATE 472
#define TLS_CERTIFICATE 473
#define TLS_PRIVATE_KEY 474
#define TLS_CA_LIST 475
#define DISABLE_SCTP 476
#define ENABLE_SCTP 477
#define SCTP_CHILDREN 478
#define ADVERTISED_ADDRESS 479
#define ADVERTISED_PORT 480
#define DISABLE_CORE 481
#define OPEN_FD_LIMIT 482
#define SHM_MEM_SZ 483
#define SHM_FORCE_ALLOC 484
#define MLOCK_PAGES 485
#define REAL_TIME 486
#define RT_PRIO 487
#define RT_POLICY 488
#define RT_TIMER1_PRIO 489
#define RT_TIMER1_POLICY 490
#define RT_TIMER2_PRIO 491
#define RT_TIMER2_POLICY 492
#define MCAST_LOOPBACK 493
#define MCAST_TTL 494
#define TOS 495
#define PMTU_DISCOVERY 496
#define KILL_TIMEOUT 497
#define MAX_WLOOPS 498
#define PVBUFSIZE 499
#define PVBUFSLOTS 500
#define HTTP_REPLY_PARSE 501
#define VERSION_TABLE_CFG 502
#define CFG_DESCRIPTION 503
#define SERVER_ID 504
#define MAX_RECURSIVE_LEVEL 505
#define MAX_BRANCHES_PARAM 506
#define LATENCY_LOG 507
#define LATENCY_LIMIT_DB 508
#define LATENCY_LIMIT_ACTION 509
#define MSG_TIME 510
#define ONSEND_RT_REPLY 511
#define FLAGS_DECL 512
#define AVPFLAGS_DECL 513
#define ATTR_MARK 514
#define SELECT_MARK 515
#define ATTR_FROM 516
#define ATTR_TO 517
#define ATTR_FROMURI 518
#define ATTR_TOURI 519
#define ATTR_FROMUSER 520
#define ATTR_TOUSER 521
#define ATTR_FROMDOMAIN 522
#define ATTR_TODOMAIN 523
#define ATTR_GLOBAL 524
#define ADDEQ 525
#define SUBST 526
#define SUBSTDEF 527
#define SUBSTDEFS 528
#define EQUAL 529
#define LOG_OR 530
#define LOG_AND 531
#define BIN_OR 532
#define BIN_AND 533
#define BIN_XOR 534
#define BIN_LSHIFT 535
#define BIN_RSHIFT 536
#define STRDIFF 537
#define STREQ 538
#define INTDIFF 539
#define INTEQ 540
#define MATCH 541
#define DIFF 542
#define EQUAL_T 543
#define LTE 544
#define GTE 545
#define LT 546
#define GT 547
#define MINUS 548
#define PLUS 549
#define MODULO 550
#define SLASH 551
#define STAR 552
#define BIN_NOT 553
#define UNARY 554
#define NOT 555
#define DEFINED 556
#define STRCAST 557
#define INTCAST 558
#define DOT 559
#define STRLEN 560
#define STREMPTY 561
#define NUMBER 562
#define ID 563
#define NUM_ID 564
#define STRING 565
#define IPV6ADDR 566
#define PVAR 567
#define AVP_OR_PVAR 568
#define EVENT_RT_NAME 569
#define COMMA 570
#define SEMICOLON 571
#define RPAREN 572
#define LPAREN 573
#define LBRACE 574
#define RBRACE 575
#define LBRACK 576
#define RBRACK 577
#define CR 578
#define COLON 579




/* Copy the first part of user declarations.  */
#line 30 "cfg.y"


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <string.h>
#include <errno.h>
#include "route_struct.h"
#include "globals.h"
#ifdef SHM_MEM
#include "shm_init.h"
#endif /* SHM_MEM */
#include "route.h"
#include "switch.h"
#include "dprint.h"
#include "sr_module.h"
#include "modparam.h"
#include "ip_addr.h"
#include "resolve.h"
#include "socket_info.h"
#include "name_alias.h"
#include "ut.h"
#include "dset.h"
#include "select.h"
#include "flags.h"
#include "tcp_init.h"
#include "tcp_options.h"
#include "sctp_core.h"
#include "pvar.h"
#include "lvalue.h"
#include "rvalue.h"
#include "sr_compat.h"
#include "msg_translator.h"
#include "async_task.h"

#include "ppcfg.h"
#include "pvapi.h"
#include "config.h"
#include "cfg_core.h"
#include "cfg/cfg.h"
#ifdef CORE_TLS
#include "tls/tls_config.h"
#endif
#include "timer_ticks.h"

#ifdef DEBUG_DMALLOC
#include <dmalloc.h>
#endif

/* hack to avoid alloca usage in the generated C file (needed for compiler
 with no built in alloca, like icc*/
#undef _ALLOCA_H

#define onsend_check(s) \
	do{\
		if (rt!=ONSEND_ROUTE) yyerror( s " allowed only in onsend_routes");\
	}while(0)

	#define IF_AUTO_BIND_IPV6(x) x

#ifdef USE_DNS_CACHE
	#define IF_DNS_CACHE(x) x
#else
	#define IF_DNS_CACHE(x) warn("dns cache support not compiled in")
#endif

#ifdef USE_DNS_FAILOVER
	#define IF_DNS_FAILOVER(x) x
#else
	#define IF_DNS_FAILOVER(x) warn("dns failover support not compiled in")
#endif

#ifdef USE_NAPTR
	#define IF_NAPTR(x) x
#else
	#define IF_NAPTR(x) warn("dns naptr support not compiled in")
#endif

#ifdef USE_DST_BLACKLIST
	#define IF_DST_BLACKLIST(x) x
#else
	#define IF_DST_BLACKLIST(x) warn("dst blacklist support not compiled in")
#endif

#ifdef USE_SCTP
	#define IF_SCTP(x) x
#else
	#define IF_SCTP(x) warn("sctp support not compiled in")
#endif

#ifdef USE_RAW_SOCKS
	#define IF_RAW_SOCKS(x) x
#else
	#define IF_RAW_SOCKS(x) warn("raw socket support not compiled in")
#endif


extern int yylex();
/* safer then using yytext which can be array or pointer */
extern char* yy_number_str;

static void yyerror(char* s, ...);
static void yyerror_at(struct cfg_pos* pos, char* s, ...);
static char* tmp;
static int i_tmp;
static unsigned u_tmp;
static struct socket_id* lst_tmp;
static struct name_lst*  nl_tmp;
static int rt;  /* Type of route block for find_export */
static str* str_tmp;
static str s_tmp;
static struct ip_addr* ip_tmp;
static struct avp_spec* s_attr;
static select_t sel;
static select_t* sel_ptr;
static pv_spec_t* pv_spec;
static struct action *mod_func_action;
static struct lvalue* lval_tmp;
static struct rvalue* rval_tmp;

static void warn(char* s, ...);
static void warn_at(struct cfg_pos* pos, char* s, ...);
static void get_cpos(struct cfg_pos* pos);
static struct rval_expr* mk_rve_rval(enum rval_type, void* v);
static struct rval_expr* mk_rve1(enum rval_expr_op op, struct rval_expr* rve1);
static struct rval_expr* mk_rve2(enum rval_expr_op op, struct rval_expr* rve1,
									struct rval_expr* rve2);
static int rval_expr_int_check(struct rval_expr *rve);
static int warn_ct_rve(struct rval_expr *rve, char* name);
static struct socket_id* mk_listen_id(char*, int, int);
static struct name_lst* mk_name_lst(char* name, int flags);
static struct socket_id* mk_listen_id2(struct name_lst*, int, int);
static void free_name_lst(struct name_lst* lst);
static void free_socket_id_lst(struct socket_id* i);

static struct case_stms* mk_case_stm(struct rval_expr* ct, int is_re, 
									struct action* a, int* err);
static int case_check_type(struct case_stms* stms);
static int case_check_default(struct case_stms* stms);
static int mod_f_params_pre_fixup(struct action* a);
static void free_mod_func_action(struct action* a);


extern int line;
extern int column;
extern int startcolumn;
extern int startline;
extern char *finame;
extern char *routename;
extern char *default_routename;

#define set_cfg_pos(x) \
	do{\
		if(x) {\
		(x)->cline = line;\
		(x)->cfile = (finame!=0)?finame:((cfg_file!=0)?cfg_file:"default");\
		(x)->rname = (routename!=0)?routename:((default_routename!=0)?default_routename:"DEFAULT");\
		}\
	}while(0)




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 198 "cfg.y"
{
	long intval;
	unsigned long uval;
	char* strval;
	struct expr* expr;
	struct action* action;
	struct case_stms* case_stms;
	struct net* ipnet;
	struct ip_addr* ipaddr;
	struct socket_id* sockid;
	struct name_lst* name_l;
	struct avp_spec* attr;
	struct _pv_spec* pvar;
	struct lvalue* lval;
	struct rvalue* rval;
	struct rval_expr* rv_expr;
	select_t* select;
}
/* Line 193 of yacc.c.  */
#line 931 "cfg.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 944 "cfg.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  419
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  325
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  844
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1579

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   579

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    17,    19,
      21,    23,    24,    27,    28,    31,    33,    34,    37,    38,
      41,    42,    45,    47,    49,    51,    53,    55,    57,    61,
      65,    67,    69,    71,    73,    75,    77,    79,    81,    83,
      85,    87,    89,    91,    93,    95,    97,   101,   105,   111,
     115,   117,   121,   125,   131,   135,   137,   140,   142,   145,
     148,   151,   153,   157,   159,   163,   165,   167,   170,   173,
     175,   179,   181,   185,   189,   193,   197,   201,   205,   209,
     213,   217,   221,   225,   229,   233,   237,   241,   245,   249,
     253,   257,   261,   265,   269,   273,   277,   281,   285,   289,
     292,   296,   299,   303,   306,   310,   313,   317,   320,   324,
     327,   331,   334,   338,   341,   345,   348,   352,   355,   359,
     362,   366,   369,   373,   376,   380,   383,   387,   390,   394,
     397,   401,   404,   408,   411,   415,   418,   422,   425,   429,
     432,   436,   439,   443,   446,   450,   453,   457,   460,   464,
     467,   471,   474,   478,   481,   485,   488,   492,   495,   499,
     502,   506,   509,   513,   516,   520,   523,   527,   531,   535,
     539,   543,   547,   551,   555,   559,   563,   567,   571,   575,
     579,   583,   587,   591,   595,   599,   603,   607,   611,   615,
     619,   623,   627,   631,   635,   639,   643,   647,   651,   655,
     659,   663,   667,   671,   675,   679,   683,   687,   691,   695,
     699,   703,   707,   711,   715,   719,   723,   727,   731,   735,
     739,   743,   747,   751,   755,   759,   763,   767,   771,   775,
     779,   783,   787,   791,   795,   799,   803,   807,   811,   815,
     819,   823,   827,   831,   835,   839,   843,   847,   851,   855,
     859,   862,   866,   869,   873,   876,   880,   883,   887,   891,
     895,   899,   903,   907,   911,   915,   919,   923,   927,   931,
     935,   939,   943,   947,   951,   955,   959,   963,   967,   971,
     975,   979,   983,   987,   991,   995,   999,  1003,  1007,  1011,
    1015,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,  1051,
    1055,  1059,  1063,  1067,  1071,  1075,  1079,  1083,  1087,  1091,
    1095,  1099,  1103,  1107,  1111,  1115,  1119,  1123,  1127,  1131,
    1135,  1139,  1147,  1151,  1155,  1159,  1163,  1167,  1171,  1175,
    1179,  1183,  1187,  1191,  1195,  1199,  1203,  1207,  1211,  1215,
    1219,  1223,  1227,  1231,  1235,  1239,  1243,  1247,  1251,  1255,
    1259,  1263,  1267,  1271,  1275,  1279,  1283,  1287,  1291,  1295,
    1299,  1303,  1307,  1311,  1314,  1318,  1322,  1326,  1330,  1334,
    1338,  1342,  1346,  1350,  1354,  1358,  1362,  1366,  1370,  1374,
    1378,  1382,  1386,  1390,  1394,  1398,  1402,  1406,  1410,  1414,
    1418,  1422,  1426,  1430,  1434,  1438,  1442,  1446,  1450,  1454,
    1456,  1459,  1461,  1463,  1469,  1475,  1483,  1491,  1497,  1506,
    1515,  1518,  1521,  1524,  1527,  1531,  1535,  1544,  1553,  1556,
    1558,  1560,  1568,  1570,  1572,  1576,  1578,  1580,  1582,  1584,
    1586,  1591,  1599,  1602,  1605,  1610,  1618,  1621,  1623,  1625,
    1626,  1632,  1635,  1638,  1639,  1648,  1654,  1659,  1667,  1670,
    1675,  1683,  1686,  1694,  1697,  1700,  1703,  1706,  1709,  1712,
    1715,  1717,  1719,  1721,  1723,  1725,  1727,  1729,  1731,  1733,
    1735,  1737,  1739,  1741,  1743,  1745,  1747,  1749,  1751,  1753,
    1755,  1757,  1759,  1761,  1763,  1765,  1767,  1769,  1771,  1773,
    1775,  1777,  1779,  1781,  1783,  1785,  1787,  1789,  1793,  1797,
    1801,  1804,  1808,  1812,  1816,  1819,  1823,  1827,  1831,  1835,
    1838,  1842,  1846,  1850,  1854,  1858,  1862,  1866,  1870,  1874,
    1878,  1882,  1885,  1889,  1893,  1897,  1900,  1904,  1908,  1910,
    1914,  1916,  1920,  1924,  1928,  1932,  1934,  1936,  1938,  1940,
    1944,  1948,  1952,  1956,  1958,  1960,  1964,  1967,  1969,  1972,
    1975,  1977,  1979,  1981,  1984,  1987,  1989,  1992,  1996,  2002,
    2004,  2009,  2015,  2019,  2024,  2028,  2031,  2036,  2042,  2046,
    2051,  2056,  2059,  2061,  2067,  2072,  2075,  2081,  2085,  2087,
    2092,  2097,  2101,  2103,  2104,  2108,  2110,  2112,  2114,  2116,
    2118,  2120,  2122,  2124,  2126,  2128,  2130,  2134,  2136,  2139,
    2145,  2150,  2152,  2154,  2156,  2158,  2160,  2162,  2164,  2166,
    2168,  2170,  2172,  2174,  2176,  2178,  2180,  2182,  2184,  2186,
    2188,  2190,  2192,  2194,  2198,  2202,  2206,  2210,  2212,  2214,
    2216,  2218,  2221,  2224,  2227,  2231,  2235,  2239,  2243,  2247,
    2251,  2255,  2259,  2263,  2267,  2271,  2275,  2279,  2283,  2287,
    2292,  2297,  2300,  2303,  2306,  2309,  2313,  2317,  2321,  2325,
    2329,  2333,  2337,  2341,  2345,  2349,  2353,  2358,  2363,  2366,
    2370,  2372,  2374,  2376,  2380,  2385,  2390,  2395,  2402,  2409,
    2416,  2423,  2430,  2435,  2438,  2443,  2448,  2453,  2458,  2465,
    2472,  2479,  2486,  2493,  2498,  2501,  2506,  2511,  2516,  2521,
    2528,  2535,  2542,  2549,  2556,  2561,  2564,  2569,  2574,  2579,
    2584,  2591,  2598,  2605,  2612,  2619,  2624,  2627,  2632,  2637,
    2642,  2647,  2654,  2661,  2668,  2675,  2682,  2687,  2690,  2695,
    2700,  2707,  2710,  2715,  2720,  2725,  2728,  2733,  2738,  2741,
    2746,  2751,  2754,  2761,  2768,  2775,  2780,  2783,  2790,  2793,
    2798,  2803,  2808,  2811,  2816,  2821,  2826,  2829,  2834,  2839,
    2842,  2847,  2852,  2855,  2860,  2865,  2868,  2873,  2877,  2880,
    2885,  2889,  2892,  2897,  2901,  2906,  2909,  2914,  2919,  2922,
    2927,  2932,  2935,  2940,  2945,  2948,  2953,  2958,  2961,  2966,
    2971,  2974,  2979,  2983,  2985,  2989,  2991,  2995,  2997,  3002,
    3006,  3008,  3013,  3018,  3023,  3028,  3033,  3036,  3041,  3046,
    3049,  3054,  3059,  3062,  3066,  3068,  3072,  3074,  3078,  3080,
    3084,  3086,  3093,  3100,  3103,  3108,  3113,  3116,  3121,  3122,
    3128,  3131,  3132,  3136,  3138,  3140,  3144,  3147,  3149,  3153,
    3156,  3158,  3160,  3164,  3167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     326,     0,    -1,   327,    -1,   327,   328,    -1,   328,    -1,
     327,     1,    -1,   351,    -1,   370,    -1,   344,    -1,   348,
      -1,   354,    -1,    -1,   329,   361,    -1,    -1,   330,   362,
      -1,   364,    -1,    -1,   331,   367,    -1,    -1,   332,   368,
      -1,    -1,   333,   369,    -1,   316,    -1,   323,    -1,   355,
      -1,   310,    -1,   385,    -1,   334,    -1,   334,   315,   335,
      -1,   318,   335,   317,    -1,   334,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,   297,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,   297,
      -1,   307,    -1,   297,    -1,   334,    -1,   334,   324,   339,
      -1,   337,   324,   334,    -1,   337,   324,   334,   324,   339,
      -1,   334,   324,     1,    -1,   336,    -1,   336,   324,   339,
      -1,   337,   324,   336,    -1,   337,   324,   336,   324,   339,
      -1,   336,   324,     1,    -1,   341,    -1,   341,   342,    -1,
     307,    -1,   293,   307,    -1,   257,   345,    -1,   257,     1,
      -1,   346,    -1,   346,   315,   345,    -1,   347,    -1,   347,
     324,   307,    -1,   310,    -1,   308,    -1,   258,   349,    -1,
     258,     1,    -1,   350,    -1,   350,   315,   349,    -1,   347,
      -1,    94,   274,   343,    -1,    94,   274,     1,    -1,    95,
     274,   307,    -1,    95,   274,     1,    -1,    96,   274,   307,
      -1,    96,   274,     1,    -1,    97,   274,   307,    -1,    97,
     274,     1,    -1,    98,   274,   307,    -1,    98,   274,     1,
      -1,    99,   274,   308,    -1,    99,   274,     1,    -1,   100,
     274,   310,    -1,   100,   274,     1,    -1,   101,   274,   307,
      -1,   101,   274,     1,    -1,   102,   274,   310,    -1,   102,
     274,     1,    -1,   103,   274,   310,    -1,   103,   274,     1,
      -1,   104,   274,   310,    -1,   104,   274,     1,    -1,   109,
     274,   307,    -1,   109,   274,     1,    -1,   110,   274,   307,
      -1,   110,   274,     1,    -1,   111,   274,   307,    -1,   111,
       1,    -1,   112,   274,   307,    -1,   112,     1,    -1,   113,
     274,   307,    -1,   113,     1,    -1,   114,   274,   343,    -1,
     114,     1,    -1,   115,   274,   343,    -1,   115,     1,    -1,
     116,   274,   343,    -1,   116,     1,    -1,   117,   274,   343,
      -1,   117,     1,    -1,   118,   274,   307,    -1,   118,     1,
      -1,   119,   274,   307,    -1,   119,     1,    -1,   120,   274,
     307,    -1,   120,     1,    -1,   121,   274,   307,    -1,   121,
       1,    -1,   122,   274,   307,    -1,   122,     1,    -1,   123,
     274,   307,    -1,   123,     1,    -1,   124,   274,   307,    -1,
     124,     1,    -1,   125,   274,   307,    -1,   125,     1,    -1,
     126,   274,   307,    -1,   126,     1,    -1,   127,   274,   307,
      -1,   127,     1,    -1,   128,   274,   307,    -1,   128,     1,
      -1,   130,   274,   307,    -1,   130,     1,    -1,   129,   274,
     307,    -1,   129,     1,    -1,   131,   274,   307,    -1,   131,
       1,    -1,   132,   274,   307,    -1,   132,     1,    -1,   133,
     274,   307,    -1,   133,     1,    -1,   134,   274,   307,    -1,
     134,     1,    -1,   135,   274,   307,    -1,   135,     1,    -1,
     136,   274,   307,    -1,   136,     1,    -1,   137,   274,   307,
      -1,   137,     1,    -1,   138,   274,   307,    -1,   138,     1,
      -1,   139,   274,   307,    -1,   139,     1,    -1,   140,   274,
     307,    -1,   140,     1,    -1,   141,   274,   307,    -1,   141,
       1,    -1,   142,   274,   307,    -1,   142,     1,    -1,   143,
     274,   307,    -1,   143,     1,    -1,   144,   274,   307,    -1,
     144,     1,    -1,   145,   274,   307,    -1,   146,   274,   310,
      -1,   168,   274,   307,    -1,   168,   274,     1,    -1,   169,
     274,   307,    -1,   169,   274,     1,    -1,   145,   274,     1,
      -1,   147,   274,   307,    -1,   147,   274,     1,    -1,   148,
     274,   307,    -1,   148,   274,     1,    -1,   149,   274,   307,
      -1,   149,   274,     1,    -1,   150,   274,   307,    -1,   150,
     274,     1,    -1,   151,   274,   307,    -1,   151,   274,     1,
      -1,   152,   274,   307,    -1,   152,   274,     1,    -1,   153,
     274,   343,    -1,   153,   274,     1,    -1,   154,   274,   343,
      -1,   154,   274,     1,    -1,   155,   274,   343,    -1,   155,
     274,     1,    -1,   156,   274,   343,    -1,   156,   274,     1,
      -1,   157,   274,   343,    -1,   157,   274,     1,    -1,   158,
     274,   343,    -1,   158,   274,     1,    -1,   159,   274,   343,
      -1,   159,   274,     1,    -1,   160,   274,   307,    -1,   160,
     274,     1,    -1,   247,   274,   310,    -1,   247,   274,     1,
      -1,   170,   274,   310,    -1,   170,   274,   308,    -1,   170,
     274,     1,    -1,   171,   274,   310,    -1,   171,   274,   308,
      -1,   171,   274,     1,    -1,   172,   274,   310,    -1,   172,
     274,   308,    -1,   172,   274,     1,    -1,   173,   274,   310,
      -1,   173,   274,   308,    -1,   173,   274,     1,    -1,   174,
     274,   310,    -1,   174,   274,   308,    -1,   174,   274,     1,
      -1,   175,   274,   307,    -1,   175,   274,     1,    -1,   176,
     274,   307,    -1,   176,   274,     1,    -1,   177,   274,   307,
      -1,   177,   274,     1,    -1,   178,   274,   307,    -1,   178,
     274,     1,    -1,   179,   274,   343,    -1,   179,   274,     1,
      -1,   180,   274,   343,    -1,   180,   274,     1,    -1,   181,
     274,   343,    -1,   181,   274,     1,    -1,   182,   274,   308,
      -1,   182,   274,   310,    -1,   182,   274,     1,    -1,   183,
     274,   307,    -1,   183,   274,     1,    -1,   184,   274,   307,
      -1,   184,   274,     1,    -1,   185,   274,   307,    -1,   185,
     274,     1,    -1,   186,   274,   356,    -1,   186,   274,     1,
      -1,   187,   274,   358,    -1,   187,   274,     1,    -1,   188,
     274,   307,    -1,   188,   274,     1,    -1,   189,   274,   307,
      -1,   189,   274,     1,    -1,   190,   274,   307,    -1,   190,
       1,    -1,   191,   274,   307,    -1,   191,     1,    -1,   192,
     274,   307,    -1,   192,     1,    -1,   193,   274,   307,    -1,
     193,     1,    -1,   194,   274,   307,    -1,   194,   274,     1,
      -1,   195,   274,   307,    -1,   195,   274,     1,    -1,   196,
     274,   307,    -1,   196,   274,     1,    -1,   197,   274,   307,
      -1,   197,   274,     1,    -1,   198,   274,   307,    -1,   198,
     274,     1,    -1,   199,   274,   307,    -1,   199,   274,     1,
      -1,   200,   274,   307,    -1,   200,   274,     1,    -1,   201,
     274,   307,    -1,   201,   274,     1,    -1,   202,   274,   307,
      -1,   202,   274,     1,    -1,   203,   274,   307,    -1,   203,
     274,     1,    -1,   204,   274,   307,    -1,   204,   274,     1,
      -1,   205,   274,   307,    -1,   205,   274,     1,    -1,   206,
     274,   307,    -1,   206,   274,     1,    -1,   207,   274,   307,
      -1,   207,   274,     1,    -1,   208,   274,   307,    -1,   208,
     274,     1,    -1,   209,   274,   212,    -1,   209,   274,   213,
      -1,   209,   274,   214,    -1,   209,   274,   215,    -1,   209,
     274,     1,    -1,   216,   274,   307,    -1,   216,   274,     1,
      -1,   217,   274,   307,    -1,   217,   274,     1,    -1,   218,
     274,   310,    -1,   218,   274,     1,    -1,   219,   274,   310,
      -1,   219,   274,     1,    -1,   220,   274,   310,    -1,   220,
     274,     1,    -1,   210,   274,   307,    -1,   210,   274,     1,
      -1,   211,   274,   307,    -1,   211,   274,     1,    -1,   221,
     274,   307,    -1,   221,   274,     1,    -1,   222,   274,   307,
      -1,   222,   274,     1,    -1,   223,   274,   307,    -1,   223,
     274,     1,    -1,   161,   274,   307,    -1,   161,   274,     1,
      -1,   162,   274,   310,    -1,   162,   274,     1,    -1,   163,
     274,   310,    -1,   163,   274,     1,    -1,   164,   274,   307,
      -1,   164,   274,     1,    -1,   105,   274,   342,    -1,   105,
     274,   342,   106,   334,   324,   307,    -1,   105,   274,     1,
      -1,   107,   274,   342,    -1,   107,   274,     1,    -1,   108,
     274,   307,    -1,   108,   274,     1,    -1,   224,   274,   334,
      -1,   224,   274,     1,    -1,   225,   274,   307,    -1,   225,
     274,     1,    -1,   226,   274,   307,    -1,   226,   274,     1,
      -1,   227,   274,   307,    -1,   227,   274,     1,    -1,   228,
     274,   307,    -1,   228,   274,     1,    -1,   229,   274,   307,
      -1,   229,   274,     1,    -1,   230,   274,   307,    -1,   230,
     274,     1,    -1,   231,   274,   307,    -1,   231,   274,     1,
      -1,   232,   274,   307,    -1,   232,   274,     1,    -1,   233,
     274,   307,    -1,   233,   274,     1,    -1,   234,   274,   307,
      -1,   234,   274,     1,    -1,   235,   274,   307,    -1,   235,
     274,     1,    -1,   236,   274,   307,    -1,   236,   274,     1,
      -1,   237,   274,   307,    -1,   237,   274,     1,    -1,   238,
     274,   307,    -1,   238,   274,     1,    -1,   239,   274,   307,
      -1,   239,   274,     1,    -1,   240,   274,   307,    -1,   240,
     274,   308,    -1,   240,   274,     1,    -1,   241,   274,   307,
      -1,   241,     1,    -1,   242,   274,   307,    -1,   242,   274,
       1,    -1,   243,   274,   307,    -1,   243,   274,     1,    -1,
     244,   274,   307,    -1,   244,   274,     1,    -1,   245,   274,
     307,    -1,   245,   274,     1,    -1,   246,   274,   307,    -1,
     246,   274,     1,    -1,   249,   274,   307,    -1,   250,   274,
     307,    -1,   251,   274,   307,    -1,   252,   274,   307,    -1,
     252,   274,     1,    -1,   253,   274,   307,    -1,   253,   274,
       1,    -1,   254,   274,   307,    -1,   254,   274,     1,    -1,
     255,   274,   307,    -1,   255,   274,     1,    -1,   256,   274,
     307,    -1,   256,   274,     1,    -1,    41,   274,   307,    -1,
      41,   274,     1,    -1,    38,   274,   307,    -1,    38,   274,
       1,    -1,    42,   274,   337,    -1,    42,   274,     1,    -1,
      43,   274,   343,    -1,    43,   274,     1,    -1,    44,   274,
     307,    -1,    44,   274,     1,    -1,    45,   274,   307,    -1,
      45,   274,     1,    -1,   353,    -1,     1,   274,    -1,   308,
      -1,    57,    -1,   352,   304,   352,   274,   307,    -1,   352,
     304,   352,   274,   310,    -1,   352,   304,   352,   274,   307,
     248,   310,    -1,   352,   304,   352,   274,   310,   248,   310,
      -1,   352,   304,   352,   274,     1,    -1,   352,   321,   307,
     322,   304,   352,   274,   307,    -1,   352,   321,   307,   322,
     304,   352,   274,   310,    -1,   165,   310,    -1,   165,     1,
      -1,   166,   310,    -1,   166,     1,    -1,   166,   274,   310,
      -1,   166,   274,     1,    -1,   167,   318,   310,   315,   310,
     315,   310,   317,    -1,   167,   318,   310,   315,   310,   315,
     343,   317,    -1,   167,     1,    -1,   356,    -1,   358,    -1,
     307,   304,   307,   304,   307,   304,   307,    -1,   311,    -1,
     357,    -1,   321,   357,   322,    -1,   307,    -1,   308,    -1,
     310,    -1,    14,    -1,    15,    -1,   360,   319,   388,   320,
      -1,    14,   321,   359,   322,   319,   388,   320,    -1,    14,
       1,    -1,    15,     1,    -1,    16,   319,   388,   320,    -1,
      16,   321,   359,   322,   319,   388,   320,    -1,    16,     1,
      -1,    17,    -1,    18,    -1,    -1,   363,   319,   365,   388,
     320,    -1,    17,     1,    -1,    18,     1,    -1,    -1,    17,
     321,   359,   322,   366,   319,   388,   320,    -1,    17,   321,
     359,   322,     1,    -1,    19,   319,   388,   320,    -1,    19,
     321,   359,   322,   319,   388,   320,    -1,    19,     1,    -1,
      20,   319,   388,   320,    -1,    20,   321,   359,   322,   319,
     388,   320,    -1,    20,     1,    -1,    21,   321,   314,   322,
     319,   388,   320,    -1,    21,     1,    -1,   271,   310,    -1,
     271,     1,    -1,   272,   310,    -1,   272,     1,    -1,   273,
     310,    -1,   273,     1,    -1,   288,    -1,   287,    -1,   283,
      -1,   282,    -1,   292,    -1,   291,    -1,   290,    -1,   289,
      -1,   371,    -1,   286,    -1,   288,    -1,   287,    -1,   285,
      -1,   284,    -1,   283,    -1,   282,    -1,   286,    -1,   292,
      -1,   291,    -1,   290,    -1,   289,    -1,    71,    -1,    72,
      -1,    73,    -1,    81,    -1,    79,    -1,    83,    -1,    75,
      -1,    77,    -1,    85,    -1,    87,    -1,   377,    -1,    80,
      -1,    78,    -1,    74,    -1,    76,    -1,   379,    -1,    70,
     373,   416,    -1,    70,   373,   308,    -1,    70,   373,     1,
      -1,    70,     1,    -1,   376,   373,   416,    -1,   376,   373,
      86,    -1,   376,   373,     1,    -1,   376,     1,    -1,   378,
     372,   416,    -1,   378,   371,   416,    -1,   378,   372,     1,
      -1,   378,   371,     1,    -1,   378,     1,    -1,    84,   371,
     338,    -1,    84,   371,   416,    -1,    84,   371,     1,    -1,
      82,   371,   338,    -1,    82,   371,   416,    -1,    82,   371,
       1,    -1,   380,   373,   382,    -1,   380,   373,   416,    -1,
     380,   373,   383,    -1,   380,   373,    86,    -1,   380,   373,
       1,    -1,   380,     1,    -1,    86,   371,   376,    -1,    86,
     371,   380,    -1,    86,   371,     1,    -1,    86,     1,    -1,
     355,   296,   355,    -1,   355,   296,   307,    -1,   355,    -1,
     355,   296,     1,    -1,   308,    -1,   383,   304,   308,    -1,
     383,   293,   308,    -1,   383,   304,     1,    -1,   383,   293,
       1,    -1,   308,    -1,   309,    -1,   307,    -1,   384,    -1,
     385,   304,   384,    -1,   385,   293,   384,    -1,   385,   304,
       1,    -1,   385,   293,     1,    -1,   419,    -1,   389,    -1,
     319,   388,   320,    -1,   388,   389,    -1,   389,    -1,   388,
       1,    -1,   386,   316,    -1,   390,    -1,   394,    -1,   395,
      -1,   423,   316,    -1,   417,   316,    -1,   316,    -1,   386,
       1,    -1,    46,   416,   387,    -1,    46,   416,   387,    47,
     387,    -1,   416,    -1,    56,   391,   324,   388,    -1,    56,
     296,   391,   324,   388,    -1,    56,   391,   324,    -1,    56,
     296,   391,   324,    -1,    57,   324,   388,    -1,    57,   324,
      -1,    56,     1,   324,   388,    -1,    56,   296,     1,   324,
     388,    -1,    56,     1,   324,    -1,    56,   296,     1,   324,
      -1,    56,   391,   324,     1,    -1,   393,   392,    -1,   392,
      -1,    55,   416,   319,   393,   320,    -1,    55,   416,   319,
     320,    -1,    55,     1,    -1,    55,   416,   319,     1,   320,
      -1,    58,   416,   387,    -1,   308,    -1,   308,   321,   343,
     322,    -1,   308,   321,   310,   322,    -1,   397,   304,   396,
      -1,   396,    -1,    -1,   260,   399,   397,    -1,   261,    -1,
     262,    -1,   263,    -1,   264,    -1,   265,    -1,   266,    -1,
     267,    -1,   268,    -1,   269,    -1,   308,    -1,   401,    -1,
     400,   304,   401,    -1,   259,    -1,   403,   402,    -1,   403,
     402,   321,   343,   322,    -1,   403,   402,   321,   322,    -1,
     404,    -1,   406,    -1,   404,    -1,   406,    -1,   405,    -1,
     404,    -1,   411,    -1,   310,    -1,   312,    -1,   313,    -1,
     274,    -1,   407,    -1,   410,    -1,   411,    -1,   343,    -1,
     310,    -1,   408,    -1,   410,    -1,   411,    -1,   398,    -1,
     386,    -1,   381,    -1,   319,   388,   320,    -1,   319,     1,
     320,    -1,   318,   417,   317,    -1,   318,     1,   317,    -1,
     300,    -1,   298,    -1,   293,    -1,   414,    -1,   415,   416,
      -1,   303,   416,    -1,   302,   416,    -1,   416,   294,   416,
      -1,   416,   293,   416,    -1,   416,   297,   416,    -1,   416,
     296,   416,    -1,   416,   295,   416,    -1,   416,   277,   416,
      -1,   416,   278,   416,    -1,   416,   279,   416,    -1,   416,
     280,   416,    -1,   416,   281,   416,    -1,   416,   375,   416,
      -1,   416,   374,   416,    -1,   416,   276,   416,    -1,   416,
     275,   416,    -1,   318,   416,   317,    -1,   305,   318,   416,
     317,    -1,   306,   318,   416,   317,    -1,   301,   416,    -1,
     415,     1,    -1,   303,     1,    -1,   302,     1,    -1,   416,
     294,     1,    -1,   416,   293,     1,    -1,   416,   297,     1,
      -1,   416,   296,     1,    -1,   416,   295,     1,    -1,   416,
     277,     1,    -1,   416,   278,     1,    -1,   416,   375,     1,
      -1,   416,   374,     1,    -1,   416,   276,     1,    -1,   416,
     275,     1,    -1,   305,   318,     1,   317,    -1,   306,   318,
       1,   317,    -1,   301,     1,    -1,   413,   412,   416,    -1,
      67,    -1,    68,    -1,    69,    -1,     3,   318,   317,    -1,
       3,   318,   383,   317,    -1,     3,   318,   310,   317,    -1,
       3,   318,   355,   317,    -1,     3,   318,   383,   315,   307,
     317,    -1,     3,   318,   310,   315,   307,   317,    -1,     3,
     318,   355,   315,   307,   317,    -1,     3,   318,    61,   315,
      62,   317,    -1,     3,   318,    61,   315,   307,   317,    -1,
       3,   318,    61,   317,    -1,     3,     1,    -1,     3,   318,
       1,   317,    -1,     7,   318,   383,   317,    -1,     7,   318,
     310,   317,    -1,     7,   318,   355,   317,    -1,     7,   318,
     383,   315,   307,   317,    -1,     7,   318,   310,   315,   307,
     317,    -1,     7,   318,   355,   315,   307,   317,    -1,     7,
     318,    61,   315,    62,   317,    -1,     7,   318,    61,   315,
     307,   317,    -1,     7,   318,    61,   317,    -1,     7,     1,
      -1,     7,   318,     1,   317,    -1,     4,   318,   383,   317,
      -1,     4,   318,   310,   317,    -1,     4,   318,   355,   317,
      -1,     4,   318,   383,   315,   307,   317,    -1,     4,   318,
     310,   315,   307,   317,    -1,     4,   318,   355,   315,   307,
     317,    -1,     4,   318,    61,   315,    62,   317,    -1,     4,
     318,    61,   315,   307,   317,    -1,     4,   318,    61,   317,
      -1,     4,     1,    -1,     4,   318,     1,   317,    -1,     5,
     318,   383,   317,    -1,     5,   318,   310,   317,    -1,     5,
     318,   355,   317,    -1,     5,   318,   383,   315,   307,   317,
      -1,     5,   318,   310,   315,   307,   317,    -1,     5,   318,
     355,   315,   307,   317,    -1,     5,   318,    61,   315,    62,
     317,    -1,     5,   318,    61,   315,   307,   317,    -1,     5,
     318,    61,   317,    -1,     5,     1,    -1,     5,   318,     1,
     317,    -1,     6,   318,   383,   317,    -1,     6,   318,   310,
     317,    -1,     6,   318,   355,   317,    -1,     6,   318,   383,
     315,   307,   317,    -1,     6,   318,   310,   315,   307,   317,
      -1,     6,   318,   355,   315,   307,   317,    -1,     6,   318,
      61,   315,    62,   317,    -1,     6,   318,    61,   315,   307,
     317,    -1,     6,   318,    61,   317,    -1,     6,     1,    -1,
       6,   318,     1,   317,    -1,    12,   318,   310,   317,    -1,
      12,   318,   307,   315,   310,   317,    -1,    12,     1,    -1,
      12,   318,     1,   317,    -1,    64,   318,   307,   317,    -1,
      64,   318,   347,   317,    -1,    64,     1,    -1,    65,   318,
     307,   317,    -1,    65,   318,   347,   317,    -1,    65,     1,
      -1,    66,   318,   307,   317,    -1,    66,   318,   347,   317,
      -1,    66,     1,    -1,   418,   318,   409,   315,   347,   317,
      -1,   418,   318,   409,   315,     1,   317,    -1,   418,   318,
       1,   315,   347,   317,    -1,   418,   318,     1,   317,    -1,
     418,     1,    -1,    13,   318,   310,   315,   310,   317,    -1,
      13,     1,    -1,    13,   318,     1,   317,    -1,    14,   318,
     416,   317,    -1,    14,   318,   308,   317,    -1,    14,     1,
      -1,    14,   318,     1,   317,    -1,    22,   318,   310,   317,
      -1,    23,   318,   310,   317,    -1,    23,     1,    -1,    23,
     318,     1,   317,    -1,    26,   318,   310,   317,    -1,    26,
       1,    -1,    26,   318,     1,   317,    -1,    28,   318,   307,
     317,    -1,    28,     1,    -1,    28,   318,     1,   317,    -1,
      27,   318,   307,   317,    -1,    27,     1,    -1,    27,   318,
       1,   317,    -1,    29,   318,   317,    -1,    29,     1,    -1,
      31,   318,   343,   317,    -1,    31,   318,   317,    -1,    31,
       1,    -1,    31,   318,     1,   317,    -1,    32,   318,   317,
      -1,    24,   318,   310,   317,    -1,    24,     1,    -1,    24,
     318,     1,   317,    -1,    25,   318,   310,   317,    -1,    25,
       1,    -1,    25,   318,     1,   317,    -1,    35,   318,   310,
     317,    -1,    35,     1,    -1,    35,   318,     1,   317,    -1,
      33,   318,   310,   317,    -1,    33,     1,    -1,    33,   318,
       1,   317,    -1,    34,   318,   310,   317,    -1,    34,     1,
      -1,    34,   318,     1,   317,    -1,    36,   318,   310,   317,
      -1,    36,     1,    -1,    36,   318,     1,   317,    -1,    37,
     318,   317,    -1,    37,    -1,    38,   318,   317,    -1,    38,
      -1,    39,   318,   317,    -1,    39,    -1,    40,   318,   307,
     317,    -1,    40,   318,   317,    -1,    40,    -1,    40,   318,
       1,   317,    -1,    42,   318,   337,   317,    -1,    42,   318,
       1,   317,    -1,    48,   318,   334,   317,    -1,    48,   318,
       1,   317,    -1,    48,     1,    -1,    49,   318,   307,   317,
      -1,    49,   318,     1,   317,    -1,    49,     1,    -1,    50,
     318,   340,   317,    -1,    50,   318,     1,   317,    -1,    50,
       1,    -1,    51,   318,   317,    -1,    51,    -1,    52,   318,
     317,    -1,    52,    -1,    53,   318,   317,    -1,    53,    -1,
      54,   318,   317,    -1,    54,    -1,    59,   318,   310,   315,
     307,   317,    -1,    59,   318,   310,   315,   416,   317,    -1,
      59,     1,    -1,    59,   318,     1,   317,    -1,    60,   318,
     310,   317,    -1,    60,     1,    -1,    60,   318,     1,   317,
      -1,    -1,   308,   420,   318,   421,   317,    -1,   308,     1,
      -1,    -1,   421,   315,   422,    -1,   422,    -1,   416,    -1,
       9,   318,   317,    -1,     9,   416,    -1,     9,    -1,     8,
     318,   317,    -1,     8,   416,    -1,     8,    -1,    10,    -1,
      10,   318,   317,    -1,    10,   416,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   600,   600,   603,   604,   605,   608,   609,   610,   611,
     612,   613,   613,   614,   614,   615,   616,   616,   617,   617,
     618,   618,   619,   620,   623,   641,   650,   665,   666,   672,
     673,   677,   678,   679,   680,   681,   684,   685,   686,   687,
     688,   689,   690,   693,   694,   697,   698,   699,   700,   701,
     705,   706,   707,   708,   709,   713,   714,   717,   718,   721,
     722,   724,   725,   728,   731,   737,   738,   742,   743,   746,
     747,   750,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   767,   768,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   845,   846,   849,   850,   853,   854,   855,   856,   859,
     860,   863,   864,   867,   868,   871,   872,   873,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   914,   915,   922,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,   951,   952,   959,   960,   967,   968,   975,   976,   983,
     984,   994,   995,  1009,  1023,  1024,  1031,  1032,  1039,  1040,
    1047,  1048,  1057,  1058,  1067,  1068,  1075,  1076,  1083,  1084,
    1091,  1092,  1099,  1100,  1107,  1108,  1115,  1116,  1123,  1124,
    1131,  1132,  1139,  1140,  1147,  1148,  1155,  1156,  1163,  1164,
    1171,  1172,  1179,  1180,  1187,  1188,  1195,  1196,  1203,  1204,
    1211,  1212,  1219,  1220,  1227,  1228,  1235,  1236,  1243,  1250,
    1257,  1264,  1271,  1278,  1279,  1286,  1287,  1294,  1295,  1302,
    1303,  1310,  1311,  1318,  1319,  1326,  1327,  1334,  1335,  1342,
    1343,  1350,  1351,  1352,  1353,  1356,  1357,  1360,  1361,  1362,
    1363,  1376,  1390,  1392,  1403,  1404,  1405,  1406,  1412,  1413,
    1423,  1424,  1425,  1426,  1427,  1428,  1435,  1436,  1443,  1444,
    1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,
    1455,  1456,  1457,  1458,  1459,  1460,  1467,  1468,  1475,  1476,
    1477,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1534,  1535,  1537,  1539,  1540,  1541,  1544,  1545,  1548,  1549,
    1550,  1553,  1554,  1558,  1563,  1568,  1573,  1578,  1581,  1586,
    1594,  1600,  1601,  1611,  1612,  1622,  1623,  1634,  1645,  1648,
    1649,  1652,  1681,  1696,  1697,  1701,  1712,  1713,  1717,  1718,
    1722,  1731,  1749,  1750,  1753,  1762,  1780,  1784,  1785,  1790,
    1790,  1799,  1800,  1802,  1801,  1826,  1831,  1840,  1858,  1860,
    1869,  1887,  1889,  1908,  1911,  1912,  1913,  1914,  1915,  1916,
    1938,  1939,  1940,  1941,  1944,  1945,  1946,  1947,  1950,  1951,
    1957,  1958,  1959,  1960,  1961,  1962,  1963,  1966,  1967,  1968,
    1969,  1976,  1977,  1978,  1985,  1986,  1987,  1991,  1992,  1993,
    1994,  1995,  2000,  2001,  2004,  2005,  2006,  2012,  2014,  2016,
    2017,  2019,  2021,  2023,  2025,  2027,  2028,  2030,  2031,  2032,
    2033,  2035,  2037,  2039,  2041,  2043,  2045,  2046,  2082,  2084,
    2086,  2088,  2091,  2093,  2095,  2097,  2101,  2102,  2113,  2114,
    2118,  2119,  2135,  2151,  2152,  2155,  2156,  2157,  2166,  2167,
    2183,  2199,  2201,  2208,  2250,  2251,  2254,  2255,  2256,  2259,
    2260,  2261,  2262,  2263,  2264,  2265,  2266,  2269,  2277,  2287,
    2304,  2311,  2318,  2325,  2332,  2337,  2342,  2343,  2344,  2345,
    2346,  2349,  2358,  2365,  2390,  2406,  2407,  2412,  2431,  2440,
    2452,  2467,  2468,  2471,  2471,  2481,  2482,  2483,  2484,  2485,
    2486,  2487,  2488,  2489,  2492,  2495,  2496,  2499,  2506,  2509,
    2516,  2522,  2523,  2532,  2533,  2534,  2537,  2538,  2550,  2574,
    2585,  2616,  2620,  2630,  2644,  2656,  2657,  2659,  2660,  2661,
    2675,  2676,  2677,  2678,  2679,  2680,  2681,  2685,  2686,  2687,
    2700,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,
    2715,  2716,  2717,  2718,  2719,  2720,  2738,  2739,  2740,  2741,
    2742,  2743,  2744,  2745,  2746,  2747,  2748,  2749,  2750,  2751,
    2752,  2753,  2754,  2756,  2758,  2759,  2760,  2761,  2762,  2765,
    2783,  2784,  2785,  2788,  2789,  2790,  2791,  2792,  2793,  2794,
    2795,  2796,  2797,  2798,  2799,  2800,  2801,  2802,  2803,  2804,
    2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,  2813,  2814,
    2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,  2830,  2838,
    2846,  2854,  2862,  2870,  2878,  2886,  2894,  2895,  2897,  2905,
    2913,  2921,  2930,  2939,  2948,  2956,  2965,  2973,  2974,  2976,
    2979,  2980,  2981,  2982,  2989,  2996,  2997,  3003,  3010,  3011,
    3017,  3024,  3025,  3031,  3034,  3037,  3038,  3039,  3042,  3043,
    3044,  3053,  3062,  3063,  3064,  3065,  3066,  3067,  3068,  3069,
    3070,  3071,  3072,  3073,  3074,  3075,  3076,  3077,  3078,  3079,
    3083,  3087,  3088,  3089,  3090,  3091,  3092,  3093,  3094,  3095,
    3096,  3097,  3098,  3099,  3100,  3101,  3102,  3103,  3104,  3105,
    3106,  3107,  3108,  3109,  3110,  3111,  3112,  3113,  3114,  3122,
    3130,  3138,  3139,  3141,  3143,  3154,  3155,  3156,  3172,  3173,
    3174,  3178,  3181,  3182,  3185,  3188,  3191,  3194,  3197,  3200,
    3203,  3206,  3209,  3212,  3213,  3214,  3217,  3218,  3219,  3219,
    3247,  3249,  3251,  3252,  3255,  3272,  3276,  3280,  3284,  3289,
    3293,  3298,  3302,  3306,  3310
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FORWARD", "FORWARD_TCP", "FORWARD_TLS",
  "FORWARD_SCTP", "FORWARD_UDP", "EXIT", "DROP", "RETURN", "BREAK",
  "LOG_TOK", "ERROR", "ROUTE", "ROUTE_REQUEST", "ROUTE_FAILURE",
  "ROUTE_ONREPLY", "ROUTE_REPLY", "ROUTE_BRANCH", "ROUTE_SEND",
  "ROUTE_EVENT", "EXEC", "SET_HOST", "SET_HOSTPORT", "SET_HOSTPORTTRANS",
  "PREFIX", "STRIP", "STRIP_TAIL", "SET_USERPHONE", "APPEND_BRANCH",
  "REMOVE_BRANCH", "CLEAR_BRANCHES", "SET_USER", "SET_USERPASS",
  "SET_PORT", "SET_URI", "REVERT_URI", "FORCE_RPORT", "ADD_LOCAL_RPORT",
  "FORCE_TCP_ALIAS", "UDP_MTU", "UDP_MTU_TRY_PROTO", "UDP4_RAW",
  "UDP4_RAW_MTU", "UDP4_RAW_TTL", "IF", "ELSE", "SET_ADV_ADDRESS",
  "SET_ADV_PORT", "FORCE_SEND_SOCKET", "SET_FWD_NO_CONNECT",
  "SET_RPL_NO_CONNECT", "SET_FWD_CLOSE", "SET_RPL_CLOSE", "SWITCH", "CASE",
  "DEFAULT", "WHILE", "CFG_SELECT", "CFG_RESET", "URIHOST", "URIPORT",
  "MAX_LEN", "SETFLAG", "RESETFLAG", "ISFLAGSET", "SETAVPFLAG",
  "RESETAVPFLAG", "ISAVPFLAGSET", "METHOD", "URI", "FROM_URI", "TO_URI",
  "SRCIP", "SRCPORT", "DSTIP", "DSTPORT", "TOIP", "TOPORT", "SNDIP",
  "SNDPORT", "SNDPROTO", "SNDAF", "PROTO", "AF", "MYSELF", "MSGLEN", "UDP",
  "TCP", "TLS", "SCTP", "WS", "WSS", "DEBUG_V", "FORK", "FORK_DELAY",
  "MODINIT_DELAY", "LOGSTDERROR", "LOGFACILITY", "LOGNAME", "LOGCOLOR",
  "LOGPREFIX", "LOGENGINETYPE", "LOGENGINEDATA", "LISTEN", "ADVERTISE",
  "ALIAS", "SR_AUTO_ALIASES", "DNS", "REV_DNS", "DNS_TRY_IPV6",
  "DNS_TRY_NAPTR", "DNS_SRV_LB", "DNS_UDP_PREF", "DNS_TCP_PREF",
  "DNS_TLS_PREF", "DNS_SCTP_PREF", "DNS_RETR_TIME", "DNS_RETR_NO",
  "DNS_SERVERS_NO", "DNS_USE_SEARCH", "DNS_SEARCH_FMATCH",
  "DNS_NAPTR_IGNORE_RFC", "DNS_CACHE_INIT", "DNS_USE_CACHE",
  "DNS_USE_FAILOVER", "DNS_CACHE_FLAGS", "DNS_CACHE_NEG_TTL",
  "DNS_CACHE_MIN_TTL", "DNS_CACHE_MAX_TTL", "DNS_CACHE_MEM",
  "DNS_CACHE_GC_INT", "DNS_CACHE_DEL_NONEXP", "DNS_CACHE_REC_PREF",
  "AUTO_BIND_IPV6", "DST_BLST_INIT", "USE_DST_BLST", "DST_BLST_MEM",
  "DST_BLST_TTL", "DST_BLST_GC_INT", "DST_BLST_UDP_IMASK",
  "DST_BLST_TCP_IMASK", "DST_BLST_TLS_IMASK", "DST_BLST_SCTP_IMASK",
  "PORT", "STAT", "CHILDREN", "SOCKET_WORKERS", "ASYNC_WORKERS",
  "ASYNC_USLEEP", "CHECK_VIA", "PHONE2TEL", "MEMLOG", "MEMDBG", "MEMSUM",
  "MEMSAFETY", "MEMJOIN", "MEMSTATUSMODE", "CORELOG", "SIP_WARNING",
  "SERVER_SIGNATURE", "SERVER_HEADER", "USER_AGENT_HEADER", "REPLY_TO_VIA",
  "LOADMODULE", "LOADPATH", "MODPARAM", "MAXBUFFER", "SQL_BUFFER_SIZE",
  "USER", "GROUP", "CHROOT", "WDIR", "RUNDIR", "MHOMED", "DISABLE_TCP",
  "TCP_ACCEPT_ALIASES", "TCP_CHILDREN", "TCP_CONNECT_TIMEOUT",
  "TCP_SEND_TIMEOUT", "TCP_CON_LIFETIME", "TCP_POLL_METHOD",
  "TCP_MAX_CONNECTIONS", "TLS_MAX_CONNECTIONS", "TCP_NO_CONNECT",
  "TCP_SOURCE_IPV4", "TCP_SOURCE_IPV6", "TCP_OPT_FD_CACHE",
  "TCP_OPT_BUF_WRITE", "TCP_OPT_CONN_WQ_MAX", "TCP_OPT_WQ_MAX",
  "TCP_OPT_RD_BUF", "TCP_OPT_WQ_BLK", "TCP_OPT_DEFER_ACCEPT",
  "TCP_OPT_DELAYED_ACK", "TCP_OPT_SYNCNT", "TCP_OPT_LINGER2",
  "TCP_OPT_KEEPALIVE", "TCP_OPT_KEEPIDLE", "TCP_OPT_KEEPINTVL",
  "TCP_OPT_KEEPCNT", "TCP_OPT_CRLF_PING", "TCP_OPT_ACCEPT_NO_CL",
  "TCP_CLONE_RCVBUF", "DISABLE_TLS", "ENABLE_TLS", "TLSLOG", "TLS_PORT_NO",
  "TLS_METHOD", "TLS_HANDSHAKE_TIMEOUT", "TLS_SEND_TIMEOUT", "SSLv23",
  "SSLv2", "SSLv3", "TLSv1", "TLS_VERIFY", "TLS_REQUIRE_CERTIFICATE",
  "TLS_CERTIFICATE", "TLS_PRIVATE_KEY", "TLS_CA_LIST", "DISABLE_SCTP",
  "ENABLE_SCTP", "SCTP_CHILDREN", "ADVERTISED_ADDRESS", "ADVERTISED_PORT",
  "DISABLE_CORE", "OPEN_FD_LIMIT", "SHM_MEM_SZ", "SHM_FORCE_ALLOC",
  "MLOCK_PAGES", "REAL_TIME", "RT_PRIO", "RT_POLICY", "RT_TIMER1_PRIO",
  "RT_TIMER1_POLICY", "RT_TIMER2_PRIO", "RT_TIMER2_POLICY",
  "MCAST_LOOPBACK", "MCAST_TTL", "TOS", "PMTU_DISCOVERY", "KILL_TIMEOUT",
  "MAX_WLOOPS", "PVBUFSIZE", "PVBUFSLOTS", "HTTP_REPLY_PARSE",
  "VERSION_TABLE_CFG", "CFG_DESCRIPTION", "SERVER_ID",
  "MAX_RECURSIVE_LEVEL", "MAX_BRANCHES_PARAM", "LATENCY_LOG",
  "LATENCY_LIMIT_DB", "LATENCY_LIMIT_ACTION", "MSG_TIME",
  "ONSEND_RT_REPLY", "FLAGS_DECL", "AVPFLAGS_DECL", "ATTR_MARK",
  "SELECT_MARK", "ATTR_FROM", "ATTR_TO", "ATTR_FROMURI", "ATTR_TOURI",
  "ATTR_FROMUSER", "ATTR_TOUSER", "ATTR_FROMDOMAIN", "ATTR_TODOMAIN",
  "ATTR_GLOBAL", "ADDEQ", "SUBST", "SUBSTDEF", "SUBSTDEFS", "EQUAL",
  "LOG_OR", "LOG_AND", "BIN_OR", "BIN_AND", "BIN_XOR", "BIN_LSHIFT",
  "BIN_RSHIFT", "STRDIFF", "STREQ", "INTDIFF", "INTEQ", "MATCH", "DIFF",
  "EQUAL_T", "LTE", "GTE", "LT", "GT", "MINUS", "PLUS", "MODULO", "SLASH",
  "STAR", "BIN_NOT", "UNARY", "NOT", "DEFINED", "STRCAST", "INTCAST",
  "DOT", "STRLEN", "STREMPTY", "NUMBER", "ID", "NUM_ID", "STRING",
  "IPV6ADDR", "PVAR", "AVP_OR_PVAR", "EVENT_RT_NAME", "COMMA", "SEMICOLON",
  "RPAREN", "LPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "CR",
  "COLON", "$accept", "cfg", "statements", "statement", "@1", "@2", "@3",
  "@4", "@5", "listen_id", "listen_id_lst", "listen_id2", "proto",
  "eqproto", "port", "phostport", "listen_phostport", "id_lst", "intno",
  "flags_decl", "flag_list", "flag_spec", "flag_name", "avpflags_decl",
  "avpflag_list", "avpflag_spec", "assign_stm", "cfg_var_id", "cfg_var",
  "module_stm", "ip", "ipv4", "ipv6addr", "ipv6", "route_name",
  "route_main", "route_stm", "failure_route_stm", "route_reply_main",
  "onreply_route_stm", "@6", "@7", "branch_route_stm", "send_route_stm",
  "event_route_stm", "preprocess_stm", "equalop", "cmpop", "strop",
  "rve_equalop", "rve_cmpop", "uri_type", "eint_op_onsend", "eint_op",
  "eip_op_onsend", "eip_op", "exp_elem", "ipnet", "host", "host_if_id",
  "host_or_if", "fcmd", "stm", "actions", "action", "if_cmd", "ct_rval",
  "single_case", "case_stms", "switch_cmd", "while_cmd", "select_param",
  "select_params", "select_id", "@8", "attr_class_spec", "attr_name_spec",
  "attr_spec", "attr_mark", "attr_id", "attr_id_num_idx", "attr_id_no_idx",
  "attr_id_ass", "attr_id_any", "attr_id_any_str", "pvar", "avp_pvar",
  "assign_op", "lval", "rval", "rve_un_op", "rval_expr", "assign_action",
  "avpflag_oper", "cmd", "@9", "func_params", "func_param", "ret_cmd", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   325,   326,   327,   327,   327,   328,   328,   328,   328,
     328,   329,   328,   330,   328,   328,   331,   328,   332,   328,
     333,   328,   328,   328,   334,   334,   334,   335,   335,   336,
     336,   337,   337,   337,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   340,   340,   340,   340,   340,
     341,   341,   341,   341,   341,   342,   342,   343,   343,   344,
     344,   345,   345,   346,   346,   347,   347,   348,   348,   349,
     349,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   352,   352,   353,   353,   353,   353,   353,   353,   353,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   355,
     355,   356,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   361,   361,   362,   362,   362,   363,   363,   365,
     364,   364,   364,   366,   364,   364,   367,   367,   367,   368,
     368,   368,   369,   369,   370,   370,   370,   370,   370,   370,
     371,   371,   371,   371,   372,   372,   372,   372,   373,   373,
     374,   374,   374,   374,   374,   374,   374,   375,   375,   375,
     375,   376,   376,   376,   377,   377,   377,   378,   378,   378,
     378,   378,   379,   379,   380,   380,   380,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   382,   382,   382,   382,
     383,   383,   383,   383,   383,   384,   384,   384,   385,   385,
     385,   385,   385,   386,   387,   387,   388,   388,   388,   389,
     389,   389,   389,   389,   389,   389,   389,   390,   390,   391,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   393,   393,   394,   394,   394,   394,   395,   396,   396,
     396,   397,   397,   399,   398,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   401,   402,   402,   403,   404,   405,
     406,   407,   407,   408,   408,   408,   409,   409,   409,   410,
     411,   412,   413,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   415,   415,   415,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   417,
     418,   418,   418,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   420,   419,
     419,   421,   421,   421,   422,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     0,     2,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     5,     3,
       1,     3,     3,     5,     3,     1,     2,     1,     2,     2,
       2,     1,     3,     1,     3,     1,     1,     2,     2,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     2,     3,     2,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     1,     5,     5,     7,     7,     5,     8,     8,
       2,     2,     2,     2,     3,     3,     8,     8,     2,     1,
       1,     7,     1,     1,     3,     1,     1,     1,     1,     1,
       4,     7,     2,     2,     4,     7,     2,     1,     1,     0,
       5,     2,     2,     0,     8,     5,     4,     7,     2,     4,
       7,     2,     7,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     3,     3,     1,     3,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     1,     3,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     2,     3,     5,     1,
       4,     5,     3,     4,     3,     2,     4,     5,     3,     4,
       4,     2,     1,     5,     4,     2,     5,     3,     1,     4,
       4,     3,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     2,     3,
       1,     1,     1,     3,     4,     4,     4,     6,     6,     6,
       6,     6,     4,     2,     4,     4,     4,     4,     6,     6,
       6,     6,     6,     4,     2,     4,     4,     4,     4,     6,
       6,     6,     6,     6,     4,     2,     4,     4,     4,     4,
       6,     6,     6,     6,     6,     4,     2,     4,     4,     4,
       4,     6,     6,     6,     6,     6,     4,     2,     4,     4,
       6,     2,     4,     4,     4,     2,     4,     4,     2,     4,
       4,     2,     6,     6,     6,     4,     2,     6,     2,     4,
       4,     4,     2,     4,     4,     4,     2,     4,     4,     2,
       4,     4,     2,     4,     4,     2,     4,     3,     2,     4,
       3,     2,     4,     3,     4,     2,     4,     4,     2,     4,
       4,     2,     4,     4,     2,     4,     4,     2,     4,     4,
       2,     4,     3,     1,     3,     1,     3,     1,     4,     3,
       1,     4,     4,     4,     4,     4,     2,     4,     4,     2,
       4,     4,     2,     3,     1,     3,     1,     3,     1,     3,
       1,     6,     6,     2,     4,     4,     2,     4,     0,     5,
       2,     0,     3,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,    22,    23,     0,     0,     4,     0,
       0,     0,     0,     0,     8,     9,     6,     0,   399,    10,
       0,    15,     7,   400,   441,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   101,     0,   103,     0,   105,     0,   107,     0,   109,
       0,   111,     0,   113,     0,   115,     0,   117,     0,   119,
       0,   121,     0,   123,     0,   125,     0,   127,     0,   129,
       0,   131,     0,   133,     0,   137,     0,   135,     0,   139,
       0,   141,     0,   143,     0,   145,     0,   147,     0,   149,
       0,   151,     0,   153,     0,   155,     0,   157,     0,   159,
       0,   161,     0,   163,     0,   165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   411,   410,   413,
       0,   412,   418,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,   252,     0,
     254,     0,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    66,    65,    59,    61,    63,    68,
      71,    67,    69,   455,   454,   457,   456,   459,   458,     1,
       5,     3,     0,     0,     0,    12,     0,    14,     0,    17,
       0,    19,     0,    21,     0,     0,   439,   425,   426,   427,
       0,   390,   389,   388,   387,   392,    31,    32,    33,    34,
      35,   391,   394,     0,    57,   393,   396,   395,   398,   397,
      73,    72,    75,    74,    77,    76,    79,    78,    81,    80,
      83,    82,    85,    84,    87,    86,    89,    88,    91,    90,
      93,    92,   322,   537,   535,   536,    25,   422,     0,     0,
      30,    50,     0,    55,   320,    24,   419,   423,   420,   538,
      26,   324,   323,   326,   325,    95,    94,    97,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   136,   134,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   172,   166,   167,   174,   173,   176,   175,
     178,   177,   180,   179,   182,   181,   184,   183,   186,   185,
     188,   187,   190,   189,   192,   191,   194,   193,   196,   195,
     198,   197,   200,   199,   313,   312,   315,   314,   317,   316,
     319,   318,   415,   414,     0,   169,   168,   171,   170,   205,
     204,   203,   208,   207,   206,   211,   210,   209,   214,   213,
     212,   217,   216,   215,   219,   218,   221,   220,   223,   222,
     225,   224,   227,   226,   229,   228,   231,   230,   234,   232,
     233,   236,   235,   238,   237,   240,   239,   242,     0,   241,
     244,   243,   246,   245,   248,   247,   249,   251,   253,   255,
     258,   257,   260,   259,   262,   261,   264,   263,   266,   265,
     268,   267,   270,   269,   272,   271,   274,   273,   276,   275,
     278,   277,   280,   279,   282,   281,   284,   283,   286,   285,
     291,   287,   288,   289,   290,   303,   302,   305,   304,   293,
     292,   295,   294,   297,   296,   299,   298,   301,   300,   307,
     306,   309,   308,   311,   310,   328,   327,   330,   329,   332,
     331,   334,   333,   336,   335,   338,   337,   340,   339,   342,
     341,   344,   343,   346,   345,   348,   347,   350,   349,   352,
     351,   354,   353,   356,   355,   358,   357,   361,   359,   360,
     362,   365,   364,   367,   366,   369,   368,   371,   370,   373,
     372,   202,   201,   374,   375,   376,   378,   377,   380,   379,
     382,   381,   384,   383,   386,   385,     0,     0,     0,   432,
       0,   433,     0,   436,     0,     0,   448,     0,     0,   451,
       0,     0,   453,     0,     0,     0,     0,     0,    58,     0,
      27,     0,     0,     0,     0,    56,     0,     0,     0,     0,
      62,    64,    70,     0,     0,     0,     0,     0,     0,   840,
     837,   841,   844,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     793,   795,   797,   800,     0,     0,     0,     0,     0,   814,
     816,   818,   820,     0,     0,     0,     0,     0,     0,     0,
     670,   671,   672,   597,     0,   609,   610,   555,     0,     0,
     547,   550,   551,   552,     0,   601,   602,   612,   613,   614,
       0,     0,     0,   543,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,    29,
     424,    54,    44,    43,    51,    52,     0,   542,   537,   540,
     541,   539,     0,     0,   683,     0,   705,     0,   716,     0,
     727,     0,   694,     0,     0,   481,   482,   483,   494,   487,
     495,   488,   493,   485,   492,   484,     0,   486,     0,   489,
       0,   490,   583,   629,   628,   627,     0,     0,     0,     0,
       0,   616,     0,     0,   615,     0,   491,     0,   496,     0,
     622,   621,   620,     0,   603,   605,   604,   617,   618,   619,
     630,     0,   839,     0,   836,     0,   843,   731,     0,   748,
       0,   752,     0,     0,   756,     0,   775,     0,   778,     0,
     759,     0,   765,     0,   762,     0,   768,     0,   771,     0,
       0,   784,     0,   787,     0,   781,     0,   790,     0,     0,
       0,     0,     0,     0,     0,     0,   806,     0,   809,     0,
     812,     0,     0,     0,     0,     0,   575,     0,     0,   823,
       0,   826,     0,   735,     0,   738,     0,   741,     0,   830,
       0,   556,   549,   548,   430,   546,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,     0,   595,   598,   611,
       0,   554,   746,     0,   553,   434,     0,   446,     0,   449,
       0,     0,   407,   403,   404,     0,   440,     0,     0,    28,
       0,     0,     0,     0,     0,     0,   530,     0,   673,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   500,   463,   462,   469,   461,   460,   468,     0,     0,
       0,   525,     0,     0,   668,   651,   654,   633,   653,   632,
       0,     0,     0,   838,   603,   604,   618,   619,     0,     0,
       0,     0,   504,     0,   509,   467,   466,   465,   464,     0,
       0,   521,     0,   598,   652,   631,     0,     0,     0,     0,
       0,     0,     0,   475,   474,   473,   472,   476,   471,   470,
     480,   479,   478,   477,     0,     0,     0,     0,     0,     0,
       0,   835,   842,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   767,     0,   770,     0,   773,     0,
       0,     0,     0,     0,     0,     0,     0,   792,   794,   796,
       0,     0,   799,     0,     0,     0,   557,   544,     0,     0,
       0,     0,     0,    45,     0,     0,   813,   815,   817,   819,
       0,   577,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   831,     0,     0,   669,     0,   608,     0,   606,
       0,   607,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,   321,     0,     0,     0,   684,     0,   682,     0,
     675,     0,   676,     0,     0,     0,   674,   706,     0,   704,
       0,   697,     0,   698,     0,   696,   717,     0,   715,     0,
     708,     0,   709,     0,   707,   728,     0,   726,     0,   719,
       0,   720,     0,   718,   695,     0,   693,     0,   686,     0,
     687,     0,   685,   499,     0,   497,   515,    36,    37,    38,
      39,    40,    41,    42,   513,   514,   512,   510,   511,   524,
     522,   523,   578,   582,   584,     0,     0,     0,     0,   626,
     648,   625,   624,   623,   503,     0,   501,   508,   506,   507,
     505,   520,     0,    57,     0,   528,   516,   518,   517,     0,
     665,   647,   664,   646,   660,   639,   661,   640,   641,   642,
     643,   656,   635,   655,   634,   659,   638,   658,   637,   657,
     636,   663,   645,   662,   644,   732,     0,   729,   749,     0,
     753,   751,   750,   754,   757,   755,   776,   774,   779,   777,
     760,   758,   766,   764,   763,   761,   772,   769,   785,   783,
     788,   786,   782,   780,   791,   789,   801,   798,   803,   802,
       0,     0,   805,   804,   808,   807,   811,     0,     0,   810,
       0,     0,     0,   574,   572,     0,   824,     0,   827,   825,
     733,   734,   736,   737,   739,   740,   834,     0,   833,   596,
     600,     0,   745,   598,     0,     0,     0,     0,     0,   405,
     406,     0,   444,     0,   416,   417,   431,     0,     0,     0,
       0,   534,   532,   533,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   666,   649,
     667,   650,     0,     0,     0,     0,   545,   558,    49,    46,
      47,   576,     0,     0,     0,   559,   565,   573,   571,    57,
       0,     0,   829,     0,     0,     0,   435,   447,   450,   452,
     408,   409,   421,   680,   681,   678,   679,   677,   702,   703,
     700,   701,   699,   713,   714,   711,   712,   710,   724,   725,
     722,   723,   721,   691,   692,   689,   690,   688,     0,     0,
     581,   529,   527,   526,   599,   730,   747,     0,   568,     0,
       0,     0,     0,   821,   822,   832,   744,   743,   742,   580,
     579,    48,     0,   569,   563,   570,     0,     0,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   176,   177,   178,   179,   180,   181,   182,   183,   490,
     781,   491,   492,  1314,   884,  1215,   493,   494,   934,   184,
     406,   407,   408,   185,   411,   412,   186,   187,   188,   189,
     495,   496,   497,   498,   440,   424,   425,   427,   190,   191,
     776,   876,   429,   431,   433,   192,  1097,  1130,  1098,  1159,
    1160,   935,   936,   937,   938,   939,   940,  1346,  1070,   499,
     500,   941,  1206,   849,   850,   851,  1504,  1424,  1425,   852,
     853,  1323,  1324,   942,  1103,  1036,  1037,  1038,   943,   944,
     945,   946,   857,   947,  1240,   948,   949,  1040,   860,   950,
     951,  1118,   861,   862,   863,  1020,  1437,  1438,   864
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1054
static const yytype_int16 yypact[] =
{
    2706,  -234,    10,    19,  -202,  -186,  -181,  -151,  -144,  -137,
   -1054,  -129,  -128,  -120,  -106,   -93,   -88,   -78,   -75,   -63,
     -62,   -57,   -50,   -41,   -23,   -17,   -11,    23,    26,    53,
     645,   661,   734,   757,   759,   762,   775,   781,   782,   783,
     789,   796,   822,   823,   830,   831,   832,   834,   835,   836,
     837,   840,   841,   842,   852,   855,   856,   857,   858,   859,
     862,    -2,     6,     7,    17,   365,   375,   376,   382,   394,
     446,   460,   479,   482,   483,   492,   497,   498,   503,   515,
     517,    88,   107,    21,   518,   521,   522,   527,   543,   547,
     556,   575,   598,   602,   618,   624,   643,   651,   685,   722,
     735,   736,   737,   747,   773,   801,   863,   867,   872,   874,
     808,   814,   821,   833,   838,   839,   845,   849,   854,   861,
     864,   865,   869,   870,   873,   876,   877,   889,   905,   923,
     924,   927,   934,   942,   952,   961,   962,   993,   997,  1000,
    1001,  1004,  1017,  1033,  1034,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1044,   883,  1045,  1046,  1047,  1051,  1053,  1054,
    1055,  1072,  1073,  1081,  1082,  1083,  1084,  1085,   172,   201,
     105,   120,   132, -1054, -1054, -1054,   284,  1612, -1054,    64,
     286,   296,   414,   740, -1054, -1054, -1054,  -237, -1054, -1054,
     402, -1054, -1054, -1054, -1054,   -54, -1054,   238,   264,   792,
     246,   302,   303,   308,   306,   324,   418,   430,    43,   190,
     447,   209,   213,   214,    50,    75,   480,   545,   554, -1054,
     580, -1054,   594, -1054,   614, -1054,  -248, -1054,  -248, -1054,
    -248, -1054,  -248, -1054,   617, -1054,   625, -1054,   630, -1054,
     631, -1054,   632, -1054,   764, -1054,   827, -1054,   887, -1054,
     930, -1054,  1015, -1054,  1056, -1054,  1057, -1054,  1058, -1054,
    1059, -1054,  1060, -1054,  1061, -1054,  1062, -1054,  1065, -1054,
    1066, -1054,  1067, -1054,  1068, -1054,  1070, -1054,  1071, -1054,
    1074, -1054,  1075, -1054,  1076, -1054,  1077,   578,   599,   584,
     592,   593,   613,   622,   623,   309,   310,   311,   312,   313,
     318,   393,   626,   627,   218,   222,   629, -1054, -1054, -1054,
     230, -1054, -1054,   621,   633,   634,   212,   219,   233,   239,
     244,   635,   636,   637,   646,   474,   487,   533,   254,   647,
     650,   653,   654,    55,   656,   657, -1054,  1078, -1054,  1087,
   -1054,  1088, -1054,  1089,   658,   659,   660,   662,   663,   664,
     665,   666,   668,   669,   670,   671,   673,   674,   675,   978,
     676,   677,   678,   679,   240,   241,   257,   680,   681,   682,
     101,   683,   684,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   700,   705,   706,   707,   151, -1054,  1091,   708,
     713,   715,   717,   718,   260,  1092,  1094,  1095,   725,   727,
     728,   730,   731, -1054, -1054, -1054, -1054,  1064,  1080, -1054,
   -1054, -1054,  1153, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
    -234, -1054,    76,    36,   639, -1054,    84, -1054,   116, -1054,
     130, -1054,    24, -1054,   -18,  1096, -1054, -1054, -1054, -1054,
    1069, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054,  1160, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054,   688, -1054, -1054, -1054, -1054,   597,  1049,
   -1054,  1189,  1190,  1079,  1255, -1054, -1054, -1054, -1054, -1054,
    -169, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054,  1200, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,   688, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054,   -92,  1209,   -92, -1054,
     -54, -1054, 11963, -1054, 11963,   -54, -1054, 11963,   -54, -1054,
   11963,   -54, -1054,  1203,  1106,  1197, 11963,    80, -1054,  1213,
    1208,  1207,  1204,   325,   988, -1054,   597,   288,   291,  1052,
   -1054, -1054, -1054,  1205,    28,    35,    52,    69,    86, 10836,
   11153, 11238, -1054,   102,   111,   118,  1210,   121,   127,   142,
     143,   146,   147,   148,   149,  1211,   150,   152,   154,   155,
    1212,  1217,  1262,  1287,  1288, 11323,   160,   178,   181,  1289,
    1290,  1291,  1292,  6391, 11323,   183,   184,   187,   188,   189,
   -1054, -1054, -1054, -1054,   199, -1054, -1054, -1054,    12,  3695,
   -1054, -1054, -1054, -1054,   920, -1054, -1054, -1054, -1054, -1054,
    1118,  1215,   200, -1054,  1295,  3769,  1294,  4087,  1296,  4156,
    1297,  1298,   258,  1221,  4225, -1054,  1303,  1310,   597, -1054,
   -1054, -1054, -1054, -1054, -1054,  1293,  1299, -1054, -1054, -1054,
   -1054, -1054,  1319,  1306, -1054,    13, -1054,    33, -1054,   117,
   -1054,   133, -1054,   182,   640, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054,   -79, -1054,   -79, -1054,
     811, -1054, -1054,  1160, -1054, -1054,  6710,  6797,  6907,  1317,
    1318, -1054,  5771, 11794, -1054,   797, -1054,   777, -1054,   804,
   -1054, -1054, -1054,   920, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054,  7226,  1395,  5875,  1395,  6194,  1395, -1054,   259, -1054,
     267, -1054,  7313,  1327, -1054,   268, -1054,   270, -1054,   272,
   -1054,   273, -1054,   732, -1054,   745, -1054,  1321, -1054,    15,
    1322, -1054,   274, -1054,   276, -1054,   277, -1054,   278,  1323,
    1324,  1325,   109,   806,  7423, 10734, -1054,   205, -1054,   746,
   -1054,    81,  1326,  1328,  1329,  1330, -1054,   963, 10734, -1054,
     281, -1054,   282, -1054,   478, -1054,   537, -1054,   817, -1054,
    1331, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054,  1340, -1054,  1337, -1054,
   11323, -1054, -1054,   220, -1054, -1054,  1332, -1054,  1333, -1054,
    1341,  1342, -1054,  1400,  1411,   -18, -1054, 11963,  1355, -1054,
    -232,  1356,  -178, 11963,  1347,   -19, -1054,   491, -1054,   496,
     902,  1348,   571,   701,   785,   903,  1349,   825,   844,   860,
     906,  1350,   897,   910,   946,   907,  1351,   947,   955,   972,
     973, -1054, -1054, -1054, -1054, -1054, -1054, -1054,  7742,  5359,
    5678, -1054,  1100,  1385, -1054, -1054, -1054, -1054, -1054, -1054,
    7829,  7939,  1377, -1054,  1421,  1422,  1424,  1425,  1152,  1383,
    1381,  4299, -1054,  8258, -1054, -1054, -1054, -1054, -1054,  8345,
    8455, -1054,  2469,  1382, -1054, -1054,  8774,  8861,  8971,  9290,
   11323, 11323, 11323, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054,  9377,  9487,  9806,  9893, 10003, 10322,
   10409, -1054, -1054,  1387,  1403,  1507,  1508,  1511,  1510,    89,
    1195,  1543,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,
    1562,  1563,  1564,  1565, -1054,  1569, -1054,  1570, -1054,  1594,
    1595,  1596,  1597,  1598,  1599,  1600,  1601, -1054, -1054, -1054,
    1602,  1604, -1054,  1605,  1606, 11963,  1655, -1054,  1607,  1608,
    1609,  1610,  1614,  1624,  1625,  1615, -1054, -1054, -1054, -1054,
      57, -1054,  1616,  1635,  1634,  1636,  1637,  1646,  1657,  1659,
    1660,  1661, 11323,  1621,  1630,  1395,   985, -1054,   920, -1054,
    1665, -1054, 11963, 11963, 11963, 11963,  1679,  1680,  1720,  4617,
    1691, -1054, -1054,  1687,  1700,  4686, -1054,   -21, -1054,  1689,
   -1054,  1711, -1054,    67,    72,  1712, -1054, -1054,   -14, -1054,
    1713, -1054,  1714, -1054,  1715, -1054, -1054,   -13, -1054,  1716,
   -1054,  1725, -1054,  1736, -1054, -1054,   -12, -1054,  1738, -1054,
    1739, -1054,  1740, -1054, -1054,    -1, -1054,  1742, -1054,  1751,
   -1054,  1752, -1054, -1054,  2002,  1048, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054,  1048, -1054, -1054,  1048, -1054,
   -1054, -1054,  1743, -1054,  1759,  1748,  1264,  1756,  1307, -1054,
   -1054, -1054, -1054, -1054, -1054,  2071,  1048, -1054,  1048, -1054,
     936, -1054,  2393,   688,  1933,  1790, -1054,  -117,  1048,  -100,
   -1054,  1865, -1054,  1886, -1054,  2279, -1054,  1214,  1282,  1128,
    1168, -1054,   -68, -1054,   -68, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054,  1048, -1054,   936, -1054,  1777, -1054, -1054,  1778,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
    4755, 11725, -1054, -1054, -1054, -1054, -1054,   455,   597, -1054,
    1769,  6281,  1766, -1054, -1054,   846, -1054, 11640, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054,  1395,   986, -1054, -1054,
   -1054,   -92, -1054, -1054,   265,  4829,  5147,  5216,  5285, -1054,
   -1054,  -130, -1054,  1784, -1054, -1054, -1054,  1775,  1795,  1797,
    1798, -1054, -1054, -1054, -1054,  1799,  1801,  1810,  1811,  1815,
    1816,  1817,  1867,  1868,  1869,  1870,  1871,  1872,  1873,  1874,
    1876,  1877,  1878,  1879,  1880,  1881,   458,  1385, -1054, -1054,
   -1054, -1054,    41,  1779,  1882,  1883, -1054, -1054, -1054, -1054,
    1907, -1054,  1908, 10519,  1909,  1395, 11963, -1054, -1054,  1884,
    1613, 11323, -1054,  1885,  1887,  1888, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054, -1054, -1054,  1912,  1913,
   -1054, -1054,   688, -1054, -1054, -1054, -1054,  -232, 11963,  1914,
    1915,  3027,  3096, -1054, -1054, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054,  3165, 11963, 11963, -1054,  3239,  3557,  3626
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1054, -1054, -1054,  2026, -1054, -1054, -1054, -1054, -1054,  -368,
    1358,  1423,  -191,  1140, -1053, -1054, -1054,  -177,  -200, -1054,
    1450, -1054,  -168, -1054,  1484, -1054, -1054,  -429, -1054, -1054,
    -880,  1911,  1755,  1920,   283, -1054, -1054, -1054, -1054, -1054,
   -1054, -1054, -1054, -1054, -1054, -1054,  -885, -1054,  -892, -1054,
   -1054,  1145, -1054, -1054, -1054,  1154, -1054, -1054,   261,  -683,
   -1054,   -40,  -998,  -684,  -803, -1054,   751,   843, -1054, -1054,
   -1054,   768, -1054, -1054, -1054, -1054,  1025,  -399,  -293,  -758,
   -1054,  -532, -1054, -1054, -1054,  -500,  -707, -1054, -1054, -1054,
   -1054,   194,  -796, -1054, -1054, -1054, -1054,   748, -1054
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -829
static const yytype_int16 yytable[] =
{
     455,   410,   696,   461,   855,   774,   855,  1251,   451,   855,
    1221,   194,   855,  1021,  1064,  1069,  1185,  1074,   855,  1079,
     196,  1084,   312,  1089,   219,   772,   512,   221,   513,   894,
     514,  1099,   515,  1100,  1071,  1102,   896,   761,   502,    10,
     193,  1457,  1551,  1123,   470,   453,  1025,  1132,  1466,  1471,
    1476,   482,  1129,   898,   223,   859,   630,   859,  1420,   454,
     859,  1481,  1025,   859,  1025,   882,  1025,   434,  1461,   859,
     900,  1025,   197,  1463,  1065,   883,   501,   759,   422,   423,
     865,   875,  1212,   867,   435,   763,   869,   902,   198,   307,
    1019,   855,   874,   199,  1072,   559,   561,   563,   565,   567,
     569,   571,   695,   957,   889,   891,   413,   855,   309,   855,
    1200,   855,   959,  1421,  1422,   453,   855,   766,  1076,   961,
     780,   415,   964,   200,   787,   613,   615,   617,   966,   454,
     201,   769,  1253,   417,  1081,   788,  1119,   202,   446,   447,
     448,   449,   859,   968,   970,   203,   204,   972,   974,   976,
     978,   981,   727,   983,   205,   985,   987,  1119,   859,  1119,
     859,   996,   859,   446,   447,   448,   449,   859,   206,   446,
     447,   448,   449,   403,  1114,   855,  1263,  1520,  1077,   998,
    1521,   207,  1000,  1086,  1009,  1011,   208,  1264,  1013,  1015,
    1017,   472,  1207,   453,  1082,  1114,   209,  1114,  1119,   210,
    1019,  1042,   409,  1092,  1093,  1207,  1208,   454,  1095,  1096,
     476,   211,   212,   589,   478,   480,   404,   213,   405,   576,
     592,  1236,  1440,   578,   214,  1117,   859,  1156,  1157,  1158,
     856,   582,   856,   215,   595,   856,  1114,   855,   856,   441,
     598,   683,   685,  1087,   856,   601,  1117,   452,  1117,  1121,
     855,   216,  1345,   437,   438,   618,   439,   217,   687,  1052,
    1163,   741,   858,   218,   858,   443,  1514,   858,  1166,  1172,
     858,  1174,   287,  1176,  1178,  1189,   858,  1191,  1193,  1195,
     288,   289,  1222,  1224,   419,  1239,  1458,  1117,   859,   887,
     173,   290,   890,  1467,  1472,  1477,  1257,   220,  1258,   855,
     222,   859,   426,   456,   458,   855,  1482,   462,   453,   460,
     558,   560,   562,   564,   566,   428,   785,   856,  1025,   568,
     628,  1066,   454,  1067,   487,   464,   881,   224,  1022,  -437,
    1068,   195,  1186,   856,   489,   856,  1241,   856,  -438,   313,
     628,  1066,   856,  1073,   487,   773,   895,   450,  1552,   858,
     859,   471,   487,   897,   489,  -429,   859,   483,   484,   485,
     486,   487,   489,   855,  1499,   858,   487,   858,   488,   858,
     899,   489,   450,  1249,   858,  1462,   489,  1423,   450,  1255,
    1464,   310,   483,   484,   485,   486,   487,   901,   483,   484,
     485,   486,   487,   488,   570,  -428,   489,   760,   308,  -443,
    1115,   856,   489,   764,   903,   765,  1381,  -828,   483,   484,
     485,   486,   487,  1497,   859,   414,  1201,   311,   886,   466,
     958,  1115,   489,  1115,   628,  1066,  1202,  1078,   487,   960,
     416,   468,  1116,   858,   430,   767,   962,   768,   489,   965,
     628,  1066,   418,  1083,   487,   967,  1025,   855,   474,   770,
    1102,   771,  1025,  1116,   489,  1116,  1498,  1102,   728,   729,
     969,   971,  1115,   856,   973,   975,   977,   979,   982,   854,
     984,   854,   986,   988,   854,   612,   856,   854,   997,   843,
     404,   503,   405,   854,   855,   855,   855,   855,   614,   628,
    1066,   855,  1088,   487,  1116,   858,   999,   855,   859,  1001,
     473,  1010,  1012,   489,  1571,  1014,  1016,  1018,   858,   404,
     780,   405,   483,   484,   485,   486,   487,  -828,  1043,   477,
     590,  1410,   591,   479,   481,   856,   489,   593,   577,   594,
    1237,   856,   579,   846,   616,   859,   859,   859,   859,   453,
     583,   596,   859,   597,  1133,   442,   505,   599,   859,   600,
     684,   686,   602,   454,   603,   507,   854,   858,  1445,  1446,
    1447,  1448,   619,   858,   620,  1053,  1164,   688,  1054,  1165,
     742,   444,   854,   404,   854,   405,   854,  1167,  1173,   543,
    1175,   854,  1177,  1179,  1190,   546,  1192,  1194,  1196,   856,
     410,  1223,  1225,   548,   550,   888,   484,   485,   888,   484,
     485,   453,   453,   453,   453,   453,   453,  1025,  1207,   457,
     459,   453,  1553,   463,   552,   454,   454,   454,   454,   454,
     454,   858,   882,   554,   556,   454,  1248,   572,   574,  1209,
     580,   465,   883,  1213,   585,   587,   604,   606,   608,   291,
     854,  1091,  1025,  1025,  1025,  1025,   225,   610,   621,   292,
     293,   623,   855,   855,   625,   627,   294,   632,   634,   640,
     642,   644,   227,   646,   648,   650,   652,   654,   295,   656,
     658,   660,   662,   856,   664,   666,   668,   675,   677,   679,
     681,   689,   691,   693,   697,   699,   453,   855,   855,   855,
     855,   701,   703,   705,   707,   709,   711,   713,   715,   717,
     454,   719,   854,   859,   859,   858,   721,   723,   725,   731,
     856,   856,   856,   856,   733,   854,   735,   856,   737,   739,
     296,   436,   848,   856,   848,   467,   746,   848,   748,   750,
     848,   752,   754,  1180,   297,   229,   848,   469,   859,   859,
     859,   859,   858,   858,   858,   858,  1182,  1210,   855,   858,
    1238,   453,   882,   298,   475,   858,   299,   300,   231,  1025,
     233,   432,   883,   235,   854,   454,   301,   453,  1548,  1025,
     854,   302,   303,  1025,  1025,  1025,   237,   304,  1124,  1187,
     453,   454,   239,   241,   243,  1226,   404,   504,   405,   305,
     245,   306,   314,   445,   454,   315,   316,   247,  1122,   859,
     855,   317,  1204,   855,   855,  1131,  1259,  1203,  1260,   848,
    1214,  1261,  1101,  1262,   855,   855,   855,   318,   855,   855,
     855,   319,  1562,   249,   251,   848,   453,   848,   854,   848,
     320,   253,   255,   257,   848,   259,   261,   263,   265,  1443,
     454,   267,   269,   271,  1228,   404,  1227,   405,  1229,   321,
    1231,   859,   506,   273,   859,   859,   275,   277,   279,   281,
     283,   508,  1254,   285,   336,   859,   859,   859,   338,   859,
     859,   859,   322,   340,  1572,   342,   323,  1576,   856,   856,
     446,   447,   448,   449,   387,   544,  1268,   509,  1269,  1577,
    1578,   547,   324,   848,   446,   447,   448,   449,   325,   549,
     551,   510,  1421,  1422,   483,   484,   485,   486,   487,   545,
     858,   858,   854,   856,   856,   856,   856,   326,   489,   226,
     553,   511,  1092,  1093,   516,   327,  1094,  1095,  1096,   555,
     557,   584,   517,   573,   575,   228,   581,   518,   519,   520,
     586,   588,   605,   607,   609,   858,   858,   858,   858,   854,
     854,   854,   854,   611,   622,   848,   854,   624,   762,   328,
     626,   628,   854,   633,   635,   641,   643,   645,   848,   647,
     649,   651,   653,   655,   856,   657,   659,   661,   663,   670,
     665,   667,   669,   676,   678,   680,   682,   690,   692,   694,
     698,   700,   779,   952,   954,   956,   329,   702,   704,   706,
     708,   710,   712,   714,   716,   718,   858,   720,   230,   330,
     331,   332,   722,   724,   726,   732,  1270,   848,  1271,   995,
     734,   333,   736,   848,   738,   740,   856,  1007,  1008,   856,
     856,   232,   747,   234,   749,   751,   236,   753,   755,  1181,
     856,   856,   856,   793,   856,   856,   856,   334,   866,   238,
    1500,   868,  1183,  1211,   870,   240,   242,   244,   858,  1092,
    1093,   858,   858,   246,  1095,  1096,  1125,  1126,  1127,  1128,
     248,   521,   858,   858,   858,   335,   858,   858,   858,  1092,
    1093,   848,   344,  1094,  1095,  1096,  1092,  1093,   345,   450,
    1094,  1095,  1096,  1092,  1093,   346,   250,   252,  1095,  1096,
    1272,  1319,  1273,   450,   254,   256,   258,   347,   260,   262,
     264,   266,   348,   349,   268,   270,   272,   854,   854,   350,
    1105,  1107,  1109,   351,  1230,   404,   274,   405,   352,   276,
     278,   280,   282,   284,   522,   353,   286,   337,   354,   355,
    1277,   339,  1278,   356,   357,  1135,   341,   358,   343,  1493,
     359,   360,   854,   854,   854,   854,  1170,   388,  1075,  1279,
    1080,  1280,  1085,   361,  1090,   848,  1507,   446,   447,   448,
     449,   905,   906,   907,   908,  1281,   910,  1282,   912,   362,
     914,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
     671,   672,   673,   674,   523,  1263,  1263,   363,   364,  1263,
    1263,   365,   848,   848,   848,   848,  1264,  1264,   366,   848,
    1264,  1264,  1286,   854,  1287,   848,   367,  1265,  1274,  1266,
    1275,  1283,  1292,  1284,  1293,  1288,   368,  1289,  1035,  1154,
    1155,  1156,  1157,  1158,  1235,   369,   370,   524,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,
    1158,  1290,  1295,  1291,  1296,   854,  1263,   371,   854,   854,
    1297,   372,  1298,  1513,   373,   374,  1515,  1264,   375,   854,
     854,   854,  1220,   854,   854,   854,  1549,  1299,  1301,  1300,
    1302,   376,  1305,  1315,  1318,   483,   484,   485,   486,   487,
    1441,  1511,  1442,  1512,  1326,  1328,   488,   377,   378,   489,
     379,   380,   381,   382,   383,   384,   385,  1336,   386,   389,
     390,   391,   525,  1338,  1340,   392,  1348,   393,   394,   395,
    1351,  1353,  1355,  1357,  1358,  1359,  1360,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,   396,   397,  1362,  1364,
    1366,  1368,  1370,  1372,  1374,   398,   399,   400,   401,   402,
     487,   786,   892,   526,   527,   528,   529,   530,   531,   532,
     848,   848,   533,   534,   535,   536,   450,   537,   538,   756,
     872,   539,   540,   541,   542,   636,   483,   484,   485,   486,
     487,   777,  1039,  1347,   637,   638,   639,   488,   730,   743,
     489,   744,   745,   775,   757,   848,   848,   848,   848,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1436,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,   848,   778,   758,  1330,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1158,  1140,  1141,  1142,  1143,  1144,  1145,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1382,   783,   784,   789,   791,   871,   848,   873,
     877,   848,   848,   878,   879,  1055,   880,   893,   963,   980,
     989,  1041,   848,   848,   848,   990,   848,   848,   848,  1136,
    1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
     991,  1489,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1158,   992,   993,  1002,  1003,  1004,
    1005,  1044,    -2,   420,  1058,  1505,  1046,  1060,  1048,  1050,
    1051,  1510,  1057,  1061,  1491,  1063,   -11,   -11,   -13,     2,
       3,   -16,   -18,   -20,  1062,  1110,  1111,  1171,  1184,  1188,
    1197,  1198,  1199,  1216,  1233,  1217,  1218,  1219,  1246,  1232,
       4,  1242,  1243,     5,     6,     7,     8,     9,  1234,  1247,
    1244,  1245,  1250,  1252,  1256,  1267,  1276,  1285,  1294,    10,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1158,  1322,  1329,  -601,  -602,  1505,  -613,  -614,
    1331,  1332,  1411,  1349,  1375,  1436,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,  1376,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,  1377,  1378,  1379,  1380,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
    1383,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,   170,   171,   172,  1396,  1397,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,
    1158,  1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,  1406,
     173,  1407,  1408,  1409,  1412,  1413,  1414,  1415,   174,  1035,
    1564,  1416,  1419,  1426,  1019,   175,  -530,  -530,  -530,  -530,
    -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  1417,  1418,
    1427,  1428,  1440,  1429,  1430,  -530,  -530,  -530,  -530,  -530,
    -530,  -530,  -530,  1431,  -530,  -530,  -530,  -530,  -530,  -530,
    -530,  -530,  -530,  -530,  1432,  -530,  1433,  1434,  1435,  -530,
    1444,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  1449,
    1450,  -530,  -530,  -530,  1451,  1453,  1459,  -530,  -530,  -530,
    -530,  -530,  -530,  1019,  1454,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  1455,  1460,  1465,
    1468,  1469,  1470,  1473,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  1474,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  1475,  -498,  1478,  1479,  1480,  -498,  1483,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  1484,  1485,
    -498,  -498,  -498,  1487,  1486,  1488,  -498,  -498,  -498,  -498,
    -498,  -498,  1101,  1490,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  1492,  1494,  1495,  1501,
    1506,  1522,  1523,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  1554,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  1524,  -502,  1525,  1526,  1527,  -502,  1528,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  1529,  1530,  -502,
    -502,  -502,  1531,  1532,  1533,  -502,  -502,  -502,  -502,  -502,
    -502,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1158,  1138,  1139,  1140,  1141,  1142,  1143,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1534,  1535,  1536,  1537,  1538,  1539,
    1540,  1541,  -530,  1542,  1543,  1544,  1545,  1546,  1547,  1555,
    1556,  1563,  1566,   421,  1567,  1568,   790,   885,  -530,  -530,
    -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,
    -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,
    -530,  1557,  1558,  1561,  1569,  1570,  1059,  -530,  1573,  1574,
    1317,  -530,   792,   629,   782,  -530,  -530,  1320,  -530,  -530,
    -530,  -828,  -530,   631,  1560,  1550,  1321,  -530,  1439,  1565,
       0,  -498,     0,     0,     0,     0,     0,     0,  1508,     0,
       0,     0,     0,     0,     0,     0,     0,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
    -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,  -498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -498,     0,     0,     0,  -498,  -498,     0,  -498,  -498,  -498,
    -828,  -498,     0,     0,     0,     0,  -498,     0,     0,     0,
    -502,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -502,
       0,     0,     0,  -502,  -502,     0,  -502,  -502,  -502,     0,
    -502,     0,     0,     0,  1101,  -502,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,     0,     0,
       0,     0,     0,     0,     0,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,     0,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,     0,  -519,     0,     0,     0,  -519,
       0,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,     0,
       0,  -519,  -519,  -519,     0,     0,     0,  -519,  -519,  -519,
    -519,  -519,  -519,     0,     0,     0,     0,     0,     0,     0,
    1341,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,     0,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,  1342,   921,  1139,  1140,  1141,
    1142,  1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,
    1152,  1153,  1154,  1155,  1156,  1157,  1158,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -519,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -519,     0,     0,     0,  -519,  -519,     1,  -519,  -519,
    -519,     0,  -519,     0,     0,     0,     0,  -519,     0,     0,
     -11,   -11,   -13,     2,     3,   -16,   -18,   -20,   843,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   923,    10,     0,     0,     0,   924,     0,   925,
     926,   927,   928,     0,   929,   930,  1343,  1344,     0,   931,
     487,   845,   846,     0,     0,     0,     0,   994,   933,     0,
     489,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,   174,     0,     0,     0,     0,     0,  1575,   175,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,   825,     0,   826,   827,   828,   829,   830,
     831,   832,   833,  -562,  -562,   834,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,  1023,     0,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,   825,     0,   826,   827,   828,   829,   830,   831,
     832,   833,  -564,  -564,   834,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,  1023,     0,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,  -566,  -566,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,     0,     0,     0,     0,     0,
    1023,     0,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,   825,   843,   826,   827,   828,
     829,   830,   831,   832,   833,  -560,  -560,   834,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   844,     0,     0,     0,   845,
     846,     0,     0,   847,     0,     0,     0,  -562,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   844,     0,     0,     0,   845,   846,
       0,     0,   847,     0,     0,     0,  -564,     0,     0,     0,
       0,     0,     0,     0,   843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,     0,  -566,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   844,     0,     0,
       0,   845,   846,     0,     0,   847,     0,     0,  1023,  -560,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,   825,     0,   826,   827,   828,   829,   830,
     831,   832,   833,  -567,  -567,   834,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,  1023,     0,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,   825,     0,   826,   827,   828,   829,   830,   831,
     832,   833,  -561,  -561,   834,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,  1023,     0,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,     0,     0,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,     0,     0,     0,     0,     0,
    1023,     0,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,   825,   843,   826,   827,   828,
     829,   830,   831,   832,   833,     0,     0,   834,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   844,     0,     0,     0,   845,
     846,     0,     0,   847,     0,     0,     0,  -567,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   844,     0,     0,     0,   845,   846,
       0,     0,   847,     0,     0,     0,  -561,     0,     0,     0,
       0,     0,     0,     0,   843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,     0,  1024,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   844,     0,     0,
       0,   845,   846,     0,     0,   847,     0,     0,  1023,  1045,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,   825,     0,   826,   827,   828,   829,   830,
     831,   832,   833,     0,     0,   834,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,  1023,     0,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,   825,     0,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,   834,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,  1023,     0,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,     0,     0,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,     0,     0,     0,     0,     0,
    1023,     0,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,   825,   843,   826,   827,   828,
     829,   830,   831,   832,   833,     0,     0,   834,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   844,     0,     0,     0,   845,
     846,     0,     0,   847,     0,     0,     0,  1047,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   844,     0,     0,     0,   845,   846,
       0,     0,   847,     0,     0,     0,  1049,     0,     0,     0,
       0,     0,     0,     0,   843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,     0,  1056,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   844,     0,     0,
       0,   845,   846,     0,     0,   847,     0,     0,  1023,  1333,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,   825,     0,   826,   827,   828,   829,   830,
     831,   832,   833,     0,     0,   834,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,  1023,     0,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,   825,     0,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,   834,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,  1023,     0,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,     0,     0,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,     0,     0,     0,     0,     0,
    1023,     0,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,   825,   843,   826,   827,   828,
     829,   830,   831,   832,   833,     0,     0,   834,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   844,     0,     0,     0,   845,
     846,     0,     0,   847,     0,     0,     0,  1452,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   844,     0,     0,     0,   845,   846,
       0,     0,   847,     0,     0,     0,  1456,     0,     0,     0,
       0,     0,     0,     0,   843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,     0,  1496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   844,     0,     0,
       0,   845,   846,     0,     0,   847,     0,     0,  1023,  1516,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,   825,     0,   826,   827,   828,   829,   830,
     831,   832,   833,     0,     0,   834,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,  1023,     0,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,   825,     0,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,   834,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,  1023,     0,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,     0,     0,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,     0,     0,     0,     0,     0,
    1306,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,   843,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,  1307,  1308,  1309,
    1310,  1311,  1312,     0,     0,   844,     0,     0,     0,   845,
     846,     0,     0,   847,     0,     0,     0,  1517,     0,     0,
       0,     0,     0,     0,     0,   843,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   844,     0,     0,     0,   845,   846,
       0,     0,   847,     0,     0,     0,  1518,     0,     0,     0,
       0,     0,     0,     0,   843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,     0,  1519,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   923,     0,     0,     0,  1313,   924,     0,   925,
     926,   927,   928,     0,   929,   930,   454,   844,     0,   931,
       0,   845,   846,     0,     0,     0,     0,   994,   933,  1316,
       0,   794,   795,   796,   797,   798,     0,     0,     0,     0,
     803,   804,   805,     0,     0,     0,     0,     0,     0,     0,
     806,   807,   808,   809,   810,   811,   812,   813,     0,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,     0,
     824,     0,     0,     0,     0,     0,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,     0,   835,   836,     0,
       0,     0,   837,   838,   839,   840,   841,   842,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,  1307,  1308,  1309,  1310,
    1311,  1312,  1112,     0,   794,   795,   796,   797,   798,     0,
       0,     0,     0,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,   809,   810,   811,   812,
     813,     0,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,     0,   824,     0,     0,     0,     0,     0,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,     0,
     835,   836,     0,     0,     0,   837,   838,   839,   840,   841,
     842,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1112,     0,   794,   795,
     796,   797,   798,     0,     0,     0,     0,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,     0,     0,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,     0,   835,   836,     0,   843,   922,   837,
     838,   839,   840,   841,   842,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,     0,     0,     0,     0,     0,     0,     0,
       0,   923,     0,     0,     0,  1313,   924,     0,   925,   926,
     927,   928,     0,   929,   930,   454,   844,     0,   931,     0,
     845,   846,     0,     0,     0,     0,   994,   933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,   922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   923,     0,     0,     0,     0,   924,
       0,   925,   926,   927,   928,     0,   929,   930,   454,   844,
       0,   931,     0,   845,   846,     0,     0,     0,  1113,   994,
     933,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   843,   922,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,     0,
       0,     0,     0,   924,     0,   925,   926,   927,   928,     0,
     929,   930,   454,   844,     0,   931,     0,   845,   846,     0,
       0,     0,  1161,   994,   933,  1112,     0,   794,   795,   796,
     797,   798,     0,     0,     0,     0,   803,   804,   805,     0,
       0,     0,     0,     0,     0,     0,   806,   807,   808,   809,
     810,   811,   812,   813,     0,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,     0,   824,     0,     0,     0,
       0,     0,   826,   827,   828,   829,   830,   831,   832,     0,
       0,     0,     0,   835,   836,     0,     0,     0,   837,   838,
     839,   840,   841,   842,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,  1502,     0,   794,   795,   796,   797,   798,     0,
       0,     0,     0,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,   809,   810,   811,   812,
     813,     0,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,     0,   824,     0,     0,     0,     0,     0,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,     0,
     835,   836,     0,     0,     0,   837,   838,   839,   840,   841,
     842,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,     0,   794,   795,   796,   797,   798,     0,
       0,     0,     0,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,   809,   810,   811,   812,
     813,     0,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,     0,   824,     0,     0,     0,     0,     0,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,     0,
     835,   836,     0,   843,   922,   837,   838,   839,   840,   841,
     842,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,     0,     0,   923,     0,     0,
       0,     0,   924,     0,   925,   926,   927,   928,     0,   929,
     930,   454,   844,     0,   931,     0,   845,   846,     0,     0,
       0,  1162,   994,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,   922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   923,     0,     0,  1503,     0,   924,
       0,   925,   926,   927,   928,     0,   929,   930,   454,   844,
       0,   931,     0,   845,   846,     0,     0,     0,     0,   994,
     933,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,   922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   923,     0,     0,     0,     0,   924,
       0,   925,   926,   927,   928,     0,   929,   930,   454,   844,
       0,   931,     0,   845,   846,     0,     0,     0,     0,   994,
     933,  1104,     0,   794,   795,   796,   797,   798,     0,     0,
       0,     0,   803,   804,   805,     0,     0,     0,     0,     0,
       0,     0,   806,   807,   808,   809,   810,   811,   812,   813,
       0,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,     0,   824,     0,     0,     0,     0,     0,   826,   827,
     828,   829,   830,   831,   832,     0,     0,     0,     0,   835,
     836,     0,     0,     0,   837,   838,   839,   840,   841,   842,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,  1106,     0,
     794,   795,   796,   797,   798,     0,     0,     0,     0,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,     0,     0,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1108,     0,
     794,   795,   796,   797,   798,     0,     0,     0,     0,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,     0,     0,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,   835,   836,     0,   843,
     922,   837,   838,   839,   840,   841,   842,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,     0,     0,     0,     0,     0,
       0,     0,     0,   923,     0,     0,     0,     0,   924,     0,
     925,   926,   927,   928,     0,   929,   930,   454,   844,     0,
     931,     0,   845,   846,     0,     0,     0,     0,   994,   933,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   922,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,   924,     0,   925,   926,   927,
     928,     0,   929,   930,   454,   844,     0,   931,     0,   845,
     846,     0,     0,     0,     0,   994,   933,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   922,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,   924,     0,   925,   926,   927,
     928,     0,   929,   930,   454,   844,     0,   931,     0,   845,
     846,     0,     0,     0,     0,   994,   933,  1134,     0,   794,
     795,   796,   797,   798,     0,     0,     0,     0,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,     0,     0,   826,   827,   828,   829,   830,   831,
     832,     0,     0,     0,     0,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,  1168,     0,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,     0,     0,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1112,     0,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,   843,   922,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,     0,     0,     0,     0,     0,     0,   923,
       0,     0,     0,     0,   924,     0,   925,   926,   927,   928,
       0,   929,   930,   454,   844,     0,   931,     0,   845,   846,
       0,     0,     0,     0,   994,   933,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,  1169,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   994,   933,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,   844,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   994,   933,  1303,     0,   794,   795,   796,   797,   798,
       0,     0,     0,     0,   803,   804,   805,     0,     0,     0,
       0,     0,     0,     0,   806,   807,   808,   809,   810,   811,
     812,   813,     0,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,     0,   824,     0,     0,     0,     0,     0,
     826,   827,   828,   829,   830,   831,   832,     0,     0,     0,
       0,   835,   836,     0,     0,     0,   837,   838,   839,   840,
     841,   842,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
    1325,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,     0,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1327,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,     0,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,   843,   922,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,     0,     0,     0,
       0,     0,     0,     0,     0,   923,     0,     0,     0,     0,
     924,     0,   925,   926,   927,   928,     0,   929,   930,   454,
    1304,     0,   931,     0,   845,   846,     0,     0,     0,     0,
     994,   933,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   923,     0,     0,     0,     0,   924,     0,   925,
     926,   927,   928,     0,   929,   930,   454,   844,     0,   931,
       0,   845,   846,     0,     0,     0,     0,   994,   933,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   923,     0,     0,     0,     0,   924,     0,   925,
     926,   927,   928,     0,   929,   930,   454,   844,     0,   931,
       0,   845,   846,     0,     0,     0,     0,   994,   933,  1334,
       0,   794,   795,   796,   797,   798,     0,     0,     0,     0,
     803,   804,   805,     0,     0,     0,     0,     0,     0,     0,
     806,   807,   808,   809,   810,   811,   812,   813,     0,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,     0,
     824,     0,     0,     0,     0,     0,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,     0,   835,   836,     0,
       0,     0,   837,   838,   839,   840,   841,   842,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,  1335,   921,  1337,     0,   794,   795,
     796,   797,   798,     0,     0,     0,     0,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,     0,     0,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,     0,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1339,     0,   794,   795,
     796,   797,   798,     0,     0,     0,     0,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,     0,     0,   826,   827,   828,   829,   830,   831,   832,
       0,     0,     0,     0,   835,   836,     0,   843,   922,   837,
     838,   839,   840,   841,   842,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,     0,     0,     0,     0,     0,     0,     0,
       0,   923,     0,     0,     0,     0,   924,     0,   925,   926,
     927,   928,     0,   929,   930,   454,   844,     0,   931,     0,
     845,   846,     0,     0,     0,     0,   994,   933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   843,   922,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,     0,
       0,     0,     0,   924,     0,   925,   926,   927,   928,     0,
     929,   930,   454,   844,     0,   931,     0,   845,   846,     0,
       0,     0,     0,   994,   933,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   843,   922,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,     0,
       0,     0,     0,   924,     0,   925,   926,   927,   928,     0,
     929,   930,   454,   844,     0,   931,     0,   845,   846,     0,
       0,     0,     0,   994,   933,  1350,     0,   794,   795,   796,
     797,   798,     0,     0,     0,     0,   803,   804,   805,     0,
       0,     0,     0,     0,     0,     0,   806,   807,   808,   809,
     810,   811,   812,   813,     0,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,     0,   824,     0,     0,     0,
       0,     0,   826,   827,   828,   829,   830,   831,   832,     0,
       0,     0,     0,   835,   836,     0,     0,     0,   837,   838,
     839,   840,   841,   842,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,  1352,     0,   794,   795,   796,   797,   798,     0,
       0,     0,     0,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,   809,   810,   811,   812,
     813,     0,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,     0,   824,     0,     0,     0,     0,     0,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,     0,
     835,   836,     0,     0,     0,   837,   838,   839,   840,   841,
     842,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1354,     0,   794,   795,   796,   797,   798,     0,
       0,     0,     0,   803,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,   809,   810,   811,   812,
     813,     0,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,     0,   824,     0,     0,     0,     0,     0,   826,
     827,   828,   829,   830,   831,   832,     0,     0,     0,     0,
     835,   836,     0,   843,   922,   837,   838,   839,   840,   841,
     842,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,     0,     0,   923,     0,     0,
       0,     0,   924,     0,   925,   926,   927,   928,     0,   929,
     930,   454,   844,     0,   931,     0,   845,   846,     0,     0,
       0,     0,   994,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,   922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   923,     0,     0,     0,     0,   924,
       0,   925,   926,   927,   928,     0,   929,   930,   454,   844,
       0,   931,     0,   845,   846,     0,     0,     0,     0,   994,
     933,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,   922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   923,     0,     0,     0,     0,   924,
       0,   925,   926,   927,   928,     0,   929,   930,   454,   844,
       0,   931,     0,   845,   846,     0,     0,     0,     0,   994,
     933,  1356,     0,   794,   795,   796,   797,   798,     0,     0,
       0,     0,   803,   804,   805,     0,     0,     0,     0,     0,
       0,     0,   806,   807,   808,   809,   810,   811,   812,   813,
       0,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,     0,   824,     0,     0,     0,     0,     0,   826,   827,
     828,   829,   830,   831,   832,     0,     0,     0,     0,   835,
     836,     0,     0,     0,   837,   838,   839,   840,   841,   842,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,  1361,     0,
     794,   795,   796,   797,   798,     0,     0,     0,     0,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,     0,     0,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,   835,   836,     0,     0,
       0,   837,   838,   839,   840,   841,   842,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1363,     0,
     794,   795,   796,   797,   798,     0,     0,     0,     0,   803,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   806,
     807,   808,   809,   810,   811,   812,   813,     0,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,     0,   824,
       0,     0,     0,     0,     0,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,   835,   836,     0,   843,
     922,   837,   838,   839,   840,   841,   842,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,     0,     0,     0,     0,     0,
       0,     0,     0,   923,     0,     0,     0,     0,   924,     0,
     925,   926,   927,   928,     0,   929,   930,   454,   844,     0,
     931,     0,   845,   846,     0,     0,     0,     0,   994,   933,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   922,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,   924,     0,   925,   926,   927,
     928,     0,   929,   930,   454,   844,     0,   931,     0,   845,
     846,     0,     0,     0,     0,   994,   933,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   922,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,   924,     0,   925,   926,   927,
     928,     0,   929,   930,   454,   844,     0,   931,     0,   845,
     846,     0,     0,     0,     0,   994,   933,  1365,     0,   794,
     795,   796,   797,   798,     0,     0,     0,     0,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,     0,     0,   826,   827,   828,   829,   830,   831,
     832,     0,     0,     0,     0,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,  1367,     0,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,     0,     0,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1369,     0,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,   843,   922,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,     0,     0,     0,     0,     0,     0,     0,     0,   923,
       0,     0,     0,     0,   924,     0,   925,   926,   927,   928,
       0,   929,   930,   454,   844,     0,   931,     0,   845,   846,
       0,     0,     0,     0,   994,   933,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,   844,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   994,   933,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,   844,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   994,   933,  1371,     0,   794,   795,   796,   797,   798,
       0,     0,     0,     0,   803,   804,   805,     0,     0,     0,
       0,     0,     0,     0,   806,   807,   808,   809,   810,   811,
     812,   813,     0,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,     0,   824,     0,     0,     0,     0,     0,
     826,   827,   828,   829,   830,   831,   832,     0,     0,     0,
       0,   835,   836,     0,     0,     0,   837,   838,   839,   840,
     841,   842,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
    1373,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,     0,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1559,     0,   794,   795,   796,   797,   798,     0,     0,     0,
       0,   803,   804,   805,     0,     0,     0,     0,     0,     0,
       0,   806,   807,   808,   809,   810,   811,   812,   813,     0,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
       0,   824,     0,     0,     0,     0,     0,   826,   827,   828,
     829,   830,   831,   832,     0,     0,     0,     0,   835,   836,
       0,   843,   922,   837,   838,   839,   840,   841,   842,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,     0,     0,     0,
       0,     0,     0,     0,     0,   923,     0,     0,     0,     0,
     924,     0,   925,   926,   927,   928,     0,   929,   930,   454,
     844,     0,   931,     0,   845,   846,     0,     0,     0,     0,
     994,   933,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   923,     0,     0,     0,     0,   924,     0,   925,
     926,   927,   928,     0,   929,   930,   454,   844,     0,   931,
       0,   845,   846,     0,     0,     0,     0,   994,   933,     0,
       0,     0,     0,     0,     0,     0,     0,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,     0,
       0,     0,     0,     0,     0,     0,   806,   807,   808,   809,
     810,   811,   812,   813,     0,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,     0,   824,     0,   843,   922,
     825,     0,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,   834,   835,   836,     0,     0,     0,   837,   838,
     839,   840,   841,   842,     0,     0,     0,     0,     0,     0,
       0,     0,   923,     0,     0,     0,     0,   924,     0,   925,
     926,   927,   928,     0,   929,   930,   454,   844,     0,   931,
       0,   845,   846,     0,     0,     0,     0,   994,   933,   794,
     795,   796,   797,   798,     0,     0,     0,     0,   803,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   806,   807,
     808,   809,   810,   811,   812,   813,     0,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,     0,   824,     0,
       0,     0,     0,     0,   826,   827,   828,   829,   830,   831,
     832,     0,     0,     0,     0,   835,   836,     0,     0,     0,
     837,   838,   839,   840,   841,   842,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   843,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1136,
    1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   844,     0,     0,     0,   845,   846,     0,     0,
     847,     0,     0,  1205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   843,   922,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   923,
       0,     0,     0,     0,   924,     0,   925,   926,   927,   928,
       0,   929,   930,   454,   844,     0,   931,     0,   845,   846,
       0,     0,     0,     0,   932,   933,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,     0,     0,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   794,   795,   796,   797,   798,     0,     0,     0,     0,
     803,   804,   805,     0,     0,     0,     0,     0,     0,     0,
     806,   807,   808,   809,   810,   811,   812,   813,     0,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,     0,
     824,     0,     0,     0,     0,     0,   826,   827,   828,   829,
     830,   831,   832,     0,     0,     0,     0,   835,   836,     0,
       0,     0,   837,   838,   839,   840,   841,   842,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   794,   795,   796,   797,
     798,     0,     0,     0,     0,   803,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,     0,
       0,   826,   827,   828,   829,   830,   831,   832,     0,     0,
       0,     0,   835,   836,     0,     0,     0,   837,   838,   839,
     840,   841,   842,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,   844,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   953,   933,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   843,   922,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   923,     0,     0,     0,     0,   924,     0,   925,   926,
     927,   928,     0,   929,   930,   454,   844,     0,   931,     0,
     845,   846,     0,     0,     0,     0,   955,   933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   923,     0,     0,     0,
       0,   924,     0,   925,   926,   927,   928,     0,   929,   930,
     454,   844,     0,   931,     0,   845,   846,     0,     0,     0,
       0,   994,   933,   794,   795,   796,   797,   798,     0,     0,
       0,     0,   803,   804,   805,     0,     0,     0,     0,     0,
       0,     0,   806,   807,   808,   809,   810,   811,   812,   813,
       0,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,     0,   824,     0,     0,     0,     0,     0,   826,   827,
     828,   829,   830,   831,   832,     0,     0,     0,     0,   835,
     836,     0,     0,     0,   837,   838,   839,   840,   841,   842,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
       0,     0,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   810,   811,   812,   813,     0,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,     0,   824,     0,     0,
       0,   825,     0,   826,   827,   828,   829,   830,   831,   832,
     833,     0,     0,   834,   835,   836,     0,     0,     0,   837,
     838,   839,   840,   841,   842,  1120,     0,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,     0,
       0,     0,     0,     0,     0,     0,   806,   807,   808,   809,
     810,   811,   812,   813,     0,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,     0,   824,     0,     0,     0,
     825,     0,   826,   827,   828,   829,   830,   831,   832,   833,
       0,     0,   834,   835,   836,     0,     0,     0,   837,   838,
     839,   840,   841,   842,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   843,
     922,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   923,     0,     0,     0,     0,   924,     0,
     925,   926,   927,   928,     0,   929,   930,  1509,   844,     0,
     931,     0,   845,   846,     0,     0,     0,     0,   994,   933,
       0,     0,     0,     0,     0,     0,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,     0,     0,
       0,     0,     0,     0,   843,   806,   807,   808,   809,   810,
     811,   812,   813,     0,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,     0,   824,     0,     0,     0,   825,
       0,   826,   827,   828,   829,   830,   831,   832,   833,     0,
       0,   834,   835,   836,     0,     0,     0,   837,   838,   839,
     840,   841,   842,   844,     0,     0,     0,   845,   846,     0,
       0,   847,     0,     0,  1205,     0,     0,     0,     0,     0,
       0,     0,     0,   843,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   844,     0,     0,     0,   845,   846,     0,     0,
     847,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   844,     0,     0,     0,   845,   846,     0,     0,   847
};

static const yytype_int16 yycheck[] =
{
     200,   169,   370,   203,   762,   434,   764,  1060,   199,   767,
    1008,     1,   770,     1,     1,   895,     1,   897,   776,   899,
       1,   901,     1,   903,     1,     1,   226,     1,   228,     1,
     230,   916,   232,   918,     1,   920,     1,     1,   215,    57,
     274,    62,     1,   935,     1,   293,   849,   939,    62,    62,
      62,     1,   937,     1,     1,   762,     1,   764,     1,   307,
     767,    62,   865,   770,   867,   297,   869,   304,     1,   776,
       1,   874,   274,     1,    61,   307,     1,     1,    14,    15,
     764,     1,     1,   767,   321,     1,   770,     1,   274,     1,
       1,   849,   776,   274,    61,   295,   296,   297,   298,   299,
     300,   301,     1,     1,   787,   788,     1,   865,     1,   867,
       1,   869,     1,    56,    57,   293,   874,     1,     1,     1,
     488,     1,     1,   274,   293,   325,   326,   327,     1,   307,
     274,     1,   310,     1,     1,   304,   932,   274,    88,    89,
      90,    91,   849,     1,     1,   274,   274,     1,     1,     1,
       1,     1,     1,     1,   274,     1,     1,   953,   865,   955,
     867,     1,   869,    88,    89,    90,    91,   874,   274,    88,
      89,    90,    91,     1,   932,   933,   293,   307,    61,     1,
     310,   274,     1,     1,     1,     1,   274,   304,     1,     1,
       1,     1,   995,   293,    61,   953,   274,   955,   994,   274,
       1,     1,     1,   282,   283,  1008,     1,   307,   287,   288,
       1,   274,   274,     1,     1,     1,   308,   274,   310,     1,
       1,     1,   322,     1,   274,   932,   933,   295,   296,   297,
     762,     1,   764,   274,     1,   767,   994,   995,   770,     1,
       1,     1,     1,    61,   776,     1,   953,     1,   955,   933,
    1008,   274,  1132,   307,   308,     1,   310,   274,     1,     1,
       1,     1,   762,   274,   764,     1,     1,   767,     1,     1,
     770,     1,   274,     1,     1,     1,   776,     1,     1,     1,
     274,   274,     1,     1,     0,  1043,   307,   994,   995,     1,
     308,   274,     1,   307,   307,   307,   315,   274,   317,  1057,
     274,  1008,    16,     1,     1,  1063,   307,     1,   293,     1,
       1,     1,     1,     1,     1,    19,   493,   849,  1121,     1,
     307,   308,   307,   310,   311,     1,     1,   274,   316,   319,
     317,   321,   317,   865,   321,   867,  1043,   869,   319,   318,
     307,   308,   874,   310,   311,   321,   318,   297,   307,   849,
    1057,   308,   311,   318,   321,   319,  1063,   307,   308,   309,
     310,   311,   321,  1121,  1417,   865,   311,   867,   318,   869,
     318,   321,   297,  1057,   874,   308,   321,   320,   297,  1063,
     308,   274,   307,   308,   309,   310,   311,   318,   307,   308,
     309,   310,   311,   318,     1,   319,   321,   321,   310,   319,
     932,   933,   321,   319,   318,   321,   317,   318,   307,   308,
     309,   310,   311,  1411,  1121,   310,   307,   310,   786,     1,
     318,   953,   321,   955,   307,   308,   317,   310,   311,   318,
     310,     1,   932,   933,    20,   319,   318,   321,   321,   318,
     307,   308,   310,   310,   311,   318,  1249,  1205,     1,   319,
    1335,   321,  1255,   953,   321,   955,     1,  1342,   307,   308,
     318,   318,   994,   995,   318,   318,   318,   318,   318,   762,
     318,   764,   318,   318,   767,     1,  1008,   770,   318,   259,
     308,     1,   310,   776,  1242,  1243,  1244,  1245,     1,   307,
     308,  1249,   310,   311,   994,   995,   318,  1255,  1205,   318,
     310,   318,   318,   321,  1557,   318,   318,   318,  1008,   308,
     878,   310,   307,   308,   309,   310,   311,   318,   318,   310,
     308,  1205,   310,   310,   310,  1057,   321,   308,   310,   310,
     310,  1063,   310,   313,     1,  1242,  1243,  1244,  1245,   293,
     310,   308,  1249,   310,   943,   307,     1,   308,  1255,   310,
     310,   310,   308,   307,   310,     1,   849,  1057,  1242,  1243,
    1244,  1245,   308,  1063,   310,   307,   307,   310,   310,   310,
     310,   307,   865,   308,   867,   310,   869,   310,   310,     1,
     310,   874,   310,   310,   310,     1,   310,   310,   310,  1121,
     758,   310,   310,     1,     1,   307,   308,   309,   307,   308,
     309,   293,   293,   293,   293,   293,   293,  1410,  1411,   307,
     307,   293,  1492,   307,     1,   307,   307,   307,   307,   307,
     307,  1121,   297,     1,     1,   307,  1055,     1,     1,   997,
       1,   307,   307,  1001,     1,     1,     1,     1,     1,   274,
     933,     1,  1445,  1446,  1447,  1448,     1,     1,     1,   274,
     274,     1,  1410,  1411,     1,     1,   274,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,   274,     1,
       1,     1,     1,  1205,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,   293,  1445,  1446,  1447,
    1448,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     307,     1,   995,  1410,  1411,  1205,     1,     1,     1,     1,
    1242,  1243,  1244,  1245,     1,  1008,     1,  1249,     1,     1,
     274,   319,   762,  1255,   764,   307,     1,   767,     1,     1,
     770,     1,     1,     1,   274,     1,   776,   307,  1445,  1446,
    1447,  1448,  1242,  1243,  1244,  1245,     1,     1,  1506,  1249,
    1043,   293,   297,   274,   307,  1255,   274,   274,     1,  1562,
       1,    21,   307,     1,  1057,   307,   274,   293,   310,  1572,
    1063,   274,   274,  1576,  1577,  1578,     1,   274,     1,   979,
     293,   307,     1,     1,     1,   307,   308,   307,   310,   274,
       1,   274,   274,     1,   307,   274,   274,     1,     1,  1506,
    1558,   274,   993,  1561,  1562,     1,   315,     1,   317,   849,
    1001,   315,     1,   317,  1572,  1573,  1574,   274,  1576,  1577,
    1578,   274,  1506,     1,     1,   865,   293,   867,  1121,   869,
     274,     1,     1,     1,   874,     1,     1,     1,     1,  1238,
     307,     1,     1,     1,   307,   308,  1014,   310,  1016,   274,
    1018,  1558,   307,     1,  1561,  1562,     1,     1,     1,     1,
       1,   307,  1062,     1,     1,  1572,  1573,  1574,     1,  1576,
    1577,  1578,   274,     1,  1558,     1,   274,  1561,  1410,  1411,
      88,    89,    90,    91,     1,   307,   315,   307,   317,  1573,
    1574,   307,   274,   933,    88,    89,    90,    91,   274,   307,
     307,   307,    56,    57,   307,   308,   309,   310,   311,   310,
    1410,  1411,  1205,  1445,  1446,  1447,  1448,   274,   321,   274,
     307,   307,   282,   283,   307,   274,   286,   287,   288,   307,
     307,   310,   307,   307,   307,   274,   307,   307,   307,   307,
     307,   307,   307,   307,   307,  1445,  1446,  1447,  1448,  1242,
    1243,  1244,  1245,   307,   307,   995,  1249,   307,   319,   274,
     307,   307,  1255,   307,   307,   307,   307,   307,  1008,   307,
     307,   307,   307,   307,  1506,   307,   307,   307,   307,     1,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   304,   799,   800,   801,   274,   307,   307,   307,
     307,   307,   307,   307,   307,   307,  1506,   307,   274,   274,
     274,   274,   307,   307,   307,   307,   315,  1057,   317,   825,
     307,   274,   307,  1063,   307,   307,  1558,   833,   834,  1561,
    1562,   274,   307,   274,   307,   307,   274,   307,   307,   307,
    1572,  1573,  1574,   760,  1576,  1577,  1578,   274,   765,   274,
    1418,   768,   307,   307,   771,   274,   274,   274,  1558,   282,
     283,  1561,  1562,   274,   287,   288,   289,   290,   291,   292,
     274,   307,  1572,  1573,  1574,   274,  1576,  1577,  1578,   282,
     283,  1121,   274,   286,   287,   288,   282,   283,   274,   297,
     286,   287,   288,   282,   283,   274,   274,   274,   287,   288,
     315,     1,   317,   297,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,  1410,  1411,   274,
     926,   927,   928,   274,   307,   308,   274,   310,   274,   274,
     274,   274,   274,   274,   307,   274,   274,   274,   274,   274,
     315,   274,   317,   274,   274,   951,   274,   274,   274,  1349,
     274,   274,  1445,  1446,  1447,  1448,   962,   274,   897,   315,
     899,   317,   901,   274,   903,  1205,   320,    88,    89,    90,
      91,    71,    72,    73,    74,   315,    76,   317,    78,   274,
      80,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     212,   213,   214,   215,   307,   293,   293,   274,   274,   293,
     293,   274,  1242,  1243,  1244,  1245,   304,   304,   274,  1249,
     304,   304,   315,  1506,   317,  1255,   274,   315,   315,   317,
     317,   315,   315,   317,   317,   315,   274,   317,   308,   293,
     294,   295,   296,   297,  1040,   274,   274,   307,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   315,   315,   317,   317,  1558,   293,   274,  1561,  1562,
     315,   274,   317,  1441,   274,   274,  1444,   304,   274,  1572,
    1573,  1574,   319,  1576,  1577,  1578,  1486,   315,   315,   317,
     317,   274,  1098,  1099,  1100,   307,   308,   309,   310,   311,
     315,   315,   317,   317,  1110,  1111,   318,   274,   274,   321,
     274,   274,   274,   274,   274,   274,   274,  1123,   274,   274,
     274,   274,   307,  1129,  1130,   274,  1132,   274,   274,   274,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   274,   274,  1154,  1155,
    1156,  1157,  1158,  1159,  1160,   274,   274,   274,   274,   274,
     311,   106,   310,   307,   307,   307,   307,   307,   307,   307,
    1410,  1411,   307,   307,   307,   307,   297,   307,   307,   315,
     274,   307,   307,   307,   307,   307,   307,   308,   309,   310,
     311,   322,   274,  1132,   307,   307,   307,   318,   307,   307,
     321,   307,   307,   307,   324,  1445,  1446,  1447,  1448,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,  1232,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,  1506,   307,   315,   317,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   317,   324,   324,   315,   307,   314,  1558,   322,
     307,  1561,  1562,   315,   317,   304,   322,   322,   318,   318,
     318,   316,  1572,  1573,  1574,   318,  1576,  1577,  1578,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     318,   317,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   318,   318,   318,   318,   318,
     318,   316,     0,     1,   304,  1421,   322,   324,   322,   322,
     322,  1427,   319,   324,   317,   319,    14,    15,    16,    17,
      18,    19,    20,    21,   315,   318,   318,   310,   317,   317,
     317,   317,   317,   317,   304,   317,   317,   317,   248,   318,
      38,   319,   319,    41,    42,    43,    44,    45,   321,   248,
     319,   319,   307,   307,   317,   317,   317,   317,   317,    57,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   308,   317,   274,   274,  1503,   274,   274,
     317,   320,    47,   321,   317,  1511,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   315,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   317,   317,   315,   317,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     317,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   271,   272,   273,   317,   317,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     308,   317,   317,   317,   317,   317,   317,   317,   316,   308,
     317,   317,   317,   317,     1,   323,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   324,   324,
     315,   317,   322,   317,   317,    22,    23,    24,    25,    26,
      27,    28,    29,   317,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   317,    42,   317,   317,   317,    46,
     315,    48,    49,    50,    51,    52,    53,    54,    55,   310,
     310,    58,    59,    60,   274,   304,   307,    64,    65,    66,
      67,    68,    69,     1,   317,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   317,   307,   307,
     307,   307,   307,   307,    22,    23,    24,    25,    26,    27,
      28,    29,   307,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   307,    42,   307,   307,   307,    46,   307,
      48,    49,    50,    51,    52,    53,    54,    55,   307,   307,
      58,    59,    60,   304,   321,   317,    64,    65,    66,    67,
      68,    69,     1,   317,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   296,   310,   310,   320,
     324,   307,   317,    22,    23,    24,    25,    26,    27,    28,
      29,   322,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,   317,    42,   317,   317,   317,    46,   317,    48,
      49,    50,    51,    52,    53,    54,    55,   317,   317,    58,
      59,    60,   317,   317,   317,    64,    65,    66,    67,    68,
      69,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   317,   317,   317,   317,   317,   317,
     317,   317,   259,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   177,   317,   317,   756,   784,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   324,   324,   324,   322,   322,   878,   304,   324,   324,
    1100,   308,   758,   332,   489,   312,   313,  1102,   315,   316,
     317,   318,   319,   333,  1503,  1487,  1102,   324,  1233,  1511,
      -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,  1425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   312,   313,    -1,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,   312,   313,    -1,   315,   316,   317,    -1,
     319,    -1,    -1,    -1,     1,   324,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,   312,   313,     1,   315,   316,
     317,    -1,   319,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,   259,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    57,    -1,    -1,    -1,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
     311,   312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,    -1,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,   272,   273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,     1,   323,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,   259,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,
     313,    -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,
      -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   312,   313,    -1,    -1,   316,    -1,    -1,     1,   320,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,   259,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,
     313,    -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,
      -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   312,   313,    -1,    -1,   316,    -1,    -1,     1,   320,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,   259,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,
     313,    -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,
      -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   312,   313,    -1,    -1,   316,    -1,    -1,     1,   320,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,   259,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,
     313,    -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,
      -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   312,   313,    -1,    -1,   316,    -1,    -1,     1,   320,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,   259,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    -1,   308,    -1,    -1,    -1,   312,
     313,    -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,
      -1,    -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
      -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,   259,   260,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,   297,   298,    -1,   300,   301,
     302,   303,    -1,   305,   306,   307,   308,    -1,   310,    -1,
     312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,
      -1,   300,   301,   302,   303,    -1,   305,   306,   307,   308,
      -1,   310,    -1,   312,   313,    -1,    -1,    -1,   317,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,    -1,
     305,   306,   307,   308,    -1,   310,    -1,   312,   313,    -1,
      -1,    -1,   317,   318,   319,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,   259,   260,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,    -1,   298,    -1,   300,   301,   302,   303,    -1,   305,
     306,   307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,
      -1,   317,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,   296,    -1,   298,
      -1,   300,   301,   302,   303,    -1,   305,   306,   307,   308,
      -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,
      -1,   300,   301,   302,   303,    -1,   305,   306,   307,   308,
      -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,
     319,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,   259,
     260,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,
     300,   301,   302,   303,    -1,   305,   306,   307,   308,    -1,
     310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,
     303,    -1,   305,   306,   307,   308,    -1,   310,    -1,   312,
     313,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,
     303,    -1,   305,   306,   307,   308,    -1,   310,    -1,   312,
     313,    -1,    -1,    -1,    -1,   318,   319,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,   259,   260,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,
      -1,   305,   306,   307,   308,    -1,   310,    -1,   312,   313,
      -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,   259,   260,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
     298,    -1,   300,   301,   302,   303,    -1,   305,   306,   307,
     308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
      -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
      -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,   259,   260,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,
     302,   303,    -1,   305,   306,   307,   308,    -1,   310,    -1,
     312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,    -1,
     305,   306,   307,   308,    -1,   310,    -1,   312,   313,    -1,
      -1,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,    -1,
     305,   306,   307,   308,    -1,   310,    -1,   312,   313,    -1,
      -1,    -1,    -1,   318,   319,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,   259,   260,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,    -1,   298,    -1,   300,   301,   302,   303,    -1,   305,
     306,   307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,
      -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,
      -1,   300,   301,   302,   303,    -1,   305,   306,   307,   308,
      -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,
      -1,   300,   301,   302,   303,    -1,   305,   306,   307,   308,
      -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,
     319,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,   259,
     260,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,
     300,   301,   302,   303,    -1,   305,   306,   307,   308,    -1,
     310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,
     303,    -1,   305,   306,   307,   308,    -1,   310,    -1,   312,
     313,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,
     303,    -1,   305,   306,   307,   308,    -1,   310,    -1,   312,
     313,    -1,    -1,    -1,    -1,   318,   319,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,   259,   260,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,
      -1,   305,   306,   307,   308,    -1,   310,    -1,   312,   313,
      -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,   259,   260,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
     298,    -1,   300,   301,   302,   303,    -1,   305,   306,   307,
     308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,    -1,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
      -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,   259,   260,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,
     301,   302,   303,    -1,   305,   306,   307,   308,    -1,   310,
      -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,    -1,
     316,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,   260,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,   298,    -1,   300,   301,   302,   303,
      -1,   305,   306,   307,   308,    -1,   310,    -1,   312,   313,
      -1,    -1,    -1,    -1,   318,   319,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,    -1,   298,    -1,   300,   301,
     302,   303,    -1,   305,   306,   307,   308,    -1,   310,    -1,
     312,   313,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   298,    -1,   300,   301,   302,   303,    -1,   305,   306,
     307,   308,    -1,   310,    -1,   312,   313,    -1,    -1,    -1,
      -1,   318,   319,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,
     260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,
     300,   301,   302,   303,    -1,   305,   306,   307,   308,    -1,
     310,    -1,   312,   313,    -1,    -1,    -1,    -1,   318,   319,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,   308,    -1,    -1,    -1,   312,   313,    -1,
      -1,   316,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,   312,   313,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,   312,   313,    -1,    -1,   316
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    17,    18,    38,    41,    42,    43,    44,    45,
      57,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     271,   272,   273,   308,   316,   323,   326,   327,   328,   329,
     330,   331,   332,   333,   344,   348,   351,   352,   353,   354,
     363,   364,   370,   274,     1,   321,     1,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,     1,   274,     1,
     274,     1,   274,     1,   274,     1,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,     1,   310,     1,
     274,   310,     1,   318,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,     1,   274,     1,   274,
       1,   274,     1,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,     1,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,     1,   308,   310,   345,   346,   347,     1,
     347,   349,   350,     1,   310,     1,   310,     1,   310,     0,
       1,   328,    14,    15,   360,   361,    16,   362,    19,   367,
      20,   368,    21,   369,   304,   321,   319,   307,   308,   310,
     359,     1,   307,     1,   307,     1,    88,    89,    90,    91,
     297,   337,     1,   293,   307,   343,     1,   307,     1,   307,
       1,   343,     1,   307,     1,   307,     1,   307,     1,   307,
       1,   308,     1,   310,     1,   307,     1,   310,     1,   310,
       1,   310,     1,   307,   308,   309,   310,   311,   318,   321,
     334,   336,   337,   341,   342,   355,   356,   357,   358,   384,
     385,     1,   342,     1,   307,     1,   307,     1,   307,   307,
     307,   307,   343,   343,   343,   343,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,     1,   307,   310,     1,   307,     1,   307,
       1,   307,     1,   307,     1,   307,     1,   307,     1,   343,
       1,   343,     1,   343,     1,   343,     1,   343,     1,   343,
       1,   343,     1,   307,     1,   307,     1,   310,     1,   310,
       1,   307,     1,   310,   310,     1,   307,     1,   307,     1,
     308,   310,     1,   308,   310,     1,   308,   310,     1,   308,
     310,     1,   308,   310,     1,   307,     1,   307,     1,   307,
       1,   307,     1,   343,     1,   343,     1,   343,     1,   308,
     310,     1,   307,     1,   307,     1,   307,     1,   307,   356,
       1,   358,     1,   307,     1,   307,   307,   307,   307,   307,
       1,   307,     1,   307,     1,   307,     1,   307,     1,   307,
       1,   307,     1,   307,     1,   307,     1,   307,     1,   307,
       1,   307,     1,   307,     1,   307,     1,   307,     1,   307,
       1,   212,   213,   214,   215,     1,   307,     1,   307,     1,
     307,     1,   307,     1,   310,     1,   310,     1,   310,     1,
     307,     1,   307,     1,   307,     1,   334,     1,   307,     1,
     307,     1,   307,     1,   307,     1,   307,     1,   307,     1,
     307,     1,   307,     1,   307,     1,   307,     1,   307,     1,
     307,     1,   307,     1,   307,     1,   307,     1,   307,   308,
     307,     1,   307,     1,   307,     1,   307,     1,   307,     1,
     307,     1,   310,   307,   307,   307,     1,   307,     1,   307,
       1,   307,     1,   307,     1,   307,   315,   324,   315,     1,
     321,     1,   319,     1,   319,   321,     1,   319,   321,     1,
     319,   321,     1,   321,   352,   307,   365,   322,   307,   304,
     334,   335,   357,   324,   324,   342,   106,   293,   304,   315,
     345,   307,   349,   359,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    22,    23,    24,    25,
      26,    27,    28,    29,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    42,    46,    48,    49,    50,    51,
      52,    53,    54,    55,    58,    59,    60,    64,    65,    66,
      67,    68,    69,   259,   308,   312,   313,   316,   386,   388,
     389,   390,   394,   395,   403,   404,   406,   407,   410,   411,
     413,   417,   418,   419,   423,   388,   359,   388,   359,   388,
     359,   314,   274,   322,   388,     1,   366,   307,   315,   317,
     322,     1,   297,   307,   339,   336,   334,     1,   307,   384,
       1,   384,   310,   322,     1,   318,     1,   318,     1,   318,
       1,   318,     1,   318,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,   260,   293,   298,   300,   301,   302,   303,   305,
     306,   310,   318,   319,   343,   376,   377,   378,   379,   380,
     381,   386,   398,   403,   404,   405,   406,   408,   410,   411,
     414,   415,   416,   318,   416,   318,   416,     1,   318,     1,
     318,     1,   318,   318,     1,   318,     1,   318,     1,   318,
       1,   318,     1,   318,     1,   318,     1,   318,     1,   318,
     318,     1,   318,     1,   318,     1,   318,     1,   318,   318,
     318,   318,   318,   318,   318,   416,     1,   318,     1,   318,
       1,   318,   318,   318,   318,   318,     1,   416,   416,     1,
     318,     1,   318,     1,   318,     1,   318,     1,   318,     1,
     420,     1,   316,     1,   320,   389,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   308,   400,   401,   402,   274,
     412,   316,     1,   318,   316,   320,   322,   320,   322,   320,
     322,   322,     1,   307,   310,   304,   320,   319,   304,   335,
     324,   324,   315,   319,     1,    61,   308,   310,   317,   355,
     383,     1,    61,   310,   355,   383,     1,    61,   310,   355,
     383,     1,    61,   310,   355,   383,     1,    61,   310,   355,
     383,     1,   282,   283,   286,   287,   288,   371,   373,   371,
     371,     1,   371,   399,     1,   416,     1,   416,     1,   416,
     318,   318,     1,   317,   404,   406,   410,   411,   416,   417,
       1,   388,     1,   373,     1,   289,   290,   291,   292,   371,
     372,     1,   373,   402,     1,   416,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   374,
     375,   317,   317,     1,   307,   310,     1,   310,     1,   308,
     416,   310,     1,   310,     1,   310,     1,   310,     1,   310,
       1,   307,     1,   307,   317,     1,   317,   343,   317,     1,
     310,     1,   310,     1,   310,     1,   310,   317,   317,   317,
       1,   307,   317,     1,   337,   319,   387,   389,     1,   334,
       1,   307,     1,   334,   337,   340,   317,   317,   317,   317,
     319,   387,     1,   310,     1,   310,   307,   347,   307,   347,
     307,   347,   318,   304,   321,   416,     1,   310,   403,   404,
     409,   411,   319,   319,   319,   319,   248,   248,   352,   388,
     307,   339,   307,   310,   343,   388,   317,   315,   317,   315,
     317,   315,   317,   293,   304,   315,   317,   317,   315,   317,
     315,   317,   315,   317,   315,   317,   317,   315,   317,   315,
     317,   315,   317,   315,   317,   317,   315,   317,   315,   317,
     315,   317,   315,   317,   317,   315,   317,   315,   317,   315,
     317,   315,   317,     1,   308,   416,     1,    88,    89,    90,
      91,    92,    93,   297,   338,   416,     1,   338,   416,     1,
     376,   380,   308,   396,   397,     1,   416,     1,   416,   317,
     317,   317,   320,   320,     1,    86,   416,     1,   416,     1,
     416,     1,    86,   307,   308,   355,   382,   383,   416,   321,
       1,   416,     1,   416,     1,   416,     1,   416,   416,   416,
     416,     1,   416,     1,   416,     1,   416,     1,   416,     1,
     416,     1,   416,     1,   416,   317,   315,   317,   317,   315,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     388,    47,   317,   317,   317,   317,   317,   324,   324,   317,
       1,    56,    57,   320,   392,   393,   317,   315,   317,   317,
     317,   317,   317,   317,   317,   317,   416,   421,   422,   401,
     322,   315,   317,   402,   315,   388,   388,   388,   388,   310,
     310,   274,   320,   304,   317,   317,   320,    62,   307,   307,
     307,     1,   308,     1,   308,   307,    62,   307,   307,   307,
     307,    62,   307,   307,   307,   307,    62,   307,   307,   307,
     307,    62,   307,   307,   307,   307,   321,   304,   317,   317,
     317,   317,   296,   343,   310,   310,   320,   387,     1,   339,
     334,   320,     1,   296,   391,   416,   324,   320,   392,   307,
     416,   315,   317,   347,     1,   347,   320,   320,   320,   320,
     307,   310,   307,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   310,   343,
     396,     1,   307,   355,   322,   317,   317,   324,   324,     1,
     391,   324,   388,   317,   317,   422,   317,   317,   317,   322,
     322,   339,   388,   324,   324,     1,   388,   388,   388
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 603 "cfg.y"
    {}
    break;

  case 4:
#line 604 "cfg.y"
    {}
    break;

  case 5:
#line 605 "cfg.y"
    { yyerror(""); YYABORT;}
    break;

  case 11:
#line 613 "cfg.y"
    {rt=REQUEST_ROUTE;}
    break;

  case 13:
#line 614 "cfg.y"
    {rt=FAILURE_ROUTE;}
    break;

  case 16:
#line 616 "cfg.y"
    {rt=BRANCH_ROUTE;}
    break;

  case 18:
#line 617 "cfg.y"
    {rt=ONSEND_ROUTE;}
    break;

  case 20:
#line 618 "cfg.y"
    {rt=EVENT_ROUTE;}
    break;

  case 24:
#line 623 "cfg.y"
    {
		if ((yyvsp[(1) - (1)].ipaddr)){
			tmp=ip_addr2a((yyvsp[(1) - (1)].ipaddr));
			if (tmp==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: bad ip "
						"address.\n");
				(yyval.strval)=0;
			} else {
				(yyval.strval)=pkg_malloc(strlen(tmp)+1);
				if ((yyval.strval)==0) {
					LOG(L_CRIT, "ERROR: cfg. parser: out of "
							"memory.\n");
				} else {
					strncpy((yyval.strval), tmp, strlen(tmp)+1);
				}
			}
		}
	}
    break;

  case 25:
#line 641 "cfg.y"
    {
		(yyval.strval)=pkg_malloc(strlen((yyvsp[(1) - (1)].strval))+1);
		if ((yyval.strval)==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: out of "
						"memory.\n");
		} else {
				strncpy((yyval.strval), (yyvsp[(1) - (1)].strval), strlen((yyvsp[(1) - (1)].strval))+1);
		}
	}
    break;

  case 26:
#line 650 "cfg.y"
    {
		if ((yyvsp[(1) - (1)].strval)){
			(yyval.strval)=pkg_malloc(strlen((yyvsp[(1) - (1)].strval))+1);
			if ((yyval.strval)==0) {
					LOG(L_CRIT, "ERROR: cfg. parser: out of "
							"memory.\n");
			} else {
					strncpy((yyval.strval), (yyvsp[(1) - (1)].strval), strlen((yyvsp[(1) - (1)].strval))+1);
			}
		}
	}
    break;

  case 27:
#line 665 "cfg.y"
    { (yyval.name_l)=mk_name_lst((yyvsp[(1) - (1)].strval), SI_IS_MHOMED); }
    break;

  case 28:
#line 666 "cfg.y"
    { (yyval.name_l)=mk_name_lst((yyvsp[(1) - (3)].strval), SI_IS_MHOMED); 
										if ((yyval.name_l)) (yyval.name_l)->next=(yyvsp[(3) - (3)].name_l);
									}
    break;

  case 29:
#line 672 "cfg.y"
    { (yyval.name_l)=(yyvsp[(2) - (3)].name_l); }
    break;

  case 30:
#line 673 "cfg.y"
    { (yyval.name_l)=mk_name_lst((yyvsp[(1) - (1)].strval), 0); }
    break;

  case 31:
#line 677 "cfg.y"
    { (yyval.intval)=PROTO_UDP; }
    break;

  case 32:
#line 678 "cfg.y"
    { (yyval.intval)=PROTO_TCP; }
    break;

  case 33:
#line 679 "cfg.y"
    { (yyval.intval)=PROTO_TLS; }
    break;

  case 34:
#line 680 "cfg.y"
    { (yyval.intval)=PROTO_SCTP; }
    break;

  case 35:
#line 681 "cfg.y"
    { (yyval.intval)=0; }
    break;

  case 36:
#line 684 "cfg.y"
    { (yyval.intval)=PROTO_UDP; }
    break;

  case 37:
#line 685 "cfg.y"
    { (yyval.intval)=PROTO_TCP; }
    break;

  case 38:
#line 686 "cfg.y"
    { (yyval.intval)=PROTO_TLS; }
    break;

  case 39:
#line 687 "cfg.y"
    { (yyval.intval)=PROTO_SCTP; }
    break;

  case 40:
#line 688 "cfg.y"
    { (yyval.intval)=PROTO_WS; }
    break;

  case 41:
#line 689 "cfg.y"
    { (yyval.intval)=PROTO_WSS; }
    break;

  case 42:
#line 690 "cfg.y"
    { (yyval.intval)=0; }
    break;

  case 43:
#line 693 "cfg.y"
    { (yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 44:
#line 694 "cfg.y"
    { (yyval.intval)=0; }
    break;

  case 45:
#line 697 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(1) - (1)].strval), 0, 0); }
    break;

  case 46:
#line 698 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(1) - (3)].strval), 0, (yyvsp[(3) - (3)].intval)); }
    break;

  case 47:
#line 699 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (3)].strval), (yyvsp[(1) - (3)].intval), 0); }
    break;

  case 48:
#line 700 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (5)].strval), (yyvsp[(1) - (5)].intval), (yyvsp[(5) - (5)].intval));}
    break;

  case 49:
#line 701 "cfg.y"
    { (yyval.sockid)=0; yyerror(" port number expected"); }
    break;

  case 50:
#line 705 "cfg.y"
    { (yyval.sockid)=mk_listen_id2((yyvsp[(1) - (1)].name_l), 0, 0); }
    break;

  case 51:
#line 706 "cfg.y"
    { (yyval.sockid)=mk_listen_id2((yyvsp[(1) - (3)].name_l), 0, (yyvsp[(3) - (3)].intval)); }
    break;

  case 52:
#line 707 "cfg.y"
    { (yyval.sockid)=mk_listen_id2((yyvsp[(3) - (3)].name_l), (yyvsp[(1) - (3)].intval), 0); }
    break;

  case 53:
#line 708 "cfg.y"
    { (yyval.sockid)=mk_listen_id2((yyvsp[(3) - (5)].name_l), (yyvsp[(1) - (5)].intval), (yyvsp[(5) - (5)].intval));}
    break;

  case 54:
#line 709 "cfg.y"
    { (yyval.sockid)=0; yyerror(" port number expected"); }
    break;

  case 55:
#line 713 "cfg.y"
    {  (yyval.sockid)=(yyvsp[(1) - (1)].sockid) ; }
    break;

  case 56:
#line 714 "cfg.y"
    { (yyval.sockid)=(yyvsp[(1) - (2)].sockid);  if ((yyval.sockid)) (yyval.sockid)->next=(yyvsp[(2) - (2)].sockid); }
    break;

  case 58:
#line 718 "cfg.y"
    { (yyval.intval)=-(yyvsp[(2) - (2)].intval); }
    break;

  case 60:
#line 722 "cfg.y"
    { yyerror("flag list expected\n"); }
    break;

  case 63:
#line 728 "cfg.y"
    { if (register_flag((yyvsp[(1) - (1)].strval),-1)<0)
								yyerror("register flag failed");
						}
    break;

  case 64:
#line 731 "cfg.y"
    {
						if (register_flag((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].intval))<0)
								yyerror("register flag failed");
										}
    break;

  case 65:
#line 737 "cfg.y"
    { (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 66:
#line 738 "cfg.y"
    { (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 68:
#line 743 "cfg.y"
    { yyerror("avpflag list expected\n"); }
    break;

  case 71:
#line 750 "cfg.y"
    {
		if (register_avpflag((yyvsp[(1) - (1)].strval))==0)
			yyerror("cannot declare avpflag");
	}
    break;

  case 72:
#line 756 "cfg.y"
    { default_core_cfg.debug=(yyvsp[(3) - (3)].intval); }
    break;

  case 73:
#line 757 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 74:
#line 758 "cfg.y"
    { dont_fork= ! (yyvsp[(3) - (3)].intval); }
    break;

  case 75:
#line 759 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 76:
#line 760 "cfg.y"
    { set_fork_delay((yyvsp[(3) - (3)].intval)); }
    break;

  case 77:
#line 761 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 78:
#line 762 "cfg.y"
    { set_modinit_delay((yyvsp[(3) - (3)].intval)); }
    break;

  case 79:
#line 763 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 80:
#line 764 "cfg.y"
    { if (!config_check)  /* if set from cmd line, don't overwrite from yyparse()*/ 
					if(log_stderr == 0) log_stderr=(yyvsp[(3) - (3)].intval); 
				   }
    break;

  case 81:
#line 767 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 82:
#line 768 "cfg.y"
    {
		if ( (i_tmp=str2facility((yyvsp[(3) - (3)].strval)))==-1)
			yyerror("bad facility (see syslog(3) man page)");
		if (!config_check)
			default_core_cfg.log_facility=i_tmp;
	}
    break;

  case 83:
#line 774 "cfg.y"
    { yyerror("ID expected"); }
    break;

  case 84:
#line 775 "cfg.y"
    { log_name=(yyvsp[(3) - (3)].strval); }
    break;

  case 85:
#line 776 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 86:
#line 777 "cfg.y"
    { log_color=(yyvsp[(3) - (3)].intval); }
    break;

  case 87:
#line 778 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 88:
#line 779 "cfg.y"
    { log_prefix_fmt=(yyvsp[(3) - (3)].strval); }
    break;

  case 89:
#line 780 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 90:
#line 781 "cfg.y"
    { _km_log_engine_type=(yyvsp[(3) - (3)].strval); }
    break;

  case 91:
#line 782 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 92:
#line 783 "cfg.y"
    { _km_log_engine_data=(yyvsp[(3) - (3)].strval); }
    break;

  case 93:
#line 784 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 94:
#line 785 "cfg.y"
    { received_dns|= ((yyvsp[(3) - (3)].intval))?DO_DNS:0; }
    break;

  case 95:
#line 786 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 96:
#line 787 "cfg.y"
    { received_dns|= ((yyvsp[(3) - (3)].intval))?DO_REV_DNS:0; }
    break;

  case 97:
#line 788 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 98:
#line 789 "cfg.y"
    { default_core_cfg.dns_try_ipv6=(yyvsp[(3) - (3)].intval); }
    break;

  case 99:
#line 790 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 100:
#line 791 "cfg.y"
    { IF_NAPTR(default_core_cfg.dns_try_naptr=(yyvsp[(3) - (3)].intval)); }
    break;

  case 101:
#line 792 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 102:
#line 793 "cfg.y"
    { IF_DNS_FAILOVER(default_core_cfg.dns_srv_lb=(yyvsp[(3) - (3)].intval)); }
    break;

  case 103:
#line 794 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 104:
#line 795 "cfg.y"
    { IF_NAPTR(default_core_cfg.dns_udp_pref=(yyvsp[(3) - (3)].intval));}
    break;

  case 105:
#line 796 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 106:
#line 797 "cfg.y"
    { IF_NAPTR(default_core_cfg.dns_tcp_pref=(yyvsp[(3) - (3)].intval));}
    break;

  case 107:
#line 798 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 108:
#line 799 "cfg.y"
    { IF_NAPTR(default_core_cfg.dns_tls_pref=(yyvsp[(3) - (3)].intval));}
    break;

  case 109:
#line 800 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 110:
#line 801 "cfg.y"
    { 
								IF_NAPTR(default_core_cfg.dns_sctp_pref=(yyvsp[(3) - (3)].intval)); }
    break;

  case 111:
#line 803 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 112:
#line 804 "cfg.y"
    { default_core_cfg.dns_retr_time=(yyvsp[(3) - (3)].intval); }
    break;

  case 113:
#line 805 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 114:
#line 806 "cfg.y"
    { default_core_cfg.dns_retr_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 115:
#line 807 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 116:
#line 808 "cfg.y"
    { default_core_cfg.dns_servers_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 117:
#line 809 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 118:
#line 810 "cfg.y"
    { default_core_cfg.dns_search_list=(yyvsp[(3) - (3)].intval); }
    break;

  case 119:
#line 811 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 120:
#line 812 "cfg.y"
    { default_core_cfg.dns_search_fmatch=(yyvsp[(3) - (3)].intval); }
    break;

  case 121:
#line 813 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 122:
#line 814 "cfg.y"
    { default_core_cfg.dns_naptr_ignore_rfc=(yyvsp[(3) - (3)].intval); }
    break;

  case 123:
#line 815 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 124:
#line 816 "cfg.y"
    { IF_DNS_CACHE(dns_cache_init=(yyvsp[(3) - (3)].intval)); }
    break;

  case 125:
#line 817 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 126:
#line 818 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.use_dns_cache=(yyvsp[(3) - (3)].intval)); }
    break;

  case 127:
#line 819 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 128:
#line 820 "cfg.y"
    { IF_DNS_FAILOVER(default_core_cfg.use_dns_failover=(yyvsp[(3) - (3)].intval));}
    break;

  case 129:
#line 821 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 130:
#line 822 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_flags=(yyvsp[(3) - (3)].intval)); }
    break;

  case 131:
#line 823 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 132:
#line 824 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_neg_cache_ttl=(yyvsp[(3) - (3)].intval)); }
    break;

  case 133:
#line 825 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 134:
#line 826 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_max_ttl=(yyvsp[(3) - (3)].intval)); }
    break;

  case 135:
#line 827 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 136:
#line 828 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_min_ttl=(yyvsp[(3) - (3)].intval)); }
    break;

  case 137:
#line 829 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 138:
#line 830 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_max_mem=(yyvsp[(3) - (3)].intval)); }
    break;

  case 139:
#line 831 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 140:
#line 832 "cfg.y"
    { IF_DNS_CACHE(dns_timer_interval=(yyvsp[(3) - (3)].intval)); }
    break;

  case 141:
#line 833 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 142:
#line 834 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_del_nonexp=(yyvsp[(3) - (3)].intval)); }
    break;

  case 143:
#line 835 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 144:
#line 836 "cfg.y"
    { IF_DNS_CACHE(default_core_cfg.dns_cache_rec_pref=(yyvsp[(3) - (3)].intval)); }
    break;

  case 145:
#line 837 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 146:
#line 838 "cfg.y"
    {IF_AUTO_BIND_IPV6(auto_bind_ipv6 = (yyvsp[(3) - (3)].intval));}
    break;

  case 147:
#line 839 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 148:
#line 840 "cfg.y"
    { IF_DST_BLACKLIST(dst_blacklist_init=(yyvsp[(3) - (3)].intval)); }
    break;

  case 149:
#line 841 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 150:
#line 842 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.use_dst_blacklist=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 151:
#line 845 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 152:
#line 846 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_max_mem=(yyvsp[(3) - (3)].intval)); 
	}
    break;

  case 153:
#line 849 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 154:
#line 850 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_timeout=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 155:
#line 853 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 156:
#line 854 "cfg.y"
    { IF_DST_BLACKLIST(blst_timer_interval=(yyvsp[(3) - (3)].intval));}
    break;

  case 157:
#line 855 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 158:
#line 856 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_udp_imask=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 159:
#line 859 "cfg.y"
    { yyerror("number(flags) expected"); }
    break;

  case 160:
#line 860 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_tcp_imask=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 161:
#line 863 "cfg.y"
    { yyerror("number(flags) expected"); }
    break;

  case 162:
#line 864 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_tls_imask=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 163:
#line 867 "cfg.y"
    { yyerror("number(flags) expected"); }
    break;

  case 164:
#line 868 "cfg.y"
    {
		IF_DST_BLACKLIST(default_core_cfg.blst_sctp_imask=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 165:
#line 871 "cfg.y"
    { yyerror("number(flags) expected"); }
    break;

  case 166:
#line 872 "cfg.y"
    { port_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 167:
#line 873 "cfg.y"
    {
		#ifdef STATS
				stat_file=(yyvsp[(3) - (3)].strval);
		#endif
	}
    break;

  case 168:
#line 878 "cfg.y"
    { maxbuffer=(yyvsp[(3) - (3)].intval); }
    break;

  case 169:
#line 879 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 170:
#line 880 "cfg.y"
    { sql_buffer_size=(yyvsp[(3) - (3)].intval); }
    break;

  case 171:
#line 881 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 172:
#line 882 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 173:
#line 883 "cfg.y"
    { children_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 174:
#line 884 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 175:
#line 885 "cfg.y"
    { socket_workers=(yyvsp[(3) - (3)].intval); }
    break;

  case 176:
#line 886 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 177:
#line 887 "cfg.y"
    { async_task_set_workers((yyvsp[(3) - (3)].intval)); }
    break;

  case 178:
#line 888 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 179:
#line 889 "cfg.y"
    { async_task_set_usleep((yyvsp[(3) - (3)].intval)); }
    break;

  case 180:
#line 890 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 181:
#line 891 "cfg.y"
    { check_via=(yyvsp[(3) - (3)].intval); }
    break;

  case 182:
#line 892 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 183:
#line 893 "cfg.y"
    { phone2tel=(yyvsp[(3) - (3)].intval); }
    break;

  case 184:
#line 894 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 185:
#line 895 "cfg.y"
    { default_core_cfg.memlog=(yyvsp[(3) - (3)].intval); }
    break;

  case 186:
#line 896 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 187:
#line 897 "cfg.y"
    { default_core_cfg.memdbg=(yyvsp[(3) - (3)].intval); }
    break;

  case 188:
#line 898 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 189:
#line 899 "cfg.y"
    { default_core_cfg.mem_summary=(yyvsp[(3) - (3)].intval); }
    break;

  case 190:
#line 900 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 191:
#line 901 "cfg.y"
    { default_core_cfg.mem_safety=(yyvsp[(3) - (3)].intval); }
    break;

  case 192:
#line 902 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 193:
#line 903 "cfg.y"
    { default_core_cfg.mem_join=(yyvsp[(3) - (3)].intval); }
    break;

  case 194:
#line 904 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 195:
#line 905 "cfg.y"
    { default_core_cfg.mem_status_mode=(yyvsp[(3) - (3)].intval); }
    break;

  case 196:
#line 906 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 197:
#line 907 "cfg.y"
    { default_core_cfg.corelog=(yyvsp[(3) - (3)].intval); }
    break;

  case 198:
#line 908 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 199:
#line 909 "cfg.y"
    { sip_warning=(yyvsp[(3) - (3)].intval); }
    break;

  case 200:
#line 910 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 201:
#line 911 "cfg.y"
    { version_table.s=(yyvsp[(3) - (3)].strval);
			version_table.len=strlen(version_table.s);
	}
    break;

  case 202:
#line 914 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 203:
#line 915 "cfg.y"
    {
		if (shm_initialized())
			yyerror("user must be before any modparam or the"
					" route blocks");
		else if (user==0)
			user=(yyvsp[(3) - (3)].strval); 
	}
    break;

  case 204:
#line 922 "cfg.y"
    {
		if (shm_initialized())
			yyerror("user must be before any modparam or the"
					" route blocks");
		else if (user==0)
			user=(yyvsp[(3) - (3)].strval);
	}
    break;

  case 205:
#line 929 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 206:
#line 930 "cfg.y"
    { group=(yyvsp[(3) - (3)].strval); }
    break;

  case 207:
#line 931 "cfg.y"
    { group=(yyvsp[(3) - (3)].strval); }
    break;

  case 208:
#line 932 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 209:
#line 933 "cfg.y"
    { chroot_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 210:
#line 934 "cfg.y"
    { chroot_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 211:
#line 935 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 212:
#line 936 "cfg.y"
    { working_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 213:
#line 937 "cfg.y"
    { working_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 214:
#line 938 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 215:
#line 939 "cfg.y"
    { runtime_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 216:
#line 940 "cfg.y"
    { runtime_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 217:
#line 941 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 218:
#line 942 "cfg.y"
    { mhomed=(yyvsp[(3) - (3)].intval); }
    break;

  case 219:
#line 943 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 220:
#line 944 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_disable=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 221:
#line 951 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 222:
#line 952 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.accept_aliases=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 223:
#line 959 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 224:
#line 960 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_cfg_children_no=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 225:
#line 967 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 226:
#line 968 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.connect_timeout_s=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 227:
#line 975 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 228:
#line 976 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.send_timeout=S_TO_TICKS((yyvsp[(3) - (3)].intval));
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 229:
#line 983 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 230:
#line 984 "cfg.y"
    {
		#ifdef USE_TCP
			if ((yyvsp[(3) - (3)].intval)<0)
				tcp_default_cfg.con_lifetime=-1;
			else
				tcp_default_cfg.con_lifetime=S_TO_TICKS((yyvsp[(3) - (3)].intval));
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 231:
#line 994 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 232:
#line 995 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_poll_method=get_poll_type((yyvsp[(3) - (3)].strval));
			if (tcp_poll_method==POLL_NONE) {
				LOG(L_CRIT, "bad poll method name:"
						" %s\n, try one of %s.\n",
						(yyvsp[(3) - (3)].strval), poll_support);
				yyerror("bad tcp_poll_method "
						"value");
			}
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 233:
#line 1009 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_poll_method=get_poll_type((yyvsp[(3) - (3)].strval));
			if (tcp_poll_method==POLL_NONE) {
				LOG(L_CRIT, "bad poll method name:"
						" %s\n, try one of %s.\n",
						(yyvsp[(3) - (3)].strval), poll_support);
				yyerror("bad tcp_poll_method "
						"value");
			}
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 234:
#line 1023 "cfg.y"
    { yyerror("poll method name expected"); }
    break;

  case 235:
#line 1024 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_max_connections=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 236:
#line 1031 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 237:
#line 1032 "cfg.y"
    {
		#ifdef USE_TLS
			tls_max_connections=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls support not compiled in");
		#endif
	}
    break;

  case 238:
#line 1039 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 239:
#line 1040 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.no_connect=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 240:
#line 1047 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 241:
#line 1048 "cfg.y"
    {
		#ifdef USE_TCP
			if (tcp_set_src_addr((yyvsp[(3) - (3)].ipaddr))<0)
				warn("tcp_source_ipv4 failed");
		#else
			warn("tcp support not compiled in");
		#endif
		pkg_free((yyvsp[(3) - (3)].ipaddr));
	}
    break;

  case 242:
#line 1057 "cfg.y"
    { yyerror("IPv4 address expected"); }
    break;

  case 243:
#line 1058 "cfg.y"
    {
		#ifdef USE_TCP
				if (tcp_set_src_addr((yyvsp[(3) - (3)].ipaddr))<0)
					warn("tcp_source_ipv6 failed");
		#else
			warn("tcp support not compiled in");
		#endif
		pkg_free((yyvsp[(3) - (3)].ipaddr));
	}
    break;

  case 244:
#line 1067 "cfg.y"
    { yyerror("IPv6 address expected"); }
    break;

  case 245:
#line 1068 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.fd_cache=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 246:
#line 1075 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 247:
#line 1076 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.async=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 248:
#line 1083 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 249:
#line 1084 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.tcpconn_wq_max=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 250:
#line 1091 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 251:
#line 1092 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.tcp_wq_max=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 252:
#line 1099 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 253:
#line 1100 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.rd_buf_size=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 254:
#line 1107 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 255:
#line 1108 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.wq_blk_size=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 256:
#line 1115 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 257:
#line 1116 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.defer_accept=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 258:
#line 1123 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 259:
#line 1124 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.delayed_ack=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 260:
#line 1131 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 261:
#line 1132 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.syncnt=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 262:
#line 1139 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 263:
#line 1140 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.linger2=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 264:
#line 1147 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 265:
#line 1148 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.keepalive=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 266:
#line 1155 "cfg.y"
    { yyerror("boolean value expected");}
    break;

  case 267:
#line 1156 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.keepidle=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 268:
#line 1163 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 269:
#line 1164 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.keepintvl=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 270:
#line 1171 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 271:
#line 1172 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.keepcnt=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 272:
#line 1179 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 273:
#line 1180 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.crlf_ping=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 274:
#line 1187 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 275:
#line 1188 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_default_cfg.accept_no_cl=(yyvsp[(3) - (3)].intval);
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 276:
#line 1195 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 277:
#line 1196 "cfg.y"
    {
		#ifdef USE_TCP
			tcp_set_clone_rcvbuf((yyvsp[(3) - (3)].intval));
		#else
			warn("tcp support not compiled in");
		#endif
	}
    break;

  case 278:
#line 1203 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 279:
#line 1204 "cfg.y"
    {
		#ifdef USE_TLS
			tls_disable=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls support not compiled in");
		#endif
	}
    break;

  case 280:
#line 1211 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 281:
#line 1212 "cfg.y"
    {
		#ifdef USE_TLS
			tls_disable=!((yyvsp[(3) - (3)].intval));
		#else
			warn("tls support not compiled in");
		#endif
	}
    break;

  case 282:
#line 1219 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 283:
#line 1220 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_log=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 284:
#line 1227 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 285:
#line 1228 "cfg.y"
    {
		#ifdef USE_TLS
			tls_port_no=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls support not compiled in");
		#endif
	}
    break;

  case 286:
#line 1235 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 287:
#line 1236 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_method=TLS_USE_SSLv23;
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 288:
#line 1243 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_method=TLS_USE_SSLv2;
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 289:
#line 1250 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_method=TLS_USE_SSLv3;
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 290:
#line 1257 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_method=TLS_USE_TLSv1;
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 291:
#line 1264 "cfg.y"
    {
		#ifdef CORE_TLS
			yyerror("SSLv23, SSLv2, SSLv3 or TLSv1 expected");
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 292:
#line 1271 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_verify_cert=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 293:
#line 1278 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 294:
#line 1279 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_require_cert=(yyvsp[(3) - (3)].intval);
		#else
			warn( "tls-in-core support not compiled in");
		#endif
	}
    break;

  case 295:
#line 1286 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 296:
#line 1287 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_cert_file=(yyvsp[(3) - (3)].strval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 297:
#line 1294 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 298:
#line 1295 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_pkey_file=(yyvsp[(3) - (3)].strval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 299:
#line 1302 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 300:
#line 1303 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_ca_file=(yyvsp[(3) - (3)].strval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 301:
#line 1310 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 302:
#line 1311 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_handshake_timeout=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 303:
#line 1318 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 304:
#line 1319 "cfg.y"
    {
		#ifdef CORE_TLS
			tls_send_timeout=(yyvsp[(3) - (3)].intval);
		#else
			warn("tls-in-core support not compiled in");
		#endif
	}
    break;

  case 305:
#line 1326 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 306:
#line 1327 "cfg.y"
    {
		#ifdef USE_SCTP
			sctp_disable=(yyvsp[(3) - (3)].intval);
		#else
			warn("sctp support not compiled in");
		#endif
	}
    break;

  case 307:
#line 1334 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 308:
#line 1335 "cfg.y"
    {
		#ifdef USE_SCTP
			sctp_disable=((yyvsp[(3) - (3)].intval)<=1)?!(yyvsp[(3) - (3)].intval):(yyvsp[(3) - (3)].intval);
		#else
			warn("sctp support not compiled in");
		#endif
	}
    break;

  case 309:
#line 1342 "cfg.y"
    { yyerror("boolean or number expected"); }
    break;

  case 310:
#line 1343 "cfg.y"
    {
		#ifdef USE_SCTP
			sctp_children_no=(yyvsp[(3) - (3)].intval);
		#else
			warn("sctp support not compiled in");
		#endif
	}
    break;

  case 311:
#line 1350 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 312:
#line 1351 "cfg.y"
    { server_signature=(yyvsp[(3) - (3)].intval); }
    break;

  case 313:
#line 1352 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 314:
#line 1353 "cfg.y"
    { server_hdr.s=(yyvsp[(3) - (3)].strval);
			server_hdr.len=strlen(server_hdr.s);
	}
    break;

  case 315:
#line 1356 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 316:
#line 1357 "cfg.y"
    { user_agent_hdr.s=(yyvsp[(3) - (3)].strval);
			user_agent_hdr.len=strlen(user_agent_hdr.s);
	}
    break;

  case 317:
#line 1360 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 318:
#line 1361 "cfg.y"
    { reply_to_via=(yyvsp[(3) - (3)].intval); }
    break;

  case 319:
#line 1362 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 320:
#line 1363 "cfg.y"
    {
		for(lst_tmp=(yyvsp[(3) - (3)].sockid); lst_tmp; lst_tmp=lst_tmp->next) {
			if (add_listen_iface(	lst_tmp->addr_lst->name,
									lst_tmp->addr_lst->next,
									lst_tmp->port, lst_tmp->proto,
									lst_tmp->flags)!=0) {
				LOG(L_CRIT,  "ERROR: cfg. parser: failed to add listen"
								" address\n");
				break;
			}
		}
		free_socket_id_lst((yyvsp[(3) - (3)].sockid));
	}
    break;

  case 321:
#line 1376 "cfg.y"
    {
		for(lst_tmp=(yyvsp[(3) - (7)].sockid); lst_tmp; lst_tmp=lst_tmp->next) {
			if (add_listen_advertise_iface(	lst_tmp->addr_lst->name,
									lst_tmp->addr_lst->next,
									lst_tmp->port, lst_tmp->proto,
									(yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].intval),
									lst_tmp->flags)!=0) {
				LOG(L_CRIT,  "ERROR: cfg. parser: failed to add listen"
								" address\n");
				break;
			}
		}
		free_socket_id_lst((yyvsp[(3) - (7)].sockid));
	}
    break;

  case 322:
#line 1390 "cfg.y"
    { yyerror("ip address, interface name or"
									" hostname expected"); }
    break;

  case 323:
#line 1392 "cfg.y"
    {
		for(lst_tmp=(yyvsp[(3) - (3)].sockid); lst_tmp; lst_tmp=lst_tmp->next){
			add_alias(	lst_tmp->addr_lst->name,
						strlen(lst_tmp->addr_lst->name),
						lst_tmp->port, lst_tmp->proto);
			for (nl_tmp=lst_tmp->addr_lst->next; nl_tmp; nl_tmp=nl_tmp->next)
				add_alias(nl_tmp->name, strlen(nl_tmp->name),
							lst_tmp->port, lst_tmp->proto);
		}
		free_socket_id_lst((yyvsp[(3) - (3)].sockid));
	}
    break;

  case 324:
#line 1403 "cfg.y"
    { yyerror(" hostname expected"); }
    break;

  case 325:
#line 1404 "cfg.y"
    { sr_auto_aliases=(yyvsp[(3) - (3)].intval); }
    break;

  case 326:
#line 1405 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 327:
#line 1406 "cfg.y"
    {
		if ((yyvsp[(3) - (3)].strval)){
			default_global_address.s=(yyvsp[(3) - (3)].strval);
			default_global_address.len=strlen((yyvsp[(3) - (3)].strval));
		}
	}
    break;

  case 328:
#line 1412 "cfg.y"
    {yyerror("ip address or hostname expected"); }
    break;

  case 329:
#line 1413 "cfg.y"
    {
		tmp=int2str((yyvsp[(3) - (3)].intval), &i_tmp);
		if ((default_global_port.s=pkg_malloc(i_tmp))==0) {
			LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
			default_global_port.len=0;
		} else {
			default_global_port.len=i_tmp;
			memcpy(default_global_port.s, tmp, default_global_port.len);
		};
	}
    break;

  case 330:
#line 1423 "cfg.y"
    {yyerror("ip address or hostname expected"); }
    break;

  case 331:
#line 1424 "cfg.y"
    { disable_core_dump=(yyvsp[(3) - (3)].intval); }
    break;

  case 332:
#line 1425 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 333:
#line 1426 "cfg.y"
    { open_files_limit=(yyvsp[(3) - (3)].intval); }
    break;

  case 334:
#line 1427 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 335:
#line 1428 "cfg.y"
    {
		if (shm_initialized())
			yyerror("shm/shm_mem_size must be before any modparam or the"
					" route blocks");
		else if (shm_mem_size == 0)
			shm_mem_size=(yyvsp[(3) - (3)].intval) * 1024 * 1024;
	}
    break;

  case 336:
#line 1435 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 337:
#line 1436 "cfg.y"
    {
		if (shm_initialized())
			yyerror("shm_force_alloc must be before any modparam or the"
					" route blocks");
		else
			shm_force_alloc=(yyvsp[(3) - (3)].intval);
	}
    break;

  case 338:
#line 1443 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 339:
#line 1444 "cfg.y"
    { mlock_pages=(yyvsp[(3) - (3)].intval); }
    break;

  case 340:
#line 1445 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 341:
#line 1446 "cfg.y"
    { real_time=(yyvsp[(3) - (3)].intval); }
    break;

  case 342:
#line 1447 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 343:
#line 1448 "cfg.y"
    { rt_prio=(yyvsp[(3) - (3)].intval); }
    break;

  case 344:
#line 1449 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 345:
#line 1450 "cfg.y"
    { rt_policy=(yyvsp[(3) - (3)].intval); }
    break;

  case 346:
#line 1451 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 347:
#line 1452 "cfg.y"
    { rt_timer1_prio=(yyvsp[(3) - (3)].intval); }
    break;

  case 348:
#line 1453 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 349:
#line 1454 "cfg.y"
    { rt_timer1_policy=(yyvsp[(3) - (3)].intval); }
    break;

  case 350:
#line 1455 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 351:
#line 1456 "cfg.y"
    { rt_timer2_prio=(yyvsp[(3) - (3)].intval); }
    break;

  case 352:
#line 1457 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 353:
#line 1458 "cfg.y"
    { rt_timer2_policy=(yyvsp[(3) - (3)].intval); }
    break;

  case 354:
#line 1459 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 355:
#line 1460 "cfg.y"
    {
		#ifdef USE_MCAST
			mcast_loopback=(yyvsp[(3) - (3)].intval);
		#else
			warn("no multicast support compiled in");
		#endif
	}
    break;

  case 356:
#line 1467 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 357:
#line 1468 "cfg.y"
    {
		#ifdef USE_MCAST
			mcast_ttl=(yyvsp[(3) - (3)].intval);
		#else
			warn("no multicast support compiled in");
		#endif
	}
    break;

  case 358:
#line 1475 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 359:
#line 1476 "cfg.y"
    { tos=(yyvsp[(3) - (3)].intval); }
    break;

  case 360:
#line 1477 "cfg.y"
    { if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_LOWDELAY")) {
			tos=IPTOS_LOWDELAY;
		} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_THROUGHPUT")) {
			tos=IPTOS_THROUGHPUT;
		} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_RELIABILITY")) {
			tos=IPTOS_RELIABILITY;
#if defined(IPTOS_MINCOST)
		} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_MINCOST")) {
			tos=IPTOS_MINCOST;
#endif
#if defined(IPTOS_LOWCOST)
		} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_LOWCOST")) {
			tos=IPTOS_LOWCOST;
#endif
		} else {
			yyerror("invalid tos value - allowed: "
				"IPTOS_LOWDELAY,IPTOS_THROUGHPUT,"
				"IPTOS_RELIABILITY"
#if defined(IPTOS_LOWCOST)
				",IPTOS_LOWCOST"
#endif
#if !defined(IPTOS_MINCOST)
				",IPTOS_MINCOST"
#endif
				"\n");
		}
	}
    break;

  case 361:
#line 1504 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 362:
#line 1505 "cfg.y"
    { pmtu_discovery=(yyvsp[(3) - (3)].intval); }
    break;

  case 363:
#line 1506 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 364:
#line 1507 "cfg.y"
    { ser_kill_timeout=(yyvsp[(3) - (3)].intval); }
    break;

  case 365:
#line 1508 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 366:
#line 1509 "cfg.y"
    { default_core_cfg.max_while_loops=(yyvsp[(3) - (3)].intval); }
    break;

  case 367:
#line 1510 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 368:
#line 1511 "cfg.y"
    { pv_set_buffer_size((yyvsp[(3) - (3)].intval)); }
    break;

  case 369:
#line 1512 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 370:
#line 1513 "cfg.y"
    { pv_set_buffer_slots((yyvsp[(3) - (3)].intval)); }
    break;

  case 371:
#line 1514 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 372:
#line 1515 "cfg.y"
    { http_reply_parse=(yyvsp[(3) - (3)].intval); }
    break;

  case 373:
#line 1516 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 374:
#line 1517 "cfg.y"
    { server_id=(yyvsp[(3) - (3)].intval); }
    break;

  case 375:
#line 1518 "cfg.y"
    { set_max_recursive_level((yyvsp[(3) - (3)].intval)); }
    break;

  case 376:
#line 1519 "cfg.y"
    { sr_dst_max_branches = (yyvsp[(3) - (3)].intval); }
    break;

  case 377:
#line 1520 "cfg.y"
    { default_core_cfg.latency_log=(yyvsp[(3) - (3)].intval); }
    break;

  case 378:
#line 1521 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 379:
#line 1522 "cfg.y"
    { default_core_cfg.latency_limit_db=(yyvsp[(3) - (3)].intval); }
    break;

  case 380:
#line 1523 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 381:
#line 1524 "cfg.y"
    { default_core_cfg.latency_limit_action=(yyvsp[(3) - (3)].intval); }
    break;

  case 382:
#line 1525 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 383:
#line 1526 "cfg.y"
    { sr_msg_time=(yyvsp[(3) - (3)].intval); }
    break;

  case 384:
#line 1527 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 385:
#line 1528 "cfg.y"
    { onsend_route_reply=(yyvsp[(3) - (3)].intval); }
    break;

  case 386:
#line 1529 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 387:
#line 1530 "cfg.y"
    { default_core_cfg.udp_mtu=(yyvsp[(3) - (3)].intval); }
    break;

  case 388:
#line 1531 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 389:
#line 1533 "cfg.y"
    { default_core_cfg.force_rport=(yyvsp[(3) - (3)].intval); fix_global_req_flags(0, 0); }
    break;

  case 390:
#line 1534 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 391:
#line 1536 "cfg.y"
    { default_core_cfg.udp_mtu_try_proto=(yyvsp[(3) - (3)].intval); fix_global_req_flags(0, 0); }
    break;

  case 392:
#line 1538 "cfg.y"
    { yyerror("TCP, TLS, SCTP or UDP expected"); }
    break;

  case 393:
#line 1539 "cfg.y"
    { IF_RAW_SOCKS(default_core_cfg.udp4_raw=(yyvsp[(3) - (3)].intval)); }
    break;

  case 394:
#line 1540 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 395:
#line 1541 "cfg.y"
    {
		IF_RAW_SOCKS(default_core_cfg.udp4_raw_mtu=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 396:
#line 1544 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 397:
#line 1545 "cfg.y"
    {
		IF_RAW_SOCKS(default_core_cfg.udp4_raw_ttl=(yyvsp[(3) - (3)].intval));
	}
    break;

  case 398:
#line 1548 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 400:
#line 1550 "cfg.y"
    { yyerror("unknown config variable"); }
    break;

  case 402:
#line 1554 "cfg.y"
    { (yyval.strval)="default" ; }
    break;

  case 403:
#line 1558 "cfg.y"
    {
		if (cfg_declare_int((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), 0, 0, NULL)) {
			yyerror("variable cannot be declared");
		}
	}
    break;

  case 404:
#line 1563 "cfg.y"
    {
		if (cfg_declare_str((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval), NULL)) {
			yyerror("variable cannot be declared");
		}
	}
    break;

  case 405:
#line 1568 "cfg.y"
    {
		if (cfg_declare_int((yyvsp[(1) - (7)].strval), (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), 0, 0, (yyvsp[(7) - (7)].strval))) {
			yyerror("variable cannot be declared");
		}
	}
    break;

  case 406:
#line 1573 "cfg.y"
    {
		if (cfg_declare_str((yyvsp[(1) - (7)].strval), (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval))) {
			yyerror("variable cannot be declared");
		}
	}
    break;

  case 407:
#line 1578 "cfg.y"
    { 
		yyerror("number or string expected"); 
	}
    break;

  case 408:
#line 1581 "cfg.y"
    {
		if (cfg_ginst_var_int((yyvsp[(1) - (8)].strval), (yyvsp[(3) - (8)].intval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].intval))) {
			yyerror("variable cannot be added to the group instance");
		}
	}
    break;

  case 409:
#line 1586 "cfg.y"
    {
		if (cfg_ginst_var_string((yyvsp[(1) - (8)].strval), (yyvsp[(3) - (8)].intval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval))) {
			yyerror("variable cannot be added to the group instance");
		}
	}
    break;

  case 410:
#line 1594 "cfg.y"
    {
		DBG("loading module %s\n", (yyvsp[(2) - (2)].strval));
			if (load_module((yyvsp[(2) - (2)].strval))!=0) {
				yyerror("failed to load module");
			}
	}
    break;

  case 411:
#line 1600 "cfg.y"
    { yyerror("string expected"); }
    break;

  case 412:
#line 1601 "cfg.y"
    {
		if(mods_dir_cmd==0) {
			DBG("loading modules under %s\n", (yyvsp[(2) - (2)].strval));
			printf("loading modules under config path: %s\n", (yyvsp[(2) - (2)].strval));
			mods_dir = (yyvsp[(2) - (2)].strval);
		} else {
			DBG("ignoring mod path given in config: %s\n", (yyvsp[(2) - (2)].strval));
			printf("loading modules under command line path: %s\n", mods_dir);
		}
	}
    break;

  case 413:
#line 1611 "cfg.y"
    { yyerror("string expected"); }
    break;

  case 414:
#line 1612 "cfg.y"
    {
		if(mods_dir_cmd==0) {
			DBG("loading modules under %s\n", (yyvsp[(3) - (3)].strval));
			printf("loading modules under config path: %s\n", (yyvsp[(3) - (3)].strval));
			mods_dir = (yyvsp[(3) - (3)].strval);
		} else {
			DBG("ignoring mod path given in config: %s\n", (yyvsp[(3) - (3)].strval));
			printf("loading modules under command line path: %s\n", mods_dir);
		}
	}
    break;

  case 415:
#line 1622 "cfg.y"
    { yyerror("string expected"); }
    break;

  case 416:
#line 1623 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		if (set_mod_param_regex((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), PARAM_STRING, (yyvsp[(7) - (8)].strval)) != 0) {
			 yyerror("Can't set module parameter");
		}
	}
    break;

  case 417:
#line 1634 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		if (set_mod_param_regex((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), PARAM_INT, (void*)(yyvsp[(7) - (8)].intval)) != 0) {
			 yyerror("Can't set module parameter");
		}
	}
    break;

  case 418:
#line 1645 "cfg.y"
    { yyerror("Invalid arguments"); }
    break;

  case 419:
#line 1648 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 420:
#line 1649 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 421:
#line 1652 "cfg.y"
    {
		(yyval.ipaddr)=pkg_malloc(sizeof(struct ip_addr));
		if ((yyval.ipaddr)==0) {
			LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
		} else {
			memset((yyval.ipaddr), 0, sizeof(struct ip_addr));
			(yyval.ipaddr)->af=AF_INET;
			(yyval.ipaddr)->len=4;
			if (((yyvsp[(1) - (7)].intval)>255) || ((yyvsp[(1) - (7)].intval)<0) ||
				((yyvsp[(3) - (7)].intval)>255) || ((yyvsp[(3) - (7)].intval)<0) ||
				((yyvsp[(5) - (7)].intval)>255) || ((yyvsp[(5) - (7)].intval)<0) ||
				((yyvsp[(7) - (7)].intval)>255) || ((yyvsp[(7) - (7)].intval)<0)) {
				yyerror("invalid ipv4 address");
				(yyval.ipaddr)->u.addr32[0]=0;
				/* $$=0; */
			} else {
				(yyval.ipaddr)->u.addr[0]=(yyvsp[(1) - (7)].intval);
				(yyval.ipaddr)->u.addr[1]=(yyvsp[(3) - (7)].intval);
				(yyval.ipaddr)->u.addr[2]=(yyvsp[(5) - (7)].intval);
				(yyval.ipaddr)->u.addr[3]=(yyvsp[(7) - (7)].intval);
				/*
				$$=htonl( ($1<<24)|
				($3<<16)| ($5<<8)|$7 );
				*/
			}
		}
	}
    break;

  case 422:
#line 1681 "cfg.y"
    {
		(yyval.ipaddr)=pkg_malloc(sizeof(struct ip_addr));
		if ((yyval.ipaddr)==0) {
			LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
		} else {
			memset((yyval.ipaddr), 0, sizeof(struct ip_addr));
			(yyval.ipaddr)->af=AF_INET6;
			(yyval.ipaddr)->len=16;
			if (inet_pton(AF_INET6, (yyvsp[(1) - (1)].strval), (yyval.ipaddr)->u.addr)<=0) {
				yyerror("bad ipv6 address");
			}
		}
	}
    break;

  case 423:
#line 1696 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 424:
#line 1697 "cfg.y"
    {(yyval.ipaddr)=(yyvsp[(2) - (3)].ipaddr); }
    break;

  case 425:
#line 1701 "cfg.y"
    {
					tmp=int2str((yyvsp[(1) - (1)].intval), &i_tmp);
					if (((yyval.strval)=pkg_malloc(i_tmp+1))==0) {
						yyerror("out of  memory");
						YYABORT;
					} else {
						memcpy((yyval.strval), tmp, i_tmp);
						(yyval.strval)[i_tmp]=0;
					}
					routename = tmp;
						}
    break;

  case 426:
#line 1712 "cfg.y"
    { routename = (yyvsp[(1) - (1)].strval); (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 427:
#line 1713 "cfg.y"
    { routename = (yyvsp[(1) - (1)].strval); (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 428:
#line 1717 "cfg.y"
    { routename=NULL; }
    break;

  case 429:
#line 1718 "cfg.y"
    { routename=NULL; }
    break;

  case 430:
#line 1722 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		push((yyvsp[(3) - (4)].action), &main_rt.rlist[DEFAULT_RT]);
	}
    break;

  case 431:
#line 1731 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		i_tmp=route_get(&main_rt, (yyvsp[(3) - (7)].strval));
		if (i_tmp==-1){
			yyerror("internal error");
			YYABORT;
		}
		if (main_rt.rlist[i_tmp]){
			yyerror("duplicate route");
			YYABORT;
		}
		push((yyvsp[(6) - (7)].action), &main_rt.rlist[i_tmp]);
	}
    break;

  case 432:
#line 1749 "cfg.y"
    { yyerror("invalid  route  statement"); }
    break;

  case 433:
#line 1750 "cfg.y"
    { yyerror("invalid  request_route  statement"); }
    break;

  case 434:
#line 1753 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		push((yyvsp[(3) - (4)].action), &failure_rt.rlist[DEFAULT_RT]);
	}
    break;

  case 435:
#line 1762 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		i_tmp=route_get(&failure_rt, (yyvsp[(3) - (7)].strval));
		if (i_tmp==-1){
			yyerror("internal error");
			YYABORT;
		}
		if (failure_rt.rlist[i_tmp]){
			yyerror("duplicate route");
			YYABORT;
		}
		push((yyvsp[(6) - (7)].action), &failure_rt.rlist[i_tmp]);
	}
    break;

  case 436:
#line 1780 "cfg.y"
    { yyerror("invalid failure_route statement"); }
    break;

  case 437:
#line 1784 "cfg.y"
    { routename=NULL; }
    break;

  case 438:
#line 1785 "cfg.y"
    { routename=NULL; }
    break;

  case 439:
#line 1790 "cfg.y"
    {rt=CORE_ONREPLY_ROUTE;}
    break;

  case 440:
#line 1790 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		push((yyvsp[(4) - (5)].action), &onreply_rt.rlist[DEFAULT_RT]);
	}
    break;

  case 441:
#line 1799 "cfg.y"
    { yyerror("invalid onreply_route statement"); }
    break;

  case 442:
#line 1800 "cfg.y"
    { yyerror("invalid onreply_route statement"); }
    break;

  case 443:
#line 1802 "cfg.y"
    {rt=(*(yyvsp[(3) - (4)].strval)=='0' && (yyvsp[(3) - (4)].strval)[1]==0)?CORE_ONREPLY_ROUTE:TM_ONREPLY_ROUTE;}
    break;

  case 444:
#line 1803 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		if (*(yyvsp[(3) - (8)].strval)=='0' && (yyvsp[(3) - (8)].strval)[1]==0){
			/* onreply_route[0] {} is equivalent with onreply_route {}*/
			push((yyvsp[(7) - (8)].action), &onreply_rt.rlist[DEFAULT_RT]);
		}else{
			i_tmp=route_get(&onreply_rt, (yyvsp[(3) - (8)].strval));
			if (i_tmp==-1){
				yyerror("internal error");
				YYABORT;
			}
			if (onreply_rt.rlist[i_tmp]){
				yyerror("duplicate route");
				YYABORT;
			}
			push((yyvsp[(7) - (8)].action), &onreply_rt.rlist[i_tmp]);
		}
	}
    break;

  case 445:
#line 1826 "cfg.y"
    {
		yyerror("invalid onreply_route statement");
	}
    break;

  case 446:
#line 1831 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		push((yyvsp[(3) - (4)].action), &branch_rt.rlist[DEFAULT_RT]);
	}
    break;

  case 447:
#line 1840 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		i_tmp=route_get(&branch_rt, (yyvsp[(3) - (7)].strval));
		if (i_tmp==-1){
			yyerror("internal error");
			YYABORT;
		}
		if (branch_rt.rlist[i_tmp]){
			yyerror("duplicate route");
			YYABORT;
		}
		push((yyvsp[(6) - (7)].action), &branch_rt.rlist[i_tmp]);
	}
    break;

  case 448:
#line 1858 "cfg.y"
    { yyerror("invalid branch_route statement"); }
    break;

  case 449:
#line 1860 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		push((yyvsp[(3) - (4)].action), &onsend_rt.rlist[DEFAULT_RT]);
	}
    break;

  case 450:
#line 1869 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		i_tmp=route_get(&onsend_rt, (yyvsp[(3) - (7)].strval));
		if (i_tmp==-1){
			yyerror("internal error");
			YYABORT;
		}
		if (onsend_rt.rlist[i_tmp]){
			yyerror("duplicate route");
			YYABORT;
		}
		push((yyvsp[(6) - (7)].action), &onsend_rt.rlist[i_tmp]);
	}
    break;

  case 451:
#line 1887 "cfg.y"
    { yyerror("invalid onsend_route statement"); }
    break;

  case 452:
#line 1889 "cfg.y"
    {
	#ifdef SHM_MEM
		if (!shm_initialized() && init_shm()<0) {
			yyerror("Can't initialize shared memory");
			YYABORT;
		}
	#endif /* SHM_MEM */
		i_tmp=route_get(&event_rt, (yyvsp[(3) - (7)].strval));
		if (i_tmp==-1){
			yyerror("internal error");
			YYABORT;
		}
		if (event_rt.rlist[i_tmp]){
			yyerror("duplicate route");
			YYABORT;
		}
		push((yyvsp[(6) - (7)].action), &event_rt.rlist[i_tmp]);
	}
    break;

  case 453:
#line 1908 "cfg.y"
    { yyerror("invalid event_route statement"); }
    break;

  case 454:
#line 1911 "cfg.y"
    { if(pp_subst_add((yyvsp[(2) - (2)].strval))<0) YYERROR; }
    break;

  case 455:
#line 1912 "cfg.y"
    { yyerror("invalid subst preprocess statement"); }
    break;

  case 456:
#line 1913 "cfg.y"
    { if(pp_substdef_add((yyvsp[(2) - (2)].strval), 0)<0) YYERROR; }
    break;

  case 457:
#line 1914 "cfg.y"
    { yyerror("invalid substdef preprocess statement"); }
    break;

  case 458:
#line 1915 "cfg.y"
    { if(pp_substdef_add((yyvsp[(2) - (2)].strval), 1)<0) YYERROR; }
    break;

  case 459:
#line 1916 "cfg.y"
    { yyerror("invalid substdefs preprocess statement"); }
    break;

  case 460:
#line 1938 "cfg.y"
    {(yyval.intval)=EQUAL_OP; }
    break;

  case 461:
#line 1939 "cfg.y"
    {(yyval.intval)=DIFF_OP; }
    break;

  case 462:
#line 1940 "cfg.y"
    {(yyval.intval)=EQUAL_OP; }
    break;

  case 463:
#line 1941 "cfg.y"
    {(yyval.intval)=DIFF_OP; }
    break;

  case 464:
#line 1944 "cfg.y"
    {(yyval.intval)=GT_OP; }
    break;

  case 465:
#line 1945 "cfg.y"
    {(yyval.intval)=LT_OP; }
    break;

  case 466:
#line 1946 "cfg.y"
    {(yyval.intval)=GTE_OP; }
    break;

  case 467:
#line 1947 "cfg.y"
    {(yyval.intval)=LTE_OP; }
    break;

  case 468:
#line 1950 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 469:
#line 1951 "cfg.y"
    {(yyval.intval)=MATCH_OP; }
    break;

  case 470:
#line 1957 "cfg.y"
    {(yyval.intval)=RVE_EQ_OP; }
    break;

  case 471:
#line 1958 "cfg.y"
    {(yyval.intval)=RVE_DIFF_OP; }
    break;

  case 472:
#line 1959 "cfg.y"
    {(yyval.intval)=RVE_IEQ_OP; }
    break;

  case 473:
#line 1960 "cfg.y"
    {(yyval.intval)=RVE_IDIFF_OP; }
    break;

  case 474:
#line 1961 "cfg.y"
    {(yyval.intval)=RVE_STREQ_OP; }
    break;

  case 475:
#line 1962 "cfg.y"
    {(yyval.intval)=RVE_STRDIFF_OP; }
    break;

  case 476:
#line 1963 "cfg.y"
    {(yyval.intval)=RVE_MATCH_OP; }
    break;

  case 477:
#line 1966 "cfg.y"
    {(yyval.intval)=RVE_GT_OP; }
    break;

  case 478:
#line 1967 "cfg.y"
    {(yyval.intval)=RVE_LT_OP; }
    break;

  case 479:
#line 1968 "cfg.y"
    {(yyval.intval)=RVE_GTE_OP; }
    break;

  case 480:
#line 1969 "cfg.y"
    {(yyval.intval)=RVE_LTE_OP; }
    break;

  case 481:
#line 1976 "cfg.y"
    {(yyval.intval)=URI_O;}
    break;

  case 482:
#line 1977 "cfg.y"
    {(yyval.intval)=FROM_URI_O;}
    break;

  case 483:
#line 1978 "cfg.y"
    {(yyval.intval)=TO_URI_O;}
    break;

  case 484:
#line 1985 "cfg.y"
    { (yyval.intval)=SNDPORT_O; }
    break;

  case 485:
#line 1986 "cfg.y"
    { (yyval.intval)=TOPORT_O; }
    break;

  case 486:
#line 1987 "cfg.y"
    { (yyval.intval)=SNDAF_O; }
    break;

  case 487:
#line 1991 "cfg.y"
    { (yyval.intval)=SRCPORT_O; }
    break;

  case 488:
#line 1992 "cfg.y"
    { (yyval.intval)=DSTPORT_O; }
    break;

  case 489:
#line 1993 "cfg.y"
    { (yyval.intval)=AF_O; }
    break;

  case 490:
#line 1994 "cfg.y"
    { (yyval.intval)=MSGLEN_O; }
    break;

  case 492:
#line 2000 "cfg.y"
    { onsend_check("snd_ip"); (yyval.intval)=SNDIP_O; }
    break;

  case 493:
#line 2001 "cfg.y"
    { onsend_check("to_ip");  (yyval.intval)=TOIP_O; }
    break;

  case 494:
#line 2004 "cfg.y"
    { (yyval.intval)=SRCIP_O; }
    break;

  case 495:
#line 2005 "cfg.y"
    { (yyval.intval)=DSTIP_O; }
    break;

  case 497:
#line 2013 "cfg.y"
    {(yyval.expr)= mk_elem((yyvsp[(2) - (3)].intval), METHOD_O, 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 498:
#line 2015 "cfg.y"
    {(yyval.expr) = mk_elem((yyvsp[(2) - (3)].intval), METHOD_O, 0, STRING_ST,(yyvsp[(3) - (3)].strval)); }
    break;

  case 499:
#line 2016 "cfg.y"
    { (yyval.expr)=0; yyerror("string expected"); }
    break;

  case 500:
#line 2018 "cfg.y"
    { (yyval.expr)=0; yyerror("invalid operator,== , !=, or =~ expected"); }
    break;

  case 501:
#line 2020 "cfg.y"
    {(yyval.expr) = mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 502:
#line 2022 "cfg.y"
    {(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, MYSELF_ST, 0); }
    break;

  case 503:
#line 2024 "cfg.y"
    { (yyval.expr)=0; yyerror("string or MYSELF expected"); }
    break;

  case 504:
#line 2026 "cfg.y"
    { (yyval.expr)=0; yyerror("invalid operator, == , != or =~ expected"); }
    break;

  case 505:
#line 2027 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr) ); }
    break;

  case 506:
#line 2029 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr) ); }
    break;

  case 507:
#line 2030 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 508:
#line 2031 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 509:
#line 2032 "cfg.y"
    { (yyval.expr)=0; yyerror("==, !=, <,>, >= or <=  expected"); }
    break;

  case 510:
#line 2034 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), PROTO_O, 0, NUMBER_ST, (void*)(yyvsp[(3) - (3)].intval) ); }
    break;

  case 511:
#line 2036 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), PROTO_O, 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr) ); }
    break;

  case 512:
#line 2038 "cfg.y"
    { (yyval.expr)=0; yyerror("protocol expected (udp, tcp, tls, sctp, ws, or wss)"); }
    break;

  case 513:
#line 2040 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SNDPROTO_O, 0, NUMBER_ST, (void*)(yyvsp[(3) - (3)].intval) ); }
    break;

  case 514:
#line 2042 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SNDPROTO_O, 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr) ); }
    break;

  case 515:
#line 2044 "cfg.y"
    { (yyval.expr)=0; yyerror("protocol expected (udp, tcp, tls, sctp, ws, or wss)"); }
    break;

  case 516:
#line 2045 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, NET_ST, (yyvsp[(3) - (3)].ipnet)); }
    break;

  case 517:
#line 2046 "cfg.y"
    {
			s_tmp.s=0;
			(yyval.expr)=0;
			if (rve_is_constant((yyvsp[(3) - (3)].rv_expr))){
				i_tmp=rve_guess_type((yyvsp[(3) - (3)].rv_expr));
				if (i_tmp==RV_INT)
					yyerror("string expected");
				else if (i_tmp==RV_STR){
					if (((rval_tmp=rval_expr_eval(0, 0, (yyvsp[(3) - (3)].rv_expr)))==0) ||
								(rval_get_str(0, 0, &s_tmp, rval_tmp, 0)<0)){
						rval_destroy(rval_tmp);
						yyerror("bad rvalue expression");
					}else{
						rval_destroy(rval_tmp);
					}
				}else{
					yyerror("BUG: unexpected dynamic type");
				}
			}else{
					/* warn("non constant rvalue in ip comparison") */;
			}
			if (s_tmp.s){
				ip_tmp=str2ip(&s_tmp);
				if (ip_tmp==0)
					ip_tmp=str2ip6(&s_tmp);
				pkg_free(s_tmp.s);
				if (ip_tmp) {
					(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, NET_ST, 
								mk_new_net_bitlen(ip_tmp, ip_tmp->len*8) );
				} else {
					(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr));
				}
			}else{
				(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, RVE_ST, (yyvsp[(3) - (3)].rv_expr));
			}
		}
    break;

  case 518:
#line 2083 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, STRING_ST, (yyvsp[(3) - (3)].strval)); }
    break;

  case 519:
#line 2085 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, MYSELF_ST, 0); }
    break;

  case 520:
#line 2087 "cfg.y"
    { (yyval.expr)=0; yyerror( "ip address or hostname expected" ); }
    break;

  case 521:
#line 2089 "cfg.y"
    { (yyval.expr)=0; yyerror("invalid operator, ==, != or =~ expected");}
    break;

  case 522:
#line 2092 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval), 0, MYSELF_ST, 0); }
    break;

  case 523:
#line 2094 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval), 0, MYSELF_ST, 0); }
    break;

  case 524:
#line 2096 "cfg.y"
    { (yyval.expr)=0; yyerror(" URI, SRCIP or DSTIP expected"); }
    break;

  case 525:
#line 2097 "cfg.y"
    { (yyval.expr)=0; yyerror ("invalid operator, == or != expected"); }
    break;

  case 526:
#line 2101 "cfg.y"
    { (yyval.ipnet)=mk_new_net((yyvsp[(1) - (3)].ipaddr), (yyvsp[(3) - (3)].ipaddr)); }
    break;

  case 527:
#line 2102 "cfg.y"
    {
		if (((yyvsp[(3) - (3)].intval)<0) || ((yyvsp[(3) - (3)].intval)>(yyvsp[(1) - (3)].ipaddr)->len*8)) {
			yyerror("invalid bit number in netmask");
			(yyval.ipnet)=0;
		} else {
			(yyval.ipnet)=mk_new_net_bitlen((yyvsp[(1) - (3)].ipaddr), (yyvsp[(3) - (3)].intval));
		/*
			$$=mk_new_net($1, htonl( ($3)?~( (1<<(32-$3))-1 ):0 ) );
		*/
		}
	}
    break;

  case 528:
#line 2113 "cfg.y"
    { (yyval.ipnet)=mk_new_net_bitlen((yyvsp[(1) - (1)].ipaddr), (yyvsp[(1) - (1)].ipaddr)->len*8); }
    break;

  case 529:
#line 2114 "cfg.y"
    { (yyval.ipnet)=0; yyerror("netmask (eg:255.0.0.0 or 8) expected"); }
    break;

  case 530:
#line 2118 "cfg.y"
    { (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 531:
#line 2119 "cfg.y"
    {
		if ((yyvsp[(1) - (3)].strval)){
			(yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))+1);
			if ((yyval.strval)==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: memory allocation"
							" failure while parsing host\n");
			} else {
				memcpy((yyval.strval), (yyvsp[(1) - (3)].strval), strlen((yyvsp[(1) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))]='.';
				memcpy((yyval.strval)+strlen((yyvsp[(1) - (3)].strval))+1, (yyvsp[(3) - (3)].strval), strlen((yyvsp[(3) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))]=0;
			}
			pkg_free((yyvsp[(1) - (3)].strval));
		}
		if ((yyvsp[(3) - (3)].strval)) pkg_free((yyvsp[(3) - (3)].strval));
	}
    break;

  case 532:
#line 2135 "cfg.y"
    {
		if ((yyvsp[(1) - (3)].strval)){
			(yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))+1);
			if ((yyval.strval)==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: memory allocation"
							" failure while parsing host\n");
			} else {
				memcpy((yyval.strval), (yyvsp[(1) - (3)].strval), strlen((yyvsp[(1) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))]='-';
				memcpy((yyval.strval)+strlen((yyvsp[(1) - (3)].strval))+1, (yyvsp[(3) - (3)].strval), strlen((yyvsp[(3) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))]=0;
			}
			pkg_free((yyvsp[(1) - (3)].strval));
		}
		if ((yyvsp[(3) - (3)].strval)) pkg_free((yyvsp[(3) - (3)].strval));
	}
    break;

  case 533:
#line 2151 "cfg.y"
    { (yyval.strval)=0; pkg_free((yyvsp[(1) - (3)].strval)); yyerror("invalid hostname"); }
    break;

  case 534:
#line 2152 "cfg.y"
    { (yyval.strval)=0; pkg_free((yyvsp[(1) - (3)].strval)); yyerror("invalid hostname"); }
    break;

  case 537:
#line 2157 "cfg.y"
    {
			/* get string version */
			(yyval.strval)=pkg_malloc(strlen(yy_number_str)+1);
			if ((yyval.strval))
				strcpy((yyval.strval), yy_number_str);
		}
    break;

  case 538:
#line 2166 "cfg.y"
    { (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 539:
#line 2167 "cfg.y"
    {
		if ((yyvsp[(1) - (3)].strval)){
			(yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))+1);
			if ((yyval.strval)==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: memory allocation"
							" failure while parsing host/interface name\n");
			} else {
				memcpy((yyval.strval), (yyvsp[(1) - (3)].strval), strlen((yyvsp[(1) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))]='.';
				memcpy((yyval.strval)+strlen((yyvsp[(1) - (3)].strval))+1, (yyvsp[(3) - (3)].strval), strlen((yyvsp[(3) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))]=0;
			}
			pkg_free((yyvsp[(1) - (3)].strval));
		}
		if ((yyvsp[(3) - (3)].strval)) pkg_free((yyvsp[(3) - (3)].strval));
	}
    break;

  case 540:
#line 2183 "cfg.y"
    {
		if ((yyvsp[(1) - (3)].strval)){
			(yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))+1);
			if ((yyval.strval)==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: memory allocation"
							" failure while parsing host/interface name\n");
			} else {
				memcpy((yyval.strval), (yyvsp[(1) - (3)].strval), strlen((yyvsp[(1) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))]='-';
				memcpy((yyval.strval)+strlen((yyvsp[(1) - (3)].strval))+1, (yyvsp[(3) - (3)].strval), strlen((yyvsp[(3) - (3)].strval)));
				(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))]=0;
			}
			pkg_free((yyvsp[(1) - (3)].strval));
		}
		if ((yyvsp[(3) - (3)].strval)) pkg_free((yyvsp[(3) - (3)].strval));
	}
    break;

  case 541:
#line 2199 "cfg.y"
    { (yyval.strval)=0; pkg_free((yyvsp[(1) - (3)].strval));
								yyerror("invalid host or interface name"); }
    break;

  case 542:
#line 2201 "cfg.y"
    { (yyval.strval)=0; pkg_free((yyvsp[(1) - (3)].strval));
								yyerror("invalid host or interface name"); }
    break;

  case 543:
#line 2208 "cfg.y"
    {
		/* check if allowed */
		if ((yyvsp[(1) - (1)].action) && rt==ONSEND_ROUTE) {
			switch((yyvsp[(1) - (1)].action)->type) {
				case DROP_T:
				case LOG_T:
				case SETFLAG_T:
				case RESETFLAG_T:
				case ISFLAGSET_T:
				case IF_T:
				case MODULE0_T:
				case MODULE1_T:
				case MODULE2_T:
				case MODULE3_T:
				case MODULE4_T:
				case MODULE5_T:
				case MODULE6_T:
				case MODULEX_T:
				case SET_FWD_NO_CONNECT_T:
				case SET_RPL_NO_CONNECT_T:
				case SET_FWD_CLOSE_T:
				case SET_RPL_CLOSE_T:
					(yyval.action)=(yyvsp[(1) - (1)].action);
					break;
				default:
					(yyval.action)=0;
					yyerror("command not allowed in onsend_route\n");
			}
		} else {
			(yyval.action)=(yyvsp[(1) - (1)].action);
		}
	}
    break;

  case 544:
#line 2250 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 545:
#line 2251 "cfg.y"
    { (yyval.action)=(yyvsp[(2) - (3)].action); }
    break;

  case 546:
#line 2254 "cfg.y"
    {(yyval.action)=append_action((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 547:
#line 2255 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 548:
#line 2256 "cfg.y"
    { (yyval.action)=0; yyerror("bad command"); }
    break;

  case 549:
#line 2259 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (2)].action);}
    break;

  case 550:
#line 2260 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 551:
#line 2261 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 552:
#line 2262 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 553:
#line 2263 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (2)].action); }
    break;

  case 554:
#line 2264 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (2)].action);}
    break;

  case 555:
#line 2265 "cfg.y"
    {(yyval.action)=0;}
    break;

  case 556:
#line 2266 "cfg.y"
    { (yyval.action)=0; yyerror("bad command: missing ';'?"); }
    break;

  case 557:
#line 2269 "cfg.y"
    {
		if ((yyvsp[(2) - (3)].rv_expr) && rval_expr_int_check((yyvsp[(2) - (3)].rv_expr))>=0){
			warn_ct_rve((yyvsp[(2) - (3)].rv_expr), "if");
			(yyval.action)=mk_action( IF_T, 3, RVE_ST, (yyvsp[(2) - (3)].rv_expr), ACTIONS_ST, (yyvsp[(3) - (3)].action), NOSUBTYPE, 0);
			set_cfg_pos((yyval.action));
		}else
			YYERROR;
	}
    break;

  case 558:
#line 2277 "cfg.y"
    { 
		if ((yyvsp[(2) - (5)].rv_expr) && rval_expr_int_check((yyvsp[(2) - (5)].rv_expr))>=0){
			warn_ct_rve((yyvsp[(2) - (5)].rv_expr), "if");
			(yyval.action)=mk_action( IF_T, 3, RVE_ST, (yyvsp[(2) - (5)].rv_expr), ACTIONS_ST, (yyvsp[(3) - (5)].action), ACTIONS_ST, (yyvsp[(5) - (5)].action));
			set_cfg_pos((yyval.action));
		}else
			YYERROR;
	}
    break;

  case 559:
#line 2287 "cfg.y"
    {
			(yyval.rv_expr)=0;
			if ((yyvsp[(1) - (1)].rv_expr) && !rve_is_constant((yyvsp[(1) - (1)].rv_expr))){
				yyerror("constant expected");
				YYERROR;
			/*
			} else if ($1 &&
						!rve_check_type((enum rval_type*)&i_tmp, $1, 0, 0 ,0)){
				yyerror("invalid expression (bad type)");
			}else if ($1 && i_tmp!=RV_INT){
				yyerror("invalid expression type, int expected\n");
			*/
			}else
				(yyval.rv_expr)=(yyvsp[(1) - (1)].rv_expr);
		}
    break;

  case 560:
#line 2304 "cfg.y"
    {
		(yyval.case_stms)=0;
		if ((yyvsp[(2) - (4)].rv_expr)==0) { yyerror ("bad case label"); YYERROR; }
		else if ((((yyval.case_stms)=mk_case_stm((yyvsp[(2) - (4)].rv_expr), 0, (yyvsp[(4) - (4)].action), &i_tmp))==0) && (i_tmp==-10)){
				YYABORT;
		}
	}
    break;

  case 561:
#line 2311 "cfg.y"
    {
		(yyval.case_stms)=0;
		if ((yyvsp[(3) - (5)].rv_expr)==0) { yyerror ("bad case label"); YYERROR; }
		else if ((((yyval.case_stms)=mk_case_stm((yyvsp[(3) - (5)].rv_expr), 1, (yyvsp[(5) - (5)].action), &i_tmp))==0) && (i_tmp==-10)){
				YYABORT;
		}
	}
    break;

  case 562:
#line 2318 "cfg.y"
    {
		(yyval.case_stms)=0;
		if ((yyvsp[(2) - (3)].rv_expr)==0) { yyerror ("bad case label"); YYERROR; }
		else if ((((yyval.case_stms)=mk_case_stm((yyvsp[(2) - (3)].rv_expr), 0, 0, &i_tmp))==0) && (i_tmp==-10)){
				YYABORT;
		}
	}
    break;

  case 563:
#line 2325 "cfg.y"
    {
		(yyval.case_stms)=0;
		if ((yyvsp[(3) - (4)].rv_expr)==0) { yyerror ("bad regex case label"); YYERROR; }
		else if ((((yyval.case_stms)=mk_case_stm((yyvsp[(3) - (4)].rv_expr), 1, 0, &i_tmp))==0) && (i_tmp==-10)){
				YYABORT;
		}
	}
    break;

  case 564:
#line 2332 "cfg.y"
    {
		if ((((yyval.case_stms)=mk_case_stm(0, 0, (yyvsp[(3) - (3)].action), &i_tmp))==0) && (i_tmp=-10)){
				YYABORT;
		}
	}
    break;

  case 565:
#line 2337 "cfg.y"
    {
		if ((((yyval.case_stms)=mk_case_stm(0, 0, 0, &i_tmp))==0) && (i_tmp==-10)){
				YYABORT;
		}
	}
    break;

  case 566:
#line 2342 "cfg.y"
    { (yyval.case_stms)=0; yyerror("bad case label"); }
    break;

  case 567:
#line 2343 "cfg.y"
    { (yyval.case_stms)=0; yyerror("bad case regex label"); }
    break;

  case 568:
#line 2344 "cfg.y"
    { (yyval.case_stms)=0; yyerror("bad case label"); }
    break;

  case 569:
#line 2345 "cfg.y"
    { (yyval.case_stms)=0; yyerror("bad case regex label"); }
    break;

  case 570:
#line 2346 "cfg.y"
    { (yyval.case_stms)=0; yyerror ("bad case body"); }
    break;

  case 571:
#line 2349 "cfg.y"
    {
		(yyval.case_stms)=(yyvsp[(1) - (2)].case_stms);
		if ((yyvsp[(2) - (2)].case_stms)==0) yyerror ("bad case");
		if ((yyval.case_stms)){
			*((yyval.case_stms)->append)=(yyvsp[(2) - (2)].case_stms);
			if (*((yyval.case_stms)->append)!=0)
				(yyval.case_stms)->append=&((*((yyval.case_stms)->append))->next);
		}
	}
    break;

  case 572:
#line 2358 "cfg.y"
    {
		(yyval.case_stms)=(yyvsp[(1) - (1)].case_stms);
		if ((yyvsp[(1) - (1)].case_stms)==0) yyerror ("bad case");
		else (yyval.case_stms)->append=&((yyval.case_stms)->next);
	}
    break;

  case 573:
#line 2365 "cfg.y"
    { 
		(yyval.action)=0;
		if ((yyvsp[(2) - (5)].rv_expr)==0){
			yyerror("bad expression in switch(...)");
			YYERROR;
		}else if ((yyvsp[(4) - (5)].case_stms)==0){
			yyerror ("bad switch body");
			YYERROR;
		}else if (case_check_default((yyvsp[(4) - (5)].case_stms))!=0){
			yyerror_at(&(yyvsp[(2) - (5)].rv_expr)->fpos, "bad switch(): too many "
							"\"default:\" labels\n");
			YYERROR;
		}else if (case_check_type((yyvsp[(4) - (5)].case_stms))!=0){
			yyerror_at(&(yyvsp[(2) - (5)].rv_expr)->fpos, "bad switch(): mixed integer and"
							" string/RE cases not allowed\n");
			YYERROR;
		}else{
			(yyval.action)=mk_action(SWITCH_T, 2, RVE_ST, (yyvsp[(2) - (5)].rv_expr), CASE_ST, (yyvsp[(4) - (5)].case_stms));
			if ((yyval.action)==0) {
				yyerror("internal error");
				YYABORT;
			}
			set_cfg_pos((yyval.action));
		}
	}
    break;

  case 574:
#line 2390 "cfg.y"
    {
		(yyval.action)=0;
		warn("empty switch()");
		if ((yyvsp[(2) - (4)].rv_expr)==0){
			yyerror("bad expression in switch(...)");
			YYERROR;
		}else{
			/* it might have sideffects, so leave it for the optimizer */
			(yyval.action)=mk_action(SWITCH_T, 2, RVE_ST, (yyvsp[(2) - (4)].rv_expr), CASE_ST, 0);
			if ((yyval.action)==0) {
				yyerror("internal error");
				YYABORT;
			}
			set_cfg_pos((yyval.action));
		}
	}
    break;

  case 575:
#line 2406 "cfg.y"
    { (yyval.action)=0; yyerror ("bad expression in switch(...)"); }
    break;

  case 576:
#line 2408 "cfg.y"
    {(yyval.action)=0; yyerror ("bad switch body"); }
    break;

  case 577:
#line 2412 "cfg.y"
    {
		if ((yyvsp[(2) - (3)].rv_expr) && rval_expr_int_check((yyvsp[(2) - (3)].rv_expr))>=0){
			warn_ct_rve((yyvsp[(2) - (3)].rv_expr), "while");
			(yyval.action)=mk_action( WHILE_T, 2, RVE_ST, (yyvsp[(2) - (3)].rv_expr), ACTIONS_ST, (yyvsp[(3) - (3)].action));
			set_cfg_pos((yyval.action));
		}else{
			yyerror_at(&(yyvsp[(2) - (3)].rv_expr)->fpos, "bad while(...) expression");
			YYERROR;
		}
	}
    break;

  case 578:
#line 2431 "cfg.y"
    {
		if (sel.n >= MAX_SELECT_PARAMS-1) {
			yyerror("Select identifier too long\n");
		}
		sel.params[sel.n].type = SEL_PARAM_STR;
		sel.params[sel.n].v.s.s = (yyvsp[(1) - (1)].strval);
		sel.params[sel.n].v.s.len = strlen((yyvsp[(1) - (1)].strval));
		sel.n++;
	}
    break;

  case 579:
#line 2440 "cfg.y"
    {
		if (sel.n >= MAX_SELECT_PARAMS-2) {
			yyerror("Select identifier too long\n");
		}
		sel.params[sel.n].type = SEL_PARAM_STR;
		sel.params[sel.n].v.s.s = (yyvsp[(1) - (4)].strval);
		sel.params[sel.n].v.s.len = strlen((yyvsp[(1) - (4)].strval));
		sel.n++;
		sel.params[sel.n].type = SEL_PARAM_INT;
		sel.params[sel.n].v.i = (yyvsp[(3) - (4)].intval);
		sel.n++;
	}
    break;

  case 580:
#line 2452 "cfg.y"
    {
		if (sel.n >= MAX_SELECT_PARAMS-2) {
			yyerror("Select identifier too long\n");
		}
		sel.params[sel.n].type = SEL_PARAM_STR;
		sel.params[sel.n].v.s.s = (yyvsp[(1) - (4)].strval);
		sel.params[sel.n].v.s.len = strlen((yyvsp[(1) - (4)].strval));
		sel.n++;
		sel.params[sel.n].type = SEL_PARAM_STR;
		sel.params[sel.n].v.s.s = (yyvsp[(3) - (4)].strval);
		sel.params[sel.n].v.s.len = strlen((yyvsp[(3) - (4)].strval));
		sel.n++;
	}
    break;

  case 583:
#line 2471 "cfg.y"
    { sel.n = 0; sel.f[0] = 0; }
    break;

  case 584:
#line 2471 "cfg.y"
    {
		sel_ptr = (select_t*)pkg_malloc(sizeof(select_t));
		if (!sel_ptr) {
			yyerror("No memory left to allocate select structure\n");
		}
		memcpy(sel_ptr, &sel, sizeof(select_t));
		(yyval.select) = sel_ptr;
	}
    break;

  case 585:
#line 2481 "cfg.y"
    { s_attr->type |= AVP_TRACK_FROM; }
    break;

  case 586:
#line 2482 "cfg.y"
    { s_attr->type |= AVP_TRACK_TO; }
    break;

  case 587:
#line 2483 "cfg.y"
    { s_attr->type |= AVP_TRACK_FROM | AVP_CLASS_URI; }
    break;

  case 588:
#line 2484 "cfg.y"
    { s_attr->type |= AVP_TRACK_TO | AVP_CLASS_URI; }
    break;

  case 589:
#line 2485 "cfg.y"
    { s_attr->type |= AVP_TRACK_FROM | AVP_CLASS_USER; }
    break;

  case 590:
#line 2486 "cfg.y"
    { s_attr->type |= AVP_TRACK_TO | AVP_CLASS_USER; }
    break;

  case 591:
#line 2487 "cfg.y"
    { s_attr->type |= AVP_TRACK_FROM | AVP_CLASS_DOMAIN; }
    break;

  case 592:
#line 2488 "cfg.y"
    { s_attr->type |= AVP_TRACK_TO | AVP_CLASS_DOMAIN; }
    break;

  case 593:
#line 2489 "cfg.y"
    { s_attr->type |= AVP_TRACK_ALL | AVP_CLASS_GLOBAL; }
    break;

  case 594:
#line 2492 "cfg.y"
    { s_attr->type |= AVP_NAME_STR; s_attr->name.s.s = (yyvsp[(1) - (1)].strval); s_attr->name.s.len = strlen ((yyvsp[(1) - (1)].strval)); }
    break;

  case 597:
#line 2499 "cfg.y"
    {
		s_attr = (struct avp_spec*)pkg_malloc(sizeof(struct avp_spec));
		if (!s_attr) { yyerror("No memory left"); YYABORT; }
		else s_attr->type = 0;
	}
    break;

  case 598:
#line 2506 "cfg.y"
    { (yyval.attr) = s_attr; }
    break;

  case 599:
#line 2509 "cfg.y"
    {
		s_attr->type|= (AVP_NAME_STR | ((yyvsp[(4) - (5)].intval)<0?AVP_INDEX_BACKWARD:AVP_INDEX_FORWARD));
		s_attr->index = ((yyvsp[(4) - (5)].intval)<0?-(yyvsp[(4) - (5)].intval):(yyvsp[(4) - (5)].intval));
		(yyval.attr) = s_attr;
	}
    break;

  case 600:
#line 2516 "cfg.y"
    {
		s_attr->type|= AVP_INDEX_ALL;
		(yyval.attr) = s_attr;
	}
    break;

  case 607:
#line 2538 "cfg.y"
    {
		if ((yyvsp[(1) - (1)].lval)->type==LV_AVP){
			s_attr = pkg_malloc(sizeof(struct avp_spec));
			if (!s_attr) { yyerror("No memory left"); YYABORT; }
			else{
				*s_attr=(yyvsp[(1) - (1)].lval)->lv.avps;
			}
			(yyval.attr)=s_attr;
		}else
			(yyval.attr)=0; /* not an avp, a pvar */
		pkg_free((yyvsp[(1) - (1)].lval));
	}
    break;

  case 608:
#line 2550 "cfg.y"
    {
		avp_spec_t *avp_spec;
		str s;
		int type, idx;
		avp_spec = pkg_malloc(sizeof(*avp_spec));
		if (!avp_spec) {
			yyerror("Not enough memory");
			YYABORT;
		}
		s.s = (yyvsp[(1) - (1)].strval);
		if (s.s[0] == '$')
			s.s++;
		s.len = strlen(s.s);
		if (parse_avp_name(&s, &type, &avp_spec->name, &idx)) {
			yyerror("error when parsing AVP");
			pkg_free(avp_spec);
			YYABORT;
		}
		avp_spec->type = type;
		avp_spec->index = idx;
		(yyval.attr) = avp_spec;
	}
    break;

  case 609:
#line 2574 "cfg.y"
    {
			s_tmp.s=(yyvsp[(1) - (1)].strval); s_tmp.len=strlen((yyvsp[(1) - (1)].strval));
			pv_spec=pv_cache_get(&s_tmp);
			if (!pv_spec) {
				yyerror("Can't get from cache: %s", (yyvsp[(1) - (1)].strval));
				YYABORT;
			}
			(yyval.pvar)=pv_spec;
		}
    break;

  case 610:
#line 2585 "cfg.y"
    {
				lval_tmp=pkg_malloc(sizeof(*lval_tmp));
				if (!lval_tmp) {
					yyerror("Not enough memory");
					YYABORT;
				}
				memset(lval_tmp, 0, sizeof(*lval_tmp));
				s_tmp.s=(yyvsp[(1) - (1)].strval); s_tmp.len=strlen(s_tmp.s);
				lval_tmp->lv.pvs = pv_cache_get(&s_tmp);
				if (lval_tmp->lv.pvs==NULL){
					lval_tmp->lv.avps.type|= AVP_NAME_STR;
					lval_tmp->lv.avps.name.s.s = s_tmp.s+1;
					lval_tmp->lv.avps.name.s.len = s_tmp.len-1;
					lval_tmp->type=LV_AVP;
				}else{
					lval_tmp->type=LV_PVAR;
				}
				(yyval.lval) = lval_tmp;
				DBG("parsed ambigous avp/pvar \"%.*s\" to %d\n",
							s_tmp.len, s_tmp.s, lval_tmp->type);
			}
    break;

  case 611:
#line 2616 "cfg.y"
    { (yyval.intval) = ASSIGN_T; }
    break;

  case 612:
#line 2620 "cfg.y"
    {
					lval_tmp=pkg_malloc(sizeof(*lval_tmp));
					if (!lval_tmp) {
						yyerror("Not enough memory");
						YYABORT;
					}
					lval_tmp->type=LV_AVP; lval_tmp->lv.avps=*(yyvsp[(1) - (1)].attr);
					pkg_free((yyvsp[(1) - (1)].attr)); /* free the avp spec we just copied */
					(yyval.lval)=lval_tmp;
				}
    break;

  case 613:
#line 2630 "cfg.y"
    {
					if (!pv_is_w((yyvsp[(1) - (1)].pvar)))
						yyerror("read only pvar in assignment left side");
					if ((yyvsp[(1) - (1)].pvar)->trans!=0)
						yyerror("pvar with transformations in assignment"
								" left side");
					lval_tmp=pkg_malloc(sizeof(*lval_tmp));
					if (!lval_tmp) {
						yyerror("Not enough memory");
						YYABORT;
					}
					lval_tmp->type=LV_PVAR; lval_tmp->lv.pvs=(yyvsp[(1) - (1)].pvar);
					(yyval.lval)=lval_tmp;
				}
    break;

  case 614:
#line 2644 "cfg.y"
    {
					if (((yyvsp[(1) - (1)].lval))->type==LV_PVAR){
						if (!pv_is_w((yyvsp[(1) - (1)].lval)->lv.pvs))
							yyerror("read only pvar in assignment left side");
						if ((yyvsp[(1) - (1)].lval)->lv.pvs->trans!=0)
							yyerror("pvar with transformations in assignment"
									" left side");
					}
					(yyval.lval)=(yyvsp[(1) - (1)].lval);
				}
    break;

  case 615:
#line 2656 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_INT, (void*)(yyvsp[(1) - (1)].intval)); }
    break;

  case 616:
#line 2657 "cfg.y"
    {	s_tmp.s=(yyvsp[(1) - (1)].strval); s_tmp.len=strlen((yyvsp[(1) - (1)].strval));
							(yyval.rv_expr)=mk_rve_rval(RV_STR, &s_tmp); }
    break;

  case 617:
#line 2659 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_AVP, (yyvsp[(1) - (1)].attr)); pkg_free((yyvsp[(1) - (1)].attr)); }
    break;

  case 618:
#line 2660 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_PVAR, (yyvsp[(1) - (1)].pvar)); }
    break;

  case 619:
#line 2661 "cfg.y"
    {
							switch((yyvsp[(1) - (1)].lval)->type){
								case LV_AVP:
									(yyval.rv_expr)=mk_rve_rval(RV_AVP, &(yyvsp[(1) - (1)].lval)->lv.avps);
									break;
								case LV_PVAR:
									(yyval.rv_expr)=mk_rve_rval(RV_PVAR, (yyvsp[(1) - (1)].lval)->lv.pvs);
									break;
								default:
									yyerror("BUG: invalid lvalue type ");
									YYABORT;
							}
							pkg_free((yyvsp[(1) - (1)].lval)); /* not needed anymore */
						}
    break;

  case 620:
#line 2675 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_SEL, (yyvsp[(1) - (1)].select)); pkg_free((yyvsp[(1) - (1)].select)); }
    break;

  case 621:
#line 2676 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_ACTION_ST, (yyvsp[(1) - (1)].action)); }
    break;

  case 622:
#line 2677 "cfg.y"
    { (yyval.rv_expr)=mk_rve_rval(RV_BEXPR, (yyvsp[(1) - (1)].expr)); }
    break;

  case 623:
#line 2678 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_ACTION_ST, (yyvsp[(2) - (3)].action)); }
    break;

  case 624:
#line 2679 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad command block"); }
    break;

  case 625:
#line 2680 "cfg.y"
    {(yyval.rv_expr)=mk_rve_rval(RV_ACTION_ST, (yyvsp[(2) - (3)].action)); }
    break;

  case 626:
#line 2681 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 627:
#line 2685 "cfg.y"
    { (yyval.intval)=RVE_LNOT_OP; }
    break;

  case 628:
#line 2686 "cfg.y"
    { (yyval.intval)=RVE_BNOT_OP; }
    break;

  case 629:
#line 2687 "cfg.y"
    { (yyval.intval)=RVE_UMINUS_OP; }
    break;

  case 630:
#line 2700 "cfg.y"
    { (yyval.rv_expr)=(yyvsp[(1) - (1)].rv_expr);
										if ((yyval.rv_expr)==0){
											/*yyerror("out of memory\n");*/
											YYERROR;
										}
									}
    break;

  case 631:
#line 2706 "cfg.y"
    {(yyval.rv_expr)=mk_rve1((yyvsp[(1) - (2)].intval), (yyvsp[(2) - (2)].rv_expr)); }
    break;

  case 632:
#line 2707 "cfg.y"
    {(yyval.rv_expr)=mk_rve1(RVE_INT_OP, (yyvsp[(2) - (2)].rv_expr)); }
    break;

  case 633:
#line 2708 "cfg.y"
    {(yyval.rv_expr)=mk_rve1(RVE_STR_OP, (yyvsp[(2) - (2)].rv_expr)); }
    break;

  case 634:
#line 2709 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_PLUS_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 635:
#line 2710 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_MINUS_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 636:
#line 2711 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_MUL_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 637:
#line 2712 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_DIV_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 638:
#line 2713 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_MOD_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 639:
#line 2714 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_BOR_OP, (yyvsp[(1) - (3)].rv_expr),  (yyvsp[(3) - (3)].rv_expr)); }
    break;

  case 640:
#line 2715 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_BAND_OP, (yyvsp[(1) - (3)].rv_expr),  (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 641:
#line 2716 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_BXOR_OP, (yyvsp[(1) - (3)].rv_expr),  (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 642:
#line 2717 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_BLSHIFT_OP, (yyvsp[(1) - (3)].rv_expr),  (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 643:
#line 2718 "cfg.y"
    {(yyval.rv_expr)=mk_rve2(RVE_BRSHIFT_OP, (yyvsp[(1) - (3)].rv_expr),  (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 644:
#line 2719 "cfg.y"
    { (yyval.rv_expr)=mk_rve2( (yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 645:
#line 2720 "cfg.y"
    {
			/* comparing with $null => treat as defined or !defined */
			if((yyvsp[(3) - (3)].rv_expr)->op==RVE_RVAL_OP && (yyvsp[(3) - (3)].rv_expr)->left.rval.type==RV_PVAR
					&& (yyvsp[(3) - (3)].rv_expr)->left.rval.v.pvs.type==PVT_NULL) {
				if((yyvsp[(2) - (3)].intval)==RVE_DIFF_OP || (yyvsp[(2) - (3)].intval)==RVE_IDIFF_OP
						|| (yyvsp[(2) - (3)].intval)==RVE_STRDIFF_OP) {
					DBG("comparison with $null switched to notdefined operator\n");
					(yyval.rv_expr)=mk_rve1(RVE_DEFINED_OP, (yyvsp[(1) - (3)].rv_expr));
				} else {
					DBG("comparison with $null switched to defined operator\n");
					(yyval.rv_expr)=mk_rve1(RVE_NOTDEFINED_OP, (yyvsp[(1) - (3)].rv_expr));
				}
				/* free rve struct for $null */
				rve_destroy((yyvsp[(3) - (3)].rv_expr));
			} else {
				(yyval.rv_expr)=mk_rve2((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr));
			}
		}
    break;

  case 646:
#line 2738 "cfg.y"
    { (yyval.rv_expr)=mk_rve2(RVE_LAND_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 647:
#line 2739 "cfg.y"
    { (yyval.rv_expr)=mk_rve2(RVE_LOR_OP, (yyvsp[(1) - (3)].rv_expr), (yyvsp[(3) - (3)].rv_expr));}
    break;

  case 648:
#line 2740 "cfg.y"
    { (yyval.rv_expr)=(yyvsp[(2) - (3)].rv_expr);}
    break;

  case 649:
#line 2741 "cfg.y"
    { (yyval.rv_expr)=mk_rve1(RVE_STRLEN_OP, (yyvsp[(3) - (4)].rv_expr));}
    break;

  case 650:
#line 2742 "cfg.y"
    {(yyval.rv_expr)=mk_rve1(RVE_STREMPTY_OP, (yyvsp[(3) - (4)].rv_expr));}
    break;

  case 651:
#line 2743 "cfg.y"
    { (yyval.rv_expr)=mk_rve1(RVE_DEFINED_OP, (yyvsp[(2) - (2)].rv_expr));}
    break;

  case 652:
#line 2744 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 653:
#line 2745 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 654:
#line 2746 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 655:
#line 2747 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 656:
#line 2748 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 657:
#line 2749 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 658:
#line 2750 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 659:
#line 2751 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 660:
#line 2752 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 661:
#line 2753 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 662:
#line 2755 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 663:
#line 2757 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 664:
#line 2758 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 665:
#line 2759 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 666:
#line 2760 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 667:
#line 2761 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 668:
#line 2762 "cfg.y"
    { (yyval.rv_expr)=0; yyerror("bad expression"); }
    break;

  case 669:
#line 2765 "cfg.y"
    { (yyval.action)=mk_action((yyvsp[(2) - (3)].intval), 2, LVAL_ST, (yyvsp[(1) - (3)].lval), 
														 	  RVE_ST, (yyvsp[(3) - (3)].rv_expr));
											set_cfg_pos((yyval.action));
										}
    break;

  case 670:
#line 2783 "cfg.y"
    { (yyval.intval) = 1; }
    break;

  case 671:
#line 2784 "cfg.y"
    { (yyval.intval) = 0; }
    break;

  case 672:
#line 2785 "cfg.y"
    { (yyval.intval) = -1; }
    break;

  case 673:
#line 2788 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 674:
#line 2789 "cfg.y"
    { (yyval.action)=mk_action(	FORWARD_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 675:
#line 2790 "cfg.y"
    { (yyval.action)=mk_action(	FORWARD_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 676:
#line 2791 "cfg.y"
    { (yyval.action)=mk_action(	FORWARD_T, 2, IP_ST, (void*)(yyvsp[(3) - (4)].ipaddr), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 677:
#line 2792 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 678:
#line 2793 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 679:
#line 2794 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_T, 2, IP_ST, (void*)(yyvsp[(3) - (6)].ipaddr), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 680:
#line 2795 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 681:
#line 2796 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_T, 2, URIHOST_ST, 0, NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 682:
#line 2797 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_T, 2, URIHOST_ST, 0, NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 683:
#line 2798 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 684:
#line 2799 "cfg.y"
    { (yyval.action)=0; yyerror("bad forward argument"); }
    break;

  case 685:
#line 2800 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 686:
#line 2801 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 687:
#line 2802 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, IP_ST, (void*)(yyvsp[(3) - (4)].ipaddr), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 688:
#line 2803 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 689:
#line 2804 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_UDP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 690:
#line 2805 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, IP_ST, (void*)(yyvsp[(3) - (6)].ipaddr), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 691:
#line 2806 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_UDP_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 692:
#line 2807 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, URIHOST_ST, 0, NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 693:
#line 2808 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_UDP_T, 2, URIHOST_ST, 0, NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 694:
#line 2809 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 695:
#line 2810 "cfg.y"
    { (yyval.action)=0; yyerror("bad forward_udp argument"); }
    break;

  case 696:
#line 2811 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 697:
#line 2812 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 698:
#line 2813 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, IP_ST, (void*)(yyvsp[(3) - (4)].ipaddr), NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 699:
#line 2814 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 700:
#line 2815 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_TCP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 701:
#line 2816 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, IP_ST, (void*)(yyvsp[(3) - (6)].ipaddr), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 702:
#line 2817 "cfg.y"
    {(yyval.action)=mk_action(FORWARD_TCP_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 703:
#line 2818 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, URIHOST_ST, 0, NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 704:
#line 2819 "cfg.y"
    { (yyval.action)=mk_action(FORWARD_TCP_T, 2, URIHOST_ST, 0, NUMBER_ST, 0); set_cfg_pos((yyval.action)); }
    break;

  case 705:
#line 2820 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 706:
#line 2821 "cfg.y"
    { (yyval.action)=0; yyerror("bad forward_tcp argument"); }
    break;

  case 707:
#line 2822 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 708:
#line 2830 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 709:
#line 2838 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, IP_ST, (void*)(yyvsp[(3) - (4)].ipaddr), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 710:
#line 2846 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 711:
#line 2854 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 712:
#line 2862 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, IP_ST, (void*)(yyvsp[(3) - (6)].ipaddr), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
					}
    break;

  case 713:
#line 2870 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 714:
#line 2878 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, URIHOST_ST, 0, NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 715:
#line 2886 "cfg.y"
    {
		#ifdef USE_TLS
			(yyval.action)=mk_action(FORWARD_TLS_T, 2, URIHOST_ST, 0, NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 716:
#line 2894 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 717:
#line 2895 "cfg.y"
    { (yyval.action)=0; 
									yyerror("bad forward_tls argument"); }
    break;

  case 718:
#line 2897 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 719:
#line 2905 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, STRING_ST, (yyvsp[(3) - (4)].strval), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 720:
#line 2913 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, IP_ST, (void*)(yyvsp[(3) - (4)].ipaddr), NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 721:
#line 2921 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST,
							(void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 722:
#line 2930 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST,
							(void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 723:
#line 2939 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, IP_ST, (void*)(yyvsp[(3) - (6)].ipaddr), NUMBER_ST, 
							(void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
					}
    break;

  case 724:
#line 2948 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, URIHOST_ST, 0, URIPORT_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 725:
#line 2956 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, URIHOST_ST, 0, NUMBER_ST,
							(void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("sctp support not compiled in");
		#endif
	}
    break;

  case 726:
#line 2965 "cfg.y"
    {
		#ifdef USE_SCTP
			(yyval.action)=mk_action(FORWARD_SCTP_T, 2, URIHOST_ST, 0, NUMBER_ST, 0); set_cfg_pos((yyval.action));
		#else
			(yyval.action)=0;
			yyerror("tls support not compiled in");
		#endif
	}
    break;

  case 727:
#line 2973 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 728:
#line 2974 "cfg.y"
    { (yyval.action)=0; 
									yyerror("bad forward_sctp argument"); }
    break;

  case 729:
#line 2976 "cfg.y"
    {(yyval.action)=mk_action(LOG_T, 2, NUMBER_ST,
										(void*)(L_DBG+1), STRING_ST, (yyvsp[(3) - (4)].strval));
									set_cfg_pos((yyval.action)); }
    break;

  case 730:
#line 2979 "cfg.y"
    {(yyval.action)=mk_action(LOG_T, 2, NUMBER_ST, (void*)(yyvsp[(3) - (6)].intval), STRING_ST, (yyvsp[(5) - (6)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 731:
#line 2980 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 732:
#line 2981 "cfg.y"
    { (yyval.action)=0; yyerror("bad log argument"); }
    break;

  case 733:
#line 2982 "cfg.y"
    {
							if (check_flag((yyvsp[(3) - (4)].intval))==-1)
								yyerror("bad flag value");
							(yyval.action)=mk_action(SETFLAG_T, 1, NUMBER_ST,
													(void*)(yyvsp[(3) - (4)].intval));
							set_cfg_pos((yyval.action));
									}
    break;

  case 734:
#line 2989 "cfg.y"
    {
							i_tmp=get_flag_no((yyvsp[(3) - (4)].strval), strlen((yyvsp[(3) - (4)].strval)));
							if (i_tmp<0) yyerror("flag not declared");
							(yyval.action)=mk_action(SETFLAG_T, 1, NUMBER_ST,
										(void*)(long)i_tmp);
							set_cfg_pos((yyval.action));
									}
    break;

  case 735:
#line 2996 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 736:
#line 2997 "cfg.y"
    {
							if (check_flag((yyvsp[(3) - (4)].intval))==-1)
								yyerror("bad flag value");
							(yyval.action)=mk_action(RESETFLAG_T, 1, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval));
							set_cfg_pos((yyval.action));
									}
    break;

  case 737:
#line 3003 "cfg.y"
    {
							i_tmp=get_flag_no((yyvsp[(3) - (4)].strval), strlen((yyvsp[(3) - (4)].strval)));
							if (i_tmp<0) yyerror("flag not declared");
							(yyval.action)=mk_action(RESETFLAG_T, 1, NUMBER_ST,
										(void*)(long)i_tmp);
							set_cfg_pos((yyval.action));
									}
    break;

  case 738:
#line 3010 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 739:
#line 3011 "cfg.y"
    {
							if (check_flag((yyvsp[(3) - (4)].intval))==-1)
								yyerror("bad flag value");
							(yyval.action)=mk_action(ISFLAGSET_T, 1, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval));
							set_cfg_pos((yyval.action));
									}
    break;

  case 740:
#line 3017 "cfg.y"
    {
							i_tmp=get_flag_no((yyvsp[(3) - (4)].strval), strlen((yyvsp[(3) - (4)].strval)));
							if (i_tmp<0) yyerror("flag not declared");
							(yyval.action)=mk_action(ISFLAGSET_T, 1, NUMBER_ST,
										(void*)(long)i_tmp);
							set_cfg_pos((yyval.action));
									}
    break;

  case 741:
#line 3024 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 742:
#line 3025 "cfg.y"
    {
		i_tmp=get_avpflag_no((yyvsp[(5) - (6)].strval));
		if (i_tmp==0) yyerror("avpflag not declared");
		(yyval.action)=mk_action(AVPFLAG_OPER_T, 3, AVP_ST, (yyvsp[(3) - (6)].attr), NUMBER_ST, (void*)(long)i_tmp, NUMBER_ST, (void*)(yyvsp[(1) - (6)].intval));
		set_cfg_pos((yyval.action));
	}
    break;

  case 743:
#line 3031 "cfg.y"
    {
		(yyval.action)=0; yyerror("error parsing flag name");
	}
    break;

  case 744:
#line 3034 "cfg.y"
    {
		(yyval.action)=0; yyerror("error parsing first parameter (avp or string)");
	}
    break;

  case 745:
#line 3037 "cfg.y"
    { (yyval.action)=0; yyerror("bad parameters"); }
    break;

  case 746:
#line 3038 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 747:
#line 3039 "cfg.y"
    {(yyval.action)=mk_action(ERROR_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), STRING_ST, (yyvsp[(5) - (6)].strval));
			set_cfg_pos((yyval.action));
	}
    break;

  case 748:
#line 3042 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 749:
#line 3043 "cfg.y"
    { (yyval.action)=0; yyerror("bad error argument"); }
    break;

  case 750:
#line 3044 "cfg.y"
    {
		if ((yyvsp[(3) - (4)].rv_expr)) {
			(yyval.action) = mk_action(ROUTE_T, 1, RVE_ST, (void*)(yyvsp[(3) - (4)].rv_expr));
			set_cfg_pos((yyval.action));
		} else {
			(yyval.action) = 0;
			YYERROR;
		}
	}
    break;

  case 751:
#line 3053 "cfg.y"
    {
		if ((yyvsp[(3) - (4)].strval)) {
			(yyval.action) = mk_action(ROUTE_T, 1, STRING_ST, (void*)(yyvsp[(3) - (4)].strval));
			set_cfg_pos((yyval.action));
		} else {
			(yyval.action) = 0;
			YYERROR;
		}
	}
    break;

  case 752:
#line 3062 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 753:
#line 3063 "cfg.y"
    { (yyval.action)=0; yyerror("bad route argument"); }
    break;

  case 754:
#line 3064 "cfg.y"
    { (yyval.action)=mk_action(EXEC_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 755:
#line 3065 "cfg.y"
    { (yyval.action)=mk_action(SET_HOST_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 756:
#line 3066 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 757:
#line 3067 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 758:
#line 3068 "cfg.y"
    { (yyval.action)=mk_action(PREFIX_T, 1, STRING_ST,  (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 759:
#line 3069 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 760:
#line 3070 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 761:
#line 3071 "cfg.y"
    { (yyval.action)=mk_action(STRIP_TAIL_T, 1, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 762:
#line 3072 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 763:
#line 3073 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, number expected"); }
    break;

  case 764:
#line 3074 "cfg.y"
    { (yyval.action)=mk_action(STRIP_T, 1, NUMBER_ST, (void*) (yyvsp[(3) - (4)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 765:
#line 3075 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 766:
#line 3076 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, number expected"); }
    break;

  case 767:
#line 3077 "cfg.y"
    { (yyval.action)=mk_action(SET_USERPHONE_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 768:
#line 3078 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 769:
#line 3079 "cfg.y"
    {
			(yyval.action)=mk_action(REMOVE_BRANCH_T, 1, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval));
			set_cfg_pos((yyval.action));
	}
    break;

  case 770:
#line 3083 "cfg.y"
    {
			(yyval.action)=mk_action(REMOVE_BRANCH_T, 0);
			set_cfg_pos((yyval.action));
	}
    break;

  case 771:
#line 3087 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 772:
#line 3088 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, number expected"); }
    break;

  case 773:
#line 3089 "cfg.y"
    { (yyval.action)=mk_action(CLEAR_BRANCHES_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 774:
#line 3090 "cfg.y"
    { (yyval.action)=mk_action(SET_HOSTPORT_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 775:
#line 3091 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 776:
#line 3092 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 777:
#line 3093 "cfg.y"
    { (yyval.action)=mk_action(SET_HOSTPORTTRANS_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 778:
#line 3094 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 779:
#line 3095 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 780:
#line 3096 "cfg.y"
    { (yyval.action)=mk_action(SET_PORT_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 781:
#line 3097 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 782:
#line 3098 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 783:
#line 3099 "cfg.y"
    { (yyval.action)=mk_action(SET_USER_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 784:
#line 3100 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 785:
#line 3101 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 786:
#line 3102 "cfg.y"
    { (yyval.action)=mk_action(SET_USERPASS_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 787:
#line 3103 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 788:
#line 3104 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 789:
#line 3105 "cfg.y"
    { (yyval.action)=mk_action(SET_URI_T, 1, STRING_ST,(yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action)); }
    break;

  case 790:
#line 3106 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 791:
#line 3107 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 792:
#line 3108 "cfg.y"
    { (yyval.action)=mk_action(REVERT_URI_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 793:
#line 3109 "cfg.y"
    { (yyval.action)=mk_action(REVERT_URI_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 794:
#line 3110 "cfg.y"
    { (yyval.action)=mk_action(FORCE_RPORT_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 795:
#line 3111 "cfg.y"
    {(yyval.action)=mk_action(FORCE_RPORT_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 796:
#line 3112 "cfg.y"
    { (yyval.action)=mk_action(ADD_LOCAL_RPORT_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 797:
#line 3113 "cfg.y"
    {(yyval.action)=mk_action(ADD_LOCAL_RPORT_T, 0); set_cfg_pos((yyval.action)); }
    break;

  case 798:
#line 3114 "cfg.y"
    {
		#ifdef USE_TCP
			(yyval.action)=mk_action(FORCE_TCP_ALIAS_T, 1, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval));
			set_cfg_pos((yyval.action));
		#else
			yyerror("tcp support not compiled in");
		#endif
	}
    break;

  case 799:
#line 3122 "cfg.y"
    {
		#ifdef USE_TCP
			(yyval.action)=mk_action(FORCE_TCP_ALIAS_T, 0);
			set_cfg_pos((yyval.action));
		#else
			yyerror("tcp support not compiled in");
		#endif
	}
    break;

  case 800:
#line 3130 "cfg.y"
    {
		#ifdef USE_TCP
			(yyval.action)=mk_action(FORCE_TCP_ALIAS_T, 0);
			set_cfg_pos((yyval.action));
		#else
			yyerror("tcp support not compiled in");
		#endif
	}
    break;

  case 801:
#line 3138 "cfg.y"
    {(yyval.action)=0; yyerror("bad argument, number expected"); }
    break;

  case 802:
#line 3140 "cfg.y"
    { (yyval.action)=mk_action(UDP_MTU_TRY_PROTO_T, 1, NUMBER_ST, (yyvsp[(3) - (4)].intval)); set_cfg_pos((yyval.action)); }
    break;

  case 803:
#line 3142 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, UDP, TCP, TLS or SCTP expected"); }
    break;

  case 804:
#line 3143 "cfg.y"
    {
		(yyval.action)=0;
		if ((str_tmp=pkg_malloc(sizeof(str)))==0) {
			LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
		} else {
			str_tmp->s=(yyvsp[(3) - (4)].strval);
			str_tmp->len=(yyvsp[(3) - (4)].strval)?strlen((yyvsp[(3) - (4)].strval)):0;
			(yyval.action)=mk_action(SET_ADV_ADDR_T, 1, STR_ST, str_tmp);
			set_cfg_pos((yyval.action));
		}
	}
    break;

  case 805:
#line 3154 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 806:
#line 3155 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 807:
#line 3156 "cfg.y"
    {
		(yyval.action)=0;
		tmp=int2str((yyvsp[(3) - (4)].intval), &i_tmp);
		if ((str_tmp=pkg_malloc(sizeof(str)))==0) {
			LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
		} else {
			if ((str_tmp->s=pkg_malloc(i_tmp))==0) {
				LOG(L_CRIT, "ERROR: cfg. parser: out of memory.\n");
			} else {
				memcpy(str_tmp->s, tmp, i_tmp);
				str_tmp->len=i_tmp;
				(yyval.action)=mk_action(SET_ADV_PORT_T, 1, STR_ST, str_tmp);
				set_cfg_pos((yyval.action));
			}
		}
	}
    break;

  case 808:
#line 3172 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, string expected"); }
    break;

  case 809:
#line 3173 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 810:
#line 3174 "cfg.y"
    { 
		(yyval.action)=mk_action(FORCE_SEND_SOCKET_T, 1, SOCKID_ST, (yyvsp[(3) - (4)].sockid));
		set_cfg_pos((yyval.action));
	}
    break;

  case 811:
#line 3178 "cfg.y"
    {
		(yyval.action)=0; yyerror("bad argument, [proto:]host[:port] expected");
	}
    break;

  case 812:
#line 3181 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 813:
#line 3182 "cfg.y"
    {
		(yyval.action)=mk_action(SET_FWD_NO_CONNECT_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 814:
#line 3185 "cfg.y"
    {
		(yyval.action)=mk_action(SET_FWD_NO_CONNECT_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 815:
#line 3188 "cfg.y"
    {
		(yyval.action)=mk_action(SET_RPL_NO_CONNECT_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 816:
#line 3191 "cfg.y"
    {
		(yyval.action)=mk_action(SET_RPL_NO_CONNECT_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 817:
#line 3194 "cfg.y"
    {
		(yyval.action)=mk_action(SET_FWD_CLOSE_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 818:
#line 3197 "cfg.y"
    {
		(yyval.action)=mk_action(SET_FWD_CLOSE_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 819:
#line 3200 "cfg.y"
    {
		(yyval.action)=mk_action(SET_RPL_CLOSE_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 820:
#line 3203 "cfg.y"
    {
		(yyval.action)=mk_action(SET_RPL_CLOSE_T, 0); set_cfg_pos((yyval.action));
	}
    break;

  case 821:
#line 3206 "cfg.y"
    {
		(yyval.action)=mk_action(CFG_SELECT_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), NUMBER_ST, (void*)(yyvsp[(5) - (6)].intval)); set_cfg_pos((yyval.action));
	}
    break;

  case 822:
#line 3209 "cfg.y"
    {
		(yyval.action)=mk_action(CFG_SELECT_T, 2, STRING_ST, (yyvsp[(3) - (6)].strval), RVE_ST, (yyvsp[(5) - (6)].rv_expr)); set_cfg_pos((yyval.action));
	}
    break;

  case 823:
#line 3212 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 824:
#line 3213 "cfg.y"
    { (yyval.action)=0; yyerror("bad arguments, string and number expected"); }
    break;

  case 825:
#line 3214 "cfg.y"
    {
		(yyval.action)=mk_action(CFG_RESET_T, 1, STRING_ST, (yyvsp[(3) - (4)].strval)); set_cfg_pos((yyval.action));
	}
    break;

  case 826:
#line 3217 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 827:
#line 3218 "cfg.y"
    { (yyval.action)=0; yyerror("bad arguments, string expected"); }
    break;

  case 828:
#line 3219 "cfg.y"
    {mod_func_action = mk_action(MODULE0_T, 2, MODEXP_ST, NULL, NUMBER_ST,
			0); }
    break;

  case 829:
#line 3220 "cfg.y"
    {
		mod_func_action->val[0].u.data =
			find_export_record((yyvsp[(1) - (5)].strval), mod_func_action->val[1].u.number, rt,
								&u_tmp);
		if (mod_func_action->val[0].u.data == 0) {
			if (find_export_record((yyvsp[(1) - (5)].strval), mod_func_action->val[1].u.number, 0,
									&u_tmp) ) {
					LOG(L_ERR, "misused command %s\n", (yyvsp[(1) - (5)].strval));
					yyerror("Command cannot be used in the block\n");
			} else {
				LOG(L_ERR, "cfg. parser: failed to find command %s (params %ld)\n",
						(yyvsp[(1) - (5)].strval), mod_func_action->val[1].u.number);
				yyerror("unknown command, missing loadmodule?\n");
			}
			free_mod_func_action(mod_func_action);
			mod_func_action=0;
		}else{
			if (mod_func_action && mod_f_params_pre_fixup(mod_func_action)<0) {
				/* error messages are printed inside the function */
				free_mod_func_action(mod_func_action);
				mod_func_action = 0;
				YYERROR;
			}
		}
		(yyval.action) = mod_func_action;
		set_cfg_pos((yyval.action));
	}
    break;

  case 830:
#line 3247 "cfg.y"
    { yyerror("'('')' expected (function call)");}
    break;

  case 832:
#line 3251 "cfg.y"
    { }
    break;

  case 833:
#line 3252 "cfg.y"
    {}
    break;

  case 834:
#line 3255 "cfg.y"
    {
		if ((yyvsp[(1) - (1)].rv_expr) && mod_func_action->val[1].u.number < MAX_ACTIONS-2) {
			mod_func_action->val[mod_func_action->val[1].u.number+2].type =
				RVE_ST;
			mod_func_action->val[mod_func_action->val[1].u.number+2].u.data =
				(yyvsp[(1) - (1)].rv_expr);
			mod_func_action->val[1].u.number++;
		} else if ((yyvsp[(1) - (1)].rv_expr)) {
			yyerror("Too many arguments\n");
			YYERROR;
		} else {
			YYERROR;
		}
	}
    break;

  case 835:
#line 3272 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, 0, NUMBER_ST,
						(void*)(DROP_R_F|EXIT_R_F)); set_cfg_pos((yyval.action));
	}
    break;

  case 836:
#line 3276 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, RVE_ST, (yyvsp[(2) - (2)].rv_expr), NUMBER_ST,
						(void*)(DROP_R_F|EXIT_R_F)); set_cfg_pos((yyval.action));
	}
    break;

  case 837:
#line 3280 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, 0, NUMBER_ST, 
						(void*)(DROP_R_F|EXIT_R_F)); set_cfg_pos((yyval.action));
	}
    break;

  case 838:
#line 3284 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, (void*)1, NUMBER_ST,
						(void*)EXIT_R_F);
		set_cfg_pos((yyval.action));
	}
    break;

  case 839:
#line 3289 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, RVE_ST, (yyvsp[(2) - (2)].rv_expr), NUMBER_ST, (void*)EXIT_R_F);
		set_cfg_pos((yyval.action));
	}
    break;

  case 840:
#line 3293 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, (void*)1, NUMBER_ST,
						(void*)EXIT_R_F);
		set_cfg_pos((yyval.action));
	}
    break;

  case 841:
#line 3298 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, (void*)1, NUMBER_ST,
						(void*)RETURN_R_F); set_cfg_pos((yyval.action));
	}
    break;

  case 842:
#line 3302 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, (void*)1, NUMBER_ST,
						(void*)RETURN_R_F); set_cfg_pos((yyval.action));
	}
    break;

  case 843:
#line 3306 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, RVE_ST, (yyvsp[(2) - (2)].rv_expr), NUMBER_ST, (void*)RETURN_R_F);
		set_cfg_pos((yyval.action));
	}
    break;

  case 844:
#line 3310 "cfg.y"
    {
		(yyval.action)=mk_action(DROP_T, 2, NUMBER_ST, 0, NUMBER_ST, (void*)BREAK_R_F);
		set_cfg_pos((yyval.action));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 11455 "cfg.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3316 "cfg.y"


static void get_cpos(struct cfg_pos* pos)
{
	pos->s_line=startline;
	pos->e_line=line;
	pos->s_col=startcolumn;
	pos->e_col=column-1;
	if(finame==0)
		finame = (cfg_file!=0)?cfg_file:"default";
	pos->fname=finame;
	pos->rname=(routename!=0)?routename:default_routename;
}


static void warn_at(struct cfg_pos* p, char* format, ...)
{
	va_list ap;
	char s[256];
	
	va_start(ap, format);
	vsnprintf(s, sizeof(s), format, ap);
	va_end(ap);
	if (p->e_line!=p->s_line)
		LOG(L_WARN, "warning in config file %s, from line %d, column %d to"
					" line %d, column %d: %s\n",
					p->fname, p->s_line, p->s_col, p->e_line, p->e_col, s);
	else if (p->s_col!=p->e_col)
		LOG(L_WARN, "warning in config file %s, line %d, column %d-%d: %s\n",
					p->fname, p->s_line, p->s_col, p->e_col, s);
	else
		LOG(L_WARN, "warning in config file %s, line %d, column %d: %s\n",
				p->fname, p->s_line, p->s_col, s);
	cfg_warnings++;
}



static void yyerror_at(struct cfg_pos* p, char* format, ...)
{
	va_list ap;
	char s[256];
	
	va_start(ap, format);
	vsnprintf(s, sizeof(s), format, ap);
	va_end(ap);
	if (p->e_line!=p->s_line)
		LOG(L_CRIT, "parse error in config file %s, from line %d, column %d"
					" to line %d, column %d: %s\n",
					p->fname, p->s_line, p->s_col, p->e_line, p->e_col, s);
	else if (p->s_col!=p->e_col)
		LOG(L_CRIT,"parse error in config file %s, line %d, column %d-%d: %s\n",
					p->fname, p->s_line, p->s_col, p->e_col, s);
	else
		LOG(L_CRIT, "parse error in config file %s, line %d, column %d: %s\n",
					p->fname, p->s_line, p->s_col, s);
	cfg_errors++;
}



static void warn(char* format, ...)
{
	va_list ap;
	char s[256];
	struct cfg_pos pos;
	
	get_cpos(&pos);
	va_start(ap, format);
	vsnprintf(s, sizeof(s), format, ap);
	va_end(ap);
	warn_at(&pos, s);
}



static void yyerror(char* format, ...)
{
	va_list ap;
	char s[256];
	struct cfg_pos pos;
	
	get_cpos(&pos);
	va_start(ap, format);
	vsnprintf(s, sizeof(s), format, ap);
	va_end(ap);
	yyerror_at(&pos, s);
}



/** mk_rval_expr_v wrapper.
 *  checks mk_rval_expr_v return value and sets the cfg. pos
 *  (line and column numbers)
 *  @return rval_expr* on success, 0 on error (@see mk_rval_expr_v)
 */
static struct rval_expr* mk_rve_rval(enum rval_type type, void* v)
{
	struct rval_expr* ret;
	struct cfg_pos pos;

	get_cpos(&pos);
	ret=mk_rval_expr_v(type, v, &pos);
	if (ret==0){
		yyerror("internal error: failed to create rval expr");
		/* YYABORT; */
	}
	return ret;
}


/** mk_rval_expr1 wrapper.
 *  checks mk_rval_expr1 return value (!=0 and type checking)
 *  @return rval_expr* on success, 0 on error (@see mk_rval_expr1)
 */
static struct rval_expr* mk_rve1(enum rval_expr_op op, struct rval_expr* rve1)
{
	struct rval_expr* ret;
	struct rval_expr* bad_rve;
	enum rval_type type, bad_t, exp_t;
	
	if (rve1==0)
		return 0;
	ret=mk_rval_expr1(op, rve1, &rve1->fpos);
	if (ret && (rve_check_type(&type, ret, &bad_rve, &bad_t, &exp_t)!=1)){
		yyerror_at(&rve1->fpos, "bad expression: type mismatch"
					" (%s instead of %s)", rval_type_name(bad_t),
					rval_type_name(exp_t));
		rve_destroy(ret);
		ret=0;
	}
	return ret;
}


/** mk_rval_expr2 wrapper.
 *  checks mk_rval_expr2 return value (!=0 and type checking)
 *  @return rval_expr* on success, 0 on error (@see mk_rval_expr2)
 */
static struct rval_expr* mk_rve2(enum rval_expr_op op, struct rval_expr* rve1,
									struct rval_expr* rve2)
{
	struct rval_expr* ret;
	struct rval_expr* bad_rve;
	enum rval_type type, bad_t, exp_t;
	struct cfg_pos pos;
	
	if ((rve1==0) || (rve2==0))
		return 0;
	bad_rve=0;
	bad_t=0;
	exp_t=0;
	cfg_pos_join(&pos, &rve1->fpos, &rve2->fpos);
	ret=mk_rval_expr2(op, rve1, rve2, &pos);
	if (ret && (rve_check_type(&type, ret, &bad_rve, &bad_t, &exp_t)!=1)){
		if (bad_rve)
			yyerror_at(&pos, "bad expression: type mismatch:"
						" %s instead of %s at (%d,%d)",
						rval_type_name(bad_t), rval_type_name(exp_t),
						bad_rve->fpos.s_line, bad_rve->fpos.s_col);
		else
			yyerror("BUG: unexpected null \"bad\" expression\n");
		rve_destroy(ret);
		ret=0;
	}
	return ret;
}


/** check if the expression is an int.
 * if the expression does not evaluate to an int return -1 and
 * log an error.
 * @return 0 success, no warnings; 1 success but warnings; -1 on error */
static int rval_expr_int_check(struct rval_expr *rve)
{
	struct rval_expr* bad_rve;
	enum rval_type type, bad_t, exp_t;
	
	if (rve==0){
		yyerror("invalid expression");
		return -1;
	}else if (!rve_check_type(&type, rve, &bad_rve, &bad_t ,&exp_t)){
		if (bad_rve)
			yyerror_at(&rve->fpos, "bad expression: type mismatch:"
						" %s instead of %s at (%d,%d)",
						rval_type_name(bad_t), rval_type_name(exp_t),
						bad_rve->fpos.s_line, bad_rve->fpos.s_col);
		else
			yyerror("BUG: unexpected null \"bad\" expression\n");
		return -1;
	}else if (type!=RV_INT && type!=RV_NONE){
		warn_at(&rve->fpos, "non-int expression (you might want to use"
				" casts)\n");
		return 1;
	}
	return 0;
}


/** warn if the expression is constant.
 * @return 0 on success (no warning), 1 when warning */
static int warn_ct_rve(struct rval_expr *rve, char* name)
{
	if (rve && rve_is_constant(rve)){
		warn_at(&rve->fpos, "constant value in %s%s",
				name?name:"expression", name?"(...)":"");
		return 1;
	}
	return 0;
}


static struct name_lst* mk_name_lst(char* host, int flags)
{
	struct name_lst* l;
	if (host==0) return 0;
	l=pkg_malloc(sizeof(struct name_lst));
	if (l==0) {
		LOG(L_CRIT,"ERROR: cfg. parser: out of memory.\n");
	} else {
		l->name=host;
		l->flags=flags;
		l->next=0;
	}
	return l;
}


static struct socket_id* mk_listen_id(char* host, int proto, int port)
{
	struct socket_id* l;
	if (host==0) return 0;
	l=pkg_malloc(sizeof(struct socket_id));
	if (l==0) {
		LOG(L_CRIT,"ERROR: cfg. parser: out of memory.\n");
	} else {
		l->addr_lst=mk_name_lst(host, 0);
		if (l->addr_lst==0){
			pkg_free(l);
			return 0;
		}
		l->flags=0;
		l->port=port;
		l->proto=proto;
		l->next=0;
	}
	return l;
}


static void free_name_lst(struct name_lst* lst)
{
	struct name_lst* tmp;
	
	while(lst){
		tmp=lst;
		lst=lst->next;
		pkg_free(tmp);
	}
}


static struct socket_id* mk_listen_id2(struct name_lst* addr_l, int proto,
										int port)
{
	struct socket_id* l;
	if (addr_l==0) return 0;
	l=pkg_malloc(sizeof(struct socket_id));
	if (l==0) {
		LOG(L_CRIT,"ERROR: cfg. parser: out of memory.\n");
	} else {
		l->flags=addr_l->flags;
		l->port=port;
		l->proto=proto;
		l->addr_lst=addr_l;
		l->next=0;
	}
	return l;
}


static void free_socket_id(struct socket_id* i)
{
	free_name_lst(i->addr_lst);
	pkg_free(i);
}


static void free_socket_id_lst(struct socket_id* lst)
{
	struct socket_id* tmp;
	
	while(lst){
		tmp=lst;
		lst=lst->next;
		free_socket_id(tmp);
	}
}


/** create a temporary case statmenet structure.
 *  *err will be filled in case of error (return == 0):
 *   -1 - non constant expression
 *   -2 - expression error (bad type)
 *   -10 - memory allocation error
 */
static struct case_stms* mk_case_stm(struct rval_expr* ct, int is_re,
											struct action* a, int* err)
{
	struct case_stms* s;
	struct rval_expr* bad_rve;
	enum rval_type type, bad_t, exp_t;
	enum match_str_type t;
	
	t=MATCH_UNKNOWN;
	if (ct){
		/* if ct!=0 => case, else if ct==0 is a default */
		if (!rve_is_constant(ct)){
			yyerror_at(&ct->fpos, "non constant expression in case");
			*err=-1;
			return 0;
		}
		if (rve_check_type(&type, ct, &bad_rve, &bad_t, &exp_t)!=1){
			yyerror_at(&ct->fpos, "bad expression: type mismatch:"
							" %s instead of %s at (%d,%d)",
							rval_type_name(bad_t), rval_type_name(exp_t),
							bad_rve->fpos.s_line, bad_rve->fpos.s_col);
			*err=-2;
			return 0;
		}
		if (is_re)
			t=MATCH_RE;
		else if (type==RV_STR)
			t=MATCH_STR;
		else
			t=MATCH_INT;
	}

	s=pkg_malloc(sizeof(*s));
	if (s==0) {
		yyerror("internal error: memory allocation failure");
		*err=-10;
	} else {
		memset(s, 0, sizeof(*s));
		s->ct_rve=ct;
		s->type=t;
		s->actions=a;
		s->next=0;
		s->append=0;
	}
	return s;
}


/*
 * @return 0 on success, -1 on error.
 */
static int case_check_type(struct case_stms* stms)
{
	struct case_stms* c;
	struct case_stms* s;
	
	for(c=stms; c ; c=c->next){
		if (!c->ct_rve) continue;
		for (s=c->next; s; s=s->next){
			if (!s->ct_rve) continue;
			if ((s->type!=c->type) &&
				!(	(c->type==MATCH_STR || c->type==MATCH_RE) &&
					(s->type==MATCH_STR || s->type==MATCH_RE) ) ){
					yyerror_at(&s->ct_rve->fpos, "type mismatch in case");
					return -1;
			}
		}
	}
	return 0;
}


/*
 * @return 0 on success, -1 on error.
 */
static int case_check_default(struct case_stms* stms)
{
	struct case_stms* c;
	int default_no;
	
	default_no=0;
	for(c=stms; c ; c=c->next)
		if (c->ct_rve==0) default_no++;
	return (default_no<=1)?0:-1;
}



/** fixes the parameters and the type of a module function call.
 * It is done here instead of fix action, to have quicker feedback
 * on error cases (e.g. passing a non constant to a function with a 
 * declared fixup) 
 * The rest of the fixup is done inside do_action().
 * @param a - filled module function call (MODULE*_T) action structure
 *            complete with parameters, starting at val[2] and parameter
 *            number at val[1].
 * @return 0 on success, -1 on error (it will also print the error msg.).
 *
 */
static int mod_f_params_pre_fixup(struct action* a)
{
	sr31_cmd_export_t* cmd_exp;
	action_u_t* params;
	int param_no;
	struct rval_expr* rve;
	struct rvalue* rv;
	int r;
	str s;
	
	cmd_exp = a->val[0].u.data;
	param_no = a->val[1].u.number;
	params = &a->val[2];
	
	switch(cmd_exp->param_no) {
		case 0:
			a->type = MODULE0_T;
			break;
		case 1:
			a->type = MODULE1_T;
			break;
		case 2:
			a->type = MODULE2_T;
			break;
		case 3:
			a->type = MODULE3_T;
			break;
		case 4:
			a->type = MODULE4_T;
			break;
		case 5:
			a->type = MODULE5_T;
			break;
		case 6:
			a->type = MODULE6_T;
			break;
		case VAR_PARAM_NO:
			a->type = MODULEX_T;
			break;
		default:
			yyerror("function %s: bad definition"
					" (invalid number of parameters)", cmd_exp->name);
			return -1;
	}
	
	if ( cmd_exp->fixup) {
		if (is_fparam_rve_fixup(cmd_exp->fixup))
			/* mark known fparam rve safe fixups */
			cmd_exp->fixup_flags  |= FIXUP_F_FPARAM_RVE;
		else if (!(cmd_exp->fixup_flags & FIXUP_F_FPARAM_RVE) &&
				 cmd_exp->free_fixup == 0) {
			/* v0 or v1 functions that have fixups and no coresp. fixup_free
			   functions, need constant, string params.*/
			for (r=0; r < param_no; r++) {
				rve=params[r].u.data;
				if (!rve_is_constant(rve)) {
					yyerror_at(&rve->fpos, "function %s: parameter %d is not"
								" constant\n", cmd_exp->name, r+1);
					return -1;
				}
				if ((rv = rval_expr_eval(0, 0, rve)) == 0 ||
						rval_get_str(0, 0, &s, rv, 0) < 0 ) {
					/* out of mem or bug ? */
					rval_destroy(rv);
					yyerror_at(&rve->fpos, "function %s: bad parameter %d"
									" expression\n", cmd_exp->name, r+1);
					return -1;
				}
				rval_destroy(rv);
				rve_destroy(rve);
				params[r].type = STRING_ST; /* asciiz */
				params[r].u.string = s.s;
				params[r].u.str.len = s.len; /* not used right now */
			}
		}
	}/* else
		if no fixups are present, the RVEs can be transformed
		into strings at runtime, allowing seamless var. use
		even with old functions.
		Further optimizations -> in fix_actions()
		*/
	return 0;
}



/** frees a filled module function call action structure.
 * @param a - filled module function call action structure
 *            complete with parameters, starting at val[2] and parameter
 *            number at val[1].
 */
static void free_mod_func_action(struct action* a)
{
	action_u_t* params;
	int param_no;
	int r;
	
	param_no = a->val[1].u.number;
	params = &a->val[2];
	
	for (r=0; r < param_no; r++)
		if (params[r].u.data)
			rve_destroy(params[r].u.data);
	pkg_free(a);
}



/*
int main(int argc, char ** argv)
{
	if (yyparse()!=0)
		fprintf(stderr, "parsing error\n");
}
*/

