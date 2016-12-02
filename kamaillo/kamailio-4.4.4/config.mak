# this file is autogenerated by make cfg
MAIN_NAME= kamailio
CFG_NAME= kamailio
SCR_NAME= sip-router
FLAVOUR= kamailio
INSTALL_FLAVOUR= kamailio
SRC_NAME= sip-router
RELEASE= 4.4.4
OS= darwin
ARCH= x86_64
C_DEFS=   -DNAME='"kamailio"' -DVERSION='"4.4.4"' -DARCH='"x86_64"' -DOS='darwin_' -DOS_QUOTED='"darwin"' -DCOMPILER='"gcc 8.0"' -D__CPU_x86_64 -D__OS_darwin -DSER_VER=4004004 -DCFG_DIR='"/usr/local/etc/kamailio/"' -DRUN_DIR='"/var/run/kamailio/"' -DPKG_MALLOC -DSHM_MEM  -DSHM_MMAP -DDNS_IP_HACK -DUSE_MCAST -DUSE_TCP -DDISABLE_NAGLE -DHAVE_RESOLV_RES -DUSE_DNS_CACHE -DUSE_DNS_FAILOVER -DUSE_DST_BLACKLIST -DUSE_NAPTR -DWITH_XAVP  -DMEM_JOIN_FREE -DF_MALLOC -DQ_MALLOC -DTLSF_MALLOC -DDBG_SR_MEMORY -DUSE_TLS -DTLS_HOOKS -DUSE_CORE_STATS -DSTATISTICS -DMALLOC_STATS -DWITH_AS_SUPPORT -DUSE_SCTP -DFAST_LOCK -DADAPTIVE_WAIT -DADAPTIVE_WAIT_LOOPS=1024 -DCC_GCC_LIKE_ASM -DHAVE_SOCKADDR_SA_LEN -DHAVE_GETHOSTBYNAME2 -DHAVE_UNION_SEMUN -DHAVE_SCHED_YIELD -DHAVE_MSGHDR_MSG_CONTROL -DUSE_ANON_MMAP -DNDEBUG -DHAVE_CONNECT_ECONNRESET_BUG -DHAVE_TIMEGM -DUSE_SIGWAIT -DHAVE_KQUEUE -DHAVE_SELECT
DEFS_RM= 
PROFILE= 
CC= gcc
LD= gcc
MKDEP= gcc -MM
MKTAGS= ctags
LDFLAGS= 
C_INCLUDES= 
CC_MKDEP_OPTS= 
MOD_LDFLAGS= -bundle -flat_namespace -undefined suppress
LIB_LDFLAGS= -dynamiclib -flat_namespace -undefined suppress
UTILS_LDFLAGS= 
LIB_SONAME= 
LD_RPATH= 
LIB_SUFFIX= .dylib
LIB_PREFIX= lib
LIBS= -lresolv  
LEX= flex
YACC= yacc
YACC_FLAGS= -d -b cfg
PREFIX= /usr/local
LOCALBASE= /usr/local
TAR= tar
INSTALL= install
INSTALL_CFG= install -m 644
INSTALL_BIN= install -m 755
INSTALL_MODULES= install -m 755
INSTALL_DOC= install -m 644
INSTALL_MAN= install -m 644
INSTALL_LIB= install -m 755
INSTALL_TOUCH= touch          
INSTALL_SHARE= install -m 644
Q= 1
CC_EXTRA_OPTS= 
CPUTYPE= opteron
CFLAGS_RM= 
CFLAGS=  -g -m64 $(CC_OPT) $(CC_EXTRA_OPTS)
MOD_CFLAGS= -fPIC -DPIC $(CFLAGS)
LIB_CFLAGS= -fPIC -DPIC $(CFLAGS)
UTILS_CFLAGS= $(CFLAGS)
BASEDIR= $(DESTDIR)
basedir= $(BASEDIR)
DESTDIR= 
LIBDIR= lib64
RUNBASEDIR= $(DESTDIR)
runbasedir= $(RUNBASEDIR)
PREFIX= $(LOCALBASE)
prefix= /usr/local
cfg_prefix= $(basedir)$(prefix)
cfg_dir= etc/$(MAIN_NAME)/
bin_prefix= $(basedir)$(prefix)
bin_dir= sbin/
modules_prefix= $(basedir)$(prefix)
modules_dir= $(LIBDIR)/$(MAIN_NAME)/
doc_prefix= $(basedir)$(prefix)
doc_dir= share/doc/$(MAIN_NAME)/
man_prefix= $(basedir)$(prefix)
man_dir= man/
ut_prefix= $(basedir)$(prefix)
ut_dir= 
share_prefix= $(basedir)$(prefix)
share_dir= share/$(MAIN_NAME)/
lib_prefix= $(basedir)$(prefix)
lib_dir= $(LIBDIR)/$(MAIN_NAME)/
data_prefix= $(basedir)$(prefix)
data_dir= share/$(MAIN_NAME)/
cfg_target= $(prefix)/$(cfg_dir)
lib_target= $(prefix)/$(lib_dir)
data_target= $(prefix)/$(data_dir)
run_prefix= $(runbasedir)
run_dir= var/run/$(MAIN_NAME)/
run_target= $(run_prefix)/$(run_dir)
override makefile_defs:=1
C_DEFS:=$(filter-out $(DEFS_RM) $(extra_defs),$(C_DEFS)) $(extra_defs)
CFLAGS:=$(filter-out $(CFLAGS_RM) $(CC_EXTRA_OPTS), $(CFLAGS)) $(CC_EXTRA_OPTS)