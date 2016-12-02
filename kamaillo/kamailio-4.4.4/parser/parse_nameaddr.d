parser/parse_nameaddr.o: $(wildcard  parser/parse_nameaddr.c parser/../dprint.h \
  parser/../compiler_opt.h parser/../cfg_core.h parser/../cfg/cfg.h \
  parser/../cfg/../str.h parser/parse_nameaddr.h parser/parser_f.h \
  parser/../comp_defs.h parser/../ut.h parser/../config.h \
  parser/../types.h parser/../mem/mem.h parser/../mem/pkg.h \
  parser/../mem/memapi.h parser/../mem/src_loc.h parser/../mem/meminfo.h \
  parser/../mem/memdbg.h parser/../mem/shm_mem.h parser/../mem/shm.h \
  parser/../mem/../lock_ops.h parser/../fastlock.h \
  parser/../sched_yield.h)
